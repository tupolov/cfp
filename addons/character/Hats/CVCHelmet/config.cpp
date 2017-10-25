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
	class CFP_CVCHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_CVCHelmet
	{
		displayName = "CVC Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_CVCHelmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Black)";
		picture = "\x\cfp\addons\character\Hats\CVCHelmet\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_CVCHelmet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Green)";
		picture = "\x\cfp\addons\character\Hats\CVCHelmet\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_CVCHelmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Tan)";
		picture = "\x\cfp\addons\character\Hats\CVCHelmet\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_CVCHelmet_UN: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (U.N)";
		picture = "\x\cfp\addons\character\Hats\CVCHelmet\ui\UN.jpg";
		model = "\x\cfp\addons\character\Models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\CVCHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};        
		};
	};
};
//};
