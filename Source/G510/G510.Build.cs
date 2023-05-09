// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class G510 : ModuleRules
{
	public G510(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore",
            "HeadMountedDisplay", "EnhancedInput",
            "UMG", "DataRegistry", "GraphEditor", 
            "SlateCore","UnrealEd",
            "MassNavigation",});

        PrivateDependencyModuleNames.AddRange(new string[] {
            "GameplayAbilities",
            "ModelViewViewModel",
            "UnrealEd",
            "EditorStyle",
            "BlueprintGraph",
            "KismetCompiler", 
            "Slate",
            "ToolMenus",
            "GameplayTags",
            "stateTreeModule",
            "SmartObjectsModule",
            "MassSmartObjects",
            "MassSignals",
            "MassMovement",
            "MassEntity",
            "MassRepresentation",
            "StructUtils",
            "MassCommon",
            "StateTreeModule",
            "MassAIBehavior",           
            "MassSignals",
            "NavigationSystem",
            "MassRepresentation"
        });
    }
}
