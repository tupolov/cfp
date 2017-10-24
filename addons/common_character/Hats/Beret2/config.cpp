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
	class CFP_Beret2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Beret2
	{
		displayName = "Beret2";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Beret2_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Black)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret2_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Grey)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Grey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret2_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Blue)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Blue.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret2_Brown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Brown)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Brown.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Brown.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret2_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Green)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret2_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Red)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Red.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret2_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret2_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret2 (Yellow)";
		picture = "\x\cfp\addons\common_character\Hats\Beret2\ui\Yellow.jpg";
		model = "\x\cfp\addons\common_character\Models\Beret2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\Beret2";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\Beret2\Yellow.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
//};
