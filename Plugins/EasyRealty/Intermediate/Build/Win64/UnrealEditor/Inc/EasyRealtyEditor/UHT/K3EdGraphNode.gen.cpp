// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyEditor/Public/EditorGraph/Node/K3EdGraphNode.h"
#include "EasyRealtyRuntime/Public/RealtyAsset/RealtyAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK3EdGraphNode() {}
// Cross Module References
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode();
	EASYREALTYEDITOR_API UClass* Z_Construct_UClass_UK3EdGraphNode_NoRegister();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRealtyDataNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyEditor();
// End Cross Module References
	void UK3EdGraphNode::StaticRegisterNativesUK3EdGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK3EdGraphNode);
	UClass* Z_Construct_UClass_UK3EdGraphNode_NoRegister()
	{
		return UK3EdGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UK3EdGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtyDataNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RealtyDataNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK3EdGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK3EdGraphNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EditorGraph/Node/K3EdGraphNode.h" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/K3EdGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGraph/Node/K3EdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK3EdGraphNode, type), METADATA_PARAMS(Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_RealtyDataNode_MetaData[] = {
		{ "Category", "K3EdGraphNode" },
		{ "ModuleRelativePath", "Public/EditorGraph/Node/K3EdGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_RealtyDataNode = { "RealtyDataNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK3EdGraphNode, RealtyDataNode), Z_Construct_UScriptStruct_FRealtyDataNode, METADATA_PARAMS(Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_RealtyDataNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_RealtyDataNode_MetaData)) }; // 458637716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK3EdGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK3EdGraphNode_Statics::NewProp_RealtyDataNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK3EdGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK3EdGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK3EdGraphNode_Statics::ClassParams = {
		&UK3EdGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK3EdGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK3EdGraphNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK3EdGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK3EdGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK3EdGraphNode()
	{
		if (!Z_Registration_Info_UClass_UK3EdGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK3EdGraphNode.OuterSingleton, Z_Construct_UClass_UK3EdGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK3EdGraphNode.OuterSingleton;
	}
	template<> EASYREALTYEDITOR_API UClass* StaticClass<UK3EdGraphNode>()
	{
		return UK3EdGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK3EdGraphNode);
	UK3EdGraphNode::~UK3EdGraphNode() {}
	struct Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_K3EdGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_K3EdGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK3EdGraphNode, UK3EdGraphNode::StaticClass, TEXT("UK3EdGraphNode"), &Z_Registration_Info_UClass_UK3EdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK3EdGraphNode), 1099498002U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_K3EdGraphNode_h_1083278266(TEXT("/Script/EasyRealtyEditor"),
		Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_K3EdGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_G510_Plugins_EasyRealty_Source_EasyRealtyEditor_Public_EditorGraph_Node_K3EdGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
