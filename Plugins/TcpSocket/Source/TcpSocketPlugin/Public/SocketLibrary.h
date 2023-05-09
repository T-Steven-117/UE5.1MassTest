// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SocketLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TCPSOCKETPLUGIN_API USocketLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	static TArray<FString>GetAllMacAddress();
	UFUNCTION(BlueprintCallable)
	static FString GetMacAddress();
};
