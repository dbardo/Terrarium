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
TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature();
TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature();
TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature();
TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Terrarium();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGameWon ************************************************************
struct Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameWon constinit property declarations ****************************
// ********** End Delegate FOnGameWon constinit property declarations ******************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Terrarium, nullptr, "OnGameWon__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameWon_DelegateWrapper(const FMulticastScriptDelegate& OnGameWon)
{
	OnGameWon.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGameWon **************************************************************

// ********** Begin Delegate FOnGameLost ***********************************************************
struct Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGameLost constinit property declarations ***************************
// ********** End Delegate FOnGameLost constinit property declarations *****************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Terrarium, nullptr, "OnGameLost__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameLost_DelegateWrapper(const FMulticastScriptDelegate& OnGameLost)
{
	OnGameLost.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGameLost *************************************************************

// ********** Begin Delegate FOnItemCollectedEvent *************************************************
struct Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics
{
	struct _Script_Terrarium_eventOnItemCollectedEvent_Parms
	{
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnItemCollectedEvent constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnItemCollectedEvent constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnItemCollectedEvent Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Terrarium_eventOnItemCollectedEvent_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnItemCollectedEvent Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Terrarium, nullptr, "OnItemCollectedEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::_Script_Terrarium_eventOnItemCollectedEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::_Script_Terrarium_eventOnItemCollectedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemCollectedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnItemCollectedEvent, int32 NewCount)
{
	struct _Script_Terrarium_eventOnItemCollectedEvent_Parms
	{
		int32 NewCount;
	};
	_Script_Terrarium_eventOnItemCollectedEvent_Parms Parms;
	Parms.NewCount=NewCount;
	OnItemCollectedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnItemCollectedEvent ***************************************************

// ********** Begin Delegate FOnPlayerStruckEvent **************************************************
struct Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics
{
	struct _Script_Terrarium_eventOnPlayerStruckEvent_Parms
	{
		int32 NewCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPlayerStruckEvent constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPlayerStruckEvent constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPlayerStruckEvent Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Terrarium_eventOnPlayerStruckEvent_Parms, NewCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::NewProp_NewCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPlayerStruckEvent Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Terrarium, nullptr, "OnPlayerStruckEvent__DelegateSignature", 	Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::_Script_Terrarium_eventOnPlayerStruckEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::_Script_Terrarium_eventOnPlayerStruckEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerStruckEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStruckEvent, int32 NewCount)
{
	struct _Script_Terrarium_eventOnPlayerStruckEvent_Parms
	{
		int32 NewCount;
	};
	_Script_Terrarium_eventOnPlayerStruckEvent_Parms Parms;
	Parms.NewCount=NewCount;
	OnPlayerStruckEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPlayerStruckEvent ****************************************************

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameWon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameLost_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemCollectedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerStruckEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/TerrariumGameMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATerrariumGameMode constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameWon;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameLost;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemCollectedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerStruckEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATerrariumGameMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrariumGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATerrariumGameMode_Statics

// ********** Begin Class ATerrariumGameMode Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnGameWon = { "OnGameWon", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumGameMode, OnGameWon), Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameWon_MetaData), NewProp_OnGameWon_MetaData) }; // 1234006093
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnGameLost = { "OnGameLost", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumGameMode, OnGameLost), Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameLost_MetaData), NewProp_OnGameLost_MetaData) }; // 488474259
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnItemCollectedEvent = { "OnItemCollectedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumGameMode, OnItemCollectedEvent), Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemCollectedEvent_MetaData), NewProp_OnItemCollectedEvent_MetaData) }; // 2134052597
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnPlayerStruckEvent = { "OnPlayerStruckEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATerrariumGameMode, OnPlayerStruckEvent), Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerStruckEvent_MetaData), NewProp_OnPlayerStruckEvent_MetaData) }; // 671106469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrariumGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnGameWon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnGameLost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnItemCollectedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrariumGameMode_Statics::NewProp_OnPlayerStruckEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameMode_Statics::PropPointers) < 2048);
// ********** End Class ATerrariumGameMode Property Definitions ************************************
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
	Z_Construct_UClass_ATerrariumGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATerrariumGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_ATerrariumGameMode, ATerrariumGameMode::StaticClass, TEXT("ATerrariumGameMode"), &Z_Registration_Info_UClass_ATerrariumGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATerrariumGameMode), 4007663591U) },
	};
}; // Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_3754767396{
	TEXT("/Script/Terrarium"),
	Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Terrarium_Source_Terrarium_Public_Core_TerrariumGameMode_h__Script_Terrarium_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
