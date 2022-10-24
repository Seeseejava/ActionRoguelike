// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
AActionBarrel::AActionBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComp");
	RootComponent = StaticMeshComp;
	StaticMeshComp->SetSimulatePhysics(true);


	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>("RadialForceComp");
	RadialForceComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AActionBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActionBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

