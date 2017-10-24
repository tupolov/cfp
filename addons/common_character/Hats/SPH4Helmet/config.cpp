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
	class CFP_SPH4Helmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_SPH4Helmet
	{
		displayName = "SPH4 Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_SPH4Helmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Black)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SPH4Helmet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Green)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_White: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (White)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\White.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\White.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SPH4Helmet_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Blue)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Blue.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass =80;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_Brown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Brown)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Brown.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Brown.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Grey)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Grey.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_Orange: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Orange)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Orange.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Orange.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Orange.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SPH4Helmet_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Red)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Red.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Red.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SPH4Helmet_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (Yellow)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\Yellow.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\Yellow.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_SPH4Helmet_UN1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\UN1.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN1.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_SPH4Helmet_UN2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\UN2.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_SPH4Helmet_UN3: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SPH4 Helmet (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\SPH4Helmet\ui\UN3.jpg";
		model = "\x\cfp\addons\common_character\Models\SPH4Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN3.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\SPH4Helmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\SPH4Helmet\UN3.paa"};
			hiddenSelections[] = {"Camo"};        
		};
	};
};
	//};
