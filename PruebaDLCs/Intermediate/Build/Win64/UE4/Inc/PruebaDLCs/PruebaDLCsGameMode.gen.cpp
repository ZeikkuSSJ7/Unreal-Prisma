// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PruebaDLCs/PruebaDLCsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePruebaDLCsGameMode() {}
// Cross Module References
	PRUEBADLCS_API UClass* Z_Construct_UClass_APruebaDLCsGameMode_NoRegister();
	PRUEBADLCS_API UClass* Z_Construct_UClass_APruebaDLCsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PruebaDLCs();
// End Cross Module References
	void APruebaDLCsGameMode::StaticRegisterNativesAPruebaDLCsGameMode()
	{
	}
	UClass* Z_Construct_UClass_APruebaDLCsGameMode_NoRegister()
	{
		return APruebaDLCsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APruebaDLCsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APruebaDLCsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PruebaDLCs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APruebaDLCsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PruebaDLCsGameMode.h" },
		{ "ModuleRelativePath", "PruebaDLCsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APruebaDLCsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APruebaDLCsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APruebaDLCsGameMode_Statics::ClassParams = {
		&APruebaDLCsGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APruebaDLCsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APruebaDLCsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APruebaDLCsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APruebaDLCsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APruebaDLCsGameMode, 1112117739);
	template<> PRUEBADLCS_API UClass* StaticClass<APruebaDLCsGameMode>()
	{
		return APruebaDLCsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APruebaDLCsGameMode(Z_Construct_UClass_APruebaDLCsGameMode, &APruebaDLCsGameMode::StaticClass, TEXT("/Script/PruebaDLCs"), TEXT("APruebaDLCsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APruebaDLCsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
