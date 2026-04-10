// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/SignalItem.h"

#ifdef TERRARIUM_SignalItem_generated_h
#error "SignalItem.generated.h already included, missing '#pragma once' in SignalItem.h"
#endif
#define TERRARIUM_SignalItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASignalItem **************************************************************
struct Z_Construct_UClass_ASignalItem_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_ASignalItem_NoRegister();

#define FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASignalItem(); \
	friend struct ::Z_Construct_UClass_ASignalItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_ASignalItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ASignalItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_ASignalItem_NoRegister) \
	DECLARE_SERIALIZER(ASignalItem)


#define FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASignalItem(ASignalItem&&) = delete; \
	ASignalItem(const ASignalItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASignalItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASignalItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASignalItem) \
	NO_API virtual ~ASignalItem();


#define FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_9_PROLOG
#define FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASignalItem;

// ********** End Class ASignalItem ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
