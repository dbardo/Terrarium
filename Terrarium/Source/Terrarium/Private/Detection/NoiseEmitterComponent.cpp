// Fill out your copyright notice in the Description page of Project Settings.


#include "Detection/NoiseEmitterComponent.h"

UNoiseEmitterComponent::UNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UNoiseEmitterComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UNoiseEmitterComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

