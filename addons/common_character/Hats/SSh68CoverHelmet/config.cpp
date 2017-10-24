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
	class CFP_SSh68CoverHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_SSh68CoverHelmet
	{
		displayName = "SSh68 Cover Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_SSh68CoverHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Black 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Black 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68CoverHelmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Blue 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Blue 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Green 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Green 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Green.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Green.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Tan 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Tan 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_White1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (White 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\White1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68CoverHelmet_White2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (White 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\White2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\White.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\White.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68CoverHelmet_UN1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (U.N 1)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\UN1.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68CoverHelmet_UN2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (UN 2)";
		picture = "\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\ui\UN2.jpg";
		model = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\UN.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\UN.paa","\x\cfp\addons\common_character\Hats\SSh68CoverHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			
		};
	};
};
	//};
