// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Styling/SlateBrush.h>

/**
 * 
 */
class FSEPreviewSceneInstance
{
public:

	FSEPreviewSceneInstance();

	~FSEPreviewSceneInstance();
	

	void Update(const FVector2D &ViewSize,const float InDeltaTime);

	struct FSlateBrush ViewBrush;
	
	void OnMouseButtonDown();
	void OnMouseButtonUp();
	void OnMouseMove(const FVector2D &delta);
	void OnMouseWheel(const float delta);

	void SetTexture(class UTexture2D* t,float yaw);
	void SetPawnPitch(float p);
private:

	//创建世界
	bool WorldStop;
	class UWorld *TempWorld;
	

	//渲染的画面贴图
	class UTextureRenderTarget2D* RT;

	//窗口大小
	FVector2D CacheViewSize;
	void ViewSizeInvalidate();

	//Pawn
	TObjectPtr<class APreviewScenePawn> PreviewScenePawn;
	APreviewScenePawn *SpawnPreviewScenePawn();

	//PreviewSceneEnviromentActor
	TObjectPtr<class APreviewSceneEnviromentActor> PreviewSceneEnviromentActor;
	APreviewSceneEnviromentActor* SpawnPreviewSceneEnviromentActor();


	//
	bool bMouseMove;

};
