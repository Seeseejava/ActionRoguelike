// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionMagicProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class ACTIONROGUELIKE_API AActionMagicProjectile : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	AActionMagicProjectile();

protected:

	UPROPERTY(VisibleAnyWhere)
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnyWhere)
	UProjectileMovementComponent* MovementComp;

	UPROPERTY(VisibleAnyWhere)
	UParticleSystemComponent* EffectComp;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
