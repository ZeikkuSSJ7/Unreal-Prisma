// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanGameModeBase() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanGameModeBase_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APacmanGameModeBase::StaticRegisterNativesAPacmanGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APacmanGameModeBase_NoRegister()
	{
		return APacmanGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APacmanGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PacmanGameModeBase.h" },
		{ "ModuleRelativePath", "PacmanGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacmanGameModeBase_Statics::ClassParams = {
		&APacmanGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacmanGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacmanGameModeBase, 3233911440);
	template<> PACMAN_API UClass* StaticClass<APacmanGameModeBase>()
	{
		return APacmanGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanGameModeBase(Z_Construct_UClass_APacmanGameModeBase, &APacmanGameModeBase::StaticClass, TEXT("/Script/Pacman"), TEXT("APacmanGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
