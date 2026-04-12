// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/PredatorAIController.h"

#ifdef TERRARIUM_PredatorAIController_generated_h
#error "PredatorAIController.generated.h already included, missing '#pragma once' in PredatorAIController.h"
#endif
#define TERRARIUM_PredatorAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APredatorAIController ****************************************************
struct Z_Construct_UClass_APredatorAIController_Statics;
TERRARIUM_API UClass* Z_Construct_UClass_APredatorAIController_NoRegister();

#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPredatorAIController(); \
	friend struct ::Z_Construct_UClass_APredatorAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TERRARIUM_API UClass* ::Z_Construct_UClass_APredatorAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(APredatorAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Terrarium"), Z_Construct_UClass_APredatorAIController_NoRegister) \
	DECLARE_SERIALIZER(APredatorAIController)


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APredatorAIController(APredatorAIController&&) = delete; \
	APredatorAIController(const APredatorAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APredatorAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APredatorAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APredatorAIController) \
	NO_API virtual ~APredatorAIController();


#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_9_PROLOG
#define FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APredatorAIController;

// ********** End Class APredatorAIController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
