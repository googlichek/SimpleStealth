// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSExtractionZone.generated.h"

UCLASS()
class FPSGAME_API AFPSExtractionZone : public AActor
{
    GENERATED_BODY()

public:

    // Sets default values for this actor's properties
    AFPSExtractionZone();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UBoxComponent* OverlapComponent = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UDecalComponent* DecalComponent = nullptr;

    UFUNCTION()
    void HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
