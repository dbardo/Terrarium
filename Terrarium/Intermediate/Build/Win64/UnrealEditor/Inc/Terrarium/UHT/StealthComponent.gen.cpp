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
TERRARIUM_API UEnum* Z_Construct_UEnum_Terrarium_EMovementState();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
static UEnum* EMovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Terrarium_EMovementState, (UObject*)Z_Construct_UPackage__Script_Terrarium(), TEXT("EMovementState"));
	}
	return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
}
template<> TERRARIUM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovementState>()
{
	return EMovementState_StaticEnum();
}
struct Z_Construct_UEnum_Terrarium_EMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines the current movement state of the actor, which affects their visibility and noise production.\n */" },
#endif
		{ "Crouching.DisplayName", "Crouching" },
		{ "Crouching.Name", "EMovementState::Crouching" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "EMovementState::Hidden" },
		{ "Interacting.DisplayName", "Interacting" },
		{ "Interacting.Name", "EMovementState::Interacting" },
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "EMovementState::Sprinting" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the current movement state of the actor, which affects their visibility and noise production." },
#endif
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "EMovementState::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementState::Crouching", (int64)EMovementState::Crouching },
		{ "EMovementState::Walking", (int64)EMovementState::Walking },
		{ "EMovementState::Sprinting", (int64)EMovementState::Sprinting },
		{ "EMovementState::Interacting", (int64)EMovementState::Interacting },
		{ "EMovementState::Hidden", (int64)EMovementState::Hidden },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Terrarium_EMovementState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Terrarium_EMovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Terrarium,
	nullptr,
	"EMovementState",
	"EMovementState",
	Z_Construct_UEnum_Terrarium_EMovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Terrarium_EMovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Terrarium_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Terrarium_EMovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Terrarium_EMovementState()
{
	if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_Terrarium_EMovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
}
// ********** End Enum EMovementState **************************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that manages the actor's stealth state and calculates noise emission radiuses based on movement.\n */" },
#endif
		{ "IncludePath", "Detection/StealthComponent.h" },
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that manages the actor's stealth state and calculates noise emission radiuses based on movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkingNoiseRadius_MetaData[] = {
		{ "Category", "Stealth|Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Noise radius when walking */" },
#endif
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise radius when walking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingNoiseRadius_MetaData[] = {
		{ "Category", "Stealth|Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Noise radius when sprinting */" },
#endif
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise radius when sprinting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractingNoiseRadius_MetaData[] = {
		{ "Category", "Stealth|Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Noise radius when interacting with objects */" },
#endif
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise radius when interacting with objects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenNoiseRadius_MetaData[] = {
		{ "Category", "Stealth|Noise" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Noise radius when hidden or stationary */" },
#endif
		{ "ModuleRelativePath", "Public/Detection/StealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise radius when hidden or stationary" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UStealthComponent constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingNoiseRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingNoiseRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractingNoiseRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HiddenNoiseRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStealthComponent constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UStealthComponent_Statics

// ********** Begin Class UStealthComponent Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStealthComponent_Statics::NewProp_WalkingNoiseRadius = { "WalkingNoiseRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStealthComponent, WalkingNoiseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkingNoiseRadius_MetaData), NewProp_WalkingNoiseRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStealthComponent_Statics::NewProp_SprintingNoiseRadius = { "SprintingNoiseRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStealthComponent, SprintingNoiseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingNoiseRadius_MetaData), NewProp_SprintingNoiseRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStealthComponent_Statics::NewProp_InteractingNoiseRadius = { "InteractingNoiseRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStealthComponent, InteractingNoiseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractingNoiseRadius_MetaData), NewProp_InteractingNoiseRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStealthComponent_Statics::NewProp_HiddenNoiseRadius = { "HiddenNoiseRadius", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStealthComponent, HiddenNoiseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenNoiseRadius_MetaData), NewProp_HiddenNoiseRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthComponent_Statics::NewProp_WalkingNoiseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthComponent_Statics::NewProp_SprintingNoiseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthComponent_Statics::NewProp_InteractingNoiseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStealthComponent_Statics::NewProp_HiddenNoiseRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStealthComponent_Statics::PropPointers) < 2048);
// ********** End Class UStealthComponent Property Definitions *************************************
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
	Z_Construct_UClass_UStealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStealthComponent_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1257848571U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStealthComponent, UStealthComponent::StaticClass, TEXT("UStealthComponent"), &Z_Registration_Info_UClass_UStealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStealthComponent), 59228621U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_960694935{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Detection_StealthComponent_h__Script_Terrarium_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
