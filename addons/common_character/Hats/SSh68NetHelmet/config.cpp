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
	class CFP_SSh68NetHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_SSh68NetHelmet
	{
		displayName = "SSh68 Net Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_SSh68NetHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Black 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Black 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68NetHelmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Blue 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Blue 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Green 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Green 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Green.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Green.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Tan 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Tan 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_White1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (White 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\White1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68NetHelmet_White2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (White 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\White2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\White.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\White.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68NetHelmet_UN1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (U.N 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\UN1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68NetHelmet_UN2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (UN 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68NetHelmet\ui\UN2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\UN.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68NetHelmet\UN.paa","\x\cfp\addons\common_character\Hats\SSh68NetHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			
		};
	};
};
	//};
