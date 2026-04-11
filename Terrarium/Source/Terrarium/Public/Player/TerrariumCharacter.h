// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TerrariumCharacter.generated.h"

class UNoiseEmitterComponent;
/**
 * Represents the current movement state for camera shake selection.
 */
UENUM(BlueprintType)
enum class EMovementShakeState : uint8
{
	Idle,
	Walk,
	Run
};

/**
 * Main player character class for Terrarium.
 * Handles movement, stealth, interaction, and camera effects.
 */
UCLASS()
class TERRARIUM_API ATerrariumCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	/** Sets default values for this character's properties */
	ATerrariumCharacter();

	/** Called every frame */
	virtual void Tick(float DeltaSeconds) override;
	
	/** Initiates interaction with objects in front of the player */
	UFUNCTION(BlueprintCallable, Category = "Terrarium|Input")
	void HandleInteract();
	
	/** Starts the sprinting movement */
	UFUNCTION(BlueprintCallable, Category = "Terrarium|Input")
	void StartSprint();
	
	/** Stops the sprinting movement and returns to walking */
	UFUNCTION(BlueprintCallable, Category = "Terrarium|Input")
	void StopSprint();
	
	/** Toggles between crouched and standing states */
	UFUNCTION(BlueprintCallable, Category = "Terrarium|Input")
	void ToggleCrouch();

	/** Base walking speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Terrarium|Movement")
	float WalkSpeed = 300.f;
	
	/** Speed when sprinting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Terrarium|Movement")
	float RunSpeed = 600.f;
	
	UNoiseEmitterComponent* GetNoiseEmitter() const { return NoiseEmitter; }
	
protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;
	
	/** Root component for the camera, used for height interpolation during crouching */
	UPROPERTY(VisibleAnywhere, Category = "Terrarium|Camera")
	USceneComponent* CameraRoot;
	
	/** First person camera component */
	UPROPERTY(VisibleAnywhere, Category = "Terrarium|Camera")
	TObjectPtr<class UCameraComponent> FPCamera;

	/** Component managing stealth and noise levels */
	UPROPERTY(VisibleAnywhere, Category = "Terrarium|Stealth")
	TObjectPtr<class UStealthComponent> StealthComp;
	
	/** Component for emitting noise events to AI */
	UPROPERTY(VisibleAnywhere, Category = "Terrarium|Stealth")
	TObjectPtr<class UNoiseEmitterComponent> NoiseEmitter;
	
	/** Camera shake to play when idle */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Shakes")
	TSubclassOf<UCameraShakeBase> IdleShake;
	
	/** Camera shake to play when walking */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Shakes")
	TSubclassOf<UCameraShakeBase> WalkShake;
	
	/** Camera shake to play when sprinting */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Shakes")
	TSubclassOf<UCameraShakeBase> RunShake;
	
	/** Whether the character is currently sprinting */
	UPROPERTY(BlueprintReadOnly, Category = "Terrarium|Movement")
	bool bIsSprinting = false;

	/** Whether sprinting is currently on cooldown */
	UPROPERTY(BlueprintReadOnly, Category = "Terrarium|Movement")
	bool bSprintIsOnCooldown = false;
	
	/** Current remaining sprint time */
	UPROPERTY(BlueprintReadOnly, Category = "Terrarium|Movement")
	float SprintTimeRemaining = 3.0f;

	/** Current cooldown remaining for sprinting */
	UPROPERTY(BlueprintReadOnly, Category = "Terrarium|Movement")
	float SprintCoolDown = 2.0f;

	/** Total duration a sprint can last */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Movement")
	float SprintDuration = 3.0f;
	
	/** Duration of the interaction noise penalty */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Interaction")
	float InteractTime = 0.8f;

private:
	/** Timer handle for managing sprint duration */
	FTimerHandle SprintTimerHandle;

	/** Timer handle for managing sprint cooldown */
	FTimerHandle SprintCooldownTimerHandle;

	/** Timer handle for managing interaction noise duration */
	FTimerHandle InteractNoiseTimerHandle;
	
	/** Callback for when the sprint duration expires */
	void OnSprintTimerExpired();

	/** Callback for when the sprint cooldown expires */
	void OnSprintCooldownTimerExpired();

	/** Callback for when the interaction noise timer expires */
	void OnInteractNoiseTimerExpired();
	
	/** Reference to the player camera manager for playing shakes */
	UPROPERTY()
	TObjectPtr<APlayerCameraManager> CameraManager;
	
	/** Current shake state to avoid redundant updates */
	EMovementShakeState CurrentShakeState = EMovementShakeState::Idle;

	/** Updates the camera shake based on current movement */
	void UpdateCameraShake();
	
	/** Targeted Z offset for the camera root */
	float CameraTargetZ = 0.f;

	/** Current interpolated Z offset for the camera root */
	float CameraCurrentZ = 0.f;

	/** Target Z offset when crouched */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Crouch")
	float CrouchCameraZ = -10.f;

	/** Target Z offset when standing */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Crouch")
	float StandCameraZ = 0.f;

	/** Interpolation speed for camera height changes */
	UPROPERTY(EditDefaultsOnly, Category = "Terrarium|Camera|Crouch")
	float CrouchInterpSpeed = 10.f;
};
