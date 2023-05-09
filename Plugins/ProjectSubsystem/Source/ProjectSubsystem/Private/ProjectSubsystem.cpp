// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectSubsystem.h"
#include "CacheInstanceSubsystem.h"
#include "Engine/Engine.h"
#include "Engine/ObjectLibrary.h"
#include "Interfaces/IPluginManager.h"
#define LOCTEXT_NAMESPACE "FProjectSubsystemModule"

void FProjectSubsystemModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	TArray<FString>Paths;
	Paths.Add("/Game");
	FindAllSubSystemPaths(Paths);
	LoadSubsystemAsset(Paths);
}

void FProjectSubsystemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (OBJ)
	{
		OBJ->RemoveFromRoot();
	}
}

void FProjectSubsystemModule::LoadSubsystemAsset(const TArray<FString>Paths)
{
	OBJ = UObjectLibrary::CreateLibrary(UCacheInstanceSubsystem::StaticClass(), true, GIsEditor);
	if (!OBJ)
	{
		return;
		UE_LOG(LogTemp, Error, TEXT("CacheSubststem¼ÓÔØÊ§°Ü£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡"));
	}
	OBJ->AddToRoot();
	OBJ->LoadBlueprintAssetDataFromPaths(Paths);
	OBJ->LoadAssetsFromAssetData();
}

void FProjectSubsystemModule::FindAllSubSystemPaths(TArray<FString>& Paths)
{
	IPluginManager& PluginMgrRef = IPluginManager::Get();
	auto PluginsContents = PluginMgrRef.GetEnabledPluginsWithContent();
	for (auto Plugin : PluginsContents)
	{
		if (Plugin->GetLoadedFrom() == EPluginLoadedFrom::Project || Plugin->GetBaseDir().Contains("Marketplace"))
		{
			Paths.AddUnique(Plugin->GetMountedAssetPath());
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProjectSubsystemModule, ProjectSubsystem)