#pragma once

#include "CoreMinimal.h"
#include "MassCommonTypes.h"
#include "Components/BoxComponent.h"
#include "ColliderFragment.generated.h"

USTRUCT(BlueprintType)
struct FColliderFragment : public FMassFragment
{
	GENERATED_BODY()
		FVector Target;
};