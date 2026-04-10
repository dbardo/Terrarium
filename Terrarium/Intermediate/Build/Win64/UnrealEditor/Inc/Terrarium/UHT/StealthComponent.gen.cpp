// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Detection/StealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeStealthComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TERRARIUM_API UClass* Z_Construct_UClass_UStealthComponent();
TERRARIUM_API UClass* Z_Construct_UClass_UStealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStealthComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UStealthComponent;
UClass* UStealthComponent::GetPrivateStaticClass()
{
	using TClass = UStealthComponent;
	if (!Z_Registration_Info_UClass_UStealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("StealthComponent"),
			Z_Registration_Info_UClass_UStealthComponent.InnerSingleton,
			StaticRegisterNativesUStealthComponent,
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
	return Z_Registration_Info_UClass_UStealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStealthComponent_NoRegister()
{
	return UStealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Detection/StealthComponent.h" },
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStealthComponent constinit property declarations ************************
// ********** End Class UStealthComponent constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStealthComponent_Statics
UObject* (*const Z_Construct_UClass_UStealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStealthComponent_Statics::ClassParams = {
	&UStealthComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStealthComponent_Statics::Class_MetaDataParams)
};
void UStealthComponent::StaticRegisterNativesUStealthComponent()
{
}
UClass* Z_Construct_UClass_UStealthComponent()
{
	if (!Z_Registration_Info_UClass_UStealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStealthComponent.OuterSingleton, Z_Construct_UClass_UStealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStealthComponent);
UStealthComponent::~UStealthComponent() {}
// ********** End Class UStealthComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStealthComponent, UStealthComponent::StaticClass, TEXT("UStealthComponent"), &Z_Registration_Info_UClass_UStealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStealthComponent), 435601425U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_2120413905{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
