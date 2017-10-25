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
	class CFP_Beret3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Beret3
	{
		displayName = "Beret3";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Beret3_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Black)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret3_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Grey)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Grey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret3_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Blue)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Blue.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret3_Brown: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Brown)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Brown.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Brown.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Beret3_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Green)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret3_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Red)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Red.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret3_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Tan)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Beret3_Yellow: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret3 (Yellow)";
		picture = "\x\cfp\addons\character\Hats\Beret3\ui\Yellow.jpg";
		model = "\x\cfp\addons\character\Models\Beret3";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Beret3";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Beret3\Yellow.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
//};
