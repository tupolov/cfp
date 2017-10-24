
class CfgPatches
{
	class CFP_Flags_GuineaBissau
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
	};
};
class CfgVehicles
{
	class FlagPole_F;	
	class GuineaBissau_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Guinea Bissau";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\GuineaBissau\GuineaBissau.paa""";		
		};
	};
};
//};
