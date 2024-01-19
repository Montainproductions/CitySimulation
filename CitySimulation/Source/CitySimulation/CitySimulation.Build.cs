// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CitySimulation : ModuleRules
{
	public CitySimulation(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
