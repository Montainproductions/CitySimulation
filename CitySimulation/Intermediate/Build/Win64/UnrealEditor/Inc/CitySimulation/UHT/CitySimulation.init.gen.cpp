// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySimulation_init() {}
	CITYSIMULATION_API UFunction* Z_Construct_UDelegateFunction_CitySimulation_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CitySimulation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CitySimulation()
	{
		if (!Z_Registration_Info_UPackage__Script_CitySimulation.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CitySimulation_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CitySimulation",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD8B8D371,
				0x95CD08CA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CitySimulation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CitySimulation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CitySimulation(Z_Construct_UPackage__Script_CitySimulation, TEXT("/Script/CitySimulation"), Z_Registration_Info_UPackage__Script_CitySimulation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD8B8D371, 0x95CD08CA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
