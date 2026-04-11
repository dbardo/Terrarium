// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PredatorAIController.generated.h"

UCLASS()
class TERRARIUM_API APredatorAIController : public AAIController
{
	GENERATED_BODY()

public:
	APredatorAIController();
	
	UBlackboardComponent* GetBB()  { return GetBlackboardComponent(); }
	
protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;

private:
	UPROPERTY(EditDefaultsOnly) TObjectPtr<UBehaviorTree> BehaviorTree;	
};
