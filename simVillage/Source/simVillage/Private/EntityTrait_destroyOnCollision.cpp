// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityTrait_destroyOnCollision.h"

#include "MassEntitySubsystem.h"
#include "MassEntityTemplateRegistry.h"
#include "MassCommonFragments.h"
#include "Engine/World.h"

void UEntityTrait_destroyOnCollision::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, UWorld& World) const
{
	//BuildContext.AddFragment<FColliderFragment>(); //Probably need to reference collision entity to search for nearby
}
