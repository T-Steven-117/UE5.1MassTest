// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"


USTRUCT(BlueprintType)
struct FMySparseClassData
{
	GENERATED_BODY()

		FMySparseClassData()
		: MyFloatProperty(0.f)
		, MyIntProperty(0)
		, MyNameProperty(NAME_None)
	{ }

	// You can set this property's default value in the editor.
	// Blueprint graphs cannot access it.
	UPROPERTY(EditDefaultsOnly)
		float MyFloatProperty;

	// This property's value will be set in C++ code.
	// You can access it (but not change it) in Blueprint graphs.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int32 MyIntProperty;

	// You can set this property's default value in the editor.
	// You can access it (but not change it) in Blueprint graphs.
	// "GetByRef" means that Blueprint graphs access a const ref instead of a copy.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (GetByRef))
		FName MyNameProperty;
};

UCLASS(BlueprintType, SparseClassDataTypes = MySparseClassData)
class G510_API AMyActor : public AActor
{
	GENERATED_BODY()
	

#if WITH_EDITOR
public:
	// ~ This function transfers existing data into FMySparseClassData.
	virtual void MoveDataToSparseClassDataStruct() const override;
#endif // WITH_EDITOR

#if WITH_EDITORONLY_DATA
	//~ These properties are moving out to the FMySparseClassData struct:
private:
	// This property can be changed in the editor, but only on a per-class basis.
	// Blueprint graphs cannot access or change it.
	// It is a potential candidate for Sparse Class Data.
	UPROPERTY()
		float MyFloatProperty_DEPRECATED;

	// This property cannot be changed in the editor.
	// Blueprint graphs can access it, but cannot change it.
	// It is a potential candidate for Sparse Class Data.
	UPROPERTY()
		int32 MyIntProperty_DEPRECATED;

	// This property can be edited on a per-class basis in the editor.
	// Blueprint graphs can access it, but cannot change it.
	// It is a potential candidate for Sparse Class Data.
	UPROPERTY()
		FName MyNameProperty_DEPRECATED;
#endif // WITH_EDITORONLY_DATA

public:
	// This property can be edited on placed MyActor instances.
	// It is not a potential candidate for Sparse Class Data.
	UPROPERTY(EditAnywhere/*,meta=(DisplayPriority)*/)
		FVector MyVectorProperty;

	// This property can be changed in Blueprint graphs.
	// It is not a potential candidate for Sparse Class Data.
	UPROPERTY(BlueprintReadWrite)
		FVector2D MyVector2DProperty;
	UFUNCTION(BlueprintCallable)
		void B2C(int a);
};
