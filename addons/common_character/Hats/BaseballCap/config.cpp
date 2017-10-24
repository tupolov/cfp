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
	class CFP_BaseballCap
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_BaseballCap
	{
		displayName = "Baseball Cap";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_BaseballCap_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Black)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BaseballCap_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Blue)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Blue.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Blue.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Green)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Red)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Red.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_White: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (White)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\White.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Yellow)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Yellow.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Yellow.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_UN: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\UN.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\UN.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_TweedCheckedBrown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Tweed Checked Brown)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\TweedCheckedBrown.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedBrown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedBrown.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_TweedCheckedGreen: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Tweed Checked Green)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\TweedCheckedGreen.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedGreen.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedGreen.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_TweedCheckedGrey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Tweed Checked Grey)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\TweedCheckedGrey.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedGrey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\TweedCheckedGrey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_Hunter: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Hunter)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Hunter.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Hunter.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_Hunter2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Hunter2)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\Hunter2.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_ATacsFG: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (A-Tacs FG)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\ATacsFG.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_NodUrban: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Nod Urban)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\NodUrban.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_PoliceBlack1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Police Black1)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\PoliceBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\PoliceBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\PoliceBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_FBIBlack1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (FBI Black1)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\FBIBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\FBIBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\FBIBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_SwatBlack1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (Swat Black1)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\SwatBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\SwatBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\SwatBlack1.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_MPBlack1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (M.P Black1)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\MPBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\MPBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\MPBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_MPBlack2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Baseball Cap (M.P Black2)";
		picture = "\x\cfp\addons\common_character\Hats\BaseballCap\ui\MPBlack2.jpg";
		model = "\x\cfp\addons\common_character\Models\BaseballCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\MPBlack2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BaseballCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BaseballCap\MPBlack2.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
//};
