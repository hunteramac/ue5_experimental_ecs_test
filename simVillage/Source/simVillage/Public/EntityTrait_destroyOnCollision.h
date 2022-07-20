// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassEntityQuery.h"
#include "MassEntitySubsystem.h"
#include "MassProcessor.h"
#include "MassObserverProcessor.h"
#include "EntityTrait_destroyOnCollision.generated.h"

/**
 * 
 */
UCLASS()
class SIMVILLAGE_API UEntityTrait_destroyOnCollision : public UMassEntityTraitBase
{
	GENERATED_BODY()
protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float TestNumber = 42.f;
};

UCLASS()
class UProcessor_checkCollision : public UMassProcessor
{
	GENERATED_BODY()
public:
	UProcessor_checkCollision();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

private:
	FMassEntityQuery EntityQuery;
};

USTRUCT()
struct FCollisionFragment : public FMassFragment
{
	GENERATED_BODY()
		class UBoxComponent* CollisionBox;
};

UCLASS()
class UInitProcessor_CollisionBox : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UInitProcessor_CollisionBox();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

	FMassEntityQuery EntityQuery;
};