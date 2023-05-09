// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassRepresentationProcessor.h"
#include "MyMassVisualizationProcessor.generated.h"

/**
 * 
 */
UCLASS()
class G510_API UMyMassVisualizationProcessor : public UMassVisualizationProcessor
{
	GENERATED_BODY()
public:
	UMyMassVisualizationProcessor()
	{
		bAutoRegisterWithProcessingPhases=true;
	}
};
