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
	class CFP_Beret
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Beret
	{
		displayName = "Beret";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Beret_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Black)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Grey)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Grey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Blue)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Blue.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret_Brown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Brown)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Brown.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Brown.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Green)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Red)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Red.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Tan)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (Yellow)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Yellow.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Yellow.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Beret_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (U.N)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Un1.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Un1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Un1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret_Un2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (U.N)";
		picture = "\x\cfp\addons\character\Hats\Beret\ui\Un2.jpg";
		model = "\x\cfp\addons\character\Models\Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Un2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret\Un2.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
//};
