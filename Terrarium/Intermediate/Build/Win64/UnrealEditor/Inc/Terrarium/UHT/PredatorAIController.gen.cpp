// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/PredatorAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePredatorAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorAIController();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APredatorAIController Function GetBB *************************************
struct Z_Construct_UFunction_APredatorAIController_GetBB_Statics
{
	struct PredatorAIController_eventGetBB_Parms
	{
		UBlackboardComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Predator AI" },
		{ "ModuleRelativePath", "Public/AI/PredatorAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBB constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBB constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBB Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APredatorAIController_GetBB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PredatorAIController_eventGetBB_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APredatorAIController_GetBB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PropPointers) < 2048);
// ********** End Function GetBB Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APredatorAIController_GetBB_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APredatorAIController, nullptr, "GetBB", 	Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PredatorAIController_eventGetBB_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APredatorAIController_GetBB_Statics::Function_MetaDataParams), Z_Construct_UFunction_APredatorAIController_GetBB_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APredatorAIController_GetBB_Statics::PredatorAIController_eventGetBB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APredatorAIController_GetBB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APredatorAIController_GetBB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APredatorAIController::execGetBB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBlackboardComponent**)Z_Param__Result=P_THIS->GetBB();
	P_NATIVE_END;
}
// ********** End Class APredatorAIController Function GetBB ***************************************

// ********** Begin Class APredatorAIController ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APredatorAIController;
UClass* APredatorAIController::GetPrivateStaticClass()
{
	using TClass = APredatorAIController;
	if (!Z_Registration_Info_UClass_APredatorAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PredatorAIController"),
			Z_Registration_Info_UClass_APredatorAIController.InnerSingleton,
			StaticRegisterNativesAPredatorAIController,
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
	return Z_Registration_Info_UClass_APredatorAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_APredatorAIController_NoRegister()
{
	return APredatorAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APredatorAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/PredatorAIController.h" },
		{ "ModuleRelativePath", "Public/AI/PredatorAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "PredatorAIController" },
		{ "ModuleRelativePath", "Public/AI/PredatorAIController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APredatorAIController constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APredatorAIController constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBB"), .Pointer = &APredatorAIController::execGetBB },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APredatorAIController_GetBB, "GetBB" }, // 253911224
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredatorAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APredatorAIController_Statics

// ********** Begin Class APredatorAIController Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APredatorAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APredatorAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APredatorAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredatorAIController_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorAIController_Statics::PropPointers) < 2048);
// ********** End Class APredatorAIController Property Definitions *********************************
UObject* (*const Z_Construct_UClass_APredatorAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APredatorAIController_Statics::ClassParams = {
	&APredatorAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APredatorAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APredatorAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_APredatorAIController_Statics::Class_MetaDataParams)
};
void APredatorAIController::StaticRegisterNativesAPredatorAIController()
{
	UClass* Class = APredatorAIController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APredatorAIController_Statics::Funcs));
}
UClass* Z_Construct_UClass_APredatorAIController()
{
	if (!Z_Registration_Info_UClass_APredatorAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APredatorAIController.OuterSingleton, Z_Construct_UClass_APredatorAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APredatorAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APredatorAIController);
APredatorAIController::~APredatorAIController() {}
// ********** End Class APredatorAIController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APredatorAIController, APredatorAIController::StaticClass, TEXT("APredatorAIController"), &Z_Registration_Info_UClass_APredatorAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APredatorAIController), 1386592475U) },
	};
<<<<<<< HEAD
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_1065115648{
=======
}; // Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_4172671165{
>>>>>>> d414c92ce218bbce5bb23c07cf314d5a82e7a8b9
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_AI_PredatorAIController_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
