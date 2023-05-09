// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/Simple360SkyActor.h"
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <UObject/ConstructorHelpers.h>
#include <Materials/MaterialInstanceDynamic.h>

// Sets default values
ASimple360SkyActor::ASimple360SkyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> SkyMesh(TEXT("/EasyRealty/Assets/EditorSphere.EditorSphere"));
	ConstructorHelpers::FObjectFinder<UMaterial> SkyMatMesh(TEXT("/EasyRealty/Assets/PreviewSkyMaterial.PreviewSkyMaterial"));
	SkyMat = SkyMatMesh.Object;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SkyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkyComp"));
	SkyComp->SetupAttachment(RootComponent);
	SkyComp->SetStaticMesh(SkyMesh.Object);
	SkyComp->SetWorldScale3D(FVector(10));

}

// Called when the game starts or when spawned
void ASimple360SkyActor::BeginPlay()
{
	Super::BeginPlay();
	
	InstancedSkyMaterial = UMaterialInstanceDynamic::Create(SkyMat, GetTransientPackage());
	SkyComp->SetMaterial(0, InstancedSkyMaterial);

	IsOver = true;
}

// Called every frame
void ASimple360SkyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

// 	if (!IsOver && BlendTime >= 0.0f)
// 	{
// 		BlendTime -= DeltaTime * 2;
// 		if (BlendTime <= 0.0f)
// 		{
// 			//»Ö¸´³õÊ¼×´Ì¬
// 			IsOver = true;
// 			if (InstancedSkyMaterial)
// 			{
// 				InstancedSkyMaterial->SetTextureParameterValue(FName("SkyTexture"), PreTexture);
// 				InstancedSkyMaterial->SetScalarParameterValue(FName("Scale"), 1);
// 			}
// 		}
// 		else
// 		{
// 			if (InstancedSkyMaterial)
// 			{
// 				float d = FMath::Lerp<float>(1, 10, 1 - BlendTime);
// 				InstancedSkyMaterial->SetScalarParameterValue(FName("Scale"), d);
// 			}
// 		}
// 
// 	}

}

bool ASimple360SkyActor::Set360Texture(class UTexture2D* t)
{
    if (InstancedSkyMaterial)
    {
        InstancedSkyMaterial->SetTextureParameterValue(FName("SkyTexture"), t);
    }
//     if (IsOver)
//     {
//         IsOver = false;
//         BlendTime = 1.0f;
// 		if (InstancedSkyMaterial)
// 		{
// 			InstancedSkyMaterial->SetTextureParameterValue(FName("SkyTexture2"), PreTexture);
// 		}
// 		return true;
// 	}

	return false;
}