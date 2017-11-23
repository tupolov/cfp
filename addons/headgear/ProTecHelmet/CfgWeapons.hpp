

/*ProTecHelmet

class CfgVehicleClasses
{
	class CFP_ProTecHelmet
	{
		displayName = "ProTec Helmet";
	};
};
*/
	class SP_ProTecHelmet_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Black)";
		picture = "\x\cfp\addons\headgear\ProTecHelmet\ui\Black.jpg";
		model = "\x\cfp\addons\models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_ProTecHelmet_Green: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Green)";
		picture = "\x\cfp\addons\headgear\ProTecHelmet\ui\Green.jpg";
		model = "\x\cfp\addons\models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_ProTecHelmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "ProTec Helmet (Tan)";
		picture = "\x\cfp\addons\headgear\ProTecHelmet\ui\Tan.jpg";
		model = "\x\cfp\addons\models\ProTecHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\ProTecHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\ProTecHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

