

/*M88Helmet

class CfgVehicleClasses
{
	class CFP_M88Helmet
	{
		displayName = "M88 Helmet";
	};
};
*/
	class SP_M88Helmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\M88Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88Helmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\M88Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M88Helmet_Blue1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Blue1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Blue 1)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\models\M88Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88Helmet_Blue2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Blue2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Blue 2)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\M88Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};
	class SP_M88Helmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Green1.jpg";
		model = "\x\cfp\addons\models\M88Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88Helmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\M88Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88Helmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\M88Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88Helmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\M88Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M88Helmet_Un1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Un1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Un 1)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Un1.jpg";
		model = "\x\cfp\addons\models\M88Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M88Helmet_Un2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_M88Helmet_Un2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M88 Helmet (Un 2)";
		// picture = "\x\cfp\addons\headgear\M88Helmet\ui\Un2.jpg";
		model = "\x\cfp\addons\models\M88Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M88Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M88Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};

