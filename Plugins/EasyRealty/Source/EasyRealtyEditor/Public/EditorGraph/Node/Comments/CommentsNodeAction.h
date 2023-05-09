// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include <EdGraphSchema_K2_Actions.h>

#include "CommentsNodeAction.generated.h"


USTRUCT()
struct FEdGraphSchemaAction_K3AddComment : public FEdGraphSchemaAction_K2AddComment
{
	GENERATED_USTRUCT_BODY()

	// Simple type info
	static FName StaticGetTypeId() { static FName Type("FEdGraphSchemaAction_K3AddComment"); return Type; }
	virtual FName GetTypeId() const override { return StaticGetTypeId(); }

	FEdGraphSchemaAction_K3AddComment()
		: FEdGraphSchemaAction_K2AddComment()
	{
	}

	FEdGraphSchemaAction_K3AddComment(FText InDescription, FText InToolTip)
		: FEdGraphSchemaAction_K2AddComment(InDescription, InToolTip)
	{
	}


	virtual UEdGraphNode* PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode = true) override;

};
