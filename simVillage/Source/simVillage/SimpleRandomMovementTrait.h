// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassEntityQuery.h"
#include "MassEntitySubsystem.h"
#include "MassProcessor.h"
#include "MassObserverProcessor.h"
#include "SimpleRandomMovementTrait.generated.h"

#if WITH_EDITORONLY_DATA
UPROPERTY(EditAnywhere, Category = "SimpleMove")
FRandomMovementControl MovementControl;
#endif // WITH_EDITORONLY_DATA


USTRUCT()
struct FRandomMovementControl : public FMassFragment
{
	GENERATED_BODY()
	float MoveTarget_CubeSize;
	float Entity_Speed;
};

UCLASS()
class USimpleRandomMovementTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()
		static const float TARGET_RANGE_X;

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
class UProcessor_SimpleMovement : public UMassProcessor
{
	GENERATED_BODY()
public:
	UProcessor_SimpleMovement();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

private:
	FMassEntityQuery EntityQuery;
};

UCLASS()
class UProcessor_RandomTarget : public UMassProcessor
{
	GENERATED_BODY()
public:
	UProcessor_RandomTarget();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

private:
	FMassEntityQuery EntityQuery;
};

UCLASS()
class UInitProcessor_RandomInitialTarget : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UInitProcessor_RandomInitialTarget();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

	FMassEntityQuery EntityQuery;
};