
class CfgPatches
{
	class CFP_Flags_CapeVerde
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
	class CapeVerde_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Cape Verde";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\CapeVerde\CapeVerde.paa""";
		};
	};
};
//};
