// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleColliderTrait.h"
#include "MassEntitySubsystem.h"
#include "MassEntityTypes.h"
#include "MassCommonFragments.h" //Access to FTransformFragment
#include "MassTranslator.h" 
#include "MassEntityQuery.h" //Ability to Query,
#include "MassEntityTemplateRegistry.h"

void USimpleColliderTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	BuildContext.AddFragment<FColliderFragment>();
}


UInitializeColliderProccessor::UInitializeColliderProccessor()
{
	ObservedType = FColliderFragment::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UInitializeColliderProccessor::ConfigureQueries()
{
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FColliderFragment>(EMassFragmentAccess::ReadWrite);
}

void UInitializeColliderProccessor::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, [](FMassExecutionContext& Context)
		{
			const TArrayView<FColliderFragment> TargetList = Context.GetMutableFragmentView<FColliderFragment>();
			static uint32 CurrentId = 0;
			for (FColliderFragment& ColliderFragment : TargetList)
			{
				ColliderFragment.Collider = NewObject<UBoxComponent>();;
			}
		});
}