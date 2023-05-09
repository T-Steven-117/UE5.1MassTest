// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Niaokan/RoundPointTargetActor.h"
#include "Component/RoundSelfRoamComponent.h"


ARoundPointTargetActor::ARoundPointTargetActor()
{
	RoamComponent = this->CreateDefaultSubobject<URoundSelfRoamComponent>(TEXT("RoamComponent"));
}


void ARoundPointTargetActor::OnControlLost()
{
	Super::OnControlLost();

	RoamComponent->Init(nullptr);

}

void ARoundPointTargetActor::OnControlGet()
{
	Super::OnControlGet();


	RoamComponent->Init(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

}

void ARoundPointTargetActor::OnRightMouseButton_Pressed()
{
	RoamComponent->OnLeftMouseButton_Pressed();
}

void ARoundPointTargetActor::OnRightMouseButton_Released()
{
	RoamComponent->OnLeftMouseButton_Released();
}
