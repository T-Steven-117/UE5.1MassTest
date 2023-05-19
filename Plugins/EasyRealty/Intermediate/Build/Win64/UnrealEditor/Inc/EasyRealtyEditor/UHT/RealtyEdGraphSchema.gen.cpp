// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/RealtyEdGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyEdGraphSchema() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEdGraphSchema();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_URealtyEdGraphSchema_NoRegister();
	EASYREALTYEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSchemaAction_AddComment();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SchemaAction_AddComment;
class UScriptStruct* FSchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSchemaAction_AddComment, Z_Construct_UPackage__Script_EasyRealtyEditor(), TEXT("SchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.OuterSingleton;
}
template<> EASYREALTYEDITOR_API UScriptStruct* StaticStruct<FSchemaAction_AddComment>()
{
	return FSchemaAction_AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment to the graph */" },
		{ "ModuleRelativePath", "Public/EditorGraph/RealtyEdGraphSchema.h" },
		{ "ToolTip", "Action to add a comment to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSchemaAction_AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SchemaAction_AddComment",
		sizeof(FSchemaAction_AddComment),
		alignof(FSchemaAction_AddComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSchemaAction_AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SchemaAction_AddComment.InnerSingleton;
	}
	void URealtyEdGraphSchema::StaticRegisterNativesURealtyEdGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyEdGraphSchema);
	UClass* Z_Construct_UClass_URealtyEdGraphSchema_NoRegister()
	{
		return URealtyEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_URealtyEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorGraph/RealtyEdGraphSchema.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/RealtyEdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyEdGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyEdGraphSchema_Statics::ClassParams = {
		&URealtyEdGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyEdGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyEdGraphSchema()
	{
		if (!Z_Registration_Info_UClass_URealtyEdGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyEdGraphSchema.OuterSingleton, Z_Construct_UClass_URealtyEdGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyEdGraphSchema.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<URealtyEdGraphSchema>()
	{
		return URealtyEdGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyEdGraphSchema);
	URealtyEdGraphSchema::~URealtyEdGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FSchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FSchemaAction_AddComment_Statics::NewStructOps, TEXT("SchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_SchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSchemaAction_AddComment), 1173414657U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyEdGraphSchema, URealtyEdGraphSchema::StaticClass, TEXT("URealtyEdGraphSchema"), &Z_Registration_Info_UClass_URealtyEdGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyEdGraphSchema), 2963028163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_669952731(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_RealtyEdGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
