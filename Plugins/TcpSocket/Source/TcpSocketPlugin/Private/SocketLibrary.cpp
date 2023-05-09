// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketLibrary.h"
//#include"Windows/WindowsPlatformMisc.h

TArray<FString> USocketLibrary::GetAllMacAddress()
{
	TArray<FString>Mac;
	TArray<uint8>MacAddress=FWindowsPlatformMisc::GetMacAddress();
	FString a1=FWindowsPlatformMisc::GetMacAddressString();
	if (MacAddress.Num())
	{
		FUTF8ToTCHAR Convert(reinterpret_cast<const char*>(MacAddress.GetData()), MacAddress.Num());
		FString res(Convert);
		Mac.Add(MoveTemp(res));
		return Mac;
	}
	return Mac;
}


FString USocketLibrary::GetMacAddress()
{	
	return FWindowsPlatformMisc::GetMacAddressString();
}
