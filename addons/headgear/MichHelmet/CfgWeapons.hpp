

/*MichHelmet

class CfgVehicleClasses
{
	class CFP_MichHelmet
	{
		displayName = "Mich Helmet";
	};
};
*/
	class SP_MichHelmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};
	class SP_MichHelmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_MichHelmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_MichHelmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_MichHelmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\MichHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_MichHelmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_MichHelmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\MichHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\MichHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MichHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

