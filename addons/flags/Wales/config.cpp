
class CfgPatches
{
	class CFP_Flags_Wales
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
	class Wales_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Wales";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Wales\Wales.paa""";
		};
	};
};
//};
