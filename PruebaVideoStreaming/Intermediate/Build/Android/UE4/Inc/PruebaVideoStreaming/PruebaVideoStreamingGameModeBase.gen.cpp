// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PruebaVideoStreaming/PruebaVideoStreamingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePruebaVideoStreamingGameModeBase() {}
// Cross Module References
	PRUEBAVIDEOSTREAMING_API UClass* Z_Construct_UClass_APruebaVideoStreamingGameModeBase_NoRegister();
	PRUEBAVIDEOSTREAMING_API UClass* Z_Construct_UClass_APruebaVideoStreamingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PruebaVideoStreaming();
// End Cross Module References
	void APruebaVideoStreamingGameModeBase::StaticRegisterNativesAPruebaVideoStreamingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APruebaVideoStreamingGameModeBase_NoRegister()
	{
		return APruebaVideoStreamingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PruebaVideoStreaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PruebaVideoStreamingGameModeBase.h" },
		{ "ModuleRelativePath", "PruebaVideoStreamingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APruebaVideoStreamingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::ClassParams = {
		&APruebaVideoStreamingGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APruebaVideoStreamingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APruebaVideoStreamingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APruebaVideoStreamingGameModeBase, 2771823339);
	template<> PRUEBAVIDEOSTREAMING_API UClass* StaticClass<APruebaVideoStreamingGameModeBase>()
	{
		return APruebaVideoStreamingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APruebaVideoStreamingGameModeBase(Z_Construct_UClass_APruebaVideoStreamingGameModeBase, &APruebaVideoStreamingGameModeBase::StaticClass, TEXT("/Script/PruebaVideoStreaming"), TEXT("APruebaVideoStreamingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APruebaVideoStreamingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
