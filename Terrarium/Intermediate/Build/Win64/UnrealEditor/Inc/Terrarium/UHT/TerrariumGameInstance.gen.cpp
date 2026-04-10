// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/TerrariumGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrariumGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TERRARIUM_API UClass* Z_Construct_UClass_UTerrariumGameInstance();
TERRARIUM_API UClass* Z_Construct_UClass_UTerrariumGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTerrariumGameInstance ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTerrariumGameInstance;
UClass* UTerrariumGameInstance::GetPrivateStaticClass()
{
	using TClass = UTerrariumGameInstance;
	if (!Z_Registration_Info_UClass_UTerrariumGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrariumGameInstance"),
			Z_Registration_Info_UClass_UTerrariumGameInstance.InnerSingleton,
			StaticRegisterNativesUTerrariumGameInstance,
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
	return Z_Registration_Info_UClass_UTerrariumGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UTerrariumGameInstance_NoRegister()
{
	return UTerrariumGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTerrariumGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/TerrariumGameInstance.h" },
		{ "ModuleRelativePath", "Public/Core/TerrariumGameInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTerrariumGameInstance constinit property declarations *******************
// ********** End Class UTerrariumGameInstance constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrariumGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTerrariumGameInstance_Statics
UObject* (*const Z_Construct_UClass_UTerrariumGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTerrariumGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerrariumGameInstance_Statics::ClassParams = {
	&UTerrariumGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTerrariumGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTerrariumGameInstance_Statics::Class_MetaDataParams)
};
void UTerrariumGameInstance::StaticRegisterNativesUTerrariumGameInstance()
{
}
UClass* Z_Construct_UClass_UTerrariumGameInstance()
{
	if (!Z_Registration_Info_UClass_UTerrariumGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTerrariumGameInstance.OuterSingleton, Z_Construct_UClass_UTerrariumGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTerrariumGameInstance.OuterSingleton;
}
UTerrariumGameInstance::UTerrariumGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTerrariumGameInstance);
UTerrariumGameInstance::~UTerrariumGameInstance() {}
// ********** End Class UTerrariumGameInstance *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTerrariumGameInstance, UTerrariumGameInstance::StaticClass, TEXT("UTerrariumGameInstance"), &Z_Registration_Info_UClass_UTerrariumGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerrariumGameInstance), 4229027929U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h__Script_Terrarium_3899083673{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameInstance_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
