// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pacman/Foodie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodie() {}
// Cross Module References
	PACMAN_API UFunction* Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Pacman();
	PACMAN_API UEnum* Z_Construct_UEnum_Pacman_EFoodieType();
	PACMAN_API UClass* Z_Construct_UClass_AFoodie_NoRegister();
	PACMAN_API UClass* Z_Construct_UClass_AFoodie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics
	{
		struct _Script_Pacman_eventFoodieEatenEvent_Parms
		{
			EFoodieType FoodieType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoodieType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoodieType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::NewProp_FoodieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::NewProp_FoodieType = { "FoodieType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Pacman_eventFoodieEatenEvent_Parms, FoodieType), Z_Construct_UEnum_Pacman_EFoodieType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::NewProp_FoodieType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::NewProp_FoodieType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Foodie.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Pacman, nullptr, "FoodieEatenEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_Pacman_eventFoodieEatenEvent_Parms), Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EFoodieType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Pacman_EFoodieType, Z_Construct_UPackage__Script_Pacman(), TEXT("EFoodieType"));
		}
		return Singleton;
	}
	template<> PACMAN_API UEnum* StaticEnum<EFoodieType>()
	{
		return EFoodieType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoodieType(EFoodieType_StaticEnum, TEXT("/Script/Pacman"), TEXT("EFoodieType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Pacman_EFoodieType_Hash() { return 2626433298U; }
	UEnum* Z_Construct_UEnum_Pacman_EFoodieType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Pacman();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoodieType"), 0, Get_Z_Construct_UEnum_Pacman_EFoodieType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoodieType::Regular", (int64)EFoodieType::Regular },
				{ "EFoodieType::PowerUp", (int64)EFoodieType::PowerUp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Foodie.h" },
				{ "PowerUp.Name", "EFoodieType::PowerUp" },
				{ "Regular.Name", "EFoodieType::Regular" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Pacman,
				nullptr,
				"EFoodieType",
				"EFoodieType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFoodie::StaticRegisterNativesAFoodie()
	{
	}
	UClass* Z_Construct_UClass_AFoodie_NoRegister()
	{
		return AFoodie::StaticClass();
	}
	struct Z_Construct_UClass_AFoodie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_foodieType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foodieType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_foodieType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foodieEatenEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_foodieEatenEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_consumptionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_consumptionSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Pacman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Foodie.h" },
		{ "ModuleRelativePath", "Foodie.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType_MetaData[] = {
		{ "Category", "Foodie" },
		{ "ModuleRelativePath", "Foodie.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType = { "foodieType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodie, foodieType), Z_Construct_UEnum_Pacman_EFoodieType, METADATA_PARAMS(Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodie_Statics::NewProp_foodieEatenEvent_MetaData[] = {
		{ "ModuleRelativePath", "Foodie.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFoodie_Statics::NewProp_foodieEatenEvent = { "foodieEatenEvent", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodie, foodieEatenEvent), Z_Construct_UDelegateFunction_Pacman_FoodieEatenEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFoodie_Statics::NewProp_foodieEatenEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodie_Statics::NewProp_foodieEatenEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodie_Statics::NewProp_consumptionSound_MetaData[] = {
		{ "Category", "Foodie" },
		{ "ModuleRelativePath", "Foodie.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoodie_Statics::NewProp_consumptionSound = { "consumptionSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodie, consumptionSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFoodie_Statics::NewProp_consumptionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodie_Statics::NewProp_consumptionSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodie_Statics::NewProp_foodieType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodie_Statics::NewProp_foodieEatenEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodie_Statics::NewProp_consumptionSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodie_Statics::ClassParams = {
		&AFoodie::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFoodie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodie_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodie, 2302095366);
	template<> PACMAN_API UClass* StaticClass<AFoodie>()
	{
		return AFoodie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodie(Z_Construct_UClass_AFoodie, &AFoodie::StaticClass, TEXT("/Script/Pacman"), TEXT("AFoodie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
