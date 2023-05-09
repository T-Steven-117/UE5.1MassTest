// Fill out your copyright notice in the Description page of Project Settings.


#include "G510PrimaryData.h"

FPrimaryAssetId UG510PrimaryData::GetPrimaryAssetId() const
{
	return  FPrimaryAssetId(ThisType,GetFName());
}
