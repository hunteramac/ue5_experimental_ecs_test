// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "simVillageGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class SIMVILLAGE_API AsimVillageGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	AsimVillageGameModeBase();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage);


};
