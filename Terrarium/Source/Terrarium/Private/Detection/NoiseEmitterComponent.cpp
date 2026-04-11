// Fill out your copyright notice in the Description page of Project Settings.


#include "Detection/NoiseEmitterComponent.h"
#include "Terrarium/Terrarium.h"
#include "Perception/AISense_Hearing.h"

UNoiseEmitterComponent::UNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UNoiseEmitterComponent::EmitNoise(float Radius)
{
	if (Radius <= 0.f)
	{
		UE_LOG(LogTerrarium, Warning, TEXT("Noise radius must be positive!"));
		return;
	}
	
	if (AActor* Owner = GetOwner())
	{
		UE_LOG(LogTerrarium, Verbose, TEXT("%s emitting noise with radius: %f"), *Owner->GetName(), Radius);
		UAISense_Hearing::ReportNoiseEvent(GetWorld(), Owner->GetActorLocation(), 1.0f, Owner, Radius);
	}
}