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
	class CFP_OfficerHat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_OfficerHat
	{
		displayName = "Officer Hat";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_OfficerHat_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (Black)";
		picture = "\x\cfp\addons\character\Hats\OfficerHat\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_OfficerHat_US_Army: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (U.S Army)";
		picture = "\x\cfp\addons\character\Hats\OfficerHat\ui\US_Army.jpg";
		model = "\x\cfp\addons\character\Models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\US_Army.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\US_Army.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_OfficerHat_US_Marine: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (U.S Marine)";
		picture = "\x\cfp\addons\character\Hats\OfficerHat\ui\US_Marine.jpg";
		model = "\x\cfp\addons\character\Models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\US_Marine.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\US_Marine.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_OfficerHat_UK_Police: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (UK Police)";
		picture = "\x\cfp\addons\character\Hats\OfficerHat\ui\UK_Police.jpg";
		model = "\x\cfp\addons\character\Models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\UK_Police.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\OfficerHat\UK_Police.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
};
	//};
