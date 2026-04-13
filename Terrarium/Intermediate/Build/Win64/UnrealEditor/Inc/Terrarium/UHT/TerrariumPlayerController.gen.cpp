// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/TerrariumPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrariumPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumPlayerController();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrariumPlayerController ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrariumPlayerController;
UClass* ATerrariumPlayerController::GetPrivateStaticClass()
{
	using TClass = ATerrariumPlayerController;
	if (!Z_Registration_Info_UClass_ATerrariumPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrariumPlayerController"),
			Z_Registration_Info_UClass_ATerrariumPlayerController.InnerSingleton,
			StaticRegisterNativesATerrariumPlayerController,
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
	return Z_Registration_Info_UClass_ATerrariumPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrariumPlayerController_NoRegister()
{
	return ATerrariumPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrariumPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/TerrariumPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/TerrariumPlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumPlayerController constinit property declarations ***************
// ********** End Class ATerrariumPlayerController constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumPlayerController_Statics
UObject* (*const Z_Construct_UClass_ATerrariumPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrariumPlayerController_Statics::ClassParams = {
	&ATerrariumPlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrariumPlayerController_Statics::Class_MetaDataParams)
};
void ATerrariumPlayerController::StaticRegisterNativesATerrariumPlayerController()
{
}
UClass* Z_Construct_UClass_ATerrariumPlayerController()
{
	if (!Z_Registration_Info_UClass_ATerrariumPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrariumPlayerController.OuterSingleton, Z_Construct_UClass_ATerrariumPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrariumPlayerController.OuterSingleton;
}
ATerrariumPlayerController::ATerrariumPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrariumPlayerController);
ATerrariumPlayerController::~ATerrariumPlayerController() {}
// ********** End Class ATerrariumPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrariumPlayerController, ATerrariumPlayerController::StaticClass, TEXT("ATerrariumPlayerController"), &Z_Registration_Info_UClass_ATerrariumPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumPlayerController), 1153566410U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h__Script_Terrarium_3170401028{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Terrarium_Terrarium_Terrarium_Source_Terrarium_Public_Player_TerrariumPlayerController_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
