// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Monster_Shooter/MonsterShooter_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterShooter_GameInstance() {}
// Cross Module References
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_UMonsterShooter_GameInstance_NoRegister();
	MONSTER_SHOOTER_API UClass* Z_Construct_UClass_UMonsterShooter_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Monster_Shooter();
// End Cross Module References
	void UMonsterShooter_GameInstance::StaticRegisterNativesUMonsterShooter_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMonsterShooter_GameInstance_NoRegister()
	{
		return UMonsterShooter_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterShooter_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_enemyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyFallen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_enemyFallen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Monster_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MonsterShooter_GameInstance.h" },
		{ "ModuleRelativePath", "MonsterShooter_GameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyCount_MetaData[] = {
		{ "Category", "MonsterShooter_GameInstance" },
		{ "ModuleRelativePath", "MonsterShooter_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyCount = { "enemyCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterShooter_GameInstance, enemyCount), METADATA_PARAMS(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyFallen_MetaData[] = {
		{ "Category", "MonsterShooter_GameInstance" },
		{ "ModuleRelativePath", "MonsterShooter_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyFallen = { "enemyFallen", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterShooter_GameInstance, enemyFallen), METADATA_PARAMS(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyFallen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyFallen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::NewProp_enemyFallen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterShooter_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::ClassParams = {
		&UMonsterShooter_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterShooter_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonsterShooter_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonsterShooter_GameInstance, 4053920198);
	template<> MONSTER_SHOOTER_API UClass* StaticClass<UMonsterShooter_GameInstance>()
	{
		return UMonsterShooter_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonsterShooter_GameInstance(Z_Construct_UClass_UMonsterShooter_GameInstance, &UMonsterShooter_GameInstance::StaticClass, TEXT("/Script/Monster_Shooter"), TEXT("UMonsterShooter_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterShooter_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
