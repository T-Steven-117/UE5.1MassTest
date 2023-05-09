// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyRealtyRuntime/Public/RealtyAsset/RealtyAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRealtyAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_APointTargetActor_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyAsset();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyAsset_NoRegister();
	EASYREALTYRUNTIME_API UClass* Z_Construct_UClass_URealtyUserWidgetBase_NoRegister();
	EASYREALTYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRealtyDataNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EasyRealtyRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RealtyDataNode;
class UScriptStruct* FRealtyDataNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RealtyDataNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RealtyDataNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealtyDataNode, Z_Construct_UPackage__Script_EasyRealtyRuntime(), TEXT("RealtyDataNode"));
	}
	return Z_Registration_Info_UScriptStruct_RealtyDataNode.OuterSingleton;
}
template<> EASYREALTYRUNTIME_API UScriptStruct* StaticStruct<FRealtyDataNode>()
{
	return FRealtyDataNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRealtyDataNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfHidden_MetaData[];
#endif
		static void NewProp_SelfHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SelfHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTargetClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PointTargetClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTargetTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointTargetTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSequenceSoftPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetSequenceSoftPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointTargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoHoldTransform_MetaData[];
#endif
		static void NewProp_NoHoldTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NoHoldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoTransfer_MetaData[];
#endif
		static void NewProp_NoTransfer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NoTransfer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelfName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LinkName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealtyDataNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_UIClassPtr_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_UIClassPtr = { "UIClassPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, UIClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_URealtyUserWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_UIClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_UIClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "DisplayName", "GoNode\xe4\xb9\x8b\xe5\x90\x8e\xe9\x9a\x90\xe8\x97\x8f\xe8\x87\xaa\xe8\xba\xabUI" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden_SetBit(void* Obj)
	{
		((FRealtyDataNode*)Obj)->SelfHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden = { "SelfHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRealtyDataNode), &Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetClassPtr_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetClassPtr = { "PointTargetClassPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, PointTargetClassPtr), Z_Construct_UClass_UClass, Z_Construct_UClass_APointTargetActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetTag_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetTag = { "PointTargetTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, PointTargetTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_TargetSequenceSoftPath_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_TargetSequenceSoftPath = { "TargetSequenceSoftPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, TargetSequenceSoftPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_TargetSequenceSoftPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_TargetSequenceSoftPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetLocation_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetLocation = { "PointTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, PointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetRotation_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetRotation = { "PointTargetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, PointTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform_SetBit(void* Obj)
	{
		((FRealtyDataNode*)Obj)->NoHoldTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform = { "NoHoldTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRealtyDataNode), &Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "Comment", "//\xe4\xb8\xbatrue\xe5\xb0\xb1\xe6\x98\xaf\xe4\xbf\x9d\xe7\x95\x99\xe4\xb8\x8a\xe6\xac\xa1\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe4\xb8\x8b\xe6\xac\xa1\xe5\x86\x8d\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x94\xb9\xe5\x8f\x98\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ExportNode", "TRUE" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
		{ "ToolTip", "\xe4\xb8\xbatrue\xe5\xb0\xb1\xe6\x98\xaf\xe4\xbf\x9d\xe7\x95\x99\xe4\xb8\x8a\xe6\xac\xa1\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe4\xb8\x8b\xe6\xac\xa1\xe5\x86\x8d\xe6\xac\xa1\xe8\xbf\x9b\xe5\x85\xa5\xe5\xb0\xb1\xe4\xb8\x8d\xe4\xbc\x9a\xe6\x94\xb9\xe5\x8f\x98\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	void Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer_SetBit(void* Obj)
	{
		((FRealtyDataNode*)Obj)->NoTransfer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer = { "NoTransfer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRealtyDataNode), &Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfName_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfName = { "SelfName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, SelfName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_ParentName_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_ParentName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName_Inner = { "LinkName", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName_MetaData[] = {
		{ "Category", "RealtyDataNode" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName = { "LinkName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealtyDataNode, LinkName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealtyDataNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_UIClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_TargetSequenceSoftPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_PointTargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoHoldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_NoTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_SelfName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewProp_LinkName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealtyDataNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
		nullptr,
		&NewStructOps,
		"RealtyDataNode",
		sizeof(FRealtyDataNode),
		alignof(FRealtyDataNode),
		Z_Construct_UScriptStruct_FRealtyDataNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealtyDataNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealtyDataNode()
	{
		if (!Z_Registration_Info_UScriptStruct_RealtyDataNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RealtyDataNode.InnerSingleton, Z_Construct_UScriptStruct_FRealtyDataNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RealtyDataNode.InnerSingleton;
	}
	void URealtyAsset::StaticRegisterNativesURealtyAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URealtyAsset);
	UClass* Z_Construct_UClass_URealtyAsset_NoRegister()
	{
		return URealtyAsset::StaticClass();
	}
	struct Z_Construct_UClass_URealtyAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphObject;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RealtyDataNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtyDataNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RealtyDataNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URealtyAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyRealtyRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RealtyAsset/RealtyAsset.h" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyAsset_Statics::NewProp_GraphObject_MetaData[] = {
		{ "Comment", "//\xe5\x82\xa8\xe5\xad\x98\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbc\x96\xe8\xbe\x91\n" },
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
		{ "ToolTip", "\xe5\x82\xa8\xe5\xad\x98\xe8\x93\x9d\xe5\x9b\xbe\xe7\xbc\x96\xe8\xbe\x91" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URealtyAsset_Statics::NewProp_GraphObject = { "GraphObject", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyAsset, GraphObject), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URealtyAsset_Statics::NewProp_GraphObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAsset_Statics::NewProp_GraphObject_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyAsset_Statics::NewProp_EntryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URealtyAsset_Statics::NewProp_EntryName = { "EntryName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyAsset, EntryName), METADATA_PARAMS(Z_Construct_UClass_URealtyAsset_Statics::NewProp_EntryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAsset_Statics::NewProp_EntryName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes_Inner = { "RealtyDataNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRealtyDataNode, METADATA_PARAMS(nullptr, 0) }; // 3409507072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/RealtyAsset/RealtyAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes = { "RealtyDataNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URealtyAsset, RealtyDataNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes_MetaData)) }; // 3409507072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URealtyAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyAsset_Statics::NewProp_GraphObject,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyAsset_Statics::NewProp_EntryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URealtyAsset_Statics::NewProp_RealtyDataNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URealtyAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URealtyAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URealtyAsset_Statics::ClassParams = {
		&URealtyAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URealtyAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URealtyAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URealtyAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URealtyAsset()
	{
		if (!Z_Registration_Info_UClass_URealtyAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URealtyAsset.OuterSingleton, Z_Construct_UClass_URealtyAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URealtyAsset.OuterSingleton;
	}
	template<> EASYREALTYRUNTIME_API UClass* StaticClass<URealtyAsset>()
	{
		return URealtyAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URealtyAsset);
	URealtyAsset::~URealtyAsset() {}
	struct Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ScriptStructInfo[] = {
		{ FRealtyDataNode::StaticStruct, Z_Construct_UScriptStruct_FRealtyDataNode_Statics::NewStructOps, TEXT("RealtyDataNode"), &Z_Registration_Info_UScriptStruct_RealtyDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealtyDataNode), 3409507072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URealtyAsset, URealtyAsset::StaticClass, TEXT("URealtyAsset"), &Z_Registration_Info_UClass_URealtyAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URealtyAsset), 18367640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_1142013889(TEXT("/Script/EasyRealtyRuntime"),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_ShangTou_Plugins_EasyRealty_Source_EasyRealtyRuntime_Public_RealtyAsset_RealtyAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
