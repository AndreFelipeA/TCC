// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Deque.h"
#include "WFC.generated.h"

class UObjectTile;
class ATile;

USTRUCT()
struct FMatrixArray
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TArray<ATile*> M;
	ATile& operator[] (int32 i) { return *M[i]; }
	
	void Add(ATile* Tile)
	{
		M.Add(Tile);
	}
};

USTRUCT()
struct FMatrixBool
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TArray<bool> M;
	bool& operator[] (int32 i) { return M[i]; }
	
	void Add(bool Tile)
	{
		M.Add(Tile);
	}
};

USTRUCT()
struct FMatrixObject
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere)
	TArray<TObjectPtr<UObjectTile>> M;
	TObjectPtr<UObjectTile>& operator[] (const int32 i) { return M[i]; }
	
	void Add(TObjectPtr<UObjectTile> Tile)
	{
		M.Add(*Tile);
	}
};

USTRUCT()
struct FBacktrackStack
{
	GENERATED_BODY()
public:
	TArray<TTuple<int,int,int>> StackElements;
	TArray<TArray<FMatrixObject>> StackDomain;
	TArray<TArray<FMatrixBool>> StackBoolDomain;
	
	
};

enum EObserveStatus
{
	Success,
	Failure,
	Continue
};


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class TCCZIN_API UWFC : public UObject
{
	GENERATED_BODY()

public:
	UWFC();

	UFUNCTION(BlueprintCallable)
	 void WFC(int32 Width, int32 Height, int Heuristica);

	TArray<FMatrixObject> InternalWfc(int32 width, int32 height, TArray<FMatrixObject> Internal, TArray<FMatrixBool> InternalBool);

	

	TSubclassOf<UObjectTile> GetRandomTile();	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int , TSubclassOf<UObjectTile>> Tiles;
	TDeque<TTuple<int,int,int>> Queue;
protected:



	TArray<FMatrixArray> SpawnGrid;

	TArray<FMatrixObject> Grid;

	
	TArray<FMatrixBool> MBool;

	FBacktrackStack BacktrackStack;
	
	UPROPERTY(EditAnywhere)
	int Width;
	UPROPERTY(EditAnywhere)
	int Height;

	int64 Infinity = 9223372036854775807;

	TTuple<int,int,int> Wave;

	int GetNextPos();


	EObserveStatus Observe(int Heuristica);
	

	int Mrv();

	int HeuristicaMaluca();
	
	void WaveToOutput();

	bool AC3();

	void print();

	void RemoveFromDomain();

	TArray<FMatrixObject> CopyDomain();
	
};
