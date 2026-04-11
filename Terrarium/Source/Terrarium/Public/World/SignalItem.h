// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction/Interactable.h"
#include "SignalItem.generated.h"

UCLASS()
class TERRARIUM_API ASignalItem : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	virtual void Interact(ATerrariumCharacter* Interactor) override;
	
protected:
	UPROPERTY(EditAnywhere)
	FName ItemID;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnCollected();	

	bool bCollected = false;
};
