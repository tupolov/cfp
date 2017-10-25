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
	class CFP_GhillieHat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_GhillieHat
	{
		displayName = "Ghillie Hat";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_GhillieHat_Forrest: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Forrest)";
		picture = "\x\cfp\addons\character\Hats\GhillieHat\ui\Forrest.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Forrest.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Forrest.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_GhillieHat_Tropical: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Tropical)";
		picture = "\x\cfp\addons\character\Hats\GhillieHat\ui\Tropical.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Tropical.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Tropical.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_GhillieHat_Summer: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Summer)";
		picture = "\x\cfp\addons\character\Hats\GhillieHat\ui\Summer.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Summer.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\GhillieHat\Summer.paa"};
			hiddenSelections[] = {"Camo"};		};
		};
	};
//};
