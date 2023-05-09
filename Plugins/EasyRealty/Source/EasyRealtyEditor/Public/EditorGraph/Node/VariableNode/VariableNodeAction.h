// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"

#include "VariableNodeAction.generated.h"

USTRUCT()
struct FVariableNodeAction : public FEdGraphSchemaAction
{
	GENERATED_USTRUCT_BODY()

public:
	FVariableNodeAction()
		: FEdGraphSchemaAction()
	{}

	FVariableNodeAction(FText InNodeCategory, FText InMenuDesc, FText InToolTip, const int32 InGrouping, FText InKeywords = FText(), int32 InSectionID = 0);

	virtual UEdGraphNode* PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode = true);

	UPROPERTY() class UK3EdGraphNode* NodeTemplate;

};
