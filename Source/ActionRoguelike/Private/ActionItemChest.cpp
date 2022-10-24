// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionItemChest.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AActionItemChest::AActionItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BaseMesh);

	TargetPitch = 110.0f;
}

// Called when the game starts or when spawned
void AActionItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActionItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActionItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	LidMesh->SetRelativeRotation(FRotator(TargetPitch, 0, 0));//(y,z,x)->(pitch, yaw, roll)
}

