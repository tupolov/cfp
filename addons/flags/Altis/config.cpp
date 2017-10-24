
class CfgPatches
{
	class CFP_Flags_Altis
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
	class Altis_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Altis";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Altis\Altis.paa""";};
	};
	class Altis_Army_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Altis (Army)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Altis\Army.paa"""};
	};
	class Altis_AirForce_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Altis (Air Force)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Altis\AirForce.paa"""};
	};
	class Altis_Navy_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Altis (Navy)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Altis\Navy.paa"""		};
	};
};
//};
