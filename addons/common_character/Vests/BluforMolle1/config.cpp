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
	class CFP_BluforMolle1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Molle
	{
		displayName = "Molle";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_BluforMolle1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Blufor Molle 1 (Black)";
		picture = "\x\cfp\addons\common_character\Vests\BluforMolle1\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\BluforMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\BluforMolle1\Black.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\BluforMolle1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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

	class SP_BluforMolle1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Blufor Molle 1 (Green)";
		picture = "\x\cfp\addons\common_character\Vests\BluforMolle1\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\BluforMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\BluforMolle1\Green.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\BluforMolle1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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

	class SP_BluforMolle1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Blufor Molle 1 (Tan)";
		picture = "\x\cfp\addons\common_character\Vests\BluforMolle1\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\BluforMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\BluforMolle1\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\BluforMolle1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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

	class SP_BluforMolle1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Blufor Molle 1 (Grey)";
		picture = "\x\cfp\addons\common_character\Vests\BluforMolle1\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\BluforMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\BluforMolle1\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\BluforMolle1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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

	class SP_BluforMolle1_Un: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Blufor Molle 1 (UN)";
		picture = "\x\cfp\addons\common_character\Vests\BluforMolle1\ui\Un.jpg";
		model = "\x\cfp\addons\common_character\Models\BluforMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\BluforMolle1\Un.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\BluforMolle1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
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