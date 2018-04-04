

/*Hood

class CfgVehicleClasses
{
	class CFP_Hood
	{
		displayName = "Hood";
	};
};
*/
	class SP_Hood_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Hood_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Black)";
		// picture = "\x\cfp\addons\headgear\Hood\ui\Black.jpg";
		model = "\x\cfp\addons\models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Hood";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Green: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Hood_Green.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Green)";
		// picture = "\x\cfp\addons\headgear\Hood\ui\Green.jpg";
		model = "\x\cfp\addons\models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Hood";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Hood_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Tan)";
		// picture = "\x\cfp\addons\headgear\Hood\ui\Tan.jpg";
		model = "\x\cfp\addons\models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Hood";
			modelSides[] = {3,1};
			armor = 1;
			passThrough = 0.30;
			HITPOINTS_HEAD(1,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

