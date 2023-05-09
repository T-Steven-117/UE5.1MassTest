// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/Comments/CommentsNodeAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentsNodeAction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment();
	EASYREALTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FEdGraphSchemaAction_K3AddComment>() == std::is_polymorphic<FEdGraphSchemaAction_K2AddComment>(), "USTRUCT FEdGraphSchemaAction_K3AddComment cannot be polymorphic unless super FEdGraphSchemaAction_K2AddComment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment;
class UScriptStruct* FEdGraphSchemaAction_K3AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment, Z_Construct_UPackage__Script_EasyRealtyEditor(), TEXT("EdGraphSchemaAction_K3AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.OuterSingleton;
}
template<> EASYREALTYEDITOR_API UScriptStruct* StaticStruct<FEdGraphSchemaAction_K3AddComment>()
{
	return FEdGraphSchemaAction_K3AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/Comments/CommentsNodeAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_K3AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_K2AddComment,
		&NewStructOps,
		"EdGraphSchemaAction_K3AddComment",
		sizeof(FEdGraphSchemaAction_K3AddComment),
		alignof(FEdGraphSchemaAction_K3AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.InnerSingleton, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_Comments_CommentsNodeAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_Comments_CommentsNodeAction_h_Statics::ScriptStructInfo[] = {
		{ FEdGraphSchemaAction_K3AddComment::StaticStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_K3AddComment_Statics::NewStructOps, TEXT("EdGraphSchemaAction_K3AddComment"), &Z_Registration_Info_UScriptStruct_EdGraphSchemaAction_K3AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdGraphSchemaAction_K3AddComment), 4243745210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_Comments_CommentsNodeAction_h_542185350(TEXT("/Script/EasyRealtyEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_Comments_CommentsNodeAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_Comments_CommentsNodeAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
