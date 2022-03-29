// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanController() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanController_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Pacman();
// End Cross Module References
	void APacmanController::StaticRegisterNativesAPacmanController()
	{
	}
	UClass* Z_Construct_UClass_APacmanController_NoRegister()
	{
		return APacmanController::StaticClass();
	}
	struct Z_Construct_UClass_APacmanController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PacmanController.h" },
		{ "ModuleRelativePath", "PacmanController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacmanController_Statics::ClassParams = {
		&APacmanController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacmanController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacmanController, 1423995664);
	template<> PACMAN_API UClass* StaticClass<APacmanController>()
	{
		return APacmanController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanController(Z_Construct_UClass_APacmanController, &APacmanController::StaticClass, TEXT("/Script/Pacman"), TEXT("APacmanController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
