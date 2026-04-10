// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/PredatorCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePredatorCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorCharacter();
TERRARIUM_API UClass* Z_Construct_UClass_APredatorCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

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
#endif // WITH_METADATA

// ********** Begin Class APredatorCharacter constinit property declarations ***********************
// ********** End Class APredatorCharacter constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredatorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APredatorCharacter_Statics
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APredatorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APredatorCharacter_Statics::Class_MetaDataParams)
};
void APredatorCharacter::StaticRegisterNativesAPredatorCharacter()
{
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
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APredatorCharacter, APredatorCharacter::StaticClass, TEXT("APredatorCharacter"), &Z_Registration_Info_UClass_APredatorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APredatorCharacter), 3922147112U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_3347389854{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_AI_PredatorCharacter_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
