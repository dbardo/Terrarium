// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TerrariumCharacter.generated.h"

UENUM(BlueprintType)
enum class EMovementShakeState : uint8
{
	Idle,
	Walk,
	Run
};

UCLASS()
class TERRARIUM_API ATerrariumCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATerrariumCharacter();
	virtual void Tick(float DeltaSeconds) override;
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void HandleInteract();
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void StartSprint();
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void StopSprint();
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void ToggleCrouch();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 300.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RunSpeed = 600.f;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USceneComponent* CameraRoot; // Parent this between capsule and camera
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UCameraComponent> FPCamera;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UStealthComponent> StealthComp;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<class UNoiseEmitterComponent> NoiseEmitter;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> IdleShake;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> WalkShake;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> RunShake;
	
	bool bIsSprinting =  false;
	bool bSprintIsOnCooldown = false;
	
	float SprintTimeRemaining = 3.0f; // This doesn't do anything yet, but maybe expose for the HUD?
	float SprintCoolDown = 2.0f;
	const float SprintDuration = 3.0f;

private:
	FTimerHandle SprintTimerHandle;
	FTimerHandle SprintCooldownTimerHandle;
	
	void OnSprintTimerExpired();
	void OnSprintCooldownTimerExpired();
	
	UPROPERTY()
	TObjectPtr<APlayerCameraManager> CameraManager;
	EMovementShakeState CurrentShakeState = EMovementShakeState::Idle;
	void UpdateCameraShake();
	
	float CameraTargetZ = 0.f;
	float CameraCurrentZ = 0.f;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float CrouchCameraZ = -10.f; // Relative offset when crouched

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float StandCameraZ = 0.f;   // Relative offset when standing

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float CrouchInterpSpeed = 10.f;
};
