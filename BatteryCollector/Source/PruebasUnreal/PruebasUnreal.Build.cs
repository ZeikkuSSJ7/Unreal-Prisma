// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PruebasUnreal : ModuleRules
{
	public PruebasUnreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" });
	}
}
