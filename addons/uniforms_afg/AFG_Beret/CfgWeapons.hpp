

//Beret4

	class AFG_Beret_ArmyGreen: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "AFG Beret (Army Green)";
		picture = "\x\cfp\addons\uniforms_afg\AFG_Beret\ui\ArmyGreen.jpg";
		model = "\x\cfp\addons\models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms_afg\AFG_Beret\ArmyGreen.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms_afg\AFG_Beret\ArmyGreen.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class AFG_Beret_CommandoRed: ItemCore
	{
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "AFG Beret (Commando Red)";
		picture = "\x\cfp\addons\uniforms_afg\AFG_Beret\ui\CommandoRed.jpg";
		model = "\x\cfp\addons\models\Beret4";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms_afg\AFG_Beret\CommandoRed.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\Beret4";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms_afg\AFG_Beret\CommandoRed.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

