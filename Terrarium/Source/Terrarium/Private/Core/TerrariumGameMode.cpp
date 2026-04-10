// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/TerrariumGameMode.h"


void ATerrariumGameMode::OnItemCollected()
{
	ItemCount++;
	CheckWinCondition();
}

void ATerrariumGameMode::OnPlayerStruck()
{
	StrikeCount++;
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
	}
		
}

void ATerrariumGameMode::CheckLossCondition()
{
	if (StrikeCount >= MaxStrikes)
	{
		TriggerLoss();
	}
}

void ATerrariumGameMode::TriggerWin()
{
	// This should broadcast a win event
}

void ATerrariumGameMode::TriggerLoss()
{
	// This should broadcast a lose event
}
