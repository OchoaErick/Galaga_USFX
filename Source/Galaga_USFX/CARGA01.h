// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CARGA_NAV.h"
#include "CARGA01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACARGA01 : public ACARGA_NAV
{
	GENERATED_BODY()
private:
	float porcentaje_carga;
public:
	ACARGA01();
	FORCEINLINE float GetPorcentaje_carag() const { return porcentaje_carga; }

	FORCEINLINE void SetPorcentaje_carga(float _porcentaje_carga) { porcentaje_carga = _porcentaje_carga; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Reabastecer();

};
