// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PACMAN_TeleporterActor_generated_h
#error "TeleporterActor.generated.h already included, missing '#pragma once' in TeleporterActor.h"
#endif
#define PACMAN_TeleporterActor_generated_h

#define Pacman_Source_Pacman_TeleporterActor_h_13_SPARSE_DATA
#define Pacman_Source_Pacman_TeleporterActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Pacman_Source_Pacman_TeleporterActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Pacman_Source_Pacman_TeleporterActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporterActor(); \
	friend struct Z_Construct_UClass_ATeleporterActor_Statics; \
public: \
	DECLARE_CLASS(ATeleporterActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterActor)


#define Pacman_Source_Pacman_TeleporterActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATeleporterActor(); \
	friend struct Z_Construct_UClass_ATeleporterActor_Statics; \
public: \
	DECLARE_CLASS(ATeleporterActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(ATeleporterActor)


#define Pacman_Source_Pacman_TeleporterActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporterActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporterActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterActor(ATeleporterActor&&); \
	NO_API ATeleporterActor(const ATeleporterActor&); \
public:


#define Pacman_Source_Pacman_TeleporterActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporterActor(ATeleporterActor&&); \
	NO_API ATeleporterActor(const ATeleporterActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporterActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporterActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleporterActor)


#define Pacman_Source_Pacman_TeleporterActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Pacman_Source_Pacman_TeleporterActor_h_10_PROLOG
#define Pacman_Source_Pacman_TeleporterActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_TeleporterActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_TeleporterActor_h_13_SPARSE_DATA \
	Pacman_Source_Pacman_TeleporterActor_h_13_RPC_WRAPPERS \
	Pacman_Source_Pacman_TeleporterActor_h_13_INCLASS \
	Pacman_Source_Pacman_TeleporterActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Source_Pacman_TeleporterActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_TeleporterActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_TeleporterActor_h_13_SPARSE_DATA \
	Pacman_Source_Pacman_TeleporterActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Source_Pacman_TeleporterActor_h_13_INCLASS_NO_PURE_DECLS \
	Pacman_Source_Pacman_TeleporterActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class ATeleporterActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Source_Pacman_TeleporterActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
