// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFPSObjectiveActor();

protected:

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UStaticMeshComponent* MeshComponent = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USphereComponent* SphereComponent = nullptr;

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
};
