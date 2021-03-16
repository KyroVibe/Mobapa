// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/SphereComponent.h>

#include "MobapaController.generated.h"

UCLASS()
class MOBAPA_API AMobapaController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMobapaController();

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UStaticMeshComponent* MainBody;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* MainCam;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* Boom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float speed = 5.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetRotation(float r);
	void MoveVertical(float a);
	void MoveHorizontal(float b);

};
