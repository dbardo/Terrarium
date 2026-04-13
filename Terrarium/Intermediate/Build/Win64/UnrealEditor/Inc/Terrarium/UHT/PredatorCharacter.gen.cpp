// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/PredatorCharacter.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePredatorCharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorCharacter();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorCharacter_NoRegister();
TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPredatorStrikesPlayer **********************************************
struct Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPredatorStrikesPlayer constinit property declarations **************
// ********** End Delegate FOnPredatorStrikesPlayer constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Terrarium, nullptr, "OnPredatorStrikesPlayer__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPredatorStrikesPlayer_DelegateWrapper(const FMulticastScriptDelegate& OnPredatorStrikesPlayer)
{
	OnPredatorStrikesPlayer.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPredatorStrikesPlayer ************************************************

// ********** Begin Class APredatorCharacter Function OnPerceptionUpdated **************************
struct Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics
{
	struct PredatorCharacter_eventOnPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPerceptionUpdated constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPerceptionUpdated constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPerceptionUpdated Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PredatorCharacter_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PredatorCharacter_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 819600324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PropPointers) < 2048);
// ********** End Function OnPerceptionUpdated Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APredatorCharacter, nullptr, "OnPerceptionUpdated", 	Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PredatorCharacter_eventOnPerceptionUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::PredatorCharacter_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APredatorCharacter::execOnPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class APredatorCharacter Function OnPerceptionUpdated ****************************

// ********** Begin Class APredatorCharacter *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APredatorCharacter;
UClass* APredatorCharacter::GetPrivateStaticClass()
{
	using TClass = APredatorCharacter;
	if (!Z_Registration_Info_UClass_APredatorCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PredatorCharacter"),
			Z_Registration_Info_UClass_APredatorCharacter.InnerSingleton,
			StaticRegisterNativesAPredatorCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APredatorCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APredatorCharacter_NoRegister()
{
	return APredatorCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APredatorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/PredatorCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPredatorStrikesPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "PredatorCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Patrol waypoints - populated in editor on BP_Predator\n" },
#endif
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Patrol waypoints - populated in editor on BP_Predator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "Category", "PredatorCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/PredatorCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APredatorCharacter constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPredatorStrikesPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APredatorCharacter constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnPerceptionUpdated"), .Pointer = &APredatorCharacter::execOnPerceptionUpdated },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APredatorCharacter_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 1625051436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredatorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APredatorCharacter_Statics

// ********** Begin Class APredatorCharacter Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APredatorCharacter_Statics::NewProp_OnPredatorStrikesPlayer = { "OnPredatorStrikesPlayer", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APredatorCharacter, OnPredatorStrikesPlayer), Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPredatorStrikesPlayer_MetaData), NewProp_OnPredatorStrikesPlayer_MetaData) }; // 1792280033
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0114000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APredatorCharacter, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPoints_MetaData), NewProp_PatrolPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APredatorCharacter, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APredatorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorCharacter_Statics::NewProp_OnPredatorStrikesPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PatrolPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PatrolPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorCharacter_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorCharacter_Statics::PropPointers) < 2048);
// ********** End Class APredatorCharacter Property Definitions ************************************
UObject* (*const Z_Construct_UClass_APredatorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APredatorCharacter_Statics::ClassParams = {
	&APredatorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APredatorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APredatorCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APredatorCharacter_Statics::Class_MetaDataParams)
};
void APredatorCharacter::StaticRegisterNativesAPredatorCharacter()
{
	UClass* Class = APredatorCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APredatorCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_APredatorCharacter()
{
	if (!Z_Registration_Info_UClass_APredatorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APredatorCharacter.OuterSingleton, Z_Construct_UClass_APredatorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APredatorCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APredatorCharacter);
APredatorCharacter::~APredatorCharacter() {}
// ********** End Class APredatorCharacter *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APredatorCharacter, APredatorCharacter::StaticClass, TEXT("APredatorCharacter"), &Z_Registration_Info_UClass_APredatorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APredatorCharacter), 2174951401U) },
	};
<<<<<<< HEAD
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_3140903723{
=======
}; // Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_3989280172{
>>>>>>> d414c92ce218bbce5bb23c07cf314d5a82e7a8b9
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
