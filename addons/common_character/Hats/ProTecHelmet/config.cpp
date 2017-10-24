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
	class CFP_ProTecHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_ProTecHelmet
	{
		displayName = "ProTec Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_ProTecHelmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Black)";
		picture = "\x\cfp\addons\common_character\Hats\ProTecHelmet\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_ProTecHelmet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Green)";
		picture = "\x\cfp\addons\common_character\Hats\ProTecHelmet\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_ProTecHelmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\ProTecHelmet\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ProTecHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
	//};
