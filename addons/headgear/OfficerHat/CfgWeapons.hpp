

/*OfficerHat

class CfgVehicleClasses
{
	class CFP_OfficerHat
	{
		displayName = "Officer Hat";
	};
};
*/
	class SP_OfficerHat_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_OfficerHat_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (Black)";
		// picture = "\x\cfp\addons\headgear\OfficerHat\ui\Black.jpg";
		model = "\x\cfp\addons\models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_OfficerHat_US_Army: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_OfficerHat_US_Army.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (U.S Army)";
		// picture = "\x\cfp\addons\headgear\OfficerHat\ui\US_Army.jpg";
		model = "\x\cfp\addons\models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\US_Army.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\US_Army.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_OfficerHat_US_Marine: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_OfficerHat_US_Marine.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (U.S Marine)";
		// picture = "\x\cfp\addons\headgear\OfficerHat\ui\US_Marine.jpg";
		model = "\x\cfp\addons\models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\US_Marine.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\US_Marine.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_OfficerHat_UK_Police: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_OfficerHat_UK_Police.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Officer Hat (UK Police)";
		// picture = "\x\cfp\addons\headgear\OfficerHat\ui\UK_Police.jpg";
		model = "\x\cfp\addons\models\OfficerHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\UK_Police.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\OfficerHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\OfficerHat\UK_Police.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

