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

UInitProcessor_randomInitialTarget::UInitProcessor_randomInitialTarget()
{
	ObservedType = FSimpleMovementFragment::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UInitProcessor_randomInitialTarget::ConfigureQueries()
{
	MyQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	MyQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void UInitProcessor_randomInitialTarget::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	MyQuery.ForEachEntityChunk(EntitySubsystem, Context, [](FMassExecutionContext& Context)
		{
			const TArrayView<FSimpleMovementFragment> TargetList = Context.GetMutableFragmentView<FSimpleMovementFragment>();
			static uint32 CurrentId = 0;
			for (FSimpleMovementFragment& MovementFragment : TargetList)
			{
				MovementFragment.Target = FVector(FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(0.f, 2.f) * 1000.f);
			}
		});
}

UProcessor_RandomTarget::UProcessor_RandomTarget()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
}

void UProcessor_RandomTarget::ConfigureQueries()
{
	MyQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	MyQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void UProcessor_RandomTarget::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	MyQuery.ForEachEntityChunk(EntitySubsystem, Context, [](FMassExecutionContext& Context)
		{
			const TArrayView<FTransformFragment> TransformList = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FSimpleMovementFragment> SimpleMovementList = Context.GetMutableFragmentView<FSimpleMovementFragment>();
			const float WorldDeltaTime = Context.GetDeltaTimeSeconds();

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				FTransform& Transform = TransformList[EntityIndex].GetMutableTransform();
				FVector& MoveTarget = SimpleMovementList[EntityIndex].Target;

				FVector CurrentLocation = Transform.GetLocation();
				FVector TargetVector = MoveTarget - CurrentLocation;

				if (TargetVector.Size() <= 20.f)
				{
					MoveTarget = FVector(FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(0.f, 2.f) * 1000.f);
				}
				
			}
		});
}

USimpleRandomMovementProcessor::USimpleRandomMovementProcessor()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance); //this line means nothing without avoidance
}

void USimpleRandomMovementProcessor::ConfigureQueries()
{
	MyQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	MyQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void USimpleRandomMovementProcessor::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	MyQuery.ForEachEntityChunk(EntitySubsystem, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FTransformFragment> TransformList = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FSimpleMovementFragment> SimpleMovementList = Context.GetMutableFragmentView<FSimpleMovementFragment>();
			const float WorldDeltaTime = Context.GetDeltaTimeSeconds();

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				FTransform& Transform = TransformList[EntityIndex].GetMutableTransform();
				FVector& MoveTarget = SimpleMovementList[EntityIndex].Target;

				FVector CurrentLocation = Transform.GetLocation();
				FVector TargetVector = MoveTarget - CurrentLocation;

				//MoveTarget = FVector(FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(-1.f, 1.f) * 1000.f, FMath::RandRange(0.f, 2.f) * 1000.f);
				Transform.SetLocation(CurrentLocation + TargetVector.GetSafeNormal() * 400.f * WorldDeltaTime);
				
			}
		}));
}
