
class CfgPatches
{
	class CFP_Flags_SriLanka
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
	class SriLanka_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Sri Lanka";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\SriLanka\SriLanka.paa""";		
		};
	};
};
//};
