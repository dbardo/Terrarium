// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "World/HideSpot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHideSpot() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TERRARIUM_API UClass* Z_Construct_UClass_AHideSpot();
TERRARIUM_API UClass* Z_Construct_UClass_AHideSpot_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHideSpot ****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHideSpot;
UClass* AHideSpot::GetPrivateStaticClass()
{
	using TClass = AHideSpot;
	if (!Z_Registration_Info_UClass_AHideSpot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HideSpot"),
			Z_Registration_Info_UClass_AHideSpot.InnerSingleton,
			StaticRegisterNativesAHideSpot,
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
	return Z_Registration_Info_UClass_AHideSpot.InnerSingleton;
}
UClass* Z_Construct_UClass_AHideSpot_NoRegister()
{
	return AHideSpot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHideSpot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/HideSpot.h" },
		{ "ModuleRelativePath", "Public/World/HideSpot.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AHideSpot constinit property declarations ********************************
// ********** End Class AHideSpot constinit property declarations **********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHideSpot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHideSpot_Statics
UObject* (*const Z_Construct_UClass_AHideSpot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHideSpot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHideSpot_Statics::ClassParams = {
	&AHideSpot::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHideSpot_Statics::Class_MetaDataParams), Z_Construct_UClass_AHideSpot_Statics::Class_MetaDataParams)
};
void AHideSpot::StaticRegisterNativesAHideSpot()
{
}
UClass* Z_Construct_UClass_AHideSpot()
{
	if (!Z_Registration_Info_UClass_AHideSpot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHideSpot.OuterSingleton, Z_Construct_UClass_AHideSpot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHideSpot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHideSpot);
AHideSpot::~AHideSpot() {}
// ********** End Class AHideSpot ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_HideSpot_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHideSpot, AHideSpot::StaticClass, TEXT("AHideSpot"), &Z_Registration_Info_UClass_AHideSpot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHideSpot), 1112346188U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_HideSpot_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_HideSpot_h__Script_Terrarium_759803426{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_HideSpot_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_HideSpot_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
