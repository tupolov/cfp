
	class VSM_MICH2017_Helmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MICH 2017 (Tan)";
		picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\VSM_MICH2017";
		author = "VanSchmoozin";

		class ItemInfo: HeadgearItem
		{
			mass = 50;
			uniformmodel = "\x\cfp\addons\models\VSM_MICH2017";
			modelSides[] = {6};
			armor = 11;
			passThrough = 0.30;
			HITPOINTS_HEAD(11,0.30)

		};
	};

	class VSM_OPS2017_Helmet_Tan: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE 2017 (Tan)";
		picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\VSM_OPS2017";
		hiddenSelections[] = {"_helmbase","_VSMz110T","velcro"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "VanSchmoozin";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(11,0.30)
			hiddenSelections[] = {"_helmbase","_VSMz110T","velcro"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		};
	};

	class CFP_OPS2017_Helmet_Multicam: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "OPSCORE 2017 (Multicam)";
		picture = "\x\cfp\addons\headgear\MichHelmet\ui\Tan1.jpg";
		model = "\x\cfp\addons\models\VSM_OPS2017";
		hiddenSelections[] = {"_helmbase","_VSMz110T","velcro"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\models\VSM_OPS2017";
			modelSides[] = {3,1};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(11,0.30)
			hiddenSelections[] = {"_helmbase","_VSMz110T","velcro"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_multicam.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};

		};
	};

