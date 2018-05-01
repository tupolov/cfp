
	class VSM_MICH2017_Helmet_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_VSM_MICH2017_Helmet_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MICH (Tan)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\VSM_MICH2017";
		author = "VanSchmoozin";

		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformmodel = "\x\cfp\addons\models\VSM_MICH2017";
			modelSides[] = {6};
			armor = 11;
			passThrough = 0.30;
			HITPOINTS_HEAD(11,0.30)

		};
	};

	class VSM_OPS2017_Helmet_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_VSM_OPS2017_Helmet_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE (Tan)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\VSM_OPS2017";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "VanSchmoozin";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		};
	};

	class CFP_OPS2017_Helmet_Multicam: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Multicam)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_M81: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (M81)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_m81.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_m81.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_Black: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Black)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_black.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_black.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_OliveFabric: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Olive Fabric)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_green.paa"};

		};
	};

	class CFP_OPS2017_Helmet_Grey: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Grey)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_grey.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_grey.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_Black2: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Black 2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_black2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110tblack.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_black.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_black2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110tblack.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_black.paa"};

		};
	};

	class CFP_OPS2017_Helmet_Multicam2: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Multicam 2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_AOR2: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (AOR2)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_aor2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_green.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_aor2.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_green.paa"};

		};
	};

	class CFP_OPS2017_Helmet_AOR1: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (AOR1)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_aor1.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_aor1.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_ATACS: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE(ATACS FG)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_atacs.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_green.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_atacs.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_green.paa"};

		};
	};

	class CFP_OPS2017_Helmet_ATACSAU: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (ATACS AU)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_atacsau.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_atacsau.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

	class CFP_OPS2017_Helmet_Tropentarn: VSM_OPS2017_Helmet_Tan
	{
		displayName = "OPSCORE (Tropentarn)";
		// picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_tropentarn.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo","camo1","camo2"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_tropentarn.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

