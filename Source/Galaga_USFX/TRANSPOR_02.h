// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TRANSPOR_NAV.h"
#include "TRANSPOR_02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATRANSPOR_02 : public ATRANSPOR_NAV
{
	GENERATED_BODY()
	
private:
	float capacidad;
	FVector tipoNave02;
public:
	ATRANSPOR_02();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE FVector GetTipoNaveGen01() const { return tipoNave02; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void  SetCapacidad(FVector _tipoNave02) { tipoNave02 = _tipoNave02; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Descargar();
};
