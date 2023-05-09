// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PreviewScenePawn.generated.h"

UCLASS()
class APreviewScenePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APreviewScenePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void Init(class UTextureRenderTarget2D *Texture);

	void OnAddMoveDelta(const FVector2D &delta);

	void OnForwardMoveDelta(const float delta);

	float MoveSpeed = 1;

public:

	UPROPERTY() class USpringArmComponent* SpringArmComponent;

	UPROPERTY() class USceneCaptureComponent2D* CameraComponent;

};
