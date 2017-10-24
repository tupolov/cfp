
class CfgPatches
{
	class CFP_Flags_Netherlands
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
	class Netherlands_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Netherlands";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Netherlands\Netherlands.paa""";};
	};
	class Netherlands_RoyalAirForce_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Netherlands (Royal Air Force)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Netherlands\RoyalAirForce.paa"""};
	};
	class Netherlands_RoyalNavy_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Netherlands (Royal Navy)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Netherlands\RoyalNavy.paa"""		};
	};
};
//};
