// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Niaokan/PointTarget_Niaokan.h"
#include <Kismet/GameplayStatics.h>
#include "Component/RoamComponent.h"
#include "Runtime/RealtyPawn.h"


APointTarget_Niaokan::APointTarget_Niaokan()
{
	this->CreateDefaultRoamComponent();

}


void APointTarget_Niaokan::OnControlLost()
{
	Super::OnControlLost();

	RoamComponent->Init(nullptr);

}

void APointTarget_Niaokan::OnControlGet()
{
	Super::OnControlGet();


	RoamComponent->Init(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

}

void APointTarget_Niaokan::OnLeftMouseButton_Pressed()
{
	if (bNoMoving)
		return;
	RoamComponent->OnLeftMouseButton_Pressed();
}

void APointTarget_Niaokan::OnLeftMouseButton_Released()
{
	if (bNoMoving)
		return;
	RoamComponent->OnLeftMouseButton_Released();
}

void APointTarget_Niaokan::OnRightMouseButton_Pressed()
{
	RoamComponent->OnRightMouseButton_Pressed();
}

void APointTarget_Niaokan::OnRightMouseButton_Released()
{
	RoamComponent->OnRightMouseButton_Released();
}

void APointTarget_Niaokan::OnWheelChanged(float Value)
{
	RoamComponent->OnWheelChanged(Value);
}

void APointTarget_Niaokan::CreateDefaultRoamComponent()
{
	// RoamComponent = CreateDefaultSubobject<URoamComponent>(TEXT("RoamComponent"));
	
	RoamComponent = Cast<URoamComponent>(this->CreateDefaultSubobject(TEXT("RoamComponent"), RoamComponentClass, RoamComponentClass, true, false));
}

