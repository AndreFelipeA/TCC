// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC/WFC.h"

#include "WFC/ObjectTile.h"
#include "WFC/Tile.h"

UWFC::UWFC()
{
}

void UWFC::WFC(const int32 width,const int32 height)
{
	this->Height = height;
	this->Width = width;

	for (int i = 0; i < Width; i++)
	{
		MBool.Add(FMatrixBool());
		Grid.Add(FMatrixObject());
		SpawnGrid.Add(FMatrixArray());
	}
	
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

	// for (int i = 0; i < Width; ++i)
	// {
	// 	for (int j  = 0; j < Height; j++)
	// 	{
	// 		TObjectPtr<UObjectTile> Tile = Grid[i][j];
	// 		FString string;
	// 		for (auto it = Tile->ValidTiles.CreateConstIterator(); it; ++it)
	// 		{
	// 			string += it.Value()->GetName();
	// 		}
	//
	// 		// UE_LOG(LogClass, Log, TEXT("pos %d:%d , tile %s"), i,j, *string);
	// 		
	// 	}
	// }


	while (true)
	{
		EObserveStatus result = Observe();
		
		if (result == Failure)
		{
			UE_LOG(LogClass, Log, TEXT("---------------- DEU MERDA -----------------"));

			return;
		}
		else if (result == Success)
		{
			UE_LOG(LogClass, Log, TEXT("---------------- TERMINOU -----------------"));
			WaveToOutput();
			return;
		}
		
		AC3();
		// print();

		
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
	int Argmin = Mrv();
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
	MBool[x][y] = false;
	// UE_LOG(LogClass, Log, TEXT("Escolhi: %d,%d"), x, y);
	

	TSubclassOf<UObjectTile> tile = GetRandomTile();
	if (tile != nullptr)
	{
		Grid[x][y]->ValidNeighbours = tile.GetDefaultObject()->ValidNeighbours;
		Grid[x][y]->MaterialInterface = tile.GetDefaultObject()->MaterialInterface;
		
	}
	else
	{
		// UE_LOG(LogClass, Log, TEXT("Escolhi: %d,%d e veio null"), x, y);

	}

	

	
	return Continue;
}

int UWFC::Mrv()
{
	int32 Min = 2147483647;

	int32 Argmin = 0;

	
	for (int i = 0; i < Width; i++)
	{
		for (int j = 0; j < Height; j++)
		{
			if (MBool[i][j] == true)
			{
				int32 Domain = Grid[i][j]->ValidTiles.Num();
				
				if (Domain < Min)
				{
					Min = Domain;
					Wave = TTuple<int, int>(i, j);
					Argmin = -1;
					
					
				}
			}
		}
	}

	return Argmin;
}


void UWFC::AC3()
{
		while (!Queue.IsEmpty())
    	{
    		TTuple<int, int> tile = Queue.First();
    		Queue.PopFirst();
			// UE_LOG(LogClass, Log, TEXT("Queue Tam : %d"), Queue.Num());

    		int x = tile.Get<0>();
    		int y = tile.Get<1>();
    		
    		
    		int Directions_x[4] = {0, -1, 1, 0};
    		int Directions_y[4] = {-1, 0, 0, 1};
    
    		for (int i = 0; i < 4; i++)
    		{
    			TArray<int> TilesToRemove;

    			if (MBool[x][y] == false)
    			{
    				if (x + Directions_x[i] >= 0 && x + Directions_x[i] < Width && y + Directions_y[i] >= 0 && y + Directions_y[i] < Height && MBool[x + Directions_x[i]][y + Directions_y[i]] == true)
    				{
    					// UE_LOG(LogClass, Log, TEXT("AC3 : %d,%d"), x+Directions_x[i], y+Directions_y[i]);

    					for (auto it = Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.CreateConstIterator(); it; ++it)
    					{
    						if (!Grid[x][y]->ValidNeighbours.Find(it.Key()))
    						{
    							TilesToRemove.Add(it.Key());
    						}
    					}
    				}
    			}
			    else
			    {
			    	if (x + Directions_x[i] >= 0 && x + Directions_x[i] < Width && y + Directions_y[i] >= 0 && y + Directions_y[i] < Height && MBool[x + Directions_x[i]][y + Directions_y[i]] == true)
			    	{
			    		// UE_LOG(LogClass, Log, TEXT("AC3 sem vizinhos : %d,%d"), x+Directions_x[i], y+Directions_y[i]);

			    		for (auto it = Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.CreateConstIterator(); it; ++it)
			    		{
			    			
			    			for (auto it2 = Grid[x][y]->ValidTiles.CreateConstIterator(); it2; ++it2)
			    			{
			    				// UE_LOG(LogClass, Log, TEXT("Comparando: %s com :%s"), *it.Value()->GetDefaultObject()->GetName(), *it2.Value().GetDefaultObject()->GetName());

			    				if (!it2.Value().GetDefaultObject()->ValidNeighbours.Find(it.Key()))
			    				{
			    					
			    					TilesToRemove.Add(it.Key());
			    				}
			    			}
			    		}
			    	}
			    }


    			if (TilesToRemove.Num() > 0)
    			{
    				// UE_LOG(LogClass, Log, TEXT("Tiles to Remove :%d"), TilesToRemove.Num());
    				for (int j = 0; j < TilesToRemove.Num(); j++)
    				{
    					Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.Remove(TilesToRemove[j]);
    				
    				}

    				Queue.PushLast(TTuple<int,int> (x+Directions_x[i],y+Directions_y[i]));
    			}

    			TilesToRemove.Empty();
    			
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
			if (Tile->MaterialInterface != nullptr)
			{
				
				UE_LOG(LogClass, Log, TEXT("pos %d:%d, Cor:%s Neighbours:%s,  Valid tiles %s"), i,j, *Tile->MaterialInterface->GetName() , *stringNeighbour, *string);
			}
			else
			{
				UE_LOG(LogClass, Log, TEXT("pos %d:%d, Neighbours:%s,  Valid tiles %s"), i,j , *stringNeighbour, *string);
			}
			
			
		}
	}
}


void UWFC::WaveToOutput()
{
	for (int i = 0; i < Width; i++)
	{
		for (int j = 0; j < Height; j++)
		{
			const FVector SpawnLocation = FVector(i*(10*10), j*(10*10), 0.0f);
			const FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
			FActorSpawnParameters SpawnInfo;
			
			
			ATile* SpawntTile = GetWorld()->SpawnActor<ATile>(ATile::StaticClass(), SpawnLocation, SpawnRotation, SpawnInfo);
			SpawntTile->MaterialInterface = Grid[i][j]->MaterialInterface;
			SpawntTile->StaticMeshComponent->SetMaterial(0, SpawntTile->MaterialInterface);

			
		}
	}
}

TSubclassOf<UObjectTile> UWFC::GetRandomTile()
{
	int x = Wave.Get<0>();
	int y = Wave.Get<1>();
	int rand =  FMath::RandRange(0, Grid[x][y]->ValidTiles.Num() - 1);
	int i = 0;

	for (auto it = Grid[x][y]->ValidTiles.CreateConstIterator(); it; ++it)
	{
		if (i == rand)
		{
			return it.Value();
		}
		i++;
	}

	return nullptr;
	
}