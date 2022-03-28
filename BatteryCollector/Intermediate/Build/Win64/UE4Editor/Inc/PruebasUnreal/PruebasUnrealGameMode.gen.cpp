// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PruebasUnreal/PruebasUnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePruebasUnrealGameMode() {}
// Cross Module References
	PRUEBASUNREAL_API UClass* Z_Construct_UClass_APruebasUnrealGameMode_NoRegister();
	PRUEBASUNREAL_API UClass* Z_Construct_UClass_APruebasUnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PruebasUnreal();
// End Cross Module References
	void APruebasUnrealGameMode::StaticRegisterNativesAPruebasUnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_APruebasUnrealGameMode_NoRegister()
	{
		return APruebasUnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APruebasUnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APruebasUnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PruebasUnreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APruebasUnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PruebasUnrealGameMode.h" },
		{ "ModuleRelativePath", "PruebasUnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APruebasUnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APruebasUnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APruebasUnrealGameMode_Statics::ClassParams = {
		&APruebasUnrealGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APruebasUnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APruebasUnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APruebasUnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APruebasUnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APruebasUnrealGameMode, 2515066152);
	template<> PRUEBASUNREAL_API UClass* StaticClass<APruebasUnrealGameMode>()
	{
		return APruebasUnrealGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APruebasUnrealGameMode(Z_Construct_UClass_APruebasUnrealGameMode, &APruebasUnrealGameMode::StaticClass, TEXT("/Script/PruebasUnreal"), TEXT("APruebasUnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APruebasUnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
