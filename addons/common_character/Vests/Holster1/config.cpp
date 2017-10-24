	#define ReadAndWrite		0
	#define ReadAndCreate		1
	#define ReadOnly		2
	#define ReadOnlyVerified		3

	#define true	1
	#define false	0

	#define VSoft		0
	#define VArmor		1
	#define VAir		2

	#define TEast		0
	#define TWest		1
	#define TGuerrila		2
	#define TCivilian		3
	#define TSideUnknown		4
	#define TEnemy		5
	#define TFriendly		6
	#define TLogic		7

	#define private		0
	#define protected		1
	#define public		2

class CfgPatches
{
	class CFP_Holster1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Holster
	{
		displayName = "Holster";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;        class SP_Holster1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Holster 1 (Black)";
		picture = "\x\cfp\addons\common_character\Vests\Holster1\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\Holster1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\Holster1\Black.paa","\x\cfp\addons\common_character\Vests\Holster1\Black2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\Holster1";
			containerClass = "Supply0";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 10;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_Holster1_Brown: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Holster 1 (Brown)";
		picture = "\x\cfp\addons\common_character\Vests\Holster1\ui\Brown.jpg";
		model = "\x\cfp\addons\common_character\Models\Holster1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\Holster1\Brown.paa","\x\cfp\addons\common_character\Vests\Holster1\Brown2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\Holster1";
			containerClass = "Supply0";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 10;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
};
	//};