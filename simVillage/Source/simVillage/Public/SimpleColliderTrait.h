// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassEntityQuery.h"
#include "MassEntitySubsystem.h"
#include "MassProcessor.h"
#include "MassObserverProcessor.h"

//actor defined in project to test mass entity
#include "ActorMassTest.h"

#include "SimpleColliderTrait.generated.h"

UCLASS()
class SIMVILLAGE_API USimpleColliderTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()
	
protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const override;
};

USTRUCT(BlueprintType)
struct SIMVILLAGE_API FColliderFragment : public FMassFragment
{
	GENERATED_BODY()
		//UPROPERTY(BlueprintReadWrite, EditAnywhere)
		//UBoxComponent* Collider;
		//FMassEntityHandle ActorHandle;
		

};

UCLASS()
class UInitializeColliderProccessor : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UInitializeColliderProccessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context) override;

	FMassEntityQuery EntityQuery;
};