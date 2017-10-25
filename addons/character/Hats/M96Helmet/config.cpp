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
	class CFP_M96Helmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_M96Helmet
	{
		displayName = "M96 Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_M96Helmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Black 1)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Black1.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Black 2)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Black2.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M96Helmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Blue 1)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Blue 2)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Blue.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M96Helmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Green 1)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Green1.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Green 2)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Green2.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Green.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M96Helmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Tan 1)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Tan 2)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Tan.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M96Helmet_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Un 1)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Un1.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Un.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Un.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Un2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Un 2)";
		picture = "\x\cfp\addons\character\Hats\M96Helmet\ui\Un2.jpg";
		model = "\x\cfp\addons\character\Models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Un.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\M96Helmet\Un.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};
	};
//};
