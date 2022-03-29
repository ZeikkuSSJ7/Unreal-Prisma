// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/PacmanPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacmanPawn() {}
// Cross Module References
	PACMAN_API UClass* Z_Construct_UClass_APacmanPawn_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_APacmanPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APacmanPawn::execOnOverlapBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_PlayerActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_PlayerActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APacmanPawn::execSetFrozen)
	{
		P_GET_UBOOL(Z_Param_frz);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrozen(Z_Param_frz);
		P_NATIVE_END;
	}
	void APacmanPawn::StaticRegisterNativesAPacmanPawn()
	{
		UClass* Class = APacmanPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &APacmanPawn::execOnOverlapBegin },
			{ "SetFrozen", &APacmanPawn::execSetFrozen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics
	{
		struct PacmanPawn_eventOnOverlapBegin_Parms
		{
			AActor* PlayerActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanPawn_eventOnOverlapBegin_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PacmanPawn_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::NewProp_PlayerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacmanPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(PacmanPawn_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanPawn_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APacmanPawn_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics
	{
		struct PacmanPawn_eventSetFrozen_Parms
		{
			bool frz;
		};
		static void NewProp_frz_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_frz;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::NewProp_frz_SetBit(void* Obj)
	{
		((PacmanPawn_eventSetFrozen_Parms*)Obj)->frz = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::NewProp_frz = { "frz", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PacmanPawn_eventSetFrozen_Parms), &Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::NewProp_frz_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::NewProp_frz,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PacmanPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APacmanPawn, nullptr, "SetFrozen", nullptr, nullptr, sizeof(PacmanPawn_eventSetFrozen_Parms), Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APacmanPawn_SetFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APacmanPawn_SetFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APacmanPawn_NoRegister()
	{
		return APacmanPawn::StaticClass();
	}
	struct Z_Construct_UClass_APacmanPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_frozen_MetaData[];
#endif
		static void NewProp_frozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_frozen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APacmanPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APacmanPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APacmanPawn_OnOverlapBegin, "OnOverlapBegin" }, // 118439239
		{ &Z_Construct_UFunction_APacmanPawn_SetFrozen, "SetFrozen" }, // 444695575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PacmanPawn.h" },
		{ "ModuleRelativePath", "PacmanPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen_MetaData[] = {
		{ "Category", "PacmanPawn" },
		{ "ModuleRelativePath", "PacmanPawn.h" },
	};
#endif
	void Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen_SetBit(void* Obj)
	{
		((APacmanPawn*)Obj)->frozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen = { "frozen", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APacmanPawn), &Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APacmanPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APacmanPawn_Statics::NewProp_frozen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APacmanPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APacmanPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APacmanPawn_Statics::ClassParams = {
		&APacmanPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APacmanPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APacmanPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APacmanPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APacmanPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APacmanPawn, 1001256575);
	template<> PACMAN_API UClass* StaticClass<APacmanPawn>()
	{
		return APacmanPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APacmanPawn(Z_Construct_UClass_APacmanPawn, &APacmanPawn::StaticClass, TEXT("/Script/Pacman"), TEXT("APacmanPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APacmanPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
