// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Detection/NoiseEmitterComponent.h"

#ifdef TERRARIUM_NoiseEmitterComponent_generated_h
#error "NoiseEmitterComponent.generated.h already included, missing '#pragma once' in NoiseEmitterComponent.h"
#endif
#define TERRARIUM_NoiseEmitterComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNoiseEmitterComponent ***************************************************
struct Z_Construct_UClass_UNoiseEmitterComponent_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_UNoiseEmitterComponent_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoiseEmitterComponent(); \
	friend struct ::Z_Construct_UClass_UNoiseEmitterComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_UNoiseEmitterComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UNoiseEmitterComponent, UAIPerceptionStimuliSourceComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_UNoiseEmitterComponent_NoRegister) \
	DECLARE_SERIALIZER(UNoiseEmitterComponent)


#define FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNoiseEmitterComponent(UNoiseEmitterComponent&&) = delete; \
	UNoiseEmitterComponent(const UNoiseEmitterComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoiseEmitterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoiseEmitterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoiseEmitterComponent) \
	NO_API virtual ~UNoiseEmitterComponent();


#define FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_10_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNoiseEmitterComponent;

// ********** End Class UNoiseEmitterComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
