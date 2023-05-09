// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "RealtyEdGraph.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYEDITOR_API URealtyEdGraph : public UEdGraph
{
	GENERATED_BODY()
	
public:

	URealtyEdGraph();
	void UpdateClassData();

	void OnDebugStateChanged(const FString &pre,const FString &cur);
	void ClearDebugState();


	FString PrePin;
	FString CurPin;


};
