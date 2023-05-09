// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"


#if WITH_EDITOR
void AMyActor::MoveDataToSparseClassDataStruct() const
{
	// make sure we don't overwrite the sparse data if it has been saved already
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass == nullptr || BPClass->bIsSparseClassDataSerializable == true)
	{
		return;
	}

	Super::MoveDataToSparseClassDataStruct();
	#if WITH_EDITORONLY_DATA
		// Unreal Header Tool (UHT) will create GetMySparseClassData automatically.
		FMySparseClassData* SparseClassData = GetMySparseClassData();

		// Modify these lines to include all Sparse Class Data properties.
		SparseClassData->MyFloatProperty = MyFloatProperty_DEPRECATED;
		SparseClassData->MyIntProperty = MyIntProperty_DEPRECATED;
		SparseClassData->MyNameProperty = MyNameProperty_DEPRECATED;
	#endif // WITH_EDITORONLY_DATA
}

void AMyActor::B2C(int a)
{
	MyIntProperty_DEPRECATED=a;
}

#endif // WITH_EDITOR


