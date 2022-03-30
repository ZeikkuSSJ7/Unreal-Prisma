// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Shooter/MonsterShooter_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterShooter_GameMode() {}
// Cross Module References
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonsterShooter_GameMode_NoRegister();
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_AMonsterShooter_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Monster_Shooter();
// End Cross Module References
	void AMonsterShooter_GameMode::StaticRegisterNativesAMonsterShooter_GameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonsterShooter_GameMode_NoRegister()
	{
		return AMonsterShooter_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterShooter_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterShooter_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterShooter_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterShooter_GameMode.h" },
		{ "ModuleRelativePath", "MonsterShooter_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterShooter_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterShooter_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterShooter_GameMode_Statics::ClassParams = {
		&AMonsterShooter_GameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterShooter_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterShooter_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterShooter_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterShooter_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterShooter_GameMode, 3502958376);
	template<> MONSTER_SHOOTER_API UClass* StaticClass<AMonsterShooter_GameMode>()
	{
		return AMonsterShooter_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterShooter_GameMode(Z_Construct_UClass_AMonsterShooter_GameMode, &AMonsterShooter_GameMode::StaticClass, TEXT("/Script/Monster_Shooter"), TEXT("AMonsterShooter_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterShooter_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
