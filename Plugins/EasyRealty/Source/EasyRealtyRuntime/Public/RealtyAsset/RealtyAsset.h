// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <Blueprint/UserWidget.h>

#include "RealtyAsset.generated.h"


/**
 *
 */
class APointTargetActor;

USTRUCT()
struct EASYREALTYRUNTIME_API FRealtyDataNode
{
	GENERATED_USTRUCT_BODY()
public:
	FRealtyDataNode() { TargetSequenceSoftPath = TEXT("None"); }


	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) TSubclassOf<class URealtyUserWidgetBase> UIClassPtr;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true, DisplayName = "GoNode之后隐藏自身UI")) bool SelfHidden;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) TSubclassOf<APointTargetActor> PointTargetClassPtr;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) FString PointTargetTag;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) FString TargetSequenceSoftPath;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) FVector PointTargetLocation;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) FRotator PointTargetRotation;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) float BlendTime;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) bool NoHoldTransform;//为true就是保留上次的位置，下次再次进入就不会改变位置
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) bool NoTransfer;
	UPROPERTY(EditAnywhere, meta = (ExportNode = true)) TArray<FString> SubNodes;
public:
	UPROPERTY(VisibleAnywhere) FString SelfName;
	UPROPERTY(VisibleAnywhere) FString ParentName;
	UPROPERTY(VisibleAnywhere) TArray<FString> LinkName;

};


UCLASS()
class EASYREALTYRUNTIME_API URealtyAsset : public UObject
{
	GENERATED_BODY()


public:

#if WITH_EDITORONLY_DATA
	//储存蓝图编辑
	UPROPERTY() class UEdGraph* GraphObject;
#endif
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

	UPROPERTY() FString EntryName;
	UPROPERTY() TArray<FRealtyDataNode> RealtyDataNodes;

public:

	bool IsValidNode(const FString& Name);
	FString GetFirstDataName();
	FString FindParentName(const FString& Name);
	const FRealtyDataNode* GetDataNode(const FString& Name);
};



