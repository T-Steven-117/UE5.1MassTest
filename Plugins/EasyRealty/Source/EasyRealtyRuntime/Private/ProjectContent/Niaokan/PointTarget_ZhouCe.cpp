// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Niaokan/PointTarget_ZhouCe.h"

#include "Component/RoamComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/RealtyPawn.h"

URoamComponent_ZhouCe::URoamComponent_ZhouCe()
{

}

void URoamComponent_ZhouCe::OnRightMouseButton_Pressed()
{
	
}

void URoamComponent_ZhouCe::Init(class AActor* PawnActor)
{
	Super::Init(PawnActor);

	
}

void APointTarget_ZhouCe::CreateDefaultRoamComponent()
{
	// RoamComponent = CreateDefaultSubobject<URoamComponent_ZhouCe>(TEXT("RoamComponent_ZhouCe"));
}

void APointTarget_ZhouCe::BeginPlay()
{
	Super::BeginPlay();

	FTransform Local = GetActorTransform();
	Local = CenterPoint * Local;
	SetCenterPoint(Local.GetLocation());
}


void APointTarget_ZhouCe::SetCenterPoint(FVector NewCenterLocation)
{
	if (!RoamComponent)
		return;
	URoamComponent_ZhouCe* ZhouCeComponent = Cast<URoamComponent_ZhouCe>(RoamComponent);
	if (ZhouCeComponent)
		ZhouCeComponent->SetCenterPoint(NewCenterLocation);

}

APointTarget_ZhouCe::APointTarget_ZhouCe(const FObjectInitializer& ObjectInitializer)
{
	RoamComponent = CreateDefaultSubobject<URoamComponent_ZhouCe>(TEXT("RoamComponent"));
}

void URoamComponent_ZhouCe::SetCenterPoint(FVector NewCenterLocation)
{
	//FocusPoint = NewCenterLocation;
	
}

void APointTarget_ZhouCe::OnControlLost()
{
	Super::OnControlLost();
	RoamComponent->Init(nullptr);
	if (RealtyPawn)
		RealtyPawn->ConnectedRoamComp = nullptr;


}

void APointTarget_ZhouCe::OnControlGet()
{
	Super::OnControlGet();
	RoamComponent->Init(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	RealtyPawn = CastChecked<ARealtyPawn>(PlayerPawn);
	RealtyPawn->ConnectedRoamComp = RoamComponent;
}

void APointTarget_ZhouCe::OnRightMouseButton_Pressed()
{
	RoamComponent->OnRightMouseButton_Pressed();
}

void APointTarget_ZhouCe::OnRightMouseButton_Released()
{
	RoamComponent->OnRightMouseButton_Released();
}

void APointTarget_ZhouCe::OnWheelChanged(float Value)
{
	RoamComponent->OnWheelChanged(Value);
}

