// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UserTopPageViewModelBase.generated.h"

/**
 *
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTrigger);

UCLASS(Blueprintable)
class PROJECTSUBSYSTEM_API UUserTopPageViewModelBase : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta = (DisplayName = "最低温度"))
		FString LowTemp;
	void SetLowTemp(FString NewValue);
	FString GetLowTemp()const { return LowTemp; }

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta = (DisplayName = "最高温度"))
		FString HighTemp;
	void SetHighTemp(FString NewValue);
	FString GetHighTemp()const { return HighTemp; }

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta = (DisplayName = "时间"))
		FString TimeData;
	void SetTimeData(FString NewValue);
	FString GetTimeData()const { return TimeData; }

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta = (DisplayName = "中文标题"))
		FString CName;
	void SetCName(FString NewName);
	FString GetCName()const { return CName; }

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, meta = (DisplayName = "英文标题"))
		FString EName;
	void SetEName(FString NewEName);
	FString GetEName()const { return EName; }

	UPROPERTY(BlueprintAssignable)
		FOnTrigger OnTrigger;
	UFUNCTION(BlueprintCallable)
		void CallOnDelegate();

};
