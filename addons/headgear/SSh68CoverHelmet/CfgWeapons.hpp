

/*SSh68CoverHelmet

class CfgVehicleClasses
{
	class CFP_SSh68CoverHelmet
	{
		displayName = "SSh68 Cover Helmet";
	};
};
*/
	class SP_SSh68CoverHelmet_Black1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Black 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Black1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Black2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Black2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Black 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Black2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_Blue1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Blue1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Blue 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Blue1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Blue.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Blue2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Blue2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Blue 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Blue2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Blue.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Blue.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_Green1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Green1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Green 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Green1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Green.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Green2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Green2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Green 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Green2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Green.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Green.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_Tan1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Tan1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Tan 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Tan1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Tan.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_SSh68CoverHelmet_Tan2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_Tan2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (Tan 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\Tan2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Tan.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\Tan.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_White1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_White1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (White 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\White1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68CoverHelmet_White2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_White2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (White 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\White2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\White.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\White.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
		};
	};

	class SP_SSh68CoverHelmet_UN1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_UN1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (U.N 1)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\UN1.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_Helmet.p3d";
		hiddenSelectionsMaterials[] = {"\x\cfp\addons\models\rv\SSH68CoverHelmet.rvmat"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_SSh68CoverHelmet_UN2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_SSh68CoverHelmet_UN2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "SSh68 Cover Helmet (UN 2)";
		// picture = "\x\cfp\addons\headgear\SSh68CoverHelmet\ui\UN2.jpg";
		model = "\x\cfp\addons\models\SSh68CoverHelmet2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\UN.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\SSh68CoverHelmet2";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\UN.paa","\x\cfp\addons\headgear\SSh68CoverHelmet\Black.paa","\x\cfp\addons\headgear\PASGTHelmet\Black.paa"};
			hiddenSelections[] = {"Camo","Camo1","Camo2"};

		};
	};

	// SSH-68
	class SP_SSh68CoverHelmet_DRK: ItemCore
	{
		scope = 2;
		author = "CFP";
		displayName  = "SSh68 Cover Helmet (North Korean Camo)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_h_6b27_light_ca.paa"; //TODO
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\DRK2.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_H_SSH68_cover.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\SSh68CoverHelmet\DRK2.paa"};

		};
	};

