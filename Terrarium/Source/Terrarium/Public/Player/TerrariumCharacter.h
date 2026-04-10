// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TerrariumCharacter.generated.h"

UCLASS()
class TERRARIUM_API ATerrariumCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATerrariumCharacter();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCameraComponent> FPCamera;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UStealthComponent> StealthComp;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UNoiseEmitterComponent> NoiseEmitter;
	
	bool bIsCrouching =  false;
	bool bIsSprinting =  false;
	float SprintTimeRemaining = 3.0f;
	float SprintCoolDown = 2.0f;
	const float SprintDuration = 3.0f;
	void HandleInteract(); // Raycast 150 UU forward, call IItneractable::Interact()
	void StartSprint();
	void StopSprint();
	void ToggleCrouch();
};
