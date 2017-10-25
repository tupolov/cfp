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
	class CFP_Beret4
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Beret4
	{
		displayName = "Beret4";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Beret4_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Black)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret4_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Grey)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Grey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret4_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Blue)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Blue.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret4_Brown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Brown)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Brown.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Brown.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret4_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Green)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret4_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Red)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Red.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret4_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Tan)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret4_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret4 (Yellow)";
		picture = "\x\cfp\addons\character\Hats\Beret4\ui\Yellow.jpg";
		model = "\x\cfp\addons\character\Models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret4\Yellow.paa"};
			hiddenSelections[] = {"Camo"};        
		};
	};
};
//};
