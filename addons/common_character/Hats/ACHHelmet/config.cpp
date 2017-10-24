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
	class CFP_ACHHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_ACHHelmet
	{
		displayName = "ACH Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_ACHHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Black 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_ACHHelmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Blue 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ACHHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Green 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ACHHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Tan 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ACHHelmet_White1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (White 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\White1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ACHHelmet_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Un 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Un1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Un.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Un.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ACHHelmet_Hunter1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Hunter 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Hunter1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Hunter.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ACHHelmet_Hunter2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Hunter 2)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\Hunter2.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ACHHelmet_ATacsFG1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (A-Tacs FG 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\ATacsFG1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ACHHelmet_NodUrban1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ACH Helmet (Nod Urban 1)";
		picture = "\x\cfp\addons\common_character\Hats\ACHHelmet\ui\NodUrban1.jpg";
		model = "\x\cfp\addons\common_character\Models\ACHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\common_character\Models\ACHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\ACHHelmet\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};		};
		};
	};
//};
