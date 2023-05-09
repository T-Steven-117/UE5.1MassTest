// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyRealtyEditor.h"
#include <AssetToolsModule.h>
#include "ToolKit/RealtyAssetToolKitAction.h"
#include "EditorGraph/Factory/GraphFactory.h"
#include <EdGraphUtilities.h>
#include "RealtyEditorSlateStyle/RealtyEditorSlateStyle.h"

#define LOCTEXT_NAMESPACE "FEasyRealtyEditorModule"

bool FEasyRealtyEditorModule::IsPlayGame = false;

void FEasyRealtyEditorModule::StartupModule()
{
	FRealtyEditorSlateStyleHelper::Initialized();

	IAssetTools& assettools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RealtyToolKitActionPtr = MakeShareable(new FRealtyAssetToolKitAction());
	assettools.RegisterAssetTypeActions(RealtyToolKitActionPtr.ToSharedRef());

	RealtyGraphNodeFactory = MakeShareable(new FRealtyGraphNodeFactory());
	FEdGraphUtilities::RegisterVisualNodeFactory(RealtyGraphNodeFactory);
	RealtyGraphNodePinFactory = MakeShareable(new FRealtyGraphNodePinFactory());
	FEdGraphUtilities::RegisterVisualPinFactory(RealtyGraphNodePinFactory);
	RealtyGraphConnectionFactory = MakeShareable(new FRealtyGraphConnectionFactory);
	FEdGraphUtilities::RegisterVisualPinConnectionFactory(RealtyGraphConnectionFactory);


	FEditorDelegates::PreBeginPIE.AddLambda([this](const bool E)
		{
			FEasyRealtyEditorModule::IsPlayGame = true;
		});
	FEditorDelegates::EndPIE.AddLambda([this](const bool E)
		{
			FEasyRealtyEditorModule::IsPlayGame = false;
		});
}

void FEasyRealtyEditorModule::ShutdownModule()
{
	FRealtyEditorSlateStyleHelper::Shutdown();

	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& assettools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		assettools.UnregisterAssetTypeActions(RealtyToolKitActionPtr.ToSharedRef());

		RealtyToolKitActionPtr.Reset();
	}

	FEdGraphUtilities::UnregisterVisualNodeFactory(RealtyGraphNodeFactory);
	FEdGraphUtilities::UnregisterVisualPinFactory(RealtyGraphNodePinFactory);
	FEdGraphUtilities::UnregisterVisualPinConnectionFactory(RealtyGraphConnectionFactory);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEasyRealtyEditorModule, EasyRealtyEditor)