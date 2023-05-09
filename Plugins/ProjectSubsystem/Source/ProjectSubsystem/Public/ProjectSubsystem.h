// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class UObjectLibrary;

class FProjectSubsystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	TObjectPtr<UObjectLibrary> OBJ;
	void LoadSubsystemAsset(const TArray<FString>Paths);
	void FindAllSubSystemPaths(TArray<FString>& Paths);
};
