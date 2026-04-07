// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/GeneradorLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorLaberinto() {}
// Cross Module References
	NAVESUSFX2026_API UScriptStruct* Z_Construct_UScriptStruct_FBloqueMovimientoData();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ABloque_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGeneradorLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FBloqueMovimientoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVESUSFX2026_API uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloqueMovimientoData, Z_Construct_UPackage__Script_NavesUSFX2026(), TEXT("BloqueMovimientoData"), sizeof(FBloqueMovimientoData), Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash());
	}
	return Singleton;
}
template<> NAVESUSFX2026_API UScriptStruct* StaticStruct<FBloqueMovimientoData>()
{
	return FBloqueMovimientoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloqueMovimientoData(FBloqueMovimientoData::StaticStruct, TEXT("/Script/NavesUSFX2026"), TEXT("BloqueMovimientoData"), false, nullptr, nullptr);
static struct FScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData
{
	FScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData()
	{
		UScriptStruct::DeferCppStructOps<FBloqueMovimientoData>(FName(TEXT("BloqueMovimientoData")));
	}
} ScriptStruct_NavesUSFX2026_StaticRegisterNativesFBloqueMovimientoData;
	struct Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloque_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bloque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destino_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destino;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloqueMovimientoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Bloque_MetaData[] = {
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Bloque = { "Bloque", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloqueMovimientoData, Bloque), Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Bloque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Bloque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Destino_MetaData[] = {
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Destino = { "Destino", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloqueMovimientoData, Destino), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Destino_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Destino_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Bloque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::NewProp_Destino,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
		nullptr,
		&NewStructOps,
		"BloqueMovimientoData",
		sizeof(FBloqueMovimientoData),
		alignof(FBloqueMovimientoData),
		Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloqueMovimientoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NavesUSFX2026();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloqueMovimientoData"), sizeof(FBloqueMovimientoData), Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloqueMovimientoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloqueMovimientoData_Hash() { return 1166784732U; }
	void AGeneradorLaberinto::StaticRegisterNativesAGeneradorLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filas_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Columnas_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Columnas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TamCelda_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TamCelda;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloqueClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BloqueClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TABSI_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TABSI_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TABSI;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TABSD_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TABSD_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TABSD;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TABII_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TABII_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TABII;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TABID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TABID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TABID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadInterpolacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadInterpolacion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TABloques_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TABloques_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TABloques;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloquesEnMovimiento_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloquesEnMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BloquesEnMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorLaberinto.h" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Filas_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Filas = { "Filas", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, Filas), METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Filas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Filas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Columnas_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Columnas = { "Columnas", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, Columnas), METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Columnas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Columnas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TamCelda_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TamCelda = { "TamCelda", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TamCelda), METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TamCelda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TamCelda_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloqueClass_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloqueClass = { "BloqueClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, BloqueClass), Z_Construct_UClass_ABloque_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloqueClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloqueClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI_Inner = { "TABSI", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "Comment", "//P1\n" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
		{ "ToolTip", "P1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI = { "TABSI", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TABSI), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD_Inner = { "TABSD", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "Comment", "// Superior Izquierda\n" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
		{ "ToolTip", "Superior Izquierda" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD = { "TABSD", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TABSD), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII_Inner = { "TABII", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "Comment", "// Superior Derecha\n" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
		{ "ToolTip", "Superior Derecha" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII = { "TABII", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TABII), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID_Inner = { "TABID", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "Comment", "// Inferior Izquierda\n" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
		{ "ToolTip", "Inferior Izquierda" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID = { "TABID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TABID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_VelocidadInterpolacion_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Inferior Derecha\n" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
		{ "ToolTip", "Inferior Derecha" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_VelocidadInterpolacion = { "VelocidadInterpolacion", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, VelocidadInterpolacion), METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_VelocidadInterpolacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_VelocidadInterpolacion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques_Inner = { "TABloques", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques = { "TABloques", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, TABloques), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento_Inner = { "BloquesEnMovimiento", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBloqueMovimientoData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "GeneradorLaberinto.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento = { "BloquesEnMovimiento", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeneradorLaberinto, BloquesEnMovimiento), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneradorLaberinto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Filas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_Columnas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TamCelda,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloqueClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABSD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABII,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_VelocidadInterpolacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_TABloques,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneradorLaberinto_Statics::NewProp_BloquesEnMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams = {
		&AGeneradorLaberinto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeneradorLaberinto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorLaberinto, 2138364683);
	template<> NAVESUSFX2026_API UClass* StaticClass<AGeneradorLaberinto>()
	{
		return AGeneradorLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorLaberinto(Z_Construct_UClass_AGeneradorLaberinto, &AGeneradorLaberinto::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AGeneradorLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
