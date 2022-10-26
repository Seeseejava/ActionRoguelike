// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionGameplayInterface.h"

#include "ActionItemChest.generated.h"



UCLASS()
class ACTIONROGUELIKE_API AActionItemChest : public AActor, public IActionGameplayInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActionItemChest();

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LidMesh;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	float TargetPitch;
	//����֮���Բ���Interact������ΪBlueprintNativeEvent
	void Interact_Implementation(APawn* InstigatorPawn) override;

};
