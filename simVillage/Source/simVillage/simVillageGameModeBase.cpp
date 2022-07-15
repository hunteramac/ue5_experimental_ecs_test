// Copyright Epic Games, Inc. All Rights Reserved.


#include "simVillageGameModeBase.h"
#include "simVillage.h"

AsimVillageGameModeBase::AsimVillageGameModeBase()
{
}

void AsimVillageGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogsimVillage, Log, TEXT("Game is running: %s %s"), *MapName, *Options);
}
