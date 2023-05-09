// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "RealtyAsset/RealtyAsset.h"
#include "K3EdGraphNode.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYEDITOR_API UK3EdGraphNode : public UEdGraphNode
{
	GENERATED_BODY()
	
public:
	UK3EdGraphNode();

	virtual void AllocateDefaultPins() override;

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const;

	UEdGraphPin* CreatePinType(EEdGraphPinDirection dir, FProperty* p, UObject* PinSub = nullptr);

	UPROPERTY() int32 type = 0;

	UPROPERTY(EditAnywhere)
	FRealtyDataNode RealtyDataNode;

	virtual void ResetNodeOwner();

	virtual void UpdateNodeClassData();
	
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);//; PURE_VIRTUAL(UK3EdGraphNode::PostEditChangeProperty, return; );
};
