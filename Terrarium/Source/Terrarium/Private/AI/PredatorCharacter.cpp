// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/PredatorCharacter.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"


APredatorCharacter::APredatorCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	
	UAISenseConfig_Hearing* HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
	HearingConfig->HearingRange = 600.f;
	HearingConfig->LoSHearingRange = 1200.f;
	HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
	
	UAISenseConfig_Sight* SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SenseConfig"));
	SightConfig->SightRadius = 300.f;
	SightConfig->PeripheralVisionAngleDegrees = 45.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
}

void APredatorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void APredatorCharacter::OnPlayerStruck()
{
	// TODO: Alert GameMode
}

void APredatorCharacter::ResetToPatrolOrigin()
{
	// TODO: Teleport back to origin
}

void APredatorCharacter::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	
}
