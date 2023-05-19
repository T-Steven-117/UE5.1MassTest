// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/VariableNode/VariableNodeAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariableNodeAction() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode_NoRegister();
	EASYREALTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVariableNodeAction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FVariableNodeAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FVariableNodeAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VariableNodeAction;
class UScriptStruct* FVariableNodeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VariableNodeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VariableNodeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVariableNodeAction, Z_Construct_UPackage__Script_EasyRealtyEditor(), TEXT("VariableNodeAction"));
	}
	return Z_Registration_Info_UScriptStruct_VariableNodeAction.OuterSingleton;
}
template<> EASYREALTYEDITOR_API UScriptStruct* StaticStruct<FVariableNodeAction>()
{
	return FVariableNodeAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVariableNodeAction_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariableNodeAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/VariableNodeAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVariableNodeAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/VariableNodeAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVariableNodeAction, NodeTemplate), Z_Construct_UClass_UK3EdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVariableNodeAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVariableNodeAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"VariableNodeAction",
		sizeof(FVariableNodeAction),
		alignof(FVariableNodeAction),
		Z_Construct_UScriptStruct_FVariableNodeAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariableNodeAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVariableNodeAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVariableNodeAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVariableNodeAction()
	{
		if (!Z_Registration_Info_UScriptStruct_VariableNodeAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VariableNodeAction.InnerSingleton, Z_Construct_UScriptStruct_FVariableNodeAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VariableNodeAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNodeAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNodeAction_h_Statics::ScriptStructInfo[] = {
		{ FVariableNodeAction::StaticStruct, Z_Construct_UScriptStruct_FVariableNodeAction_Statics::NewStructOps, TEXT("VariableNodeAction"), &Z_Registration_Info_UScriptStruct_VariableNodeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVariableNodeAction), 1046555638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNodeAction_h_2422002282(TEXT("/Script/EasyRealtyEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNodeAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_VariableNodeAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
