// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/TerrariumCharacter.h"


// Sets default values
ATerrariumCharacter::ATerrariumCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATerrariumCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATerrariumCharacter::HandleInteract()
{
}

void ATerrariumCharacter::StartSprint()
{
}

void ATerrariumCharacter::StopSprint()
{
}

void ATerrariumCharacter::ToggleCrouch()
{
}

