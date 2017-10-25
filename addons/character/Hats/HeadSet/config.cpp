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
	class CFP_HeadSet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_HeadSet
	{
		displayName = "HeadSet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_HeadSet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Black)";
		picture = "\x\cfp\addons\character\Hats\HeadSet\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\HeadSet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_HeadSet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Green)";
		picture = "\x\cfp\addons\character\Hats\HeadSet\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\HeadSet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_HeadSet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Tan)";
		picture = "\x\cfp\addons\character\Hats\HeadSet\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\HeadSet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\HeadSet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
//};
