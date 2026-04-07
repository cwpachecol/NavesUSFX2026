// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/NavesUSFX2026GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavesUSFX2026GameMode() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ANavesUSFX2026GameMode_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ANavesUSFX2026GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AGeneradorLaberinto_NoRegister();
// End Cross Module References
	void ANavesUSFX2026GameMode::StaticRegisterNativesANavesUSFX2026GameMode()
	{
	}
	UClass* Z_Construct_UClass_ANavesUSFX2026GameMode_NoRegister()
	{
		return ANavesUSFX2026GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANavesUSFX2026GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneradorLaberintoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneradorLaberintoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneradorLaberintoInstancia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneradorLaberintoInstancia;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NavesUSFX2026GameMode.h" },
		{ "ModuleRelativePath", "NavesUSFX2026GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoClass_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "NavesUSFX2026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoClass = { "GeneradorLaberintoClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX2026GameMode, GeneradorLaberintoClass), Z_Construct_UClass_AGeneradorLaberinto_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoInstancia_MetaData[] = {
		{ "Category", "Laberinto" },
		{ "ModuleRelativePath", "NavesUSFX2026GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoInstancia = { "GeneradorLaberintoInstancia", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANavesUSFX2026GameMode, GeneradorLaberintoInstancia), Z_Construct_UClass_AGeneradorLaberinto_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoInstancia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoInstancia_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::NewProp_GeneradorLaberintoInstancia,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavesUSFX2026GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::ClassParams = {
		&ANavesUSFX2026GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavesUSFX2026GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavesUSFX2026GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavesUSFX2026GameMode, 1833566189);
	template<> NAVESUSFX2026_API UClass* StaticClass<ANavesUSFX2026GameMode>()
	{
		return ANavesUSFX2026GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavesUSFX2026GameMode(Z_Construct_UClass_ANavesUSFX2026GameMode, &ANavesUSFX2026GameMode::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ANavesUSFX2026GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavesUSFX2026GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
