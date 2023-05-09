// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"

#include "TravelNodeAction.generated.h"

USTRUCT()
struct FTravelNodeAction : public FEdGraphSchemaAction
{
	GENERATED_USTRUCT_BODY()

public:
	FTravelNodeAction()
		: FEdGraphSchemaAction()
	{}

	FTravelNodeAction(FText InNodeCategory, FText InMenuDesc, FText InToolTip, const int32 InGrouping, FText InKeywords = FText(), int32 InSectionID = 0);

	virtual UEdGraphNode* PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode = true);

	UPROPERTY() class UK3EdGraphNode* NodeTemplate;

};