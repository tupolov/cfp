
class CfgPatches
{
	class CFP_Flags_Russia
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
	class Russia_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Russia";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\Russia.paa""";
 };
       };
        class SovietUnion_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Soviet Union 1922 to 1991";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\SovietUnion.paa""";
};
       };
        class RussianSovietFederativeSocialistRepublic_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Russian Soviet Federative Socialist Republic 1917 to 1993";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\RussianSovietFederativeSocialistRepublic.paa""";
};
       };
        class TranscaucasianSocialistFederativeSovietRepublic_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Transcaucasian Socialist Federative Soviet Republic 1922 to 1936";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\TranscaucasianSocialistFederativeSovietRepublic.paa""";
};
       };
        class UkrainianSovietSocialistRepublic_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Ukrainian Soviet Socialist Republic 1919 to 1991";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\UkrainianSovietSocialistRepublic.paa""";
};
       };
        class ByelorussianSovietSocialistRepublic_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Byelorussian Soviet Socialist Republic 1920 to 1991";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Russia\ByelorussianSovietSocialistRepublic.paa""";		
		};
	};
};
//};
