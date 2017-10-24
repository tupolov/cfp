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
	class CFP_PatrolCap
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_PatrolCap
	{
		displayName = "Patrol Cap";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_PatrolCap_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Black)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_PatrolCap_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Blue)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Blue.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_PatrolCap_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Green)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_PatrolCap_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_PatrolCap_UN: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\UN.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\UN.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Grey)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Grey.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_PatrolCap_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Yellow)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Yellow.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Yellow.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_BlueFrost: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Blue Frost)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\BlueFrost.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\BlueFrost.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\BlueFrost.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_BlueDark: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Blue Dark)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\BlueDark.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\BlueDark.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\BlueDark.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_GreenOlive: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Green Olive)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\GreenOlive.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\GreenOlive.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\GreenOlive.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_Hunter: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Hunter)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Hunter.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Hunter.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_PatrolCap_Hunter2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Hunter2)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\Hunter2.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_PatrolCap_ATacsFG: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (A-Tacs FG)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\ATacsFG.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_PatrolCap_NodUrban: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Patrol Cap (Nod Urban)";
		picture = "\x\cfp\addons\common_character\Hats\PatrolCap\ui\NodUrban.jpg";
		model = "\x\cfp\addons\common_character\Models\PatrolCap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\PatrolCap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\PatrolCap\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};        
		};
	};
};
	//};
