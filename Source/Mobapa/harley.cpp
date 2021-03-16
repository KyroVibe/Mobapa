// Fill out your copyright notice in the Description page of Project Settings.


#include "harley.h"

// Sets default values
Aharley::Aharley()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	SphereComp->SetupAttachment(RootComponent);

	MeshBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshBody->SetupAttachment(SphereComp);
}

// Called when the game starts or when spawned
void Aharley::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aharley::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Aharley::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

