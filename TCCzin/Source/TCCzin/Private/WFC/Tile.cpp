// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC/Tile.h"

// Sets default values
ATile::ATile(void)
{

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	StaticMeshComponent->SetupAttachment(RootComponent);
	
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'")).Object;
	StaticMeshComponent->SetStaticMesh(StaticMesh);
	FVector Scale = [] { return FVector(15, 15, 15); }();
	
	StaticMeshComponent->SetRelativeScale3D(Scale);
	StaticMeshComponent->SetMaterial(0, MaterialInterface);
	
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	StaticMeshComponent->SetMaterial(0, MaterialInterface);
	FVector Scale = [] { return FVector(10, 10, 10); }();
	
	StaticMeshComponent->SetRelativeScale3D(Scale);
	
	StaticMeshComponent->SetStaticMesh(StaticMesh);
	// UE_LOG(LogClass, Log, TEXT("Material: %s"), *FString(MaterialInterface->GetName()));
	
	StaticMeshComponent->bForceDisableNanite = true;
}
