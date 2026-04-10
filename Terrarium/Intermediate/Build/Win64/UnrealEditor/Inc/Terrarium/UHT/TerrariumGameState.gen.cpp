// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/TerrariumGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrariumGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameState();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrariumGameState ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrariumGameState;
UClass* ATerrariumGameState::GetPrivateStaticClass()
{
	using TClass = ATerrariumGameState;
	if (!Z_Registration_Info_UClass_ATerrariumGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrariumGameState"),
			Z_Registration_Info_UClass_ATerrariumGameState.InnerSingleton,
			StaticRegisterNativesATerrariumGameState,
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
	return Z_Registration_Info_UClass_ATerrariumGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrariumGameState_NoRegister()
{
	return ATerrariumGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrariumGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/TerrariumGameState.h" },
		{ "ModuleRelativePath", "Public/Core/TerrariumGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumGameState constinit property declarations **********************
// ********** End Class ATerrariumGameState constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumGameState_Statics
UObject* (*const Z_Construct_UClass_ATerrariumGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrariumGameState_Statics::ClassParams = {
	&ATerrariumGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrariumGameState_Statics::Class_MetaDataParams)
};
void ATerrariumGameState::StaticRegisterNativesATerrariumGameState()
{
}
UClass* Z_Construct_UClass_ATerrariumGameState()
{
	if (!Z_Registration_Info_UClass_ATerrariumGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrariumGameState.OuterSingleton, Z_Construct_UClass_ATerrariumGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrariumGameState.OuterSingleton;
}
ATerrariumGameState::ATerrariumGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrariumGameState);
ATerrariumGameState::~ATerrariumGameState() {}
// ********** End Class ATerrariumGameState ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrariumGameState, ATerrariumGameState::StaticClass, TEXT("ATerrariumGameState"), &Z_Registration_Info_UClass_ATerrariumGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumGameState), 4052172589U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h__Script_Terrarium_2527834791{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameState_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
