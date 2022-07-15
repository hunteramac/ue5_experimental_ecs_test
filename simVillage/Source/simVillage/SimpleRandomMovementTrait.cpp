// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleRandomMovementTrait.h"
#include "MassEntitySubsystem.h"
#include "MassEntityTypes.h"
#include "MassCommonFragments.h" //Access to FTransformFragment
#include "MassTranslator.h" 
#include "MassEntityQuery.h" //Ability to Query,
#include "MassEntityTemplateRegistry.h"


void USimpleRandomMovementTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	BuildContext.AddFragment<FSimpleMovementFragment>();
}

USimpleRandomMovementProcessor::USimpleRandomMovementProcessor()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance);
}

void USimpleRandomMovementProcessor::ConfigureQueries()
{
	//filtering for entities. could have tag filtering here
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void USimpleRandomMovementProcessor::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FTransformFragment> TransformList = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FSimpleMovementFragment> SimpleMovementList = Context.GetMutableFragmentView<FSimpleMovementFragment>();
			const float WorldDeltaTime = Context.GetDeltaTimeSeconds();

			//need debug statement here, is this even running?

			// itterate over all 'moving entities' and apply this
			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				//code that makes the entities move. 
				//Demo notes: ideally we would only be working on target. or movement. Inside one proccessor
				//but for tutorial target to move to and moving has been grouped together
				//Ideally one proccessor only cares about moving entity //reading not writing target info
				//And another proccessor that updates target when entity is close enough. Only reads transform when object is close enough
				FTransform& Transform = TransformList[EntityIndex].GetMutableTransform();
				FVector& MoveTarget = SimpleMovementList[EntityIndex].Target;

				FVector CurrentLocation = Transform.GetLocation();
				FVector TargetVector = MoveTarget - CurrentLocation;

				if (TargetVector.Size() <= 20.f)
				{
					MoveTarget = FVector(FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(-1.f, 1.f) * 1000.f, CurrentLocation.Z);
				}
				else
				{
					Transform.SetLocation(CurrentLocation + TargetVector.GetSafeNormal() * 400.f * WorldDeltaTime);
				}
			}
		}));
}
