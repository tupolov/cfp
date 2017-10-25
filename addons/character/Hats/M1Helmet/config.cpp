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
	class CFP_M1Helmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_M1Helmet
	{
		displayName = "M1 Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_M1Helmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (Black)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};

		};
	};

	class SP_M1Helmet_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (Blue)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\Blue.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};

		};
	};
	class SP_M1Helmet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (Green)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};               class SP_M1Helmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (Tan)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};               class SP_M1Helmet_GrayDim: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (GrayDim)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\GrayDim.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\GrayDim.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\GrayDim.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};               class SP_M1Helmet_White: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (White)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\White.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\White.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\White.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};

		};
	};
	class SP_M1Helmet_UN: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (UN)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\UN.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\UN.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\UN.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};
	class SP_M1Helmet_MPBlack: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (MP Black)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\MPBlack.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPBlack.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPBlack.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};
	class SP_M1Helmet_MPWhite: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (MP White)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\MPWhite.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPWhite.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPWhite.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};
	class SP_M1Helmet_MPGreen: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M1 Helmet (MP Green)";
		picture = "\x\cfp\addons\character\Hats\M1Helmet\ui\MPGreen.jpg";
		model = "\x\cfp\addons\character\Models\M1Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPGreen.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M1Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M1Helmet\MPGreen.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};
};
//};
