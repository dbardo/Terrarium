// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TerrariumGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TERRARIUM_API ATerrariumGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void OnItemCollected();
	void OnPlayerStruck();
	int32 GetStrikeCount() const;
	int32 GetItemCount() const;

private:
	int32 StrikeCount = 0;
	int32 ItemCount = 0;
	const int32 MaxStrikes = 3;
	const int32 RequiredItems = 3;
	void CheckWinCondition();
	void CheckLossCondition();
	void TriggerWin();
	void TriggerLoss();
};
