// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/PredatorAIController.h"


// Sets default values
APredatorAIController::APredatorAIController()
{
	PrimaryActorTick.bCanEverTick = false;
	
}

void APredatorAIController::BeginPlay()
{
	Super::BeginPlay();
	
}

void APredatorAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	if (BehaviorTree)
		RunBehaviorTree(BehaviorTree);
}