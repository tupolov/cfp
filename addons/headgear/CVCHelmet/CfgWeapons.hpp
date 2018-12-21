

/*CVCHelmet

class CfgVehicleClasses
{
	class CFP_CVCHelmet
	{
		displayName = "CVC Helmet";
	};
};
*/
    class SP_CVCHelmet_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_CVCHelmet_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Black)";
		// picture = "\x\cfp\addons\headgear\CVCHelmet\ui\Black.jpg";
		model = "\x\cfp\addons\models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";
                ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
                ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

    class SP_CVCHelmet_Green: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_CVCHelmet_Green.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Green)";
		// picture = "\x\cfp\addons\headgear\CVCHelmet\ui\Green.jpg";
		model = "\x\cfp\addons\models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";
                ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
                ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

    class SP_CVCHelmet_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_CVCHelmet_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (Tan)";
		// picture = "\x\cfp\addons\headgear\CVCHelmet\ui\Tan.jpg";
		model = "\x\cfp\addons\models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";
                ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
                ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};
    class SP_CVCHelmet_UN: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_CVCHelmet_UN.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "CVC Helmet (U.N)";
		// picture = "\x\cfp\addons\headgear\CVCHelmet\ui\UN.jpg";
		model = "\x\cfp\addons\models\CVCHelmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";
                ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
                ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\CVCHelmet";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\CVCHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

