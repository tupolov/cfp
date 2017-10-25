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
	class CFP_PASGTHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_PASGTHelmet
	{
		displayName = "PASGT Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_PASGTHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Black 1)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PASGTHelmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Black 2)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_PASGTHelmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Blue 1)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PASGTHelmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Blue 2)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_PASGTHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Green 1)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PASGTHelmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Green 2)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_PASGTHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Tan 1)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PASGTHelmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Tan 2)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_PASGTHelmet_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Un 1)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Un1.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Un.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Un.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PASGTHelmet_Un2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Un 2)";
		picture = "\x\cfp\addons\character\Hats\PASGTHelmet\ui\Un2.jpg";
		model = "\x\cfp\addons\character\Models\PASGTHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Un.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\PASGTHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\PASGTHelmet\Un.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
};
	//};
