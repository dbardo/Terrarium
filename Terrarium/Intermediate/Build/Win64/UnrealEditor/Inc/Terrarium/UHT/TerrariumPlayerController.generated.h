// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TerrariumPlayerController.h"

#ifdef TERRARIUM_TerrariumPlayerController_generated_h
#error "TerrariumPlayerController.generated.h already included, missing '#pragma once' in TerrariumPlayerController.h"
#endif
#define TERRARIUM_TerrariumPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATerrariumPlayerController ***********************************************
struct Z_Construct_UClass_ATerrariumPlayerController_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumPlayerController_NoRegister();

#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrariumPlayerController(); \
	friend struct ::Z_Construct_UClass_ATerrariumPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ATerrariumPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrariumPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ATerrariumPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATerrariumPlayerController)


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATerrariumPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrariumPlayerController(ATerrariumPlayerController&&) = delete; \
	ATerrariumPlayerController(const ATerrariumPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrariumPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrariumPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATerrariumPlayerController) \
	NO_API virtual ~ATerrariumPlayerController();


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_12_PROLOG
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrariumPlayerController;

// ********** End Class ATerrariumPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
