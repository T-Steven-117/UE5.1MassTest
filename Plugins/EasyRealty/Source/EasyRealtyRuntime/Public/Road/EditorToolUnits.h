// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include <GameFramework/Actor.h>
#include "EditorToolUnits.generated.h"
/**
 * 
 */



UCLASS()
class EASYREALTYRUNTIME_API AAreaNoiseActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAreaNoiseActor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite) class UStaticMeshComponent* StaticMeshComponent;


	void SetInfo(int32 w,int32 h,class UMaterialInterface* NoiseMat);

};