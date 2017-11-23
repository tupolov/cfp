

/*HeadSet

class CfgVehicleClasses
{
	class CFP_HeadSet
	{
		displayName = "HeadSet";
	};
};
*/
	class SP_HeadSet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Black)";
		picture = "\x\cfp\addons\headgear\HeadSet\ui\Black.jpg";
		model = "\x\cfp\addons\models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\HeadSet";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_HeadSet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Green)";
		picture = "\x\cfp\addons\headgear\HeadSet\ui\Green.jpg";
		model = "\x\cfp\addons\models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\HeadSet";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_HeadSet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Head Set (Tan)";
		picture = "\x\cfp\addons\headgear\HeadSet\ui\Tan.jpg";
		model = "\x\cfp\addons\models\HeadSet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\HeadSet";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\HeadSet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

