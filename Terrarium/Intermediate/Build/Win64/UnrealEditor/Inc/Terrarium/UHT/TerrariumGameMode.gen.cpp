// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/TerrariumGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrariumGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameMode();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrariumGameMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrariumGameMode;
UClass* ATerrariumGameMode::GetPrivateStaticClass()
{
	using TClass = ATerrariumGameMode;
	if (!Z_Registration_Info_UClass_ATerrariumGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrariumGameMode"),
			Z_Registration_Info_UClass_ATerrariumGameMode.InnerSingleton,
			StaticRegisterNativesATerrariumGameMode,
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
	return Z_Registration_Info_UClass_ATerrariumGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrariumGameMode_NoRegister()
{
	return ATerrariumGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrariumGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/TerrariumGameMode.h" },
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumGameMode constinit property declarations ***********************
// ********** End Class ATerrariumGameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumGameMode_Statics
UObject* (*const Z_Construct_UClass_ATerrariumGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrariumGameMode_Statics::ClassParams = {
	&ATerrariumGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrariumGameMode_Statics::Class_MetaDataParams)
};
void ATerrariumGameMode::StaticRegisterNativesATerrariumGameMode()
{
}
UClass* Z_Construct_UClass_ATerrariumGameMode()
{
	if (!Z_Registration_Info_UClass_ATerrariumGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrariumGameMode.OuterSingleton, Z_Construct_UClass_ATerrariumGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrariumGameMode.OuterSingleton;
}
ATerrariumGameMode::ATerrariumGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrariumGameMode);
ATerrariumGameMode::~ATerrariumGameMode() {}
// ********** End Class ATerrariumGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrariumGameMode, ATerrariumGameMode::StaticClass, TEXT("ATerrariumGameMode"), &Z_Registration_Info_UClass_ATerrariumGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumGameMode), 678128841U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_4268278517{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
