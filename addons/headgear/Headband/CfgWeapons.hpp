class CFP_Headband_wdl: ItemCore
    {
    picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_Headband_wdl.paa";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "Headband (Woodland)";
	model = "\x\cfp\addons\models\Headband";
	hiddenSelections[] = {"Head"};
	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Headband\data\sf_gear2_coyote_co.paa"};
	author = "Tupolov";

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		uniformmodel = "\x\cfp\addons\models\Headband";
		modelSides[] = {6};
		armor = 0;
		passThrough = 0.30;
		hiddenSelections[] = {"Head"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Headband\data\sf_gear2_coyote_co.paa"};

	};
};

class CFP_Headband_basij1: CFP_Headband_wdl
	{
	picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_Headband_wdl.paa";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "Headband (Basij)";
	hiddenSelections[] = {"Head"};
	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Headband\data\basij1.paa"};
	author = "Tupolov";

	class ItemInfo: HeadgearItem
	{
		mass = 10;
		uniformmodel = "\x\cfp\addons\models\Headband";
		modelSides[] = {6};
		armor = 0;
		passThrough = 0.30;
		hiddenSelections[] = {"Head"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Headband\data\basij1.paa"};

	};
};



