// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ENEMY_NAV.h"
#include "CAZA_NAV.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACAZA_NAV : public AENEMY_NAV
{
	GENERATED_BODY()
private:
	int numbombas;
public:
	ACAZA_NAV();
	FORCEINLINE int Getnumbombas() const { return numbombas; }
	FORCEINLINE void Setnumbombas(int _numbombas) { numbombas = _numbombas; }
protected:
	virtual void Mover();
	virtual void Ataque();
	virtual void Vida();
	virtual void Bombardear();
};
