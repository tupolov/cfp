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
	class CFP_Hood
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Hood
	{
		displayName = "Hood";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Hood_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Black)";
		picture = "\x\cfp\addons\common_character\Hats\Hood\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Green)";
		picture = "\x\cfp\addons\common_character\Hats\Hood\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\Hood\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Hood\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
//};
