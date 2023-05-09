// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorGraph/Node/K3EdGraphNode.h"
#include "VariableNode.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYEDITOR_API UVariableNode : public UK3EdGraphNode
{
	GENERATED_BODY()

public:

	UVariableNode()
	{
		type = 3;
	}


};
