// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/TeleporterActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporterActor() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_ATeleporterActor_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_ATeleporterActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATeleporterActor::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_TeleporterActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_TeleporterActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATeleporterActor::StaticRegisterNativesATeleporterActor()
	{
		UClass* Class = ATeleporterActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATeleporterActor::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics
	{
		struct TeleporterActor_eventOnOverlapBegin_Parms
		{
			AActor* TeleporterActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleporterActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::NewProp_TeleporterActor = { "TeleporterActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterActor_eventOnOverlapBegin_Parms, TeleporterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TeleporterActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::NewProp_TeleporterActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TeleporterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeleporterActor, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(TeleporterActor_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATeleporterActor_NoRegister()
	{
		return ATeleporterActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeleporterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleporterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeleporterActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeleporterActor_OnOverlapBegin, "OnOverlapBegin" }, // 289860299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeleporterActor.h" },
		{ "ModuleRelativePath", "TeleporterActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterActor_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "TeleporterActor" },
		{ "ModuleRelativePath", "TeleporterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporterActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporterActor, Target), Z_Construct_UClass_ATeleporterActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporterActor_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterActor_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporterActor_Statics::NewProp_TeleportSound_MetaData[] = {
		{ "Category", "TeleporterActor" },
		{ "ModuleRelativePath", "TeleporterActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporterActor_Statics::NewProp_TeleportSound = { "TeleportSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporterActor, TeleportSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporterActor_Statics::NewProp_TeleportSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterActor_Statics::NewProp_TeleportSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporterActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporterActor_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporterActor_Statics::NewProp_TeleportSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleporterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporterActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeleporterActor_Statics::ClassParams = {
		&ATeleporterActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeleporterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleporterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleporterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleporterActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeleporterActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeleporterActor, 994004778);
	template<> PACMAN_API UClass* StaticClass<ATeleporterActor>()
	{
		return ATeleporterActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeleporterActor(Z_Construct_UClass_ATeleporterActor, &ATeleporterActor::StaticClass, TEXT("/Script/Pacman"), TEXT("ATeleporterActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporterActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
