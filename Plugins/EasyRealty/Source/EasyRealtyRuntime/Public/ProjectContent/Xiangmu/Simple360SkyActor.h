// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Simple360SkyActor.generated.h"




UCLASS()
class EASYREALTYRUNTIME_API ASimple360SkyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASimple360SkyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UStaticMeshComponent* SkyComp;

	UPROPERTY() class UMaterial* SkyMat;
	UPROPERTY() class UMaterialInstanceDynamic* InstancedSkyMaterial;

	float BlendTime;
	bool IsOver;
	class UTexture2D* PreTexture;
	UFUNCTION(BlueprintCallable) bool Set360Texture(class UTexture2D *t);


};
