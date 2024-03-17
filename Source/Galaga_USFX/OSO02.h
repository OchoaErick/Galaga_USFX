// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OSO_NAV.h"
#include "OSO02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AOSO02 : public AOSO_NAV
{
	GENERATED_BODY()
private:
	int numMisiles;
	float capacidad;
	bool transportando;
	float tiempo_descarga;
	float tiempo_escudo;
public:
	AOSO02();
	FORCEINLINE int GetnumMisiles() const { return numMisiles; }
	FORCEINLINE void SetnumMisiles(int _numMisiles) { numMisiles = _numMisiles; }


	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE bool GetTransportando() const { return transportando; }
	FORCEINLINE float GetTiempo_descarga() const { return tiempo_descarga; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void SetTransportando(bool _transportando) { transportando = _transportando; }
	FORCEINLINE void SetTiempo_descarga(float _tiempo_descarga) { tiempo_descarga = _tiempo_descarga; }

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
