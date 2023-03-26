// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Open_World_Game_2 : ModuleRules
{
	public Open_World_Game_2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
