// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/PredatorCharacter.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"


APredatorCharacter::APredatorCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	
	// Hearing Config
	UAISenseConfig_Hearing* HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
	HearingConfig->HearingRange = 700.f;
	HearingConfig->LoSHearingRange = 1400.f;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
	PerceptionComponent->ConfigureSense(*HearingConfig);
	
	// Sight config - disabled by default, enabled only when alert
	UAISenseConfig_Sight* SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SenseConfig"));
	SightConfig->SightRadius = 300.f;
	SightConfig->LoseSightRadius = 380.f;
	SightConfig->PeripheralVisionAngleDegrees = 45.f; // 90 deg total cone
	SightConfig->DetectionByAffiliation.bDetectNeutrals = false; // OFF by default
	PerceptionComponent->ConfigureSense(*SightConfig);
	
	PerceptionComponent->SetDominantSense(UAISense_Hearing::StaticClass());
}

void APredatorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	PatrolOrigin = GetActorLocation();
	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &APredatorCharacter::OnPerceptionUpdated);
	
}

void APredatorCharacter::OnPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	FActorPerceptionBlueprintInfo Info;
	PerceptionComponent->GetActorsPerception(Actor, Info);
	
	for (const FAIStimulus& Stim : Info.LastSensedStimuli)
	{
		if (Stim.Type == UAISense::GetSenseID<UAISense_Hearing>())
		{
			HandleHearingStimulus(Stim, Actor);
		}
		else if (Stim.Type == UAISense::GetSenseID<UAISense_Sight>())
		{
			HandleSightStimulus(Stim, Actor);
		}
	}
}

void APredatorCharacter::HandleHearingStimulus(const FAIStimulus& Stimulus, AActor* Actor)
{
	if (!Stimulus.WasSuccessfullySensed()) return;
	
	UBlackboardComponent* BB = GetBB();
	if (!BB) return;
	
	// Do not react to hearing if already chasing
	// we already have a confirmed target, no need to re-alert
	if (BB->GetValueAsBool("IsChasing")) return;
	
	BB->SetValueAsVector("StimulusLocation", Stimulus.StimulusLocation);
	BB->SetValueAsBool("IsAlert", true);
}

void APredatorCharacter::HandleSightStimulus(const FAIStimulus& Stimulus, AActor* Actor)
{
	UBlackboardComponent* BB = GetBB();
	if (!BB) return;
	
	if (Stimulus.WasSuccessfullySensed())
	{
		// Player spotted - begin chase
		BB->SetValueAsObject("TargetActor", Actor);
		BB->SetValueAsVector("LaskKnownLocation", Actor->GetActorLocation());
		BB->SetValueAsBool("IsChasing", true);
		BB->SetValueAsBool("IsAlert", false); // Chase overrides Alert
	}
	else
	{
		// Lost sight - begin Investigation
		BB->SetValueAsVector("LastKnownLocation", Actor->GetActorLocation());
		BB->SetValueAsBool("IsChasing", false);
		// IsAlert intentionally NOT set here -
		// Investigation is handled inside the Alert branch using LastKnownLocation
	}
}

void APredatorCharacter::SetSightSenseEnabled(bool bEnabled)
{
	auto* SightCfg = Cast<UAISenseConfig_Sight>(PerceptionComponent->GetSenseConfig(UAISense::GetSenseID<UAISense_Sight>()));
	
	if (!SightCfg) return;
	
	SightCfg->DetectionByAffiliation.bDetectNeutrals = bEnabled;
	PerceptionComponent->RequestStimuliListenerUpdate();
}

void APredatorCharacter::ResetToPatrolOrigin()
{
	SetActorLocation(PatrolOrigin);
	
	UBlackboardComponent* BB = GetBB();
	if (!BB) return;
	
	BB->SetValueAsBool("IsChasing", false);
	BB->SetValueAsBool("IsAlert", false);
	BB->SetValueAsObject("TargetActor", nullptr);
	BB->SetValueAsVector("StimulusLocation", FVector::ZeroVector);
	BB->SetValueAsVector("LastKnownLocation", FVector::ZeroVector);
	BB->SetValueAsInt("CurrentWaypointIndex", 0);
	
	// Also re-disable sight sense
	SetSightSenseEnabled(false);
}

UBlackboardComponent* APredatorCharacter::GetBB() const
{
	if (AAIController* AIC = Cast<AAIController>(GetController()))
	{
		return AIC->GetBlackboardComponent();
	}
	
	return nullptr;
}


void APredatorCharacter::OnPlayerStruck()
{
	OnPredatorStrikesPlayer.Broadcast();
	ResetToPatrolOrigin();
}
