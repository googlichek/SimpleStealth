// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSBlackHole.generated.h"

UCLASS()
class FPSGAME_API AFPSBlackHole : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AFPSBlackHole();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

protected:

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USphereComponent* InnerSphereComponent = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USphereComponent* OuterSphereComponent = nullptr;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UStaticMeshComponent* MeshComponent = nullptr;

    UFUNCTION()
    void OverlapInnerSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
