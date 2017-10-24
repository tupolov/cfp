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
	class CFP_BoonieHat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_BoonieHat
	{
		displayName = "Boonie Hat";
	};
};
class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class SP_BoonieHat_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Black)";
		picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BoonieHat_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Green)";
		picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BoonieHat_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Tan)";
		picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BoonieHat_UN: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (U.N)";
		picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\UN.jpg";
		model = "\x\cfp\addons\common_character\Models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BoonieHat_Hunter: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Hunter";
		                           picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\Hunter.jpg";
		                           model = "\x\cfp\addons\common_character\Models\BoonieHat";
		                           hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Hunter.paa"};
		                           hiddenSelections[] = {"Camo"};
		                           author = "SP Craig";
		                           
		                           

		                           class ItemInfo: HeadgearItem
		                           {
		                           	mass = 15;
		                           	uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
		                           	modelSides[] = {3,1};
		                           	armor = 0;
		                           	passThrough = 0.30;
		                           	hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Hunter.paa"};
		                           	hiddenSelections[] = {"Camo"};

		                           };
		                       };        class SP_BoonieHat_Hunter2: ItemCore
		                       {
		                       	scope = 2;
		                       	weaponPoolAvailable = 1;
		                       	displayName = "Boonie Hat (Hunter2";
		                       	                           picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\Hunter2.jpg";
		                       	                           model = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                           hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Hunter2.paa"};
		                       	                           hiddenSelections[] = {"Camo"};
		                       	                           author = "SP Craig";
		                       	                           
		                       	                           

		                       	                           class ItemInfo: HeadgearItem
		                       	                           {
		                       	                           	mass = 15;
		                       	                           	uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                           	modelSides[] = {3,1};
		                       	                           	armor = 0;
		                       	                           	passThrough = 0.30;
		                       	                           	hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\Hunter2.paa"};
		                       	                           	hiddenSelections[] = {"Camo"};
		                       	                           };
		                       	                       };        class SP_BoonieHat_ATacsFG: ItemCore
		                       	                       {
		                       	                       	scope = 2;
		                       	                       	weaponPoolAvailable = 1;
		                       	                       	displayName = "Boonie Hat (A-Tacs FG";
		                       	                       	                           picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\ATacsFG.jpg";
		                       	                       	                           model = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                       	                           hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\ATacsFG.paa"};
		                       	                       	                           hiddenSelections[] = {"Camo"};
		                       	                       	                           author = "SP Craig";
		                       	                       	                           
		                       	                       	                           

		                       	                       	                           class ItemInfo: HeadgearItem
		                       	                       	                           {
		                       	                       	                           	mass = 15;
		                       	                       	                           	uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                       	                           	modelSides[] = {3,1};
		                       	                       	                           	armor = 0;
		                       	                       	                           	passThrough = 0.30;
		                       	                       	                           	hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\ATacsFG.paa"};
		                       	                       	                           	hiddenSelections[] = {"Camo"};
		                       	                       	                           };
		                       	                       	                       };        class SP_BoonieHat_NodUrban: ItemCore
		                       	                       	                       {
		                       	                       	                       	scope = 2;
		                       	                       	                       	weaponPoolAvailable = 1;
		                       	                       	                       	displayName = "Boonie Hat (Nod Urban";
		                       	                       	                       	                           picture = "\x\cfp\addons\common_character\Hats\BoonieHat\ui\NodUrban.jpg";
		                       	                       	                       	                           model = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                       	                       	                           hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\NodUrban.paa"};
		                       	                       	                       	                           hiddenSelections[] = {"Camo"};
		                       	                       	                       	                           author = "SP Craig";
		                       	                       	                       	                           
		                       	                       	                       	                           

		                       	                       	                       	                           class ItemInfo: HeadgearItem
		                       	                       	                       	                           {
		                       	                       	                       	                           	mass = 15;
		                       	                       	                       	                           	uniformmodel = "\x\cfp\addons\common_character\Models\BoonieHat";
		                       	                       	                       	                           	modelSides[] = {3,1};
		                       	                       	                       	                           	armor = 0;
		                       	                       	                       	                           	passThrough = 0.30;
		                       	                       	                       	                           	hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Hats\BoonieHat\NodUrban.paa"};
		                       	                       	                       	                           	hiddenSelections[] = {"Camo"};
		                       	                       	                       	                           };
		                       	                       	                       	                       };
		                       	                       	                       	                   };
//};
