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
	TArray<FString> ValidNeighboursN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ValidNeighboursS;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ValidNeighboursW;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ValidNeighboursE;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, TSubclassOf<UObjectTile>> ValidTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface *MaterialInterface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* StaticMesh;
	
	
};
