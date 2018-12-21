

/*TSH04Helmet

class CfgVehicleClasses
{
	class CFP_TSH04Helmet
	{
		displayName = "TSH04 Helmet";
	};
};
*/
	class SP_TSH04Helmet_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_TSH04Helmet_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "TSH04 Helmet (Black)";
		// picture = "\x\cfp\addons\headgear\TSH04Helmet\ui\Black.jpg";
		model = "\x\cfp\addons\models\TSH04Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\TSH04Helmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\TSH04Helmet";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\TSH04Helmet\Black.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

