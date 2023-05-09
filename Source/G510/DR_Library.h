// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataRegistryId.h"
#include "UObject/UnrealTypePrivate.h"
#include "DR_Library.generated.h"


#define P_GET_GENERIC_ARRAY(ArrayAddr, ArrayProperty) Stack.MostRecentProperty = nullptr;\
		Stack.StepCompiledIn<FStructProperty>(NULL);\
		void* ArrayAddr = Stack.MostRecentPropertyAddress;\
		FArrayProperty* ArrayProperty = Cast<FArrayProperty>(Stack.MostRecentProperty);\
		if (!ArrayProperty) {	Stack.bArrayContextFailed = true;	return; }
/**
 *
 */
UCLASS()
class G510_API UDR_Library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "DR_Library", meta = (WorldContext = "WorldContextObject"))
		static TArray<FDataRegistryId>GetAllRegistryIds(const UObject* WorldContextObject, FDataRegistryType RegistryType);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
		static void SayHello_Internal();
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"))
		static void SaySomething_Internal(const TArray<FString>& InWords);


	UFUNCTION(BlueprintPure, CustomThunk, meta = (DisplayName = "Array Numeric Property Average", ArrayParm = "TargetArray", ArrayTypeDependentParams = "TargetArray"), Category = "MyDemo")
		static float Array_NumericPropertyAverage(const TArray<int32>& TargetArray, FName PropertyName)
	{
		check(0);
		return 0.f;
	}
	DECLARE_FUNCTION(execArray_NumericPropertyAverage) 
	{
		// get TargetArray
		P_GET_GENERIC_ARRAY(ArrayAddr, ArrayProperty);
		// get PropertyName
		P_GET_PROPERTY(FNameProperty, PropertyName);
		P_FINISH;

		P_NATIVE_BEGIN;
		*(float*)RESULT_PARAM = GenericArray_NumericPropertyAverage(ArrayAddr, ArrayProperty, PropertyName);
		P_NATIVE_END;
	}
	static float GenericArray_NumericPropertyAverage(const void* TargetArray, const FArrayProperty* ArrayProperty, FName ArrayPropertyName)
	{
		FStructProperty* InnerProperty = Cast<FStructProperty>(ArrayProperty->Inner);
		if (!InnerProperty) {
			UE_LOG(LogTemp, Error, TEXT("Array inner property is NOT a UStruct!"));
			return 0.f;
		}

		UScriptStruct* Struct = InnerProperty->Struct;
		FString PropertyNameStr = ArrayPropertyName.ToString();
		FNumericProperty* NumProperty = nullptr;
		for (TFieldIterator<FNumericProperty> iter(Struct); iter; ++iter) {
			if (Struct->PropertyNameToDisplayName(iter->GetFName()) == PropertyNameStr) {
				NumProperty = *iter;
				break;
			}
		}
		if (!NumProperty) {
			UE_LOG(LogTemp, Log, TEXT("Struct property NOT numeric = [%s]"),
				*(ArrayPropertyName.ToString())
			);
		}


		FScriptArrayHelper ArrayHelper(ArrayProperty, TargetArray);
		int Count = ArrayHelper.Num();
		float Sum = 0.f;

		if (Count <= 0)
			return 0.f;

		if (NumProperty->IsFloatingPoint())
			for (int i = 0; i < Count; i++) {
				void* ElemPtr = ArrayHelper.GetRawPtr(i);
				const uint8* ValuePtr = NumProperty->ContainerPtrToValuePtr<uint8>(ElemPtr);
				Sum += NumProperty->GetFloatingPointPropertyValue(ValuePtr);

			}
		else if (NumProperty->IsInteger()) {
			for (int i = 0; i < Count; i++) {
				void* ElemPtr = ArrayHelper.GetRawPtr(i);
				const uint8* ValuePtr = NumProperty->ContainerPtrToValuePtr<uint8>(ElemPtr);
				Sum += NumProperty->GetSignedIntPropertyValue(ValuePtr);
			}
		}
		// TODO: else if(enum¿‡–Õ)

		return Sum / Count;
	}

	UFUNCTION(BlueprintCallable, CustomThunk, Category = "MyDemo", meta = (CustomStructureParam = "CustomStruct"))
		static void ShowStructFields(const int32& CustomStruct);
	static void Generic_ShowStructFields(const void* StructAddr, const FProperty* StructProperty);
	DECLARE_FUNCTION(execShowStructFields) {

		Stack.MostRecentPropertyAddress = nullptr;
		Stack.MostRecentProperty = nullptr;

		Stack.StepCompiledIn<FStructProperty>(NULL);
		void* StructAddr = Stack.MostRecentPropertyAddress;
		FProperty* StructProperty = Stack.MostRecentProperty;


		P_FINISH;

		P_NATIVE_BEGIN;
		Generic_ShowStructFields(StructAddr, StructProperty);
		P_NATIVE_END;
	}


	UFUNCTION(BlueprintCallable, CustomThunk, Category = "Utilities|Variables", meta = (CustomStructureParam = "Value", AutoCreateRefTerm = "Value", DisplayName = "GET/SET (Property)", CompactNodeTitle = "GET/SET"))
		static void AccessPropertyByName(UObject* Object, FName PropertyName, const int32& Value, bool bSetter = true);
	DECLARE_FUNCTION(execAccessPropertyByName)
	{
		P_GET_OBJECT(UObject, OwnerObject);
		P_GET_PROPERTY(FNameProperty, PropertyName);

		Stack.StepCompiledIn<FStructProperty>(NULL);
		void* SrcPropertyAddr = Stack.MostRecentPropertyAddress;
		FProperty* SrcProperty = Cast<FProperty>(Stack.MostRecentProperty);

		P_GET_UBOOL(bSetter);
		P_FINISH;

		P_NATIVE_BEGIN;
		Generic_AccessPropertyByName(
			OwnerObject,
			PropertyName,
			SrcPropertyAddr,
			SrcProperty,
			bSetter);
		P_NATIVE_END;
	}
	static void Generic_AccessPropertyByName(UObject* OwnerObject, FName PropertyName, void* SrcPropertyAddr, FProperty* SrcProperty, bool bSetter = true)
	{
		if (OwnerObject != NULL)
		{
			FProperty* FoundProp = FindFProperty<FProperty>(OwnerObject->GetClass(), PropertyName);
			FProperty;
			if ((FoundProp != NULL) && (FoundProp->SameType(SrcProperty)))
			{
				void* Dest = FoundProp->ContainerPtrToValuePtr<void>(OwnerObject);
				if (bSetter == true)
				{
					FoundProp->CopySingleValue(Dest, SrcPropertyAddr);
				}
				else
				{
					FoundProp->CopySingleValue(SrcPropertyAddr, Dest);
				}
				return;
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("UGenericNodeLibrary::Generic_AccessPropertyByName: Failed to find %s variable from %s object"), *(FString("Generic_AccessPropertyByName!")));
	};


};
