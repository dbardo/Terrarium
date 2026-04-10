// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "World/SignalItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSignalItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TERRARIUM_API UClass* Z_Construct_UClass_ASignalItem();
TERRARIUM_API UClass* Z_Construct_UClass_ASignalItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASignalItem **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASignalItem;
UClass* ASignalItem::GetPrivateStaticClass()
{
	using TClass = ASignalItem;
	if (!Z_Registration_Info_UClass_ASignalItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SignalItem"),
			Z_Registration_Info_UClass_ASignalItem.InnerSingleton,
			StaticRegisterNativesASignalItem,
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
	return Z_Registration_Info_UClass_ASignalItem.InnerSingleton;
}
UClass* Z_Construct_UClass_ASignalItem_NoRegister()
{
	return ASignalItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASignalItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "World/SignalItem.h" },
		{ "ModuleRelativePath", "Public/World/SignalItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASignalItem constinit property declarations ******************************
// ********** End Class ASignalItem constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASignalItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASignalItem_Statics
UObject* (*const Z_Construct_UClass_ASignalItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASignalItem_Statics::ClassParams = {
	&ASignalItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASignalItem_Statics::Class_MetaDataParams)
};
void ASignalItem::StaticRegisterNativesASignalItem()
{
}
UClass* Z_Construct_UClass_ASignalItem()
{
	if (!Z_Registration_Info_UClass_ASignalItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASignalItem.OuterSingleton, Z_Construct_UClass_ASignalItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASignalItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASignalItem);
ASignalItem::~ASignalItem() {}
// ********** End Class ASignalItem ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASignalItem, ASignalItem::StaticClass, TEXT("ASignalItem"), &Z_Registration_Info_UClass_ASignalItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASignalItem), 3820566721U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_828191919{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
