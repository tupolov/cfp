
class CfgPatches
{
	class CFP_Flags_TrinidadTobago
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
	class TrinidadTobago_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Trinidad and Tobago";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\TrinidadTobago\TrinidadTobago.paa""";		
		};
	};
};
//};
