// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Detection/NoiseEmitterComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeNoiseEmitterComponent() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent();
TERRARIUM_API UClass* Z_Construct_UClass_UNoiseEmitterComponent();
TERRARIUM_API UClass* Z_Construct_UClass_UNoiseEmitterComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UNoiseEmitterComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UNoiseEmitterComponent;
UClass* UNoiseEmitterComponent::GetPrivateStaticClass()
{
	using TClass = UNoiseEmitterComponent;
	if (!Z_Registration_Info_UClass_UNoiseEmitterComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("NoiseEmitterComponent"),
			Z_Registration_Info_UClass_UNoiseEmitterComponent.InnerSingleton,
			StaticRegisterNativesUNoiseEmitterComponent,
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
	return Z_Registration_Info_UClass_UNoiseEmitterComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UNoiseEmitterComponent_NoRegister()
{
	return UNoiseEmitterComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNoiseEmitterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Detection/NoiseEmitterComponent.h" },
		{ "ModuleRelativePath", "Public/Detection/NoiseEmitterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNoiseEmitterComponent constinit property declarations *******************
// ********** End Class UNoiseEmitterComponent constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoiseEmitterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UNoiseEmitterComponent_Statics
UObject* (*const Z_Construct_UClass_UNoiseEmitterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAIPerceptionStimuliSourceComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseEmitterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoiseEmitterComponent_Statics::ClassParams = {
	&UNoiseEmitterComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNoiseEmitterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNoiseEmitterComponent_Statics::Class_MetaDataParams)
};
void UNoiseEmitterComponent::StaticRegisterNativesUNoiseEmitterComponent()
{
}
UClass* Z_Construct_UClass_UNoiseEmitterComponent()
{
	if (!Z_Registration_Info_UClass_UNoiseEmitterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoiseEmitterComponent.OuterSingleton, Z_Construct_UClass_UNoiseEmitterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNoiseEmitterComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNoiseEmitterComponent);
UNoiseEmitterComponent::~UNoiseEmitterComponent() {}
// ********** End Class UNoiseEmitterComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNoiseEmitterComponent, UNoiseEmitterComponent::StaticClass, TEXT("UNoiseEmitterComponent"), &Z_Registration_Info_UClass_UNoiseEmitterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoiseEmitterComponent), 2353624167U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h__Script_Terrarium_1665398272{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_NoiseEmitterComponent_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
