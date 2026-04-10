// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/TerrariumGameState.h"

#ifdef TERRARIUM_TerrariumGameState_generated_h
#error "TerrariumGameState.generated.h already included, missing '#pragma once' in TerrariumGameState.h"
#endif
#define TERRARIUM_TerrariumGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATerrariumGameState ******************************************************
struct Z_Construct_UClass_ATerrariumGameState_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameState_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrariumGameState(); \
	friend struct ::Z_Construct_UClass_ATerrariumGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ATerrariumGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrariumGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ATerrariumGameState_NoRegister) \
	DECLARE_SERIALIZER(ATerrariumGameState)


#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrariumGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrariumGameState(ATerrariumGameState&&) = delete; \
	ATerrariumGameState(const ATerrariumGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrariumGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrariumGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrariumGameState) \
	NO_API virtual ~ATerrariumGameState();


#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_12_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrariumGameState;

// ********** End Class ATerrariumGameState ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
