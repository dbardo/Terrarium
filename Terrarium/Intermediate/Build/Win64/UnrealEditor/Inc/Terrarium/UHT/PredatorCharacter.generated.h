// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/PredatorCharacter.h"

#ifdef TERRARIUM_PredatorCharacter_generated_h
#error "PredatorCharacter.generated.h already included, missing '#pragma once' in PredatorCharacter.h"
#endif
#define TERRARIUM_PredatorCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APredatorCharacter *******************************************************
struct Z_Construct_UClass_APredatorCharacter_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_APredatorCharacter_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPredatorCharacter(); \
	friend struct ::Z_Construct_UClass_APredatorCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_APredatorCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APredatorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_APredatorCharacter_NoRegister) \
	DECLARE_SERIALIZER(APredatorCharacter)


#define FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APredatorCharacter(APredatorCharacter&&) = delete; \
	APredatorCharacter(const APredatorCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APredatorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APredatorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APredatorCharacter) \
	NO_API virtual ~APredatorCharacter();


#define FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_9_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APredatorCharacter;

// ********** End Class APredatorCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
