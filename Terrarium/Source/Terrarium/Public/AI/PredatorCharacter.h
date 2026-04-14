// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PredatorCharacter.generated.h"

class UBlackboardComponent;
struct FAIStimulus;
class UAIPerceptionComponent;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPredatorStrikesPlayer);

UCLASS()
class TERRARIUM_API APredatorCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APredatorCharacter();
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintAssignable)
	FOnPredatorStrikesPlayer OnPredatorStrikesPlayer;
	
	// Called by BTTask_StrikeIfInRange
	UFUNCTION(BlueprintCallable, Category = "Predator AI")
	void OnPlayerStruck(); 
	
	// Called by BTTask_ResetToPatrol
	void ResetToPatrolOrigin();
	
	// Called by BTService_ListenForStimulus
	void SetSightSenseEnabled(bool bEnabled);
	
	// Patrol waypoints - populated in editor on BP_Predator
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	TArray<TObjectPtr<AActor>> PatrolPoints;
	
	FVector PatrolOrigin; // Set in BeginPlay from the initial actor location

protected:
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionComponent> PerceptionComponent;
	
	UFUNCTION()
	void OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

private:
	void HandleHearingStimulus(const FAIStimulus& Stimulus, AActor* Actor);
	void HandleSightStimulus(const FAIStimulus& Stimulus, AActor* Actor);
	
	UBlackboardComponent* GetBB() const;
};
