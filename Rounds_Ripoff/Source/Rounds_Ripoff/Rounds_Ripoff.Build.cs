// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Rounds_Ripoff : ModuleRules
{
	public Rounds_Ripoff(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
