// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ENEMY_NAV.generated.h"
class UstaticMeshComponent;
UCLASS(abstract)
class GALAGA_USFX_API AENEMY_NAV : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EnemyMesh;

protected:
	int ataque;
	float cadencia;
	int vida;
	FVector posicion;
	FVector desplazamiento;
	float velocidad;
	float destruir;
	float escapar;
public:
	FORCEINLINE int Getataque() const { return ataque; }
	FORCEINLINE float Getcadencia() const { return cadencia; }
	FORCEINLINE int Getvida() const { return vida; }
	FORCEINLINE FVector Getposicion() const { return posicion; }
	FORCEINLINE FVector Getdesplazamiento() const { return desplazamiento; }
	FORCEINLINE float Getvelocidad() const { return velocidad; }
	FORCEINLINE float Getdesrtuir() const { return destruir; }
	FORCEINLINE float Getescapar() const { return escapar; }

	FORCEINLINE void Setataque(int _ataque) { ataque = _ataque; }
	FORCEINLINE void Setcadencia(float _cadencia) { cadencia = _cadencia; }
	FORCEINLINE void Setvida(int _vida) { vida = _vida; }
	FORCEINLINE void Setposicion(FVector _posicion) { posicion = _posicion; }
	FORCEINLINE void Setdesplazamiento(FVector _desplazamiento) { desplazamiento = _desplazamiento; }
	FORCEINLINE void Setvelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void Setdestruir(float _destruir) { destruir = _destruir; }
	FORCEINLINE void Setescapar(float _escapar) { escapar = _escapar; }

	
public:	
	// Sets default values for this actor's properties
	AENEMY_NAV();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	void Mover() PURE_VIRTUAL(AENEMY_NAV::Mover, );
	void Disparar() PURE_VIRTUAL(AENEMY_NAV::Disparar, );
	void Velocidad() PURE_VIRTUAL(AENEMY_NAV::Velocidad, );
	void Vida() PURE_VIRTUAL(AENEMY_NAV::Vida, );
	void Apariencia() PURE_VIRTUAL(AENEMY_NAV::Apariencia, );

};
