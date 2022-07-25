// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_PUBLISH : ModuleRules
{
	public UE5_PUBLISH(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
