// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneradorLaberinto.generated.h"

class ABloque;

USTRUCT()
struct FBloqueMovimientoData
{
	GENERATED_BODY()

	UPROPERTY()
	ABloque* Bloque = nullptr;

	UPROPERTY()
	FVector Destino = FVector::ZeroVector;
};

UCLASS()
class NAVESUSFX2026_API AGeneradorLaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeneradorLaberinto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Laberinto")
	int32 Filas = 18;

	UPROPERTY(EditAnywhere, Category = "Laberinto")
	int32 Columnas = 18;

	UPROPERTY(EditAnywhere, Category = "Laberinto")
	float TamCelda = 200.0f;
public:
	UPROPERTY(EditAnywhere, Category = "Laberinto")
	TSubclassOf<ABloque> BloqueClass;
	//P1
	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<ABloque*> TABSI; // Superior Izquierda

	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<ABloque*> TABSD; // Superior Derecha

	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<ABloque*> TABII; // Inferior Izquierda

	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<ABloque*> TABID; // Inferior Derecha

	UPROPERTY(EditAnywhere, Category = "Movimiento")
	float VelocidadInterpolacion = 1.0f;

	void ClasificarBloquesPorSector();

	void MoverBloquesAlMargen();
	void MoverSectorAlMargen(TArray<ABloque*>& Sector, const FVector& Inicio, const FVector& Direccion, float Espaciado);


	protected:
	UPROPERTY(VisibleAnywhere, Category = "Laberinto")
	TArray<ABloque*> TABloques;

private:
	TArray<TArray<int32>> Mapa;

	void GenerarMapaBase();
	void AbrirCaminosAleatorios();
	void SpawnearBloques();

	bool EsValida(int32 F, int32 C) const;
	FVector PosicionOrigenLaberinto;

	FTimerHandle TimerMoverBloques;

	UPROPERTY()
	TArray<FBloqueMovimientoData> BloquesEnMovimiento;

	bool bMoverBloques = false;


	void PrepararMovimientoBloquesAlMargen();
	void ActualizarMovimientoBloques(float DeltaTime);

	void PrepararSectorParaMovimiento(TArray<ABloque*>& Sector, const FVector& Inicio, const FVector& Direccion, float Espaciado);

	bool EsBorde(int32 Fila, int32 Columna) const;
	FVector ObtenerPosicionMundo(int32 Fila, int32 Columna) const;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
