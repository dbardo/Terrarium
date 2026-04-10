// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TerrariumCharacter.h"

#ifdef TERRARIUM_TerrariumCharacter_generated_h
#error "TerrariumCharacter.generated.h already included, missing '#pragma once' in TerrariumCharacter.h"
#endif
#define TERRARIUM_TerrariumCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATerrariumCharacter ******************************************************
struct Z_Construct_UClass_ATerrariumCharacter_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumCharacter_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATerrariumCharacter(); \
	friend struct ::Z_Construct_UClass_ATerrariumCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ATerrariumCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATerrariumCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ATerrariumCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATerrariumCharacter)


#define FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATerrariumCharacter(ATerrariumCharacter&&) = delete; \
	ATerrariumCharacter(const ATerrariumCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATerrariumCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATerrariumCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATerrariumCharacter) \
	NO_API virtual ~ATerrariumCharacter();


#define FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_9_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATerrariumCharacter;

// ********** End Class ATerrariumCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
