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
	class CFP_MichHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_MichHelmet
	{
		displayName = "Mich Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_MichHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Black 1)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_MichHelmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Black 2)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_MichHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Green 1)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_MichHelmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Green 2)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Green.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_MichHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Tan 1)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_MichHelmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Tan 2)";
		picture = "\x\cfp\addons\common_character\Hats\MichHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\common_character\Models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\MichHelmet\Tan.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa","\x\cfp\addons\common_character\Hats\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
};
//};
