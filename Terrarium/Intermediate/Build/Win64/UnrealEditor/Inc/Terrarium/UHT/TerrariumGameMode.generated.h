// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/TerrariumGameMode.h"

#ifdef TERRARIUM_TerrariumGameMode_generated_h
#error "TerrariumGameMode.generated.h already included, missing '#pragma once' in TerrariumGameMode.h"
#endif
#define TERRARIUM_TerrariumGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATerrariumGameMode *******************************************************
struct Z_Construct_UClass_ATerrariumGameMode_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameMode_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrariumGameMode(); \
	friend struct ::Z_Construct_UClass_ATerrariumGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ATerrariumGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrariumGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ATerrariumGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATerrariumGameMode)


#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrariumGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrariumGameMode(ATerrariumGameMode&&) = delete; \
	ATerrariumGameMode(const ATerrariumGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrariumGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrariumGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrariumGameMode) \
	NO_API virtual ~ATerrariumGameMode();


#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_12_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrariumGameMode;

// ********** End Class ATerrariumGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
