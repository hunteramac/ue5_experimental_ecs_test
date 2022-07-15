// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassEntityQuery.h"
#include "MassEntitySubsystem.h"
#include "MassProcessor.h"
#include "SimpleRandomMovementTrait.generated.h"

/**
 *
 */
UCLASS()
class USimpleRandomMovementTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()

protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const override;
};

USTRUCT()
struct FSimpleMovementFragment : public FMassFragment
{
	GENERATED_BODY()
		FVector Target;
};

UCLASS()
class USimpleRandomMovementProcessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	USimpleRandomMovementProcessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

private:
	FMassEntityQuery EntityQuery;
};