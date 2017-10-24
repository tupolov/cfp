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
	class CFP_Bandana
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Bandana
	{
		displayName = "Bandana";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Bandana_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Black)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Bandana_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Green)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Bandana_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Bandana_Hunter: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Hunter)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\Hunter.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Hunter.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Bandana_Hunter2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Hunter2)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\Hunter2.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Bandana_ATacsFG: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (A-Tacs FG)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\ATacsFG.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Bandana_NodUrban: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Bandana (Nod Urban)";
		picture = "\x\cfp\addons\common_character\Hats\Bandana\ui\NodUrban.jpg";
		model = "\x\cfp\addons\common_character\Models\Bandana";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\common_character\Models\Bandana";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Bandana\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};        
		};
	};
};
//};
