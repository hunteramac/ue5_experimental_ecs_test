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
