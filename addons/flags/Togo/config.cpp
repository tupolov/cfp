
class CfgPatches
{
	class CFP_Flags_Togo
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
	class Togo_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Togo";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Togo\Togo.paa""";		
		};
	};
};
//};
