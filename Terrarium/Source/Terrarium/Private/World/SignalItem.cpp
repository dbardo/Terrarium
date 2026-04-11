// Fill out your copyright notice in the Description page of Project Settings.


#include "World/SignalItem.h"

#include "Core/TerrariumGameMode.h"
#include "Detection/NoiseEmitterComponent.h"
#include "Player/TerrariumCharacter.h"


void ASignalItem::Interact(ATerrariumCharacter* Interactor)
{
	if (bCollected) return;
	
	UE_LOG(LogTemp, Warning, TEXT("Signal item interacted with!"));
	
	bCollected = true;
	
	// Fire Interaction noise burst via Interactor's NoiseEmitter
	Interactor->GetNoiseEmitter()->EmitNoise(700.f);
	
	// Notify GameMode
	if (ATerrariumGameMode* GM = GetWorld()->GetAuthGameMode<ATerrariumGameMode>())
	{
		GM->OnItemCollected();
		UE_LOG(LogTemp, Warning, TEXT("Item collected!"));
	}
	
	OnCollected();
}

void ASignalItem::OnCollected_Implementation()
{
	// Do nothing in CPP
}
