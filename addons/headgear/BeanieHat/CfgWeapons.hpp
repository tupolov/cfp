

/*BeanieHat

class CfgVehicleClasses
{
	class CFP_BeanieHat
	{
		displayName = "Beanie Hat";
	};
};
*/
	class SP_BeanieHat_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BeanieHat_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Black)";
		// picture = "\x\cfp\addons\headgear\BeanieHat\ui\Black.jpg";
		model = "\x\cfp\addons\models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BeanieHat_Green: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BeanieHat_Green.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Green)";
		// picture = "\x\cfp\addons\headgear\BeanieHat\ui\Green.jpg";
		model = "\x\cfp\addons\models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BeanieHat_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BeanieHat_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beanie Hat (Tan)";
		// picture = "\x\cfp\addons\headgear\BeanieHat\ui\Tan.jpg";
		model = "\x\cfp\addons\models\BeanieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\BeanieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BeanieHat\Tan.paa"};
			hiddenSelections[] = {"Camo"};


		};
	};

