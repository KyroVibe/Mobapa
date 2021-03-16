// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include <Components/SphereComponent.h>
#include <Components/StaticMeshComponent.h>

#include "harley.generated.h"

UCLASS()
class MOBAPA_API Aharley : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Aharley();

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UStaticMeshComponent* MeshBody;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
