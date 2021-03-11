// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSLaunchPad.generated.h"

UCLASS()
class FPSGAME_API AFPSLaunchPad : public AActor
{
	GENERATED_BODY()

public:

	// Sets default values for this actor's properties
	AFPSLaunchPad();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UBoxComponent* OverlapComponent = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	class UParticleSystem* ParticleEffect = nullptr;

	UPROPERTY(EditInstanceOnly, Category = "LauchPad")
	float LaunchStrength = 0;

	UPROPERTY(EditInstanceOnly, Category = "LauchPad")
	float LaunchPitchAngle = 0;

	UFUNCTION()
	void OverlapLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep,
		const FHitResult& SweepResult);

	
};
