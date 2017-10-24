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
	class CFP_OpforRig1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Rig
	{
		displayName = "Rig";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_OpforRig1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Black)";
		picture = "\x\cfp\addons\common_character\Vests\OpforRig1\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\OpforRig1\Black.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\OpforRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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
	class SP_OpforRig1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Green)";
		picture = "\x\cfp\addons\common_character\Vests\OpforRig1\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\OpforRig1\Green.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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

	class SP_OpforRig1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Tan)";
		picture = "\x\cfp\addons\common_character\Vests\OpforRig1\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\OpforRig1\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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

	class SP_OpforRig1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Grey)";
		picture = "\x\cfp\addons\common_character\Vests\OpforRig1\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\OpforRig1\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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