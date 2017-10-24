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
	class CFP_M88PSMHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_M88PSMHelmet
	{
		displayName = "M88PSM Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_M88PSMHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Black 1)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Black 2)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M88PSMHelmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Blue 1)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Blue 2)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Blue.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_M88PSMHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Green 1)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Green 2)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88PSMHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Tan 1)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Tan 2)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88PSMHelmet_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Un 1)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Un1.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Un.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Un.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Un2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Un 2)";
		picture = "\x\cfp\addons\common_character\Hats\M88PSMHelmet\ui\Un2.jpg";
		model = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Un.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\M88PSMHelmet\Un.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};
	};
//};
