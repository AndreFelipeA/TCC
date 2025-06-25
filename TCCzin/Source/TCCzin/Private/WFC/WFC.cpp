// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC/WFC.h"

#include "WFC/ObjectTile.h"
#include "WFC/Tile.h"
#include "HAL/PlatformTime.h"
#include "HAL/PlatformMemory.h"
UWFC::UWFC()
{
}


void UWFC::WFC(const int32 width,const int32 height, int Heuristica)
{
	double StartTime = FPlatformTime::Seconds();
	const FPlatformMemoryStats BeforeStats = FPlatformMemory::GetStats();
	int backtracking = 0;

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
	
	while (true)
	{

		
		EObserveStatus result = Observe(Heuristica);
	
		if (result == Failure)
		{

			break;
		}
		else if (result == Success)
		{

			// WaveToOutput();
			double EndTime = FPlatformTime::Seconds();
			double DeltaMs = (EndTime - StartTime) * 1000.0;
			UE_LOG(LogTemp, Log, TEXT("WFC levou %.3f ms"), DeltaMs);
			const FPlatformMemoryStats AfterStats = FPlatformMemory::GetStats();
			int64_t DeltaBytes = int64_t(AfterStats.UsedPhysical) - int64_t(BeforeStats.UsedPhysical);
			float DeltaMB = DeltaBytes / (1024.0f * 1024.0f);
			UE_LOG(LogTemp, Log, TEXT("MinhaFuncao usou ~%.2f MB"), DeltaMB);

			break;
		}
	
		if (AC3() == false)
		{
			UE_LOG(LogTemp, Log, TEXT("BackTracking"));
			// Wave = BacktrackStack.StackElements.Last();
			// Grid = BacktrackStack.StackDomain.Last();
			// MBool = BacktrackStack.StackBoolDomain.Last();
			// BacktrackStack.StackElements.Pop();
			// BacktrackStack.StackDomain.Pop();
			// BacktrackStack.StackBoolDomain.Pop();
			// RemoveFromDomain();

		
		}


	}
	
}

TArray<FMatrixObject> UWFC::InternalWfc(int32 width, int32 height, TArray<FMatrixObject> Internal, TArray<FMatrixBool> InternalBool, int Heuristica)
{
	this->Height = height;
	this->Width = width;

	MBool = InternalBool;
	Grid = Internal;

	
	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			MBool[i].Add(true);
		}
	}

	AC3();

	while (true)
	{
		EObserveStatus result = Observe(Heuristica);
		
		if (result == Failure)
		{

			break;
		}
		if (result == Success)
		{
			BacktrackStack.StackElements.Empty();
			BacktrackStack.StackDomain.Empty();
			BacktrackStack.StackBoolDomain.Empty();
			return Grid; 
		}
		
		if (AC3() == false)
		{
			
			
			// print();
			// Wave = BacktrackStack.StackElements.Last();
			// Grid = BacktrackStack.StackDomain.Last();
			// MBool = BacktrackStack.StackBoolDomain.Last();
			// BacktrackStack.StackElements.Pop();
			// BacktrackStack.StackDomain.Pop();
			// BacktrackStack.StackBoolDomain.Pop();
			// RemoveFromDomain();


	
		}

	}
	return Grid;
}

int UWFC::GetNextPos()
{
	int left   = 0;
	int right  = Width  - 1;
	int top    = 0;
	int bottom = Height - 1;

	while (left <= right && top <= bottom)
	{
		// 1) topo: x = left→right, y = top
		for (int x = left; x <= right; ++x)
			if (MBool[x][top])
			{ Wave = TTuple<int,int,int>(x, top, -1); return -1; }
		++top;

		// 2) lateral direita: y = top→bottom, x = right
		for (int y = top; y <= bottom; ++y)
			if (MBool[right][y])
			{ Wave = TTuple<int,int,int>(right, y, -1); return -1; }
		--right;

		// 3) base: x = right→left, y = bottom
		if (top <= bottom) {
			for (int x = right; x >= left; --x)
				if (MBool[x][bottom])
				{ Wave = TTuple<int,int,int>(x, bottom, -1); return -1; }
			--bottom;
		}

		// 4) lateral esquerda: y = bottom→top, x = left
		if (left <= right) {
			for (int y = bottom; y >= top; --y)
				if (MBool[left][y])
				{ Wave = TTuple<int,int,int>(left, y, -1); return -1; }
			++left;
		}
	}

	return 0;
}

EObserveStatus UWFC::Observe(int Heuristica)
{

	int Argmin;
	if (Heuristica == 1)
	{
		 Argmin = HeuristicaMaluca();
		
	}
	else
	{
		 Argmin = Mrv();
	}


	if (Argmin == 0)
	{
		return Success;
	}
	
	if (Queue.IsEmpty())
	{
		Queue.PushLast(Wave);
	}
	int x = Wave.Get<0>();
	int y = Wave.Get<1>();
	MBool[x][y] = false;

	int z= Wave.Get<2>();

	TSubclassOf<UObjectTile> tile = GetRandomTile();

	// BacktrackStack.StackElements.Push(Wave);
	// BacktrackStack.StackDomain.Push(CopyDomain());
	// BacktrackStack.StackBoolDomain.Push(MBool);

	
			
	// print();
	if (tile != nullptr)
	{
		Grid[x][y]->ValidNeighboursN = tile.GetDefaultObject()->ValidNeighboursN;
		Grid[x][y]->ValidNeighboursS = tile.GetDefaultObject()->ValidNeighboursS;
		Grid[x][y]->ValidNeighboursW = tile.GetDefaultObject()->ValidNeighboursW;
		Grid[x][y]->ValidNeighboursE = tile.GetDefaultObject()->ValidNeighboursE;
		Grid[x][y]->StaticMesh = tile.GetDefaultObject()->StaticMesh;
		Grid[x][y]->MaterialInterface = tile.GetDefaultObject()->MaterialInterface;
		
	}
	else
	{
		// UE_LOG(LogClass, Log, TEXT("Escolhi: %d,%d e veio null"), x, y);

	}
	// *** NOVO: enfileira todos os vizinhos de (x,y) para propagar restrições ***
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
					Wave = TTuple<int, int, int>(i, j, -1);
					
					Argmin = -1;
					
					
				}
			}
		}
	}

	return Argmin;
}

int UWFC::HeuristicaMaluca()
{
	bool found = false;
	int32 Argmin = 0;
	for (int d = 0; d <= Width+Height-2 && !found; d++)
	{
		for (int a = 0; a <= d; a++)
		{
			int b = d - a;

			if (a < Width && b < Height)
			{
				if (MBool[a][b] == true)
				{
					Wave = TTuple<int, int, int>(a, b, -1);
					found = true;

					Argmin = -1;
					break;
				}
			}
		}	
	}
	return Argmin;
}


bool UWFC::AC3()
{
		while (!Queue.IsEmpty())
    	{
			// UE_LOG(LogClass, Log, TEXT("AC3 Queue TAM:%d"), Queue.Num());
    		TTuple<int, int, int> tile = Queue.First();
    		Queue.PopFirst();

    		int x = tile.Get<0>();
    		int y = tile.Get<1>();
			
    		
    		int Directions_y[4] = {0, -1, 1, 0};
    		int Directions_x[4] = {-1, 0, 0, 1};
    
    		for (int i = 0; i < 4; i++)
    		{
    			TArray<int> TilesToRemove;

    			if (MBool[x][y] == false)
    			{
    				if (x + Directions_x[i] >= 0 && x + Directions_x[i] < Width && y + Directions_y[i] >= 0 && y + Directions_y[i] < Height && MBool[x + Directions_x[i]][y + Directions_y[i]] == true)
    				{
    					
    					for (auto it = Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.CreateConstIterator(); it; ++it)
    					{

    						UObjectTile* CompareTile = it.Value()->GetDefaultObject<UObjectTile>();

    						
    						if (i == 0)
    						{
    							if (Grid[x][y]->ValidNeighboursN[0] != CompareTile->ValidNeighboursS[0])
    							{
    								TilesToRemove.Add(it.Key());
    							}
    							
    						}
    						if (i == 1)
    						{
    							if (Grid[x][y]->ValidNeighboursW[0] != CompareTile->ValidNeighboursE[0])
    							{
    								
    								TilesToRemove.Add(it.Key());
    							}
    							
    						}
    						if (i == 2)
    						{
    							if (Grid[x][y]->ValidNeighboursE[0] != CompareTile->ValidNeighboursW[0])
    							{
    								
    								TilesToRemove.Add(it.Key());
    							}
    							
    						}
    						if (i == 3)
    						{
    							if (Grid[x][y]->ValidNeighboursS[0] != CompareTile->ValidNeighboursN[0])
    							{
    								
    								TilesToRemove.Add(it.Key());
    							}
    							
    						}
    						
    					}
    				}
    			}
			    else
			    {
			    	if (x + Directions_x[i] >= 0 && x + Directions_x[i] < Width && y + Directions_y[i] >= 0 && y + Directions_y[i] < Height && MBool[x + Directions_x[i]][y + Directions_y[i]] == true)
			    	{
						  
			    		
			    		for (auto it = Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.CreateConstIterator(); it; ++it)
			    		{
			    			
			    			bool bHasIncompatible = false;
			    			int NeighborKey = it.Key();
			    			UObjectTile* CompareTile = it.Value()->GetDefaultObject<UObjectTile>();
			    			for (auto it2 = Grid[x][y]->ValidTiles.CreateConstIterator(); it2; ++it2)
			    			{
			    				UObjectTile* CompareTile2 = it2.Value()->GetDefaultObject<UObjectTile>();
			    				switch (i)
			    				{
			    				case 0:
			    					if (CompareTile2->ValidNeighboursN[0] == CompareTile->ValidNeighboursS[0])
			    						bHasIncompatible = true;
			    					break;
			    				case 1:
			    					if (CompareTile2->ValidNeighboursW[0] ==  CompareTile->ValidNeighboursE[0])
			    						bHasIncompatible = true;
			    					break;
			    				case 2:
			    					if (CompareTile2->ValidNeighboursE[0] ==  CompareTile->ValidNeighboursW[0])
			    						bHasIncompatible = true;
			    					break;
			    				case 3:
			    					if (CompareTile2->ValidNeighboursS[0] ==  CompareTile->ValidNeighboursN[0])
			    						bHasIncompatible = true;
			    					break;
			    				}
				    
				     
			    				if (bHasIncompatible == true)
			    				{
			    					break;		
			    				}
				     
			    			}
			    			if (bHasIncompatible == false)
			    			{
			    				TilesToRemove.Add(NeighborKey);
			    			}
			    		}
			    	}
			    }


    			if (TilesToRemove.Num() > 0)
    			{
    				for (int j = 0; j < TilesToRemove.Num(); j++)
    				{
						
    					Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.Remove(TilesToRemove[j]);

    					// UE_LOG(LogTemp, Warning, TEXT("Removed tile:%s"), *Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.Find(TilesToRemove[j])->GetDefaultObject()->MaterialInterface->GetName());
    				}

    				Queue.PushLast(TTuple<int,int,int> (x+Directions_x[i],y+Directions_y[i], -1));

					

    				if (Grid[x+Directions_x[i]][y+Directions_y[i]]->ValidTiles.Num() == 0)
    				{
    					return false;
    				}
    			}

    			TilesToRemove.Empty();


    			
    		}
    			
    	}

	return true;
}

void UWFC::print()
{
	
	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			TObjectPtr<UObjectTile> Tile = Grid[i][j];
			int ActualDomainIndex = Wave.Get<2>();
			FString string;
			FString stringNeighbourN;
			FString stringNeighbourS;
			FString stringNeighbourW;
			FString stringNeighbourE;

			for (auto it = Tile->ValidTiles.CreateConstIterator(); it; ++it)
			{
				string += FString::FromInt(it.Key());
				string += " ";
			}

			for (auto it = Tile->ValidNeighboursN.CreateConstIterator(); it; ++it)
			{
				stringNeighbourN += GetData(*it);
				stringNeighbourN += " ";
			}

			for (auto it = Tile->ValidNeighboursS.CreateConstIterator(); it; ++it)
			{
				stringNeighbourS += GetData(*it);
				stringNeighbourS += " ";
			}

			for (auto it = Tile->ValidNeighboursW.CreateConstIterator(); it; ++it)
			{
				stringNeighbourW += GetData(*it);
				stringNeighbourW += " ";
			}

			for (auto it = Tile->ValidNeighboursE.CreateConstIterator(); it; ++it)
			{
				stringNeighbourE += GetData(*it);
				stringNeighbourE += " ";
			}

			if (Tile->StaticMesh != nullptr)
			{
				
				UE_LOG(LogClass, Log, TEXT("pos %d:%d, Bloco:%s, BlocoPego:%d NeighboursN:%s, NeighboursS:%s, NeighboursW:%s, NeighboursE:%s  Valid tiles %s"), i,j, *Tile->StaticMesh->GetName(), ActualDomainIndex, *stringNeighbourN, *stringNeighbourS, *stringNeighbourW, *stringNeighbourE, *string);
			}
			else
			{
				UE_LOG(LogClass, Log, TEXT("pos %d:%d, NeighboursN:%s, NeighboursS:%s, NeighboursW:%s, NeighboursE:%s  Valid tiles %s"), i,j , *stringNeighbourN, *stringNeighbourS, *stringNeighbourW, *stringNeighbourE, *string);
				
			}
			
			
		}
	}
}

void UWFC::RemoveFromDomain()
{
	int x = Wave.Get<0>();
	int y = Wave.Get<1>();
	int i = Wave.Get<2>();
	MBool[x][y] = true;
	if (i != -1)
	{
		Grid[x][y]->ValidTiles.Remove(i);
		
	}}

TArray<FMatrixObject> UWFC::CopyDomain()
{
	TArray<FMatrixObject> CopyDomain;

	for (int i = 0; i < Width; i++)
	{
		CopyDomain.Add(FMatrixObject());
	}

	for (int i = 0; i < Width; ++i)
	{
		for (int j  = 0; j < Height; j++)
		{
			UObjectTile* Tile = NewObject<UObjectTile>();
			Tile->ValidTiles = Grid[i][j]->ValidTiles;
			Tile->StaticMesh = Grid[i][j]->StaticMesh;
			Tile->MaterialInterface = Grid[i][j]->MaterialInterface;
			Tile->ValidNeighboursN = Grid[i][j]->ValidNeighboursN;
			Tile->ValidNeighboursS = Grid[i][j]->ValidNeighboursS;
			Tile->ValidNeighboursE = Grid[i][j]->ValidNeighboursE;
			Tile->ValidNeighboursW = Grid[i][j]->ValidNeighboursW;
			CopyDomain[i].Add(*Tile);
		}
	}


	return CopyDomain;
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
			SpawntTile->StaticMeshComponent->SetMaterial(0, Grid[i][j]->MaterialInterface);
			SpawntTile->StaticMeshComponent->SetStaticMesh(Grid[i][j]->StaticMesh);

			
		}
		
	}

	for (int i = 0; i < Width; i++)
	{
		Grid[i].M.Empty();
		MBool[i].M.Empty();
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
			Wave = TTuple<int, int,int >(x, y, it.Key());
			return it.Value();
		}
		i++;
	}

	return nullptr;
	
}