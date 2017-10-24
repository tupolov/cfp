
class CfgPatches
{
	class CFP_Flags_Kenya
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
	class Kenya_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Kenya";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Kenya\Kenya.paa""";		
		};
	};
};
//};
