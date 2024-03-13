// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaCazaNieta01.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);
	FVector ubicacionNaveEnemigaCazaNieta01_1 = FVector(700.0f, 500.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaCazaNieta01_1 = World->SpawnActor<ANaveEnemigaCazaNieta01>(ubicacionNaveEnemigaCazaNieta01_1, rotacionNave);

	}

	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigaCazaNieta01_1->SetPosicion(FVector(800.0f, -500.0f, 200.0f));
}