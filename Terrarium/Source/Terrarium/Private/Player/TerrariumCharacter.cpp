// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TerrariumCharacter.h"
#include "Terrarium/Terrarium.h"
#include "Camera/CameraComponent.h"
#include "Detection/NoiseEmitterComponent.h"
#include "Detection/StealthComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interaction/Interactable.h"

ATerrariumCharacter::ATerrariumCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Setup camera hierarchy: Root -> CameraRoot (for height interp) -> FPCamera
	CameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	CameraRoot->SetupAttachment(RootComponent);
	
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FPCamera->SetupAttachment(CameraRoot);
	FPCamera->FieldOfView = 85.f;
	
	// Initialize stealth and noise components
	StealthComp = CreateDefaultSubobject<UStealthComponent>(TEXT("Stealth Component"));
	NoiseEmitter = CreateDefaultSubobject<UNoiseEmitterComponent>(TEXT("Noise Emitter"));
}

void ATerrariumCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// Set initial movement speed
	if (GetCharacterMovement())
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
		GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
		GetCharacterMovement()->bCrouchMaintainsBaseLocation = true;
	}
	
	// Initialize camera manager and start default idle shake
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		CameraManager = PC->PlayerCameraManager;
		if (CameraManager && IdleShake)
		{
			CameraManager->StartCameraShake(IdleShake);
		}
	}
}

void ATerrariumCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	// Update sprint duration and cooldown timers
	if (bIsSprinting)
	{
		SprintTimeRemaining = GetWorldTimerManager().GetTimerRemaining(SprintTimerHandle);
	}
	else if (SprintTimeRemaining < SprintDuration && !bSprintIsOnCooldown)
	{
		// Recharge sprint duration when not sprinting
		SprintTimeRemaining = FMath::Clamp(SprintTimeRemaining + DeltaSeconds, 0.f, SprintDuration);
	}
	
	if (bSprintIsOnCooldown)
	{
		SprintCoolDown = GetWorldTimerManager().GetTimerRemaining(SprintCooldownTimerHandle);
	}
	
	// Smoothly interpolate camera height (crouching effect)
	CameraCurrentZ = FMath::FInterpTo(CameraCurrentZ, CameraTargetZ, DeltaSeconds, CrouchInterpSpeed);
	CameraRoot->SetRelativeLocation(FVector(0.f, 0.f, CameraCurrentZ));
	
	UpdateCameraShake();
}

void ATerrariumCharacter::HandleInteract()
{
	float InteractRange = 150.f;
	FVector Start = FPCamera->GetComponentLocation();
	FVector End = Start + (FPCamera->GetForwardVector() * InteractRange);
	FHitResult Hit;
	
	// Trace for interactable objects in front of the player
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility))
	{
		AActor* HitActor = Hit.GetActor();
		if (HitActor && HitActor->Implements<UInteractable>())
		{
			IInteractable* Interactable = Cast<IInteractable>(HitActor);
			if (Interactable && Interactable->CanInteract())
			{
				UE_LOG(LogTerrarium, Log, TEXT("%s interacting with %s"), *GetName(), *HitActor->GetName());
				
				Interactable->Interact(this);
				
				// Apply noise penalty during interaction
				StealthComp->SetMovementState(EMovementState::Interacting);
				NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
				
				GetWorldTimerManager().SetTimer(InteractNoiseTimerHandle, this, &ATerrariumCharacter::OnInteractNoiseTimerExpired, InteractTime, false);
			}
		}
	}
}

void ATerrariumCharacter::StartSprint()
{
	if (bIsSprinting || bSprintIsOnCooldown)
	{
		return;
	}
	
	if (SprintTimeRemaining > 0.f)
	{
		UE_LOG(LogTerrarium, Log, TEXT("%s started sprinting"), *GetName());
		
		GetWorldTimerManager().SetTimer(SprintTimerHandle, this, &ATerrariumCharacter::OnSprintTimerExpired, SprintTimeRemaining, false);
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		
		StealthComp->SetMovementState(EMovementState::Sprinting);
		NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
		
		bIsSprinting = true;
	}
}

void ATerrariumCharacter::StopSprint()
{
	if (!bIsSprinting)
	{
		return;
	}

	UE_LOG(LogTerrarium, Log, TEXT("%s stopped sprinting"), *GetName());

	if (GetWorldTimerManager().IsTimerActive(SprintTimerHandle))
	{
		GetWorldTimerManager().ClearTimer(SprintTimerHandle);
	}
	
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	
	// Revert to appropriate movement state
	EMovementState NewState = bIsCrouched ? EMovementState::Crouching : EMovementState::Walking;
	StealthComp->SetMovementState(NewState);
	NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
	
	bIsSprinting = false;
}

void ATerrariumCharacter::OnSprintTimerExpired()
{
	UE_LOG(LogTerrarium, Log, TEXT("%s sprint duration expired"), *GetName());
	
	StopSprint();
	
	// Start cooldown
	bSprintIsOnCooldown = true;
	GetWorldTimerManager().SetTimer(SprintCooldownTimerHandle, this, &ATerrariumCharacter::OnSprintCooldownTimerExpired, 2.0f, false);
}

void ATerrariumCharacter::OnSprintCooldownTimerExpired()
{
	UE_LOG(LogTerrarium, Log, TEXT("%s sprint cooldown expired"), *GetName());
	bSprintIsOnCooldown = false;
}

void ATerrariumCharacter::ToggleCrouch()
{
	if (bIsCrouched)
	{
		UnCrouch();
		CameraTargetZ = StandCameraZ;
		
		StealthComp->SetMovementState(EMovementState::Walking);
		NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
		
		UE_LOG(LogTerrarium, Log, TEXT("%s un-crouched"), *GetName());
	}
	else
	{
		Crouch();
		CameraTargetZ = CrouchCameraZ;
		
		StealthComp->SetMovementState(EMovementState::Crouching);
		NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
		
		UE_LOG(LogTerrarium, Log, TEXT("%s crouched"), *GetName());
	}
}

void ATerrariumCharacter::UpdateCameraShake()
{
	if (!CameraManager)
	{
		return;
	}
	
	// Determine target shake state based on current movement
	EMovementShakeState TargetState;
	if (bIsSprinting)
	{
		TargetState = EMovementShakeState::Run;
	}
	else if (GetCharacterMovement()->Velocity.SizeSquared() > 100.0f) // Threshold for walking
	{
		TargetState = EMovementShakeState::Walk;
	}
	else
	{
		TargetState = EMovementShakeState::Idle;
	}
	
	// Only update if state changed
	if (TargetState == CurrentShakeState)
	{
		return;
	}

	CurrentShakeState = TargetState;
	
	// Stop existing shakes
	CameraManager->StopAllInstancesOfCameraShake(IdleShake);
	CameraManager->StopAllInstancesOfCameraShake(WalkShake);
	CameraManager->StopAllInstancesOfCameraShake(RunShake);
	
	// Start new shake
	TSubclassOf<UCameraShakeBase> SelectedShake = nullptr;
	switch (CurrentShakeState)
	{
		case EMovementShakeState::Idle: SelectedShake = IdleShake; break;
		case EMovementShakeState::Walk: SelectedShake = WalkShake; break;
		case EMovementShakeState::Run:  SelectedShake = RunShake;  break;
	}
	
	if (SelectedShake)
	{
		CameraManager->StartCameraShake(SelectedShake);
	}
}

void ATerrariumCharacter::OnInteractNoiseTimerExpired()
{
	// Return to base movement state after interaction noise penalty
	EMovementState BaseState = bIsCrouched ? EMovementState::Crouching : EMovementState::Walking;
	StealthComp->SetMovementState(BaseState);
	NoiseEmitter->EmitNoise(StealthComp->GetCurrentNoiseRadius());
}
