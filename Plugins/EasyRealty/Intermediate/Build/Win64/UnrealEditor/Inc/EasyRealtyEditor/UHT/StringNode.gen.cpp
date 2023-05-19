// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/VariableNode/StringNode/StringNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringNode() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UStringNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UStringNode_NoRegister();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UVariableNode();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void UStringNode::StaticRegisterNativesUStringNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStringNode);
	UClass* Z_Construct_UClass_UStringNode_NoRegister()
	{
		return UStringNode::StaticClass();
	}
	struct Z_Construct_UClass_UStringNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVariableNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorGraph/Node/VariableNode/StringNode/StringNode.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/StringNode/StringNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringNode_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/StringNode/StringNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStringNode_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStringNode, VariableName), METADATA_PARAMS(Z_Construct_UClass_UStringNode_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringNode_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringNode_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Instance" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/VariableNode/StringNode/StringNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStringNode_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStringNode, Value), METADATA_PARAMS(Z_Construct_UClass_UStringNode_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStringNode_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStringNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringNode_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStringNode_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStringNode_Statics::ClassParams = {
		&UStringNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStringNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStringNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStringNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringNode()
	{
		if (!Z_Registration_Info_UClass_UStringNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStringNode.OuterSingleton, Z_Construct_UClass_UStringNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStringNode.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<UStringNode>()
	{
		return UStringNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringNode);
	UStringNode::~UStringNode() {}
	struct Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_StringNode_StringNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_StringNode_StringNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStringNode, UStringNode::StaticClass, TEXT("UStringNode"), &Z_Registration_Info_UClass_UStringNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStringNode), 3531771986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_StringNode_StringNode_h_4231507419(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_StringNode_StringNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_VariableNode_StringNode_StringNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
