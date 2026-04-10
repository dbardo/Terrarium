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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumCharacter();
TERRARIUM_API UClass* Z_Construct_UClass_ATerrariumCharacter_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_UNoiseEmitterComponent_NoRegister();
TERRARIUM_API UClass* Z_Construct_UClass_UStealthComponent_NoRegister();
TERRARIUM_API UEnum* Z_Construct_UEnum_Terrarium_EMovementShakeState();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMovementShakeState *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementShakeState;
static UEnum* EMovementShakeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovementShakeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovementShakeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Terrarium_EMovementShakeState, (UObject*)Z_Construct_UPackage__Script_Terrarium(), TEXT("EMovementShakeState"));
	}
	return Z_Registration_Info_UEnum_EMovementShakeState.OuterSingleton;
}
template<> TERRARIUM_NON_ATTRIBUTED_API UEnum* StaticEnum<EMovementShakeState>()
{
	return EMovementShakeState_StaticEnum();
}
struct Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Name", "EMovementShakeState::Idle" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
		{ "Run.Name", "EMovementShakeState::Run" },
		{ "Walk.Name", "EMovementShakeState::Walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovementShakeState::Idle", (int64)EMovementShakeState::Idle },
		{ "EMovementShakeState::Walk", (int64)EMovementShakeState::Walk },
		{ "EMovementShakeState::Run", (int64)EMovementShakeState::Run },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Terrarium,
	nullptr,
	"EMovementShakeState",
	"EMovementShakeState",
	Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Terrarium_EMovementShakeState()
{
	if (!Z_Registration_Info_UEnum_EMovementShakeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementShakeState.InnerSingleton, Z_Construct_UEnum_Terrarium_EMovementShakeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovementShakeState.InnerSingleton;
}
// ********** End Enum EMovementShakeState *********************************************************

// ********** Begin Class ATerrariumCharacter Function HandleInteract ******************************
struct Z_Construct_UFunction_ATerrariumCharacter_HandleInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleInteract constinit property declarations ************************
// ********** End Function HandleInteract constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrariumCharacter_HandleInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrariumCharacter, nullptr, "HandleInteract", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrariumCharacter_HandleInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrariumCharacter_HandleInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrariumCharacter_HandleInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrariumCharacter_HandleInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrariumCharacter::execHandleInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteract();
	P_NATIVE_END;
}
// ********** End Class ATerrariumCharacter Function HandleInteract ********************************

// ********** Begin Class ATerrariumCharacter Function StartSprint *********************************
struct Z_Construct_UFunction_ATerrariumCharacter_StartSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartSprint constinit property declarations ***************************
// ********** End Function StartSprint constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrariumCharacter_StartSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrariumCharacter, nullptr, "StartSprint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrariumCharacter_StartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrariumCharacter_StartSprint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrariumCharacter_StartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrariumCharacter_StartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrariumCharacter::execStartSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSprint();
	P_NATIVE_END;
}
// ********** End Class ATerrariumCharacter Function StartSprint ***********************************

// ********** Begin Class ATerrariumCharacter Function StopSprint **********************************
struct Z_Construct_UFunction_ATerrariumCharacter_StopSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopSprint constinit property declarations ****************************
// ********** End Function StopSprint constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrariumCharacter_StopSprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrariumCharacter, nullptr, "StopSprint", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrariumCharacter_StopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrariumCharacter_StopSprint_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrariumCharacter_StopSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrariumCharacter_StopSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrariumCharacter::execStopSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSprint();
	P_NATIVE_END;
}
// ********** End Class ATerrariumCharacter Function StopSprint ************************************

// ********** Begin Class ATerrariumCharacter Function ToggleCrouch ********************************
struct Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleCrouch constinit property declarations **************************
// ********** End Function ToggleCrouch constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATerrariumCharacter, nullptr, "ToggleCrouch", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATerrariumCharacter::execToggleCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleCrouch();
	P_NATIVE_END;
}
// ********** End Class ATerrariumCharacter Function ToggleCrouch **********************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRoot_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FPCamera_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent this between capsule and camera\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent this between capsule and camera" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleShake_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkShake_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunShake_MetaData[] = {
		{ "Category", "TerrariumCharacter" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchCameraZ_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandCameraZ_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Relative offset when crouched\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relative offset when crouched" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchInterpSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Relative offset when standing\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/TerrariumCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Relative offset when standing" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumCharacter constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FPCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseEmitter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IdleShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WalkShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RunShake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchCameraZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StandCameraZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATerrariumCharacter constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleInteract"), .Pointer = &ATerrariumCharacter::execHandleInteract },
		{ .NameUTF8 = UTF8TEXT("StartSprint"), .Pointer = &ATerrariumCharacter::execStartSprint },
		{ .NameUTF8 = UTF8TEXT("StopSprint"), .Pointer = &ATerrariumCharacter::execStopSprint },
		{ .NameUTF8 = UTF8TEXT("ToggleCrouch"), .Pointer = &ATerrariumCharacter::execToggleCrouch },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrariumCharacter_HandleInteract, "HandleInteract" }, // 1682996669
		{ &Z_Construct_UFunction_ATerrariumCharacter_StartSprint, "StartSprint" }, // 3234348075
		{ &Z_Construct_UFunction_ATerrariumCharacter_StopSprint, "StopSprint" }, // 3632953982
		{ &Z_Construct_UFunction_ATerrariumCharacter_ToggleCrouch, "ToggleCrouch" }, // 4126181477
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumCharacter_Statics

// ********** Begin Class ATerrariumCharacter Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CameraRoot = { "CameraRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, CameraRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRoot_MetaData), NewProp_CameraRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_FPCamera = { "FPCamera", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, FPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FPCamera_MetaData), NewProp_FPCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StealthComp = { "StealthComp", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, StealthComp), Z_Construct_UClass_UStealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthComp_MetaData), NewProp_StealthComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_NoiseEmitter = { "NoiseEmitter", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, NoiseEmitter), Z_Construct_UClass_UNoiseEmitterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseEmitter_MetaData), NewProp_NoiseEmitter_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_IdleShake = { "IdleShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, IdleShake), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleShake_MetaData), NewProp_IdleShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_WalkShake = { "WalkShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, WalkShake), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkShake_MetaData), NewProp_WalkShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_RunShake = { "RunShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, RunShake), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunShake_MetaData), NewProp_RunShake_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraManager_MetaData), NewProp_CameraManager_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CrouchCameraZ = { "CrouchCameraZ", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, CrouchCameraZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchCameraZ_MetaData), NewProp_CrouchCameraZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StandCameraZ = { "StandCameraZ", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, StandCameraZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandCameraZ_MetaData), NewProp_StandCameraZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CrouchInterpSpeed = { "CrouchInterpSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumCharacter, CrouchInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchInterpSpeed_MetaData), NewProp_CrouchInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CameraRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_FPCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StealthComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_NoiseEmitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_IdleShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_WalkShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_RunShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CameraManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CrouchCameraZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_StandCameraZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumCharacter_Statics::NewProp_CrouchInterpSpeed,
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
	FuncInfo,
	Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATerrariumCharacter_Statics::Class_MetaDataParams)
};
void ATerrariumCharacter::StaticRegisterNativesATerrariumCharacter()
{
	UClass* Class = ATerrariumCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATerrariumCharacter_Statics::Funcs));
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovementShakeState_StaticEnum, TEXT("EMovementShakeState"), &Z_Registration_Info_UEnum_EMovementShakeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 782483584U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATerrariumCharacter, ATerrariumCharacter::StaticClass, TEXT("ATerrariumCharacter"), &Z_Registration_Info_UClass_ATerrariumCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumCharacter), 4052283925U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_2731848184{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Player_TerrariumCharacter_h__Script_Terrarium_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
