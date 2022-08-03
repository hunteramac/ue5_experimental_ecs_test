// Fill out your copyright notice in the Description page of Project Settings.



#include "ActorMassTest.h"

#include "Components/ShapeComponent.h"

// https://unrealcpp.com/add-component/
//add a box component

// Sets default values
AActorMassTest::AActorMassTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ShapeComponent = NewObject<UShapeComponent>();
	//do more intialization
	
}

/*

// Called when the game starts or when spawned
void AActorMassTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorMassTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

*/