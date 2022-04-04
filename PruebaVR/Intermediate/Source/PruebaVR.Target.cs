using UnrealBuildTool;

public class PruebaVRTarget : TargetRules
{
	public PruebaVRTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("PruebaVR");
	}
}
