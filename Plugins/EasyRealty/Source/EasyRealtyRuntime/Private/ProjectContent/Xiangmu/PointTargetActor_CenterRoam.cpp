// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/PointTargetActor_CenterRoam.h"
#include "Component/CenterRoamComponent.h"


APointTargetActor_CenterRoam::APointTargetActor_CenterRoam()
{

	CenterRoamComponent = CreateDefaultSubobject<UCenterRoamComponent>(TEXT("CenterRoamComponent"));
	CenterRoamComponent->SetupAttachment(RootComponent);


}


void APointTargetActor_CenterRoam::BeginPlay()
{
	Super::BeginPlay();

}


void APointTargetActor_CenterRoam::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void APointTargetActor_CenterRoam::OnControlLost()
{
	Super::OnControlLost();

	CenterRoamComponent->OnControlLost();

}

void APointTargetActor_CenterRoam::OnControlGet()
{
	Super::OnControlGet();

	CenterRoamComponent->OnControlGet();
}


void APointTargetActor_CenterRoam::OnLeftMouseButton_Pressed()
{
	CenterRoamComponent->OnLeftMouseButton_Pressed();
}

void APointTargetActor_CenterRoam::OnLeftMouseButton_Released()
{
	CenterRoamComponent->OnLeftMouseButton_Released();
}
