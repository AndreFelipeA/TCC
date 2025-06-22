// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WFC/WFC.h"
#include "NWFC.generated.h"


USTRUCT()
struct FMatrix2DWFC
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TArray<FMatrixObject> M;

	
	FMatrixObject& operator[] (int32 i) { return M[i]; }
	
	void Add(const FMatrixObject& Matrix)
	{
		M.Add(Matrix);
	}
};

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class TCCZIN_API UNWFC : public UObject
{
	GENERATED_BODY()
public:
	UNWFC();

	UFUNCTION(Blueprintable, BlueprintCallable)
	void NestedWFC();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWFC* wfc;
protected:

	UPROPERTY(EditAnywhere)
	int Width;
	
	UPROPERTY(EditAnywhere)
	int Height;
	
	UPROPERTY(EditAnywhere)
	int C;

	
	TArray<FMatrixObject> NWFCMatrix;

	void OutputWFC();
	
	
};
