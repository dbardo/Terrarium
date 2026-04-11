// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/TerrariumGameMode.h"

#include "Kismet/GameplayStatics.h"


void ATerrariumGameMode::OnItemCollected()
{
	if (bGameOver) return;
	
	ItemCount++;
	OnItemCollectedEvent.Broadcast(ItemCount);
	UE_LOG(LogTemp, Warning, TEXT("Item collected! Current count: %d"), ItemCount);
	
	CheckWinCondition();
	
}

void ATerrariumGameMode::OnPlayerStruck()
{
	if (bGameOver) return;
	
	StrikeCount++;
	OnPlayerStruckEvent.Broadcast(StrikeCount);
	UE_LOG(LogTemp, Warning, TEXT("Player struck! Current strikes: %d"), StrikeCount);
	
	RespawnPlayer();
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

void ATerrariumGameMode::RespawnPlayer()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;
	
	// Teleport to tagged respawn actor
	TArray<AActor*> Spawns;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "PlayerRespawn", Spawns);
	if (Spawns.Num() > 0)
	{
		PC->GetPawn()->SetActorLocation(Spawns[0]->GetActorLocation());
	}

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
	OnGameWon.Broadcast();
}

void ATerrariumGameMode::TriggerLoss()
{
	UE_LOG(LogTemp, Warning, TEXT("Triggering loss event!"));
	// TODO: Handle loss event
	OnGameLost.Broadcast();
}
