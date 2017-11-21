
	class CFP_Lungee_Shemagh: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Lungee Shemagh (Black / Tan)";
		picture = "\x\cfp\addons\headgear\Lungee_Shemagh\data\ui\CheckTan.jpg";
		model = "\x\cfp\addons\models\Lungee_Shemagh";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {
			"\x\cfp\addons\headgear\Lungee_Shemagh\data\loc_opfor01_1_co.paa",
			"\x\cfp\addons\headgear\Lungee_Shemagh\data\tex2_co.paa"
		};
		author = "Tupolov";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\Lungee_Shemagh";
			modelSides[] = {6};
			armor = 0;
			passThrough = 0.30;
			hiddenSelections[] = {"Camo","Camo1"};
			hiddenSelectionsTextures[] = {
				"\x\cfp\addons\headgear\Lungee_Shemagh\data\loc_opfor01_1_co.paa",
				"\x\cfp\addons\headgear\Lungee_Shemagh\data\tex2_co.paa"
			};

		};
	};



