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
	class CFP_ECHHelmet
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_ECHHelmet
	{
		displayName = "ECH Helmet";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_ECHHelmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Black 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ECHHelmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Green 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ECHHelmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Tan 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ECHHelmet_Grey1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Grey 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Grey1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Grey.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
	class SP_ECHHelmet_White1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (White 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\White1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ECHHelmet_Hunter1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Hunter 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Hunter1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Hunter.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ECHHelmet_Hunter2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Hunter 2)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\Hunter2.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ECHHelmet_ATacsFG1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (A-Tacs FG 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\ATacsFG1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_ECHHelmet_NodUrban1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ECH Helmet (Nod Urban 1)";
		picture = "\x\cfp\addons\character\Hats\ECHHelmet\ui\NodUrban1.jpg";
		model = "\x\cfp\addons\character\Models\ECHHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\ECHHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Hats\ECHHelmet\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};		};
		};
	};
//};
