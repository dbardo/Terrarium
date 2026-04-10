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
			return HiddenNoiseRadius;
		case EMovementState::Walking:
			return WalkingNoiseRadius;
		case EMovementState::Sprinting:
			return SprintingNoiseRadius;
		case EMovementState::Interacting:
			return InteractingNoiseRadius;
		case EMovementState::Hidden:
			return HiddenNoiseRadius;
		default:
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
