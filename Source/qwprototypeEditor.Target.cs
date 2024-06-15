// Copyright CatnapSoftware 2024

using UnrealBuildTool;
using System.Collections.Generic;

public class qwprototypeEditorTarget : TargetRules
{
	public qwprototypeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V4;

		ExtraModuleNames.AddRange( new string[] { "qwprototype" } );
	}
}
