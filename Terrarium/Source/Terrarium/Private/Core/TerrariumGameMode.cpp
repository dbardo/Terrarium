// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/TerrariumGameMode.h"


void ATerrariumGameMode::OnItemCollected()
{
	ItemCount++;
	UE_LOG(LogTemp, Warning, TEXT("Item collected! Current count: %d"), ItemCount);
	
	CheckWinCondition();
	
}

void ATerrariumGameMode::OnPlayerStruck()
{
	StrikeCount++;
	UE_LOG(LogTemp, Warning, TEXT("Player struck! Current strikes: %d"), StrikeCount);
	
	CheckLossCondition();
}

int32 ATerrariumGameMode::GetStrikeCount() const
{
	return StrikeCount;
}

int32 ATerrariumGameMode::GetItemCount() const
{
	return ItemCount;
}

void ATerrariumGameMode::CheckWinCondition()
{
	if (ItemCount >= RequiredItems)
	{
		TriggerWin();
		UE_LOG(LogTemp, Warning, TEXT("Win condition met!"));
	}
		
}

void ATerrariumGameMode::CheckLossCondition()
{
	if (StrikeCount >= MaxStrikes)
	{
		TriggerLoss();
		UE_LOG(LogTemp, Warning, TEXT("Loss condition met!"));
	}
}

void ATerrariumGameMode::TriggerWin()
{
	UE_LOG(LogTemp, Warning, TEXT("Triggering win event!"));
	// TODO: Handle win event
	// This should broadcast a win event
}

void ATerrariumGameMode::TriggerLoss()
{
	UE_LOG(LogTemp, Warning, TEXT("Triggering loss event!"));
	// TODO: Handle loss event
	// This should broadcast a lose event
}
