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
	//��������Ҫ����Ķ���
	TArray<FBuild>QueuedBuildings;
	//ʵ�����
	TArray<FMassEntityHandle>Agents;
	//��Դ
	TArray<FSmartObjectHandle>QueuedResources;

	ItemHashGrid3D ItemHashGrid=ItemHashGrid3D(500.f,FMassEntityHandle());

	UFUNCTION(BlueprintCallable)
	void AddResourceQueue(FSmartObjectHandle& SourceHandle);
	UFUNCTION()
	void AddAgent(const FMassEntityHandle& Entity);
	//������������ϵͳ����ʵ�幹��
	UFUNCTION(BlueprintCallable)
	void AddBuilding(const FSmartObjectHandle& BuildingRequest,int floors=1);
	//�����ĸ�¥��
	UFUNCTION()
	bool ClaimFloor(FSmartObjectHandle& OutBuilding);
	//�ҵ�����Դ
	bool FindItem(const FVector& Location,float Radius,EResourceType ResourceType,FMassEntityHandle&OutItemHandle)const;
	//��ȡ�������
	int GetQueueBuildings()const{return QueuedBuildings.Num(); }
	//��ȡ������Դ����
	void GetQueueResources(TArray<FSmartObjectHandle>& OutQueueResources)const{OutQueueResources= QueuedResources;}
	//������Դ
	bool ClaimResource(FSmartObjectHandle& OutResourceHandle);
};
