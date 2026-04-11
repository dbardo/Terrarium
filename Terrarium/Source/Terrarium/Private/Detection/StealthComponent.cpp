// Fill out your copyright notice in the Description page of Project Settings.


#include "Detection/StealthComponent.h"
#include "Terrarium/Terrarium.h"

UStealthComponent::UStealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	CurrentState = EMovementState::Walking;
}

void UStealthComponent::BeginPlay()
{
	Super::BeginPlay();
}

float UStealthComponent::GetCurrentNoiseRadius() const
{
	switch (CurrentState)
	{
		case EMovementState::Crouching:
			UE_LOG(LogTerrarium, Log, TEXT("%s crouched"), *GetOwner()->GetName());
			return HiddenNoiseRadius;
		case EMovementState::Walking:
			UE_LOG(LogTerrarium, Log, TEXT("%s walking"), *GetOwner()->GetName());
			return WalkingNoiseRadius;
		case EMovementState::Sprinting:
			UE_LOG(LogTerrarium, Log, TEXT("%s sprinting"), *GetOwner()->GetName());
			return SprintingNoiseRadius;
		case EMovementState::Interacting:
			UE_LOG(LogTerrarium, Log, TEXT("%s interacting"), *GetOwner()->GetName());
			return InteractingNoiseRadius;
		case EMovementState::Hidden:
			UE_LOG(LogTerrarium, Log, TEXT("%s hidden"), *GetOwner()->GetName());
			return HiddenNoiseRadius;
		default:
			UE_LOG(LogTerrarium, Warning, TEXT("Invalid movement state: %d"), (uint8)CurrentState);
			return WalkingNoiseRadius;
	}
}

void UStealthComponent::SetMovementState(EMovementState State)
{
	if (CurrentState != State)
	{
		CurrentState = State;
		UE_LOG(LogTerrarium, Log, TEXT("%s state changed to %d"), *GetOwner()->GetName(), (uint8)State);
	}
}
