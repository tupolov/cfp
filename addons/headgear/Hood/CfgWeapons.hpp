

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
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Black)";
		picture = "\x\cfp\addons\headgear\Hood\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Green)";
		picture = "\x\cfp\addons\headgear\Hood\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_Hood_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Hood (Tan)";
		picture = "\x\cfp\addons\headgear\Hood\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Hood";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\Hood";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Hood\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

