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
	class CFP_Shemagh
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Shemagh
	{
		displayName = "Shemagh";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_Shemagh_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Black)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Shemagh_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Green)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Tan)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Shemagh_White: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (White)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\White.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_Grey: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Grey)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Grey.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_CheckBlack: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check Black)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckBlack.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckBlack.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckBlack.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_CheckGreen: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check Green)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckGreen.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckGreen.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckGreen.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_CheckTan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check Tan)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckTan.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckTan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckTan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Shemagh_CheckWhite: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check White)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckWhite.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckWhite.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckWhite.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_Shemagh_CheckBlue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check Blue)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckBlue.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckBlue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckBlue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_Shemagh_CheckRed: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Shemagh (Check Red)";
		picture = "\x\cfp\addons\character\Hats\Shemagh\ui\CheckRed.jpg";
		model = "\x\cfp\addons\character\Models\Shemagh";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\CheckRed.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\character\Models\Shemagh";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\Shemagh\Red.paa"};
			hiddenSelections[] = {"Camo"};
			
		};
	};
};
	//};
