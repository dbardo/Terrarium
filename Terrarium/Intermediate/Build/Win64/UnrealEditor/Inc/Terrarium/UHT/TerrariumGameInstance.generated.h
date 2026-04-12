// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/TerrariumGameInstance.h"

#ifdef TERRARIUM_TerrariumGameInstance_generated_h
#error "TerrariumGameInstance.generated.h already included, missing '#pragma once' in TerrariumGameInstance.h"
#endif
#define TERRARIUM_TerrariumGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTerrariumGameInstance ***************************************************
struct Z_Construct_UClass_UTerrariumGameInstance_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_UTerrariumGameInstance_NoRegister();

#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTerrariumGameInstance(); \
	friend struct ::Z_Construct_UClass_UTerrariumGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_UTerrariumGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UTerrariumGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_UTerrariumGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UTerrariumGameInstance)


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTerrariumGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTerrariumGameInstance(UTerrariumGameInstance&&) = delete; \
	UTerrariumGameInstance(const UTerrariumGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerrariumGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerrariumGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTerrariumGameInstance) \
	NO_API virtual ~UTerrariumGameInstance();


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_12_PROLOG
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTerrariumGameInstance;

// ********** End Class UTerrariumGameInstance *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
