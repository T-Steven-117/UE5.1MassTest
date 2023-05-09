// Fill out your copyright notice in the Description page of Project Settings.


#include "Road/EditorToolUnits.h"
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <UObject/ConstructorHelpers.h>
#include <Materials/MaterialInterface.h>

AAreaNoiseActor::AAreaNoiseActor()
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	StaticMeshComponent->SetStaticMesh(MeshObj.Object);

}

void AAreaNoiseActor::SetInfo(int32 w, int32 h, class UMaterialInterface* NoiseMat)
{
	StaticMeshComponent->SetWorldScale3D(FVector(w, h, 1));

	StaticMeshComponent->SetMaterial(0, NoiseMat);
}
