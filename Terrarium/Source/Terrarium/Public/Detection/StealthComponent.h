// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StealthComponent.generated.h"

/**
 * Defines the current movement state of the actor, which affects their visibility and noise production.
 */
UENUM(BlueprintType)
enum class EMovementState : uint8
{
	Crouching    UMETA(DisplayName = "Crouching"),
	Walking      UMETA(DisplayName = "Walking"),
	Sprinting    UMETA(DisplayName = "Sprinting"),
	Interacting  UMETA(DisplayName = "Interacting"),
	Hidden       UMETA(DisplayName = "Hidden")
};

/**
 * Component that manages the actor's stealth state and calculates noise emission radiuses based on movement.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TERRARIUM_API UStealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** Default constructor */
	UStealthComponent();

	/**
	 * Gets the current noise radius based on the active movement state.
	 * @return The radius in centimeters.
	 */
	float GetCurrentNoiseRadius() const; 

	/**
	 * Sets a new movement state and updates internal logic.
	 * @param State The new movement state to apply.
	 */
	void SetMovementState(EMovementState State);

protected:
	virtual void BeginPlay() override;
	
private:
	/** The current movement state of the actor */
	EMovementState CurrentState;
	
	/** Noise radius when walking */
	UPROPERTY(EditDefaultsOnly, Category = "Stealth|Noise")
	float WalkingNoiseRadius = 200.0f;
	
	/** Noise radius when sprinting */
	UPROPERTY(EditDefaultsOnly, Category = "Stealth|Noise")
	float SprintingNoiseRadius = 500.0f;
	
	/** Noise radius when interacting with objects */
	UPROPERTY(EditDefaultsOnly, Category = "Stealth|Noise")
	float InteractingNoiseRadius = 700.0f;
	
	/** Noise radius when hidden or stationary */
	UPROPERTY(EditDefaultsOnly, Category = "Stealth|Noise")
	float HiddenNoiseRadius = 0.0f;
};
