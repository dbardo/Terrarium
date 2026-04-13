// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Detection/StealthComponent.h"

#ifdef TERRARIUM_StealthComponent_generated_h
#error "StealthComponent.generated.h already included, missing '#pragma once' in StealthComponent.h"
#endif
#define TERRARIUM_StealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStealthComponent ********************************************************
struct Z_Construct_UClass_UStealthComponent_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_UStealthComponent_NoRegister();

#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStealthComponent(); \
	friend struct ::Z_Construct_UClass_UStealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_UStealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_UStealthComponent_NoRegister) \
	DECLARE_SERIALIZER(UStealthComponent)


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStealthComponent(UStealthComponent&&) = delete; \
	UStealthComponent(const UStealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStealthComponent) \
	NO_API virtual ~UStealthComponent();


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_25_PROLOG
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_28_INCLASS_NO_PURE_DECLS \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStealthComponent;

// ********** End Class UStealthComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h

// ********** Begin Enum EMovementState ************************************************************
#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::Crouching) \
	op(EMovementState::Walking) \
	op(EMovementState::Sprinting) \
	op(EMovementState::Interacting) \
	op(EMovementState::Hidden) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> TERRARIUM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovementState>();
// ********** End Enum EMovementState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
