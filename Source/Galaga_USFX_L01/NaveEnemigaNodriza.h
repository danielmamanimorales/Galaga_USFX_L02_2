// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantSoldados;
	int intervaloDespliegue;
	int numSoldDespliegue;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetCantSoldados() const { return cantSoldados; }
	FORCEINLINE int GetIntervaloDespliegue() const { return intervaloDespliegue; }
	FORCEINLINE int GetNumSoldDespliegue() const { return numSoldDespliegue; }

	FORCEINLINE void SetCantSoldados(int _cantSoldados) { cantSoldados = _cantSoldados; }
	FORCEINLINE void SetIntervaloDespliegue(int _intervaloDespliegue) { intervaloDespliegue = _intervaloDespliegue; }
	FORCEINLINE void SetNumSoldDespliegue(int _numSoldDespliegue) { numSoldDespliegue = _numSoldDespliegue; }

protected:
	virtual void Mover();
	virtual void Destruirse();
	virtual void Desplegar();
};
