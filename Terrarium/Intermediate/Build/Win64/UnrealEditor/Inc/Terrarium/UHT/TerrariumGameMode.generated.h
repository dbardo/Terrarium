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

// ********** Begin Delegate FOnGameWon ************************************************************
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_10_DELEGATE \
TERRARIUM_API void FOnGameWon_DelegateWrapper(const FMulticastScriptDelegate& OnGameWon);


// ********** End Delegate FOnGameWon **************************************************************

// ********** Begin Delegate FOnGameLost ***********************************************************
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_11_DELEGATE \
TERRARIUM_API void FOnGameLost_DelegateWrapper(const FMulticastScriptDelegate& OnGameLost);


// ********** End Delegate FOnGameLost *************************************************************

// ********** Begin Delegate FOnItemCollectedEvent *************************************************
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_12_DELEGATE \
TERRARIUM_API void FOnItemCollectedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemCollectedEvent, int32 NewCount);


// ********** End Delegate FOnItemCollectedEvent ***************************************************

// ********** Begin Delegate FOnPlayerStruckEvent **************************************************
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_13_DELEGATE \
TERRARIUM_API void FOnPlayerStruckEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStruckEvent, int32 NewCount);


// ********** End Delegate FOnPlayerStruckEvent ****************************************************

// ********** Begin Class ATerrariumGameMode *******************************************************
struct Z_Construct_UClass_ATerrariumGameMode_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameMode_NoRegister();

#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrariumGameMode(); \
	friend struct ::Z_Construct_UClass_ATerrariumGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ATerrariumGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrariumGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ATerrariumGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATerrariumGameMode)


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrariumGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrariumGameMode(ATerrariumGameMode&&) = delete; \
	ATerrariumGameMode(const ATerrariumGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrariumGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrariumGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrariumGameMode) \
	NO_API virtual ~ATerrariumGameMode();


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_18_PROLOG
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrariumGameMode;

// ********** End Class ATerrariumGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
