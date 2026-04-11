// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TerrariumGameMode.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameWon);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameLost);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemCollectedEvent, int32, NewCount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStruckEvent, int32, NewCount);

/**
 * 
 */
UCLASS()
class TERRARIUM_API ATerrariumGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable) FOnGameWon OnGameWon;
	UPROPERTY(BlueprintAssignable) FOnGameLost OnGameLost;
	UPROPERTY(BlueprintAssignable) FOnItemCollectedEvent OnItemCollectedEvent;
	UPROPERTY(BlueprintAssignable) FOnPlayerStruckEvent OnPlayerStruckEvent;
	
	void OnItemCollected();
	void OnPlayerStruck();
	int32 GetStrikeCount() const;
	int32 GetItemCount() const;

private:
	int32 StrikeCount = 0;
	int32 ItemCount = 0;
	const int32 MaxStrikes = 3;
	const int32 RequiredItems = 3;
	bool bGameOver = false;
	
	void RespawnPlayer();
	void CheckWinCondition();
	void CheckLossCondition();
	void TriggerWin();
	void TriggerLoss();
};
