// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CAZA_NAV.h"
#include "CAZA02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACAZA02 : public ACAZA_NAV
{
	GENERATED_BODY()
private:
	bool superataque;
public:
	ACAZA02();
	FORCEINLINE bool SetSuperataque() const { return superataque; }
	FORCEINLINE void GetSuperataque(bool _superataque) {superataque = _superataque;	}
protected:
	virtual void Mover();
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
	virtual void Cargar_Sbomba();
};
