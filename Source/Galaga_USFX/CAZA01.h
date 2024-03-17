// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CAZA_NAV.h"
#include "CAZA01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACAZA01 : public ACAZA_NAV
{
	GENERATED_BODY()
private:
	float duracion;
public:
	ACAZA01();
	FORCEINLINE float Setduracion() const { return duracion; }
	FORCEINLINE void GetDuracion(float _Duracion) { duracion = _Duracion; }
protected:
	virtual void Mover();
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	virtual void Escudo();
};
