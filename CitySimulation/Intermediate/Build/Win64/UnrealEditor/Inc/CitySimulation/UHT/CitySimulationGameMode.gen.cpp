// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CitySimulation/CitySimulationGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCitySimulationGameMode() {}
// Cross Module References
	CITYSIMULATION_API UClass* Z_Construct_UClass_ACitySimulationGameMode();
	CITYSIMULATION_API UClass* Z_Construct_UClass_ACitySimulationGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CitySimulation();
// End Cross Module References
	void ACitySimulationGameMode::StaticRegisterNativesACitySimulationGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACitySimulationGameMode);
	UClass* Z_Construct_UClass_ACitySimulationGameMode_NoRegister()
	{
		return ACitySimulationGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACitySimulationGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACitySimulationGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CitySimulation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySimulationGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACitySimulationGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CitySimulationGameMode.h" },
		{ "ModuleRelativePath", "CitySimulationGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACitySimulationGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACitySimulationGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACitySimulationGameMode_Statics::ClassParams = {
		&ACitySimulationGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACitySimulationGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACitySimulationGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACitySimulationGameMode()
	{
		if (!Z_Registration_Info_UClass_ACitySimulationGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACitySimulationGameMode.OuterSingleton, Z_Construct_UClass_ACitySimulationGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACitySimulationGameMode.OuterSingleton;
	}
	template<> CITYSIMULATION_API UClass* StaticClass<ACitySimulationGameMode>()
	{
		return ACitySimulationGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACitySimulationGameMode);
	ACitySimulationGameMode::~ACitySimulationGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_monta_OneDrive_Documents_GitHub_CitySimulation_CitySimulation_Source_CitySimulation_CitySimulationGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_monta_OneDrive_Documents_GitHub_CitySimulation_CitySimulation_Source_CitySimulation_CitySimulationGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACitySimulationGameMode, ACitySimulationGameMode::StaticClass, TEXT("ACitySimulationGameMode"), &Z_Registration_Info_UClass_ACitySimulationGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACitySimulationGameMode), 321945064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_monta_OneDrive_Documents_GitHub_CitySimulation_CitySimulation_Source_CitySimulation_CitySimulationGameMode_h_319716539(TEXT("/Script/CitySimulation"),
		Z_CompiledInDeferFile_FID_Users_monta_OneDrive_Documents_GitHub_CitySimulation_CitySimulation_Source_CitySimulation_CitySimulationGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_monta_OneDrive_Documents_GitHub_CitySimulation_CitySimulation_Source_CitySimulation_CitySimulationGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
