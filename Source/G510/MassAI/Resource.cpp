// Fill out your copyright notice in the Description page of Project Settings.


#include "Resource.h"
#include "BuildingSubsystem.h"
#include "SmartObjectComponent.h"
// Sets default values
AResource::AResource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	staticComp=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(staticComp);

}

// Called when the game starts or when spawned
void AResource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AResource::AddToResourceQueue()
{
	if (const USmartObjectComponent*SoComp=FindComponentByClass<USmartObjectComponent>())
	{
		FSmartObjectHandle SoHandle=SoComp->GetRegisteredHandle();
		GetWorld()->GetSubsystem<UBuildingSubsystem>()->AddResourceQueue(SoHandle);
	}
}

