// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ShapeComponent.h"

#include "ActorMassTest.generated.h"

UCLASS()
class SIMVILLAGE_API AActorMassTest : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	AActorMassTest();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		UShapeComponent* ShapeComponent;
		

};
