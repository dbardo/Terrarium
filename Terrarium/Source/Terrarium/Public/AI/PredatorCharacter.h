// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PredatorCharacter.generated.h"

class UAIPerceptionComponent;

UCLASS()
class TERRARIUM_API APredatorCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APredatorCharacter();
	
	void OnPlayerStruck();  // Notifies GameMode, triggers reset
	void ResetToPatrolOrigin();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAIPerceptionComponent> PerceptionComponent;
	
	UFUNCTION()
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
};
