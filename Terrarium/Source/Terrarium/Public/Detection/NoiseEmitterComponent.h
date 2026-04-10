// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#include "NoiseEmitterComponent.generated.h"

/**
 * Component responsible for emitting noise stimuli to the AI perception system.
 * Inherits from UAIPerceptionStimuliSourceComponent to act as a source for AI senses.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TERRARIUM_API UNoiseEmitterComponent : public UAIPerceptionStimuliSourceComponent
{
	GENERATED_BODY()

public:
	/** Default constructor */
	UNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer);

	/**
	 * Emits a noise event at the component's owner location.
	 * @param Radius The distance at which the noise can be heard by AI.
	 */
	void EmitNoise(float Radius);
};
