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
	TMap<int, TSubclassOf<UObjectTile>> ValidNeighboursN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidNeighboursS;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidNeighboursW;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidNeighboursE;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface *MaterialInterface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* StaticMesh;
	
	
};
