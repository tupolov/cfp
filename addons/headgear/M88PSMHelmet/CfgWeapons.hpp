

/*M88PSMHelmet

class CfgVehicleClasses
{
	class CFP_M88PSMHelmet
	{
		displayName = "M88PSM Helmet";
	};
};
*/
	class SP_M88PSMHelmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M88PSMHelmet_Blue1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Blue1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Blue 1)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Blue2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Blue2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Blue 2)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_M88PSMHelmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Green1.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88PSMHelmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88PSMHelmet_Un1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Un1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Un 1)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Un1.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88PSMHelmet_Un2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88PSMHelmet_Un2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88PSM Helmet (Un 2)";
		// picture = "\x\cfp\addons\headgear\M88PSMHelmet\ui\Un2.jpg";
		model = "\x\cfp\addons\models\M88PSMHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88PSMHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88PSMHelmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};

