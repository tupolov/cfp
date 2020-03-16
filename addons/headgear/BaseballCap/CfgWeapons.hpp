

/*BaseballCap

class CfgVehicleClasses
{
	class CFP_BaseballCap
	{
		displayName = "Baseball Cap";
	};
};
*/
	class SP_BaseballCap_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Black)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_IASF1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Black IA SF 1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_Multicam: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Multicam)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_Multicam_Back: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap Backwards (Multicam)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam2.paa"};
		hiddenSelections[] = {"camo3"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_Cap_Back.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam2.paa"};
			hiddenSelections[] = {"camo3"};
		};
	};

	class CFP_BaseballCap_Multicam_DEF_Back: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap Backwards w/DEF (Multicam)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_EP_Cap_Back.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam2.paa"};
		hiddenSelections[] = {"camo3"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_EP_Cap_Back.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam2.paa"};
			hiddenSelections[] = {"camo3"};
		};
	};

	class CFP_BaseballCap_Multicam_DEF: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap w/DEF (Multicam)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model  = "\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam3.paa"};
		hiddenSelections[] = {"camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel  = "\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Multicam3.paa"};
			hiddenSelections[] = {"camo"};
		};
	};

	class CFP_BaseballCap_IASF2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Black IA SF 2)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_IASF3: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Black IA SF 3)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF3.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IASF3.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_IP1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Iraqi Police 1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_IP2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Iraqi Police 2)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_IP3: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Iraqi Police 3)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP3.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\IP3.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_ANA1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Green ANA Commando)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ANA1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ANA1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class CFP_BaseballCap_ANA2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Tan ANA Commando)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Black.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ANA2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ANA2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BaseballCap_Blue: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Blue.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Blue)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Blue.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Blue.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Green: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Green.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Green)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Green.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Red: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Red.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Red)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Red.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Red.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Red.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BaseballCap_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Tan)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Tan.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_White: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_White.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (White)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\White.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\White.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\White.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_Yellow: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Yellow.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Yellow)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Yellow.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Yellow.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Yellow.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_UN: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_UN.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (U.N)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\UN.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\UN.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_TweedCheckedBrown: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_TweedCheckedBrown.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Tweed Checked Brown)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\TweedCheckedBrown.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedBrown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedBrown.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_TweedCheckedGreen: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_TweedCheckedGreen.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Tweed Checked Green)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\TweedCheckedGreen.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedGreen.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedGreen.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_TweedCheckedGrey: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_TweedCheckedGrey.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Tweed Checked Grey)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\TweedCheckedGrey.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedGrey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\TweedCheckedGrey.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_Hunter: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Hunter.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Hunter)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Hunter.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Hunter.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Hunter.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_Hunter2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_Hunter2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Hunter2)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\Hunter2.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Hunter2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\Hunter2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_ATacsFG: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_ATacsFG.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (A-Tacs FG)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\ATacsFG.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ATacsFG.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\ATacsFG.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_NodUrban: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_NodUrban.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Nod Urban)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\NodUrban.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\NodUrban.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\NodUrban.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_PoliceBlack1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_PoliceBlack1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Police Black1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\PoliceBlack1.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\PoliceBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\PoliceBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_FBIBlack1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_FBIBlack1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (FBI Black1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\FBIBlack1.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\FBIBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\FBIBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_SwatBlack1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_SwatBlack1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (Swat Black1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\SwatBlack1.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\SwatBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\SwatBlack1.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};        class SP_BaseballCap_MPBlack1: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_MPBlack1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (M.P Black1)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\MPBlack1.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\MPBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\MPBlack1.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};        class SP_BaseballCap_MPBlack2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BaseballCap_MPBlack2.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Cap (M.P Black2)";
		// picture = "\x\cfp\addons\headgear\BaseballCap\ui\MPBlack2.jpg";
		model = "\A3\Characters_F\common\capb";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\MPBlack2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\A3\Characters_F\common\capb";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BaseballCap\MPBlack2.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

