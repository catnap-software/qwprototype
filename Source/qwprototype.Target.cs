// Copyright CatnapSoftware 2024

using UnrealBuildTool;
using System.Collections.Generic;

public class qwprototypeTarget : TargetRules
{
	public qwprototypeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "qwprototype" } );
	}
}
