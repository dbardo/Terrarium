// Fill out your copyright notice in the Description page of Project Settings.


#include "World/SignalItem.h"


// Sets default values
ASignalItem::ASignalItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASignalItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASignalItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

