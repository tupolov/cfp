

/*Mk7Helmet

class CfgVehicleClasses
{
	class CFP_Mk7Helmet
	{
		displayName = "Mk7 Helmet";
	};
};
*/
	class SP_Mk7Helmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_Mk7Helmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_Mk7Helmet_Blue1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Blue1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Blue 1)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_Mk7Helmet_Blue2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Blue2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Blue 2)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_Mk7Helmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Green1.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_Mk7Helmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_Mk7Helmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_Mk7Helmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_Mk7Helmet_Un1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Un1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Un 1)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Un1.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_Mk7Helmet_Un2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_Mk7Helmet_Un2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (Un 2)";
		// picture = "\x\cfp\addons\headgear\Mk7Helmet\ui\Un2.jpg";
		model = "\x\cfp\addons\models\Mk7Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\Mk7Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mk7Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};

