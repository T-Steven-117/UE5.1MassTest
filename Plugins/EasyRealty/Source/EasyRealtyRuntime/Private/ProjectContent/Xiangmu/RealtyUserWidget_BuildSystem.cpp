// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h"

void URealtyUserWidget_BuildSystem::OnSwitchBuild(int32 index)
{
	PreBuildIndex = index;
	PreFloorIndex = -1;
	OnSwitchBuildingEvent.ExecuteIfBound(index);

}

void URealtyUserWidget_BuildSystem::OnSwitchFloor(int32 buildindex, int32 floorindex)
{
	PreBuildIndex = buildindex;
	PreFloorIndex = floorindex;
	OnSwitchFloorEvent.ExecuteIfBound(buildindex, floorindex);
}

void URealtyUserWidget_BuildSystem::OnShowScenery()
{

	OnShowSceneryEvent.ExecuteIfBound();
}