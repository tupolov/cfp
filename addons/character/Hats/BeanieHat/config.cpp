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
	class CFP_BeanieHat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_BeanieHat
	{
		displayName = "Beanie Hat";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_BeanieHat_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Black)";
		picture = "\x\cfp\addons\character\Hats\BeanieHat\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\character\Models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BeanieHat_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Green)";
		picture = "\x\cfp\addons\character\Hats\BeanieHat\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\character\Models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BeanieHat_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Tan)";
		picture = "\x\cfp\addons\character\Hats\BeanieHat\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\character\Models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\BeanieHat\Tan.paa"};
			hiddenSelections[] = {"Camo"};

			
		};
	};
};
//};
