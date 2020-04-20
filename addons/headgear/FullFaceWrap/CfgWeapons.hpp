

/*FullFaceWrap

class CfgVehicleClasses
{
	class CFP_BeanieHat
	{
		displayName = "Full Face Wrap";
	};
};
*/
	class CFP_FullFaceWrap_Snow: ItemCore
    {
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Face Wrap (Winter)";
		model = "\x\cfp\addons\models\cfp_winter_wrap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_snow.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_snow_co.paa"};
		hiddenSelections[] = {"Camo","camo2"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\cfp_winter_wrap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_snow.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_snow_co.paa"};
			hiddenSelections[] = {"Camo","camo2"};
		};
	};

	class CFP_FullFaceWrap_Black: ItemCore
    {
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Face Wrap (Black)";
		model = "\x\cfp\addons\models\cfp_winter_wrap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_blk_co.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_black_co.paa"};
		hiddenSelections[] = {"Camo","camo2"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\cfp_winter_wrap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_blk_co.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_black_co.paa"};
			hiddenSelections[] = {"Camo","camo2"};
		};
	};

	class CFP_FullFaceWrap_BerezWhite: ItemCore
    {
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Face Wrap (Berezka White)";
		model = "\x\cfp\addons\models\cfp_winter_wrap";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_berez_white.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_berez_white.paa"};
		hiddenSelections[] = {"Camo","camo2"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformmodel = "\x\cfp\addons\models\cfp_winter_wrap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\FullFaceWrap\data\beanie_berez_white.paa","\x\cfp\addons\headgear\FullFaceWrap\data\facewrap_berez_white.paa"};
			hiddenSelections[] = {"Camo","camo2"};
		};
	};

