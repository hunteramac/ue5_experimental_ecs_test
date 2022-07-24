// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "CoreMinimal.h"
#include "MassCommonTypes.h"
#include "Components/BoxComponent.h"
#include "EntityTrait_destroyOnCollision.generated.h"


USTRUCT(BlueprintType)
struct SIMVILLAGE_API FColliderFragment : public FMassSharedFragment
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UBoxComponent* Collider;

	FColliderFragment()
		: Collider(nullptr)
	{
	}
};

UCLASS()
class SIMVILLAGE_API UEntityTrait_destroyOnCollision : public UMassEntityTraitBase
{
	GENERATED_BODY()
	UPROPERTY(Category = "Collider", EditAnywhere)
	FColliderFragment Collider;
protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const override;
};




