// Fill out your copyright notice in the Description page of Project Settings.

#include "PreviewScene/SEPreviewSceneInstance.h"
#include <Engine/World.h>
#include <Engine/TextureRenderTarget2D.h>
#include <Components/SceneCaptureComponent.h>
#include <Components/ReflectionCaptureComponent.h>
#include <Components/DirectionalLightComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include "Runtime/RealtyFunctionLibrary.h"
#include <Components/SkyLightComponent.h>
#include "PreviewScene/PreviewScenePawn.h"
#include <Components/StaticMeshComponent.h>
#include <GameFramework/SpringArmComponent.h>

FSEPreviewSceneInstance::FSEPreviewSceneInstance()
{
	CacheViewSize = FVector2D::ZeroVector;
	RT = nullptr;
	WorldStop = false;
	PreviewScenePawn = nullptr;
	PreviewSceneEnviromentActor = nullptr;
	TempWorld = nullptr;
	bMouseMove = false;

	TempWorld = URealtyFunctionLibrary::CreateTempWorld();
	PreviewSceneEnviromentActor = SpawnPreviewSceneEnviromentActor();
	PreviewScenePawn = SpawnPreviewScenePawn();

}

FSEPreviewSceneInstance::~FSEPreviewSceneInstance()
{
	WorldStop = true;
	
	URealtyFunctionLibrary::DestroyRenderTarget2D(RT);

	URealtyFunctionLibrary::DestroyWorld(TempWorld);
}

void FSEPreviewSceneInstance::Update(const FVector2D& ViewSize, const float InDeltaTime)
{
	if (!CacheViewSize.Equals(ViewSize))
	{
		CacheViewSize = ViewSize;
		ViewSizeInvalidate();
	}

	if (!WorldStop)
	{
		USceneCaptureComponent::UpdateDeferredCaptures(TempWorld->Scene);
		USkyLightComponent::UpdateSkyCaptureContents(TempWorld);
		UReflectionCaptureComponent::UpdateReflectionCaptureContents(TempWorld);
		TempWorld->Tick(ELevelTick::LEVELTICK_All, InDeltaTime);
	}

}

void FSEPreviewSceneInstance::OnMouseButtonDown()
{
	bMouseMove = true;
}

void FSEPreviewSceneInstance::OnMouseButtonUp()
{
	bMouseMove = false;
}

void FSEPreviewSceneInstance::OnMouseMove(const FVector2D& delta)
{
	if (bMouseMove)
	{
		PreviewScenePawn->OnAddMoveDelta(delta);
	}
}

void FSEPreviewSceneInstance::OnMouseWheel(const float delta)
{
	if (!bMouseMove)
	{
		PreviewScenePawn->OnForwardMoveDelta(delta);
	}
}

void FSEPreviewSceneInstance::SetTexture(class UTexture2D* t,float yaw)
{
	PreviewSceneEnviromentActor->SetTexture(t);

	PreviewSceneEnviromentActor->SkyComponent->SetWorldRotation(FRotator(0,yaw,0));
}


void FSEPreviewSceneInstance::SetPawnPitch(float p)
{
	PreviewScenePawn->SpringArmComponent->SetRelativeRotation(FRotator
	(
		FMath::Clamp<float>(p, -70, 70),
		0,
		0.0f
	));

}

void FSEPreviewSceneInstance::ViewSizeInvalidate()
{
	URealtyFunctionLibrary::DestroyRenderTarget2D(RT);

	RT = URealtyFunctionLibrary::CreateRenderTarget2D(CacheViewSize.X, CacheViewSize.Y);

	ViewBrush.SetResourceObject(RT);

	PreviewScenePawn->Init(RT);
}

APreviewScenePawn* FSEPreviewSceneInstance::SpawnPreviewScenePawn()
{
	if (!TempWorld)
	{
		return nullptr;
	}

	FActorSpawnParameters asp;
	asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	APreviewScenePawn * pawn = TempWorld->SpawnActor<APreviewScenePawn>(APreviewScenePawn::StaticClass(),FVector::ZeroVector,FRotator::ZeroRotator,asp);
	if (pawn)
	{
		pawn->RegisterAllActorTickFunctions(true, true);
	}

	return pawn;
}

APreviewSceneEnviromentActor* FSEPreviewSceneInstance::SpawnPreviewSceneEnviromentActor()
{
	if (!TempWorld)
	{
		return nullptr;
	}

	FActorSpawnParameters asp;
	asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	APreviewSceneEnviromentActor* P = TempWorld->SpawnActor<APreviewSceneEnviromentActor>(APreviewSceneEnviromentActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator, asp);
	if (P)
	{
		P->RegisterAllActorTickFunctions(true, true);
	}

	return P;
}
