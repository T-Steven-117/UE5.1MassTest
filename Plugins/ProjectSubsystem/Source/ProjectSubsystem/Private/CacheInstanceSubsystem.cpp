// Fill out your copyright notice in the Description page of Project Settings.


#include "CacheInstanceSubsystem.h"
#include "../MVVMVieModel/StrategyPageViewModel.h"
#include "../MVVMVieModel/UserTopPageViewModelBase.h"
#include "Kismet/KismetStringLibrary.h"
#include "ModelViewViewModel/Public/MVVMSubsystem.h"

void UCacheInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	CacheStrategyPage = NewObject<UStrategyPageViewModel>(this);
	FMVVMViewModelContext StrategyPagecontext;
	StrategyPagecontext.ContextClass = UStrategyPageViewModel::StaticClass();
	StrategyPagecontext.ContextName = FName("Strategy");
	GEngine->GetEngineSubsystem<UMVVMSubsystem>()->GetGlobalViewModelCollection()->AddViewModelInstance(StrategyPagecontext, CacheStrategyPage);

	CacheUserTopPage = NewObject<UUserTopPageViewModelBase>(this);
	FMVVMViewModelContext UserTopcontext;
	UserTopcontext.ContextClass = UUserTopPageViewModelBase::StaticClass();
	UserTopcontext.ContextName = FName("UserTop");
	GEngine->GetEngineSubsystem<UMVVMSubsystem>()->GetGlobalViewModelCollection()->AddViewModelInstance(UserTopcontext, CacheUserTopPage);

	OnExcuteBeginPlay();
}

void UCacheInstanceSubsystem::Deinitialize()
{
	Super::Deinitialize();
	if (CacheUserTopPage)
		GEngine->GetEngineSubsystem<UMVVMSubsystem>()->GetGlobalViewModelCollection()->RemoveAllViewModelInstance(CacheUserTopPage);
	if (CacheStrategyPage)
		GEngine->GetEngineSubsystem<UMVVMSubsystem>()->GetGlobalViewModelCollection()->RemoveAllViewModelInstance(CacheStrategyPage);
	OnExcuteDestruct();
}


	
void UCacheInstanceSubsystem::SpawnMApActor(TSubclassOf<AActor>staticclass, FTransform ts, AActor*& MapActorRef)
{
	
	FActorSpawnParameters asp;
	asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	MapActorRef = GetWorld()->SpawnActor<AActor>(staticclass, ts, asp);


}