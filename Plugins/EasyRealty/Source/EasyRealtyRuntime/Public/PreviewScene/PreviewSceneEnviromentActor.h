// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PreviewSceneEnviromentActor.generated.h"

UCLASS()
class APreviewSceneEnviromentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APreviewSceneEnviromentActor();

	void SetTexture(class UTexture2D* t);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Transient) class UStaticMeshComponent* SkyComponent;

	

	UPROPERTY() class UMaterialInstanceDynamic* MID;
};
