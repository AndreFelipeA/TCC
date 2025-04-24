// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC/WFC.h"

#include "WFC/ObjectTile.h"
#include "WFC/Tile.h"

UWFC::UWFC()
{
	Width = 10;
	Height = 10;
	for (int i = 0; i < Width; i++)
	{
		MBool.Add(FMatrixBool());
		Grid.Add(FMatrixObject());
		SpawnGrid.Add(FMatrixArray());
	}


}

void UWFC::WFC()
{
	UE_LOG(LogClass, Log, TEXT("Pipi Vagina"));
	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			MBool[i].Add(true);
			UObjectTile* Tile = NewObject<UObjectTile>();
			Tile->ValidTiles = Tiles;
			Grid[i].Add(*Tile);
		}
	}

	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			TObjectPtr<UObjectTile> Tile = Grid[i][j];
			FString string;
			for (auto it = Tile->ValidTiles.CreateConstIterator(); it; ++it)
			{
				string += it.Value()->GetName();
			}

			UE_LOG(LogClass, Log, TEXT("pos %d:%d , tile %s"), i,j, *string);
			
		}
	}


	while (true)
	{
		EObserveStatus result = Observe();

		

		print();
	
		if (result == Failure)
		{
			UE_LOG(LogClass, Log, TEXT("---------------- DEU MERDA -----------------"));

			return;
		}
		else if (result == Success)
		{
			UE_LOG(LogClass, Log, TEXT("---------------- TERMINOU -----------------"));

			return;
		}
		break;
		// AC3(Wave);
		
	}
	
}

int UWFC::GetNextPos()
{
	for (int i = 0; i < Width; i++)
	{
		for (int j = 0; j < Height; j++)
		{
			if (MBool[i][j] == true)
			{
				Wave = TTuple<int, int>(i, j);
				return -1;
			}
		}
	}

	return 0;
}

EObserveStatus UWFC::Observe()
{
	int Argmin = GetNextPos();
	if (Argmin == -2)
	{
		return Failure;
	}


	if (Argmin == 0)
	{
		WaveToOutput();
		return Success;
	}
	
	if (Queue.IsEmpty())
	{
		Queue.PushLast(Wave);
	}
	int x = Wave.Get<0>();
	int y = Wave.Get<1>();

	
	UE_LOG(LogClass, Log, TEXT("Escolhi o : %d:%d"), x, y);

	TSubclassOf<UObjectTile> tile = GetRandomTile();
	Grid[x][y]->ValidNeighbours = tile.GetDefaultObject()->ValidNeighbours;
	Grid[x][y]->MaterialInterface = tile.GetDefaultObject()->MaterialInterface;

	

	MBool[x][y] = false;
	
	return Continue;
}


void UWFC::AC3(TTuple<int, int> Tile)
{
		while (!Queue.IsEmpty())
    	{
    		TTuple<int, int> tile = Queue.First();
    		Queue.PopFirst();
    
    		int x = Tile.Get<0>();
    		int y = Tile.Get<1>();
    		
    		
    		int Directions_x[4] = {0, -1, 1, 0};
    		int Directions_y[4] = {-1, 0, 0, 1};
    
    		for (int i = 0; i < 4; i++)
    		{
    			TArray<int> TilesToRemove;
    			if (x + Directions_x[i] >= 0 && x + Directions_x[i] < Width && y + Directions_y[i] >= 0 && y + Directions_y[i] < Height && MBool[x + Directions_x[i]][y + Directions_y[i]] == true)
    			{
    				
    				for (auto it = Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.CreateConstIterator(); it; ++it)
    				{
    					if (!Grid[x][y]->ValidTiles.Find(it.Key()))
						{
							TilesToRemove.Add(it.Key());
						}
    				}
    			}

    			for (int j = 0; j < TilesToRemove.Num(); j++)
    			{
    				Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.Remove(TilesToRemove[i]);
    				
    			}
    			
    		}
    			
    	}
}

void UWFC::print()
{
	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			TObjectPtr<UObjectTile> Tile = Grid[i][j];
			FString string;
			FString stringNeighbour;
			for (auto it = Tile->ValidTiles.CreateConstIterator(); it; ++it)
			{
				string += it.Value()->GetName();
			}
			for (auto it = Tile->ValidNeighbours.CreateConstIterator(); it; ++it)
			{
				stringNeighbour += it.Value()->GetName();
			}

			UE_LOG(LogClass, Log, TEXT("pos %d:%d, Neighbours:%s,  Valid tiles %s"), i,j, *stringNeighbour, *string);
			
		}
	}
}


void UWFC::WaveToOutput()
{
	for (int i = 0; i < Width; i++)
	{
		for (int j = 0; j < Height; j++)
		{
			// TSubclassOf<ATile> spawnTile = Grid[i].M[j]->StaticClass();
			// ATile* tile = GetWorld()->SpawnActor<ATile>(spawnTile, FVector(i*(Width*Height), j*(Width*Height), 0), FRotator(0, 0, 0));
		}
	}
}

TSubclassOf<UObjectTile> UWFC::GetRandomTile()
{
	int rand =  FMath::RandRange(0, Tiles.Num() - 1);
	int i = 0;

	for (auto it = Tiles.CreateConstIterator(); it; ++it)
	{
		if (i == rand)
		{
			return it.Value();
		}
		i++;
	}

	return nullptr;
	
}



