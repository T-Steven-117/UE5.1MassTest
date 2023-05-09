// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FEasyRealtyEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


private:

	TSharedPtr<class FRealtyAssetToolKitAction> RealtyToolKitActionPtr;


	TSharedPtr<struct FRealtyGraphNodeFactory> RealtyGraphNodeFactory;
	TSharedPtr<struct FRealtyGraphNodePinFactory> RealtyGraphNodePinFactory;
	TSharedPtr<struct FRealtyGraphConnectionFactory> RealtyGraphConnectionFactory;

public:

	static bool IsPlayGame;

};
