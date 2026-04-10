// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TerrariumCharacter.h"

#include "Camera/CameraComponent.h"
#include "Detection/NoiseEmitterComponent.h"
#include "Detection/StealthComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interaction/Interactable.h"


// Sets default values
ATerrariumCharacter::ATerrariumCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	CameraRoot->SetupAttachment(RootComponent);
	
	FPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FPCamera->SetupAttachment(CameraRoot);
	
	StealthComp = CreateDefaultSubobject<UStealthComponent>(TEXT("Stealth Component"));
	
	NoiseEmitter = CreateDefaultSubobject<UNoiseEmitterComponent>(TEXT("Noise Emitter"));
	
}

void ATerrariumCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		CameraManager = PC->PlayerCameraManager;
		if (IdleShake) CameraManager->StartCameraShake(IdleShake);
	}
	
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	GetCharacterMovement()->bCrouchMaintainsBaseLocation = true;
}

void ATerrariumCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (bIsSprinting)
	{
		SprintTimeRemaining = GetWorldTimerManager().GetTimerRemaining(SprintTimerHandle);
	}
	
	if (bSprintIsOnCooldown)
	{
		SprintCoolDown = GetWorldTimerManager().GetTimerRemaining(SprintCooldownTimerHandle);
	}
	
	if (!bIsSprinting && SprintTimeRemaining > 0.f)
	{
		// Recharge sprint duration if not at cooldown
		SprintTimeRemaining = FMath::Clamp(SprintTimeRemaining + DeltaSeconds, 0.f, SprintDuration);
	}
	
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
	
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility);
	
	if (!Hit.GetActor()) return;
	
	if (Hit.GetActor()->Implements<UInteractable>())
	{
		IInteractable* Interactable = Cast<IInteractable>(Hit.GetActor());
		if (Interactable && Interactable->CanInteract())
		{
			Interactable->Interact(this);
		}
	}
}

void ATerrariumCharacter::StartSprint()
{
	if (bIsSprinting || bSprintIsOnCooldown) return;
	
	if (SprintTimeRemaining > 0.f)
	{
		GetWorldTimerManager().SetTimer(SprintTimerHandle, this, &ATerrariumCharacter::OnSprintTimerExpired, SprintDuration, false);
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		bIsSprinting = true;
	};
}

void ATerrariumCharacter::StopSprint()
{
	if (GetWorldTimerManager().IsTimerActive(SprintTimerHandle))
	{
		GetWorldTimerManager().ClearTimer(SprintTimerHandle);
	}
	
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	bIsSprinting = false;
}

void ATerrariumCharacter::OnSprintTimerExpired()
{
	StopSprint();
	GetWorldTimerManager().SetTimer(SprintCooldownTimerHandle, this, &ATerrariumCharacter::OnSprintCooldownTimerExpired, SprintCoolDown, false);
	bSprintIsOnCooldown = true;
}

void ATerrariumCharacter::OnSprintCooldownTimerExpired()
{
	SprintCoolDown = 2.0;
	bSprintIsOnCooldown = false;
}


void ATerrariumCharacter::ToggleCrouch()
{
	
	if (bIsCrouched)
	{
		UnCrouch();
		CameraTargetZ = StandCameraZ;
		
	}
	else
	{
		Crouch();
		CameraTargetZ = CrouchCameraZ;
	}
}

void ATerrariumCharacter::UpdateCameraShake()
{
	if (!CameraManager) return;
	
	EMovementShakeState TargetState;
	
	if (bIsSprinting)
		TargetState = EMovementShakeState::Run;
	else if (GetCharacterMovement()->Velocity.SizeSquared() > 1.0f)
		TargetState = EMovementShakeState::Walk;
	else
		TargetState = EMovementShakeState::Idle;
	
	if (TargetState == CurrentShakeState) return; // No change, bail early

	CurrentShakeState = TargetState;
	CameraManager->StopAllInstancesOfCameraShake(IdleShake);
	CameraManager->StopAllInstancesOfCameraShake(WalkShake);
	CameraManager->StopAllInstancesOfCameraShake(RunShake);
	
	switch (CurrentShakeState)
	{
	case EMovementShakeState::Idle:
		if (IdleShake) CameraManager->StartCameraShake(IdleShake);
		break;
	case EMovementShakeState::Walk:
		if (WalkShake) CameraManager->StartCameraShake(WalkShake);
		break;
	case EMovementShakeState::Run:
		if (RunShake) CameraManager->StartCameraShake(RunShake);
		break;
	}
	
}
