// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MONSTER_SHOOTER_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define MONSTER_SHOOTER_Enemy_generated_h

#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_SPARSE_DATA
#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSensed); \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSensed); \
	DECLARE_FUNCTION(execOnHit);


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Monster_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_PRIVATE_PROPERTY_OFFSET
#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_14_PROLOG
#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_RPC_WRAPPERS \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_INCLASS \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_PRIVATE_PROPERTY_OFFSET \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_SPARSE_DATA \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_INCLASS_NO_PURE_DECLS \
	Monster_Shooter_Source_Monster_Shooter_Enemy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTER_SHOOTER_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Monster_Shooter_Source_Monster_Shooter_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
