// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OSO_NAV.h"
#include "OSO01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AOSO01 : public AOSO_NAV
{
	GENERATED_BODY()
private:
	int numMisiles;
	bool inmortal;
	float tiempo_inmortal;
	float capacidad;

	float tiempo_escudo;
public:
	AOSO01();
	FORCEINLINE int GetnumMisiles() const { return numMisiles; }
	FORCEINLINE void SetnumMisiles(int _numMisiles) { numMisiles = _numMisiles; }

	FORCEINLINE bool GetInmortal() const { return inmortal; }
	FORCEINLINE float GetTiempo_Inmortal() const { return tiempo_inmortal; }

	FORCEINLINE void SetInmortal(bool _Inmortal) { inmortal = _Inmortal; }
	FORCEINLINE void SetTiempo_Inmortal(float _tiempo_inmortal) { tiempo_inmortal = _tiempo_inmortal; }

	FORCEINLINE float GetCapacidad() const { return capacidad; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }

	FORCEINLINE float SetTiempo_escudo() const { return tiempo_escudo; }
	FORCEINLINE void GetTiempo_escudo(float _tiempo_escudo) { tiempo_escudo = _tiempo_escudo; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Ataque();
	virtual void Bombardear();
	virtual void Ocultar();
	virtual void Descargar();
	virtual void Escudo();

};
