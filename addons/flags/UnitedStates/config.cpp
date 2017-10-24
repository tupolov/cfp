
class CfgPatches
{
	class CFP_Flags_UnitedStates
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
	class UnitedStates_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\UnitedStates.paa""";
};
	};
	class UnitedStates_Army_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Army)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\Army.paa""";
};
	};
	class UnitedStates_AirForce_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Air Force)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\AirForce.paa""";
};
	};
	class UnitedStates_Navy_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Navy)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\Navy.paa""";
};
	};
	class UnitedStates_CoastGuard_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Coast Guard)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\CoastGuard.paa""";
};
	};
	class UnitedStates_MarineCorps_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Marine Corps)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\MarineCorps.paa""";};
	};
	class UnitedStates_NavySeals_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Navy Seals)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\NavySeals.paa""";
};
	};
	class UnitedStates_Rangers_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Rangers)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\Rangers.paa""";
};
	};
	class UnitedStates_SpecialForces_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "United States (Special Forces)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\UnitedStates\SpecialForces.paa""";		
		};
	};
};
//};
