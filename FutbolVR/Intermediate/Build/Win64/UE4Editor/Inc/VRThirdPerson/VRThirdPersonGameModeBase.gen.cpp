// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRThirdPerson/VRThirdPersonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRThirdPersonGameModeBase() {}
// Cross Module References
	VRTHIRDPERSON_API UClass* Z_Construct_UClass_AVRThirdPersonGameModeBase_NoRegister();
	VRTHIRDPERSON_API UClass* Z_Construct_UClass_AVRThirdPersonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VRThirdPerson();
// End Cross Module References
	void AVRThirdPersonGameModeBase::StaticRegisterNativesAVRThirdPersonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVRThirdPersonGameModeBase_NoRegister()
	{
		return AVRThirdPersonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRThirdPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRThirdPersonGameModeBase.h" },
		{ "ModuleRelativePath", "VRThirdPersonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRThirdPersonGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::ClassParams = {
		&AVRThirdPersonGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRThirdPersonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRThirdPersonGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRThirdPersonGameModeBase, 3726590120);
	template<> VRTHIRDPERSON_API UClass* StaticClass<AVRThirdPersonGameModeBase>()
	{
		return AVRThirdPersonGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRThirdPersonGameModeBase(Z_Construct_UClass_AVRThirdPersonGameModeBase, &AVRThirdPersonGameModeBase::StaticClass, TEXT("/Script/VRThirdPerson"), TEXT("AVRThirdPersonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRThirdPersonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
