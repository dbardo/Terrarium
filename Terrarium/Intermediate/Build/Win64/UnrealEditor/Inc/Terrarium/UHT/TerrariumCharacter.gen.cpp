// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/TerrariumCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTerrariumCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumCharacter();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumCharacter_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_UNoiseEmitterComponent_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_UStealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATerrariumCharacter ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATerrariumCharacter;
UClass* ATerrariumCharacter::GetPrivateStaticClass()
{
	using TClass = ATerrariumCharacter;
	if (!Z_Registration_Info_UClass_ATerrariumCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TerrariumCharacter"),
			Z_Registration_Info_UClass_ATerrariumCharacter.InnerSingleton,
			StaticRegisterNativesATerrariumCharacter,
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
	return Z_Registration_Info_UClass_ATerrariumCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATerrariumCharacter_NoRegister()
{
	return ATerrariumCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATerrariumCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/TerrariumCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPCamera_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthComp_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseEmitter_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumCharacter constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseEmitter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATerrariumCharacter constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumCharacter_Statics

// ********** Begin Class ATerrariumCharacter Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_FPCamera = { "FPCamera", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, FPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPCamera_MetaData), NewProp_FPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StealthComp = { "StealthComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, StealthComp), Z_Construct_UClass_UStealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthComp_MetaData), NewProp_StealthComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_NoiseEmitter = { "NoiseEmitter", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, NoiseEmitter), Z_Construct_UClass_UNoiseEmitterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseEmitter_MetaData), NewProp_NoiseEmitter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_FPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StealthComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_NoiseEmitter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers) < 2048);
// ********** End Class ATerrariumCharacter Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_ATerrariumCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATerrariumCharacter_Statics::ClassParams = {
	&ATerrariumCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrariumCharacter_Statics::Class_MetaDataParams)
};
void ATerrariumCharacter::StaticRegisterNativesATerrariumCharacter()
{
}
UClass* Z_Construct_UClass_ATerrariumCharacter()
{
	if (!Z_Registration_Info_UClass_ATerrariumCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATerrariumCharacter.OuterSingleton, Z_Construct_UClass_ATerrariumCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATerrariumCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATerrariumCharacter);
ATerrariumCharacter::~ATerrariumCharacter() {}
// ********** End Class ATerrariumCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrariumCharacter, ATerrariumCharacter::StaticClass, TEXT("ATerrariumCharacter"), &Z_Registration_Info_UClass_ATerrariumCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumCharacter), 3212303842U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_1986339126{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
