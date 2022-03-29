// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_PacmanController_generated_h
#error "PacmanController.generated.h already included, missing '#pragma once' in PacmanController.h"
#endif
#define PACMAN_PacmanController_generated_h

#define Pacman_Source_Pacman_PacmanController_h_16_SPARSE_DATA
#define Pacman_Source_Pacman_PacmanController_h_16_RPC_WRAPPERS
#define Pacman_Source_Pacman_PacmanController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Pacman_Source_Pacman_PacmanController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanController(); \
	friend struct Z_Construct_UClass_APacmanController_Statics; \
public: \
	DECLARE_CLASS(APacmanController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanController)


#define Pacman_Source_Pacman_PacmanController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanController(); \
	friend struct Z_Construct_UClass_APacmanController_Statics; \
public: \
	DECLARE_CLASS(APacmanController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanController)


#define Pacman_Source_Pacman_PacmanController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanController(APacmanController&&); \
	NO_API APacmanController(const APacmanController&); \
public:


#define Pacman_Source_Pacman_PacmanController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanController(APacmanController&&); \
	NO_API APacmanController(const APacmanController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanController)


#define Pacman_Source_Pacman_PacmanController_h_16_PRIVATE_PROPERTY_OFFSET
#define Pacman_Source_Pacman_PacmanController_h_13_PROLOG
#define Pacman_Source_Pacman_PacmanController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_PacmanController_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_PacmanController_h_16_SPARSE_DATA \
	Pacman_Source_Pacman_PacmanController_h_16_RPC_WRAPPERS \
	Pacman_Source_Pacman_PacmanController_h_16_INCLASS \
	Pacman_Source_Pacman_PacmanController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Source_Pacman_PacmanController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Source_Pacman_PacmanController_h_16_PRIVATE_PROPERTY_OFFSET \
	Pacman_Source_Pacman_PacmanController_h_16_SPARSE_DATA \
	Pacman_Source_Pacman_PacmanController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Source_Pacman_PacmanController_h_16_INCLASS_NO_PURE_DECLS \
	Pacman_Source_Pacman_PacmanController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacmanController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Source_Pacman_PacmanController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
