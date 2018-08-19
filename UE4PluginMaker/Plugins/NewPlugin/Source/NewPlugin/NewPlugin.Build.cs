// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NewPlugin : ModuleRules
{
	public NewPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //Engine Dependencies
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "HeadMountedDisplay" });

        //The path for the header files
        PublicIncludePaths.AddRange(new string[] { "NewPlugin/Public" });

        //The path for the source files
        PrivateIncludePaths.AddRange(new string[] { "NewPlugin/Private" });

        DynamicallyLoadedModuleNames.AddRange(new string[] { "NewPlugin" });
	}
}
