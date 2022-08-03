// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleColliderTrait.h"
#include "MassEntitySubsystem.h"
#include "MassEntityTypes.h"
#include "MassCommonFragments.h" //Access to FTransformFragment
#include "MassTranslator.h" 
#include "MassEntityQuery.h" //Ability to Query,


#include "GameFramework/Actor.h"
#include "MassAgentComponent.h"
#include "MassActorSubsystem.h"
#include "Engine/World.h"

//actor defined in project to test mass entity
#include "ActorMassTest.h"



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
			const TArrayView<FTransformFragment> TransformList = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FColliderFragment> TargetList = Context.GetMutableFragmentView<FColliderFragment>();
			static uint32 CurrentId = 0;

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{

			//for (FColliderFragment& ColliderFragment : TargetList)
			//{

				FRotator Rotation(0.0f, 0.0f, 0.0f);
				FActorSpawnParameters SpawnInfo;

				FTransform& Transform = TransformList[EntityIndex].GetMutableTransform();

				//need to have gotten world and pass to this call outside of the loop
				AActor* entityActor = GetWorld()->SpawnActor<AActor>(AActorMassTest, Transform, Rotation, SpawnInfo);

				
			}
		});
}