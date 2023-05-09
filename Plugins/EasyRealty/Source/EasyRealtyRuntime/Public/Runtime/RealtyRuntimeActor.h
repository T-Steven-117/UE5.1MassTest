// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../RealtyAsset/RealtyAsset.h"
#include "RealtyRuntimeActor.generated.h"

USTRUCT()
struct FUIMapping
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY() FString NodeName;
	UPROPERTY() class URealtyUserWidgetBase* uiPtr;

	void RemoveUI();

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRightPressed, bool, bShouldClean);
DECLARE_MULTICAST_DELEGATE_TwoParams(FUseDataDelegate, FString, FString);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLerpDelegate, bool ,bIsShow);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAfterClicked);

UCLASS()
class EASYREALTYRUNTIME_API ARealtyRuntimeActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARealtyRuntimeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) class URealtyAsset* RealtyAsset;
	struct FRealtyDataNode* CurrentNode;

	void Start();

	void ReStart();

	void UseData(const FString& Name, bool ForceRefreshWidget = false);
	void UseDataFast(const FString& Name, bool ForceRefreshWidget = false);

public:

	URealtyUserWidgetBase* AddUI(const FString& Name);
	bool ClearUI(const FString& Name, URealtyUserWidgetBase*& UIPtr, bool bForceRefresh = false);
	bool ClearUI2(const FString& Name, const FString& ParentName);
	void ClearAllUI();
	
	UPROPERTY(Transient) TArray<FUIMapping> UIMappingStack;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		class URealtyUserWidgetBase* GetTopUIPtr();

	void UpdateCacheName(FString Inpre, FString Incur);
public:
	UPROPERTY(Transient) FString CacheName;
	UPROPERTY(Transient) FString CachePreName;
	UPROPERTY(Transient) FString PreName;
	UPROPERTY(Transient) FString CurName;
	UPROPERTY(BlueprintReadOnly, Category = "HightValue")
		float ArmLenght=1800000.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "CloseRange", meta = (DisplayName = "近景层级距离"))
		float CloseRangeLenght=500000.0f;

	FUseDataDelegate OnUseData;

	UPROPERTY(BlueprintAssignable, Category = "RightPressed")
		FOnRightPressed OnRightPressed;
	UPROPERTY(BlueprintAssignable, Category = "OnLerpShowUI")
		FOnLerpDelegate OnLerpUI;
	UPROPERTY(BlueprintAssignable, Category = "Menu")
		FOnAfterClicked AfterClicked;
};
