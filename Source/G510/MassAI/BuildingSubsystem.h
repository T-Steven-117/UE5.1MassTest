// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SmartObjectTypes.h"
#include "Spatial\PointHashGrid3.h"
#include "AgentTrait.h"
#include "BuildingSubsystem.generated.h"


typedef UE::Geometry::TPointHashGrid3<FMassEntityHandle,Chaos::FReal>ItemHashGrid3D;

USTRUCT()
struct G510_API FBuild
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	FSmartObjectHandle BuildingRequest;
	UPROPERTY()
	int FloorNeeded =1;
	FBuild(){}

	FBuild(const FSmartObjectHandle& BuildingRequest, int FloorNeeded)
	{
		this->BuildingRequest=BuildingRequest;
		this->FloorNeeded=FloorNeeded;
	}
	bool operator ==(const FBuild& OtherBuilding) const 
	{
		return OtherBuilding.BuildingRequest==this->BuildingRequest;
	}
};

UCLASS()
class G510_API UBuildingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FSmartObjectHandle Agent;
	//队列里需要建造的东西
	TArray<FBuild>QueuedBuildings;
	//实体代理
	TArray<FMassEntityHandle>Agents;
	//资源
	TArray<FSmartObjectHandle>QueuedResources;

	ItemHashGrid3D ItemHashGrid=ItemHashGrid3D(500.f,FMassEntityHandle());

	UFUNCTION(BlueprintCallable)
	void AddResourceQueue(FSmartObjectHandle& SourceHandle);
	UFUNCTION()
	void AddAgent(const FMassEntityHandle& Entity);
	//将建筑加入子系统，用实体构建
	UFUNCTION(BlueprintCallable)
	void AddBuilding(const FSmartObjectHandle& BuildingRequest,int floors=1);
	//建造哪个楼层
	UFUNCTION()
	bool ClaimFloor(FSmartObjectHandle& OutBuilding);
	//找到的资源
	bool FindItem(const FVector& Location,float Radius,EResourceType ResourceType,FMassEntityHandle&OutItemHandle)const;
	//获取建造队列
	int GetQueueBuildings()const{return QueuedBuildings.Num(); }
	//获取建筑资源队列
	void GetQueueResources(TArray<FSmartObjectHandle>& OutQueueResources)const{OutQueueResources= QueuedResources;}
	//声明资源
	bool ClaimResource(FSmartObjectHandle& OutResourceHandle);
};
