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
	class CFP_SSh68Helmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_SSh68Helmet
	{
		displayName = "SSh68 Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_SSh68Helmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Black 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Black1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68Helmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Black 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Black2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68Helmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Blue 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68Helmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Blue 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Blue.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Blue.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68Helmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Green 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Green1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68Helmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Green 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Green2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Green.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Green.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68Helmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Tan 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68Helmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (Tan 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Tan.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\Tan.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68Helmet_White1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (White 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\White1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68Helmet_White2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (White 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\White2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\White.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\White.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};        class SP_SSh68Helmet_UN1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (U.N 1)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\UN1.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68Helmet_UN2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Helmet (UN 2)";
		picture = "\x\cfp\addons\character\Hats\SSh68Helmet\ui\UN2.jpg";
		model = "\x\cfp\addons\character\Models\SSh68Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\UN.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\SSh68Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\SSh68Helmet\UN.paa","\x\cfp\addons\character\Hats\SSh68Helmet\Black.paa","\x\cfp\addons\character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			
		};
	};
};
	//};
