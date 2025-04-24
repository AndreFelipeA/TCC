// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC/Tile.h"

// Sets default values
ATile::ATile(void)
{

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMeshComponent->SetupAttachment(RootComponent);
	
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	StaticMeshComponent->SetStaticMesh(cubeMesh);
	
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();

	if (MaterialInterface)
	{
		StaticMeshComponent->SetMaterial(0, MaterialInterface);
		
	}
}
