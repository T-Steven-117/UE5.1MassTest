// Fill out your copyright notice in the Description page of Project Settings.


#include "PreviewScene/PreviewSceneEnviromentActor.h"
#include <Components/SceneComponent.h>
#include <UObject/ConstructorHelpers.h>
#include <Engine/StaticMesh.h>
#include <Kismet/KismetMaterialLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Engine/TextureCube.h>


// Sets default values
APreviewSceneEnviromentActor::APreviewSceneEnviromentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SkyComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkyComponent"));
	SkyComponent->SetupAttachment(RootComponent);
	ConstructorHelpers::FObjectFinder<UStaticMesh> SMSkyObj(TEXT("StaticMesh'/EasyRealty/PreviewScene/SM_PreviewSceneSky.SM_PreviewSceneSky'"));
	ConstructorHelpers::FObjectFinder<UMaterial> MatSkyObj(TEXT("Material'/EasyRealty/PreviewScene/Mat_PreviewSceneSky.Mat_PreviewSceneSky'"));
	SkyComponent->SetStaticMesh(SMSkyObj.Object);
	MID = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(),MatSkyObj.Object);

	SkyComponent->SetMaterial(0, (UMaterialInterface *)MID);
	SkyComponent->SetWorldScale3D(FVector(100));
	SkyComponent->SetWorldRotation(FRotator(0, 120, 0));
	SkyComponent->CastShadow = false;

}

// Called when the game starts or when spawned
void APreviewSceneEnviromentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APreviewSceneEnviromentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APreviewSceneEnviromentActor::SetTexture(class UTexture2D* t)
{
	MID->SetTextureParameterValue(TEXT("SphereTex"),t);
}
