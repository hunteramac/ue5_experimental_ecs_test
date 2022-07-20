// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleRandomMovementTrait.h"
#include "MassEntitySubsystem.h"
#include "MassEntityTypes.h"
#include "MassCommonFragments.h" //Access to FTransformFragment
#include "MassTranslator.h" 
#include "MassEntityQuery.h" //Ability to Query,

//for editor variable input
#include "MassEntityTemplateRegistry.h"
#include "MassCommonFragments.h"
#include "Engine/World.h"

#include "MassEntityTemplateRegistry.h"

//expose constants to be changed in mass spawner trait selection
float TARGET_CUBE_SIZE = 400.f; //double to get each side length, suboptimal
float ENTITY_SPEED = 400.f;
//working to replace these with trait spawner variables like found on DebugVisualization Trait.
//See function bellow rework

void UMassDebugVisualizationTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
#if WITH_EDITORONLY_DATA
	const UStaticMesh* const DebugMesh = DebugShape.Mesh;
#else
	const UStaticMesh* const DebugMesh = nullptr;
#endif

	if (DebugMesh)
	{
#if WITH_EDITORONLY_DATA
		FSimDebugVisFragment& DebugVisFragment = BuildContext.AddFragment_GetRef<FSimDebugVisFragment>();
		UMassDebuggerSubsystem* Debugger = World.GetSubsystem<UMassDebuggerSubsystem>();
		if (ensure(Debugger))
		{
			UMassDebugVisualizationComponent* DebugVisComponent = Debugger->GetVisualizationComponent();
			if (ensure(DebugVisComponent))
			{
				DebugVisFragment.VisualType = DebugVisComponent->AddDebugVisType(DebugShape);
			}
			// @todo this path requires a fragment destructor that will remove the mesh from the debugger.
		}
#endif // WITH_EDITORONLY_DATA
	}
	// add fragments needed whenever we have debugging capabilities
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
	BuildContext.AddTag<FMassDebuggableTag>();
#if WITH_EDITORONLY_DATA
	BuildContext.AddFragment_GetRef<FDataFragment_DebugVis>().Shape = DebugShape.WireShape;
#else
	// DebugShape unavailable, will used default instead
	BuildContext.AddFragment<FDataFragment_DebugVis>();
#endif // WITH_EDITORONLY_DATA
	BuildContext.AddFragment<FAgentRadiusFragment>();

	BuildContext.AddFragment<FTransformFragment>();
#endif // if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

}


void USimpleRandomMovementTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	BuildContext.AddFragment<FSimpleMovementFragment>();
}

UInitProcessor_RandomInitialTarget::UInitProcessor_RandomInitialTarget()
{
	ObservedType = FSimpleMovementFragment::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UInitProcessor_RandomInitialTarget::ConfigureQueries()
{
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void UInitProcessor_RandomInitialTarget::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, [](FMassExecutionContext& Context)
		{
			const TArrayView<FSimpleMovementFragment> TargetList = Context.GetMutableFragmentView<FSimpleMovementFragment>();
			static uint32 CurrentId = 0;
			for (FSimpleMovementFragment& MovementFragment : TargetList)
			{
				MovementFragment.Target = FVector(FMath::RandRange(-1.f, 1.f) * TARGET_CUBE_SIZE, FMath::RandRange(-1.f, 1.f) * TARGET_CUBE_SIZE, FMath::RandRange(0.f, 2.f) * TARGET_CUBE_SIZE);
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
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void UProcessor_RandomTarget::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, [](FMassExecutionContext& Context)
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

				//if near target, select new random target
				if (TargetVector.Size() <= 20.f)
				{
					MoveTarget = FVector(FMath::RandRange(-1.f, 1.f) * TARGET_CUBE_SIZE, FMath::RandRange(-1.f, 1.f) * TARGET_CUBE_SIZE, FMath::RandRange(0.f, 2.f) * TARGET_CUBE_SIZE);
				}
				
			}
		});
}

UProcessor_SimpleMovement::UProcessor_SimpleMovement()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance); //this line means nothing without avoidance
}

void UProcessor_SimpleMovement::ConfigureQueries()
{
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FSimpleMovementFragment>(EMassFragmentAccess::ReadWrite);
}

void UProcessor_SimpleMovement::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, ([this](FMassExecutionContext& Context)
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

				//movement
				Transform.SetLocation(CurrentLocation + TargetVector.GetSafeNormal() * ENTITY_SPEED * WorldDeltaTime);
				
			}
		}));
}
