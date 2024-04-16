// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	Tiempo = 0;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	
	FVector PosicionFija1 = FVector(-350.0f, -600.0f, 250.0f);
	FVector PosicionFija2 = FVector(-350.0f, -200.0f, 250.0f);
	FVector PosicionFija3 = FVector(-350.0f, 200.0f, 250.0f);
	FVector PosicionFija4 = FVector(-350.0f, 600.0f, 250.0f);

	FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
			FVector PosicionNaveActual1 = FVector(PosicionFija1.X, PosicionFija1.Y, PosicionFija1.Z);
			ANaveEnemigaCaza* NaveEnemigaCaza1 = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual1, RotacionNave);

			FVector PosicionNaveActual2 = FVector(PosicionFija2.X, PosicionFija2.Y, PosicionFija2.Z);
			ANaveEnemigaCaza* NaveEnemigaCaza2 = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual2, RotacionNave);

			FVector PosicionNaveActual3 = FVector(PosicionFija3.X, PosicionFija3.Y, PosicionFija3.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporte1 = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual3, RotacionNave);

			FVector PosicionNaveActual4 = FVector(PosicionFija4.X, PosicionFija4.Y, PosicionFija4.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporte2 = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual4, RotacionNave);

	}
}

void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Tiempo++;

	FVector PosicionFija1 = FVector(-350.0f, -600.0f, 250.0f);
	FVector PosicionFija2 = FVector(-350.0f, -200.0f, 250.0f);
	FVector PosicionFija3 = FVector(-350.0f, 200.0f, 250.0f);
	FVector PosicionFija4 = FVector(-350.0f, 600.0f, 250.0f);

	FRotator RotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	if (Tiempo%180 == 0)//500 Frames en el juego son 14 segundos aproximadamente
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FVector PosicionNaveActual1 = FVector(PosicionFija1.X, PosicionFija1.Y, PosicionFija1.Z);
			ANaveEnemigaCaza* NaveEnemigaCaza1 = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual1, RotacionNave);

			FVector PosicionNaveActual2 = FVector(PosicionFija2.X, PosicionFija2.Y, PosicionFija2.Z);
			ANaveEnemigaCaza* NaveEnemigaCaza2 = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual2, RotacionNave);

			FVector PosicionNaveActual3 = FVector(PosicionFija3.X, PosicionFija3.Y, PosicionFija3.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporte1 = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual3, RotacionNave);

			FVector PosicionNaveActual4 = FVector(PosicionFija4.X, PosicionFija4.Y, PosicionFija4.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporte2 = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual4, RotacionNave);
		}
	}

}
