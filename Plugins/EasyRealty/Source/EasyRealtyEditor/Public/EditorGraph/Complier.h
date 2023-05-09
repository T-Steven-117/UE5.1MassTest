// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


struct FRealtyGraphHelper
{
public:

	static bool Complier(class URealtyAsset* data);

private:

	static void GetEntryNode(TArray<class UEdGraphNode*>& out, const TArray<class UEdGraphNode*>& nodes);

	static FString ProcessNodes(const FString &ParentName,class UEdGraphNode* node, TArray<struct FRealtyDataNode>& RealtyDataNode);

};