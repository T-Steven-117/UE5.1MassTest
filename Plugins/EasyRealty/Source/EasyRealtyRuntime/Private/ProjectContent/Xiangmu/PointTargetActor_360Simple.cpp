// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/PointTargetActor_360Simple.h"
#include "Component/RoundSelfRoamComponent.h"
#include "ProjectContent/Xiangmu/Simple360SkyActor.h"
#include <Kismet/GameplayStatics.h>
#include "ProjectContent/Xiangmu/Simple360Widget.h"
#include <UObject/ConstructorHelpers.h>
#include "Runtime/RealtyFunctionLibrary.h"
#include <Engine/PostProcessVolume.h>


APointTargetActor_360Simple::APointTargetActor_360Simple()
{


	CenterRoamComponent = CreateDefaultSubobject<URoundSelfRoamComponent>(TEXT("RoundSelfRoamComponent"));
	CenterRoamComponent->SetupAttachment(RootComponent);

	//ConstructorHelpers::FClassFinder<USimple360Widget> UIClassPtrObj(TEXT("WidgetBlueprint'/Game/Blueprints/yw/UMG_Simple360.UMG_Simple360_C'"));
	//UIClassPtr = UIClassPtrObj.Class;
}


void APointTargetActor_360Simple::BeginPlay()
{
	Super::BeginPlay();
	DelayAutoRotationTime = 0;
}


void APointTargetActor_360Simple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Simple360SkyActor)
	{
		return;
	}

	if (DelayAutoRotationTime > 0)
	{
		DelayAutoRotationTime -= DeltaTime;
	}

	if (AutoRotationContrl)
	{
		if (AutoRotationTime <= 0)
		{
			CenterRoamComponent->StartAutoRotation(DeltaTime);
		}
		else
		{
			AutoRotationTime -= DeltaTime;
		}
	}
	else
	{
		CenterRoamComponent->EndAutoRotation();
	}


}


void APointTargetActor_360Simple::OnControlLost()
{
	Super::OnControlLost();

	CenterRoamComponent->Init(nullptr);

	if (Simple360SkyActor)
	{
		Simple360SkyActor->Destroy();
		Simple360SkyActor = nullptr;
	}
	if (Simple360Widget)
	{
		Simple360Widget->RemoveFromParent();
		Simple360Widget = nullptr;
	}


	TArray<AActor*> posts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APostProcessVolume::StaticClass(), posts);
	for (int32 i = 0; i < posts.Num(); ++i)
	{
		APostProcessVolume* p = Cast<APostProcessVolume>(posts[i]);
		if (p)
		{
			p->bEnabled = true;
		}
	}

	if (a)
	{
		a->K2_DestroyActor();
		a = 0;
	}
}

void APointTargetActor_360Simple::OnControlGet()
{
	Super::OnControlGet();

	CenterRoamComponent->Init(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	FActorSpawnParameters asp;
	asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	Simple360SkyActor = GetWorld()->SpawnActor<ASimple360SkyActor>(ASimple360SkyActor::StaticClass(), GetActorTransform(), asp);
	Simple360Widget = CreateWidget<USimple360Widget>(GetWorld(), UIClassPtr);
	Simple360Widget->Simple360SkyActor = Simple360SkyActor;
	Simple360Widget->Simple360DataAsset = Simple360DataAsset;
	Simple360Widget->AddToViewport(20);

	AutoRotationTime = 0;
	AutoRotationContrl = true;
	DelayAutoRotationTime = 0.5f;
	TArray<AActor*> posts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APostProcessVolume::StaticClass(), posts);
	for (int32 i = 0;i < posts.Num();++i)
	{
		APostProcessVolume *p = Cast<APostProcessVolume>(posts[i]);
		if (p)
		{
			p->bEnabled = false;
		}
	}


	a = GetWorld()->SpawnActor<APostProcessVolume>(APostProcessVolume::StaticClass(), GetActorTransform(), asp);
	a->Settings.bOverride_AutoExposureMinBrightness = true;
	a->Settings.bOverride_AutoExposureMaxBrightness = true;
	a->Settings.AutoExposureMinBrightness = 1;
	a->Settings.AutoExposureMaxBrightness = 1;
	a->Priority = 10;
	a->bUnbound = true;
}


void APointTargetActor_360Simple::InitComp()
{
	CenterRoamComponent->InitComp();
}

void APointTargetActor_360Simple::OnLeftMouseButton_Pressed()
{
	if (DelayAutoRotationTime > 0)
		return;

	CenterRoamComponent->OnLeftMouseButton_Pressed();
	AutoRotationContrl = false;
}

void APointTargetActor_360Simple::OnLeftMouseButton_Released()
{
	if (DelayAutoRotationTime > 0)
		return;

	CenterRoamComponent->OnLeftMouseButton_Released();


	AutoRotationContrl = true;
	AutoRotationTime = 6;

}

void APointTargetActor_360Simple::OnRotationStart(FVector2D v)
{
	if (DelayAutoRotationTime > 0)
		return;

	CenterRoamComponent->OnRotationStart(v);

	
		AutoRotationContrl = false;
}

void APointTargetActor_360Simple::OnRotationEnd()
{
	if (DelayAutoRotationTime > 0)
		return;

	CenterRoamComponent->OnRotationEnd();


		AutoRotationContrl = true;
		AutoRotationTime = 6;

	
}

void APointTargetActor_360Simple::OnRotationUpdate(FVector2D v)
{
	if (DelayAutoRotationTime > 0)
		return;

	CenterRoamComponent->OnRotationUpdate(v);
}
