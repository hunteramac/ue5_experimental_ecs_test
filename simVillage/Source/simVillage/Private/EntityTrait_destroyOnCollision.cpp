// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityTrait_destroyOnCollision.h"
#include "MassEntitySubsystem.h"
#include "MassEntityTypes.h"
#include "MassCommonFragments.h"
#include "MassTranslator.h" 
#include "MassEntityQuery.h"
#include "MassEntityTemplateRegistry.h"

void UEntityTrait_destroyOnCollision::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	//BuildContext.AddFragment<FRAGMENTNAMEHERE>(); //Probably need to reference collision entity to search for nearby
}

UProcessor_checkCollision::UProcessor_checkCollision()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance); //this line means nothing without avoidance
}

void UProcessor_checkCollision::ConfigureQueries()
{
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	//EntityQuery.AddRequirement<FRAGMENTNAMEHERE>(EMassFragmentAccess::ReadWrite);
}

void UProcessor_checkCollision::Execute(UMassEntitySubsystem& EntitySubsystem, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntitySubsystem, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FTransformFragment> TransformList = Context.GetMutableFragmentView<FTransformFragment>();

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{

				FTransform& Transform = TransformList[EntityIndex].GetMutableTransform();
				//Use transform to check if nearby a class of actors./ Or another more efficent way of checking collision?

				//Compare nearby actors to the class in fragment

				//If near actors then terminate this entity
				//Else continue

				//^ AWK constantly checking conditions

			}
		}));
}
