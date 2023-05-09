// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorGraph/Node/VariableNode/VariableNode.h"
#include "StringNode.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYEDITOR_API UStringNode : public UVariableNode
{
	GENERATED_BODY()
	
public:

	UStringNode();

	virtual void AllocateDefaultPins() override;
#if WITH_EDITOR
	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent);
#endif

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variable)
		FName VariableName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Instance)
		FString Value;
};
