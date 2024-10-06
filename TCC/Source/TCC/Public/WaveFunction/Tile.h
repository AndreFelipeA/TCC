// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

class ATile;

USTRUCT(BlueprintType)
struct FTileArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ATile>> Tiles;
};

UCLASS(BlueprintType, Blueprintable)
class TCC_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
	TArray<ATile>	InventoryContent;

	UPROPERTY(EditDefaultsOnly)
	TMap<FString, FTileArray> ValidNeighbors;
};
