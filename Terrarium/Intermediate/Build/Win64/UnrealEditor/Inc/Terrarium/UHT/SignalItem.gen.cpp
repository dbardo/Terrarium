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
TERRARIUM_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASignalItem Function OnCollected *****************************************
static FName NAME_ASignalItem_OnCollected = FName(TEXT("OnCollected"));
void ASignalItem::OnCollected()
{
	UFunction* Func = FindFunctionChecked(NAME_ASignalItem_OnCollected);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnCollected_Implementation();
	}
}
struct Z_Construct_UFunction_ASignalItem_OnCollected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/World/SignalItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCollected constinit property declarations ***************************
// ********** End Function OnCollected constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASignalItem_OnCollected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASignalItem, nullptr, "OnCollected", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASignalItem_OnCollected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASignalItem_OnCollected_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASignalItem_OnCollected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASignalItem_OnCollected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASignalItem::execOnCollected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCollected_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASignalItem Function OnCollected *******************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "SignalItem" },
		{ "ModuleRelativePath", "Public/World/SignalItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASignalItem constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASignalItem constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnCollected"), .Pointer = &ASignalItem::execOnCollected },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASignalItem_OnCollected, "OnCollected" }, // 4098979049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASignalItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASignalItem_Statics

// ********** Begin Class ASignalItem Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASignalItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASignalItem, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASignalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASignalItem_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::PropPointers) < 2048);
// ********** End Class ASignalItem Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_ASignalItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Terrarium,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASignalItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASignalItem, IInteractable), false },  // 2672479027
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASignalItem_Statics::ClassParams = {
	&ASignalItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASignalItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASignalItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASignalItem_Statics::Class_MetaDataParams)
};
void ASignalItem::StaticRegisterNativesASignalItem()
{
	UClass* Class = ASignalItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASignalItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASignalItem()
{
	if (!Z_Registration_Info_UClass_ASignalItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASignalItem.OuterSingleton, Z_Construct_UClass_ASignalItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASignalItem.OuterSingleton;
}
ASignalItem::ASignalItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASignalItem);
ASignalItem::~ASignalItem() {}
// ********** End Class ASignalItem ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASignalItem, ASignalItem::StaticClass, TEXT("ASignalItem"), &Z_Registration_Info_UClass_ASignalItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASignalItem), 3291485784U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_1355915189{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_World_SignalItem_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
