// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObjectTile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class TCCZIN_API UObjectTile : public UObject
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidNeighbours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface *MaterialInterface;
	
};
