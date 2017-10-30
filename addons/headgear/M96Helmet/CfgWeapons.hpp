

/*M96Helmet

class CfgVehicleClasses
{
	class CFP_M96Helmet
	{
		displayName = "M96 Helmet";
	};
};
*/
	class SP_M96Helmet_Black1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Black 1)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Black2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Black 2)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M96Helmet_Blue1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Blue 1)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Blue1.jpg";
		model = "\x\cfp\addons\models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Blue2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Blue 2)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Blue.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_M96Helmet_Green1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Green 1)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Green1.jpg";
		model = "\x\cfp\addons\models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Green2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Green 2)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Green.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M96Helmet_Tan1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Tan 1)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Tan2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Tan 2)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Tan.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};
	class SP_M96Helmet_Un1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Un 1)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Un1.jpg";
		model = "\x\cfp\addons\models\M96Helmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1"};
		};
	};        class SP_M96Helmet_Un2: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "M96 Helmet (Un 2)";
		picture = "\x\cfp\addons\headgear\M96Helmet\ui\Un2.jpg";
		model = "\x\cfp\addons\models\M96Helmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\M96Helmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\M96Helmet\Un.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};		};
		};

