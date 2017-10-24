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
	class CFP_MkBushHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_MkBushHelmet
	{
		displayName = "Mk Bush Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_MkBushHelmet_Forrest: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Forrest)";
		picture = "\x\cfp\addons\common_character\Hats\MkBushHelmet\ui\Forrest.jpg";
		model = "\x\cfp\addons\common_character\Models\MkBushHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Mk7Helmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\MkBushHelmet\Forrest.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Mk7Helmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\MkBushHelmet\Forrest.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_MkBushHelmet_Tropical: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk Bush Helmet (Tropical)";
		picture = "\x\cfp\addons\common_character\Hats\MkBushHelmet\ui\Tropical.jpg";
		model = "\x\cfp\addons\common_character\Models\MkBushHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Mk7Helmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\MkBushHelmet\Tropical.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MkBushHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Mk7Helmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\MkBushHelmet\Tropical.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};
	};
//};
