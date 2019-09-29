

/*SSh68NetHelmet

class CfgVehicleClasses
{
	class CFP_SSh68NetHelmet
	{
		displayName = "SSh68 Net Helmet";
	};
};
*/
	class SP_SSh68NetHelmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Black1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_Blue1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Blue1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Blue 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Blue1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Blue2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Blue2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Blue 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Blue.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Blue.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Green1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Green.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Green.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Tan1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68NetHelmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Tan.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\Tan.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_White1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_White1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (White 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\White1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68NetHelmet_White2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_White2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (White 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\White2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\White.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\White.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68NetHelmet_UN1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_UN1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (U.N 1)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\UN1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Helmet.p3d";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68NetHelmet_UN2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68NetHelmet_UN2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Net Helmet (UN 2)";
		// picture = "\x\cfp\addons\headgear\SSh68NetHelmet\ui\UN2.jpg";
		model = "\x\cfp\addons\models\SSh68NetHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\UN.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68NetHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68NetHelmet\UN.paa","\x\cfp\addons\headgear\SSh68NetHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};

