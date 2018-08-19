// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/// Use this is Developing a plugin
/*
#include "NewPlugin.h"

#define LOCTEXT_NAMESPACE "FNewPluginModule"

void FNewPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FNewPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FNewPluginModule, NewPlugin)
*/

/// Use this if Developing a game module

#include "NewPlugin.h"

IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, NewPlugin, "NewPlugin");