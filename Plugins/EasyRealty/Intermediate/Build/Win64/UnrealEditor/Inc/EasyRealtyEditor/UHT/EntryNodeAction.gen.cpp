// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/EntryNode/EntryNodeAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryNodeAction() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode_NoRegister();
	EASYREALTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEntryNodeAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FEntryNodeAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEntryNodeAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntryNodeAction;
class UScriptStruct* FEntryNodeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntryNodeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntryNodeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntryNodeAction, Z_Construct_UPackage__Script_EasyRealtyEditor(), TEXT("EntryNodeAction"));
	}
	return Z_Registration_Info_UScriptStruct_EntryNodeAction.OuterSingleton;
}
template<> EASYREALTYEDITOR_API UScriptStruct* StaticStruct<FEntryNodeAction>()
{
	return FEntryNodeAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntryNodeAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntryNodeAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/EntryNode/EntryNodeAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntryNodeAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/EntryNode/EntryNodeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEntryNodeAction, NodeTemplate), Z_Construct_UClass_UK3EdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEntryNodeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntryNodeAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EntryNodeAction",
		sizeof(FEntryNodeAction),
		alignof(FEntryNodeAction),
		Z_Construct_UScriptStruct_FEntryNodeAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntryNodeAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEntryNodeAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntryNodeAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEntryNodeAction()
	{
		if (!Z_Registration_Info_UScriptStruct_EntryNodeAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntryNodeAction.InnerSingleton, Z_Construct_UScriptStruct_FEntryNodeAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EntryNodeAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNodeAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNodeAction_h_Statics::ScriptStructInfo[] = {
		{ FEntryNodeAction::StaticStruct, Z_Construct_UScriptStruct_FEntryNodeAction_Statics::NewStructOps, TEXT("EntryNodeAction"), &Z_Registration_Info_UScriptStruct_EntryNodeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntryNodeAction), 1020764728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNodeAction_h_3537586458(TEXT("/Script/EasyRealtyEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNodeAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_EntryNode_EntryNodeAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
