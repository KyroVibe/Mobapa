// Fill out your copyright notice in the Description page of Project Settings.


#include "MobapaController.h"

// Sets default values
AMobapaController::AMobapaController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComponent->SetupAttachment(RootComponent);

	MainBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainBod"));
	MainBody->SetupAttachment(SphereComponent);

	Boom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Boom"));
	Boom->SetupAttachment(SphereComponent);
	Boom->TargetArmLength = 500.0f;

	const FQuat Rotation = FQuat(FRotator(-90.0f, 0.0f, 0.0f));
	Boom->SetWorldRotation(Rotation);

	MainCam = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCam"));
	MainCam->SetupAttachment(Boom, USpringArmComponent::SocketName);
	MainCam->SetProjectionMode(ECameraProjectionMode::Orthographic);
	MainCam->OrthoWidth = 2000.0f;

	// MainCam->SetRelativeRotation(Rotation);

	// AActor::Reset();
}

// Called when the game starts or when spawned
void AMobapaController::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AMobapaController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector current = this->GetActorLocation();
	FVector newPos = FVector(current.X, current.Y, current.Z + (2.0f * DeltaTime));
	this->SetActorLocation(newPos);
}

// Called to bind functionality to input
void AMobapaController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

