// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrarium_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature();
	TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature();
	TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature();
	TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature();
	TERRARIUM_API UFunction* Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Terrarium;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Terrarium()
	{
		if (!Z_Registration_Info_UPackage__Script_Terrarium.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Terrarium_OnGameLost__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Terrarium_OnGameWon__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Terrarium_OnItemCollectedEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Terrarium_OnPlayerStruckEvent__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Terrarium_OnPredatorStrikesPlayer__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Terrarium",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x6E10BE1A,
			0xA5153C5B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Terrarium.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Terrarium.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Terrarium(Z_Construct_UPackage__Script_Terrarium, TEXT("/Script/Terrarium"), Z_Registration_Info_UPackage__Script_Terrarium, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6E10BE1A, 0xA5153C5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
