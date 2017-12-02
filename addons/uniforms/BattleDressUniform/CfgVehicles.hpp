	class CFP_Uniform : B_Soldier_base_F
	{
		scope = 1;
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "CFP_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		attendant = "true";
		uniformAccessories[] = {};
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};

		};
	};

	class SP_0000_Standard_BattleDressUniform_Black: CFP_Uniform
	{
		displayName = "Battle Dress Uniform (Black)";
		uniformClass = "SP_0000_Standard_BattleDressUniform_Black";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Black.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Black.paa"};
	};


	class SP_0000_Standard_BattleDressUniform_Green: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Green)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_Green";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Green.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Green.paa"};

	};


	class SP_0000_Standard_BattleDressUniform_Tan: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Tan)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_Tan";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Tan.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Tan.paa"};


	};


	class SP_0000_Standard_BattleDressUniform_Grey: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Grey)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_Grey";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Grey.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Grey.paa"};

	};


	class SP_0000_Standard_BattleDressUniform_BlueDark: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Blue Dark)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_BlueDark";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\BlueDark.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\BlueDark.paa"};

	};


	class SP_0000_Standard_BattleDressUniform_BlueFrost: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Blue Frost)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_BlueFrost";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\BlueFrost.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\BlueFrost.paa"};


	};


	class SP_0000_Standard_BattleDressUniform_GreenOlive: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Green Olive)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_GreenOlive";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\GreenOlive.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\GreenOlive.paa"};

	};


	class SP_0000_Standard_BattleDressUniform_Hunter: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Hunter)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Hunter.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Hunter.paa"};


	};


	class SP_0000_Standard_BattleDressUniform_Hunter2: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Hunter2)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter2";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\Hunter2.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\Hunter2.paa"};


	};


	class SP_0000_Standard_BattleDressUniform_ATacsFG: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (A-Tacs FG)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_ATacsFG";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\ATacsFG.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\ATacsFG.paa"};


	};


	class SP_0000_Standard_BattleDressUniform_NodUrban: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Nod Urban)";

		uniformClass = "SP_0000_Standard_BattleDressUniform_NodUrban";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\0000_Standard\NodUrban.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\NodUrban.paa"};


	};

	class CFP_BattleDressUniform_3ColorDesert: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (3 Color Desert)";

		uniformClass = "CFP_BattleDressUniform_3ColorDesert";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_3_color_desert.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_3_color_desert.paa"};


	};

	class CFP_BattleDressUniform_AfricanWoodland: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (African Woodland)";

		uniformClass = "CFP_U_BattleDressUniform_AfricanWoodland";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_africanwoodland.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_africanwoodland.paa"};


	};

	class CFP_BattleDressUniform_ChocChip: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Choc Chip)";

		uniformClass = "CFP_U_BattleDressUniform_ChocChip";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_choc_chip.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_choc_chip.paa"};


	};

	class CFP_BattleDressUniform_m81: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (M81)";

		uniformClass = "CFP_U_BattleDressUniform_M81";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_M81.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_M81.paa"};


	};

	class CFP_BattleDressUniform_dpm: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (DPM)";

		uniformClass = "CFP_U_BattleDressUniform_Dpm";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_dpm.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_dpm.paa"};


	};

	class CFP_BattleDressUniform_DPMWoodland: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (DPM Woodland)";

		uniformClass = "CFP_U_BattleDressUniform_DPMWoodland";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_DPMWoodland.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_DPMWoodland.paa"};


	};

	class CFP_BattleDressUniform_edrl: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Leaf)";

		uniformClass = "CFP_U_BattleDressUniform_edrl";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_edrl.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_edrl.paa"};


	};

	class CFP_BattleDressUniform_polygondesert: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Polygon Desert)";

		uniformClass = "CFP_U_BattleDressUniform_polygondesert";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_polygondesert.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_polygondesert.paa"};


	};

	class CFP_BattleDressUniform_tigerstripe: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (Tiger Stripe)";

		uniformClass = "CFP_U_BattleDressUniform_tigerstripe";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_tigerstripe.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_tigerstripe.paa"};


	};

	class CFP_BattleDressUniform_multicam: CFP_Uniform
	{


		displayName = "Battle Dress Uniform (MultiCam)";

		uniformClass = "CFP_U_BattleDressUniform_multicam";

		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_multicam.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_multicam.paa"};


	};

	class CFP_BattleDressUniform_DPMWoodlandGreen: CFP_Uniform
	{
		displayName = "Battle Dress Uniform (DPM Woodland / Green)";
		uniformClass = "CFP_U_BattleDressUniform_DPMWoodlandGreen";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_DPMWoodland.paa","\x\cfp\addons\uniforms\FieldUniform\0000_Standard\GreenOlive.paa"};
	};

	#define UNIFORM_V(NAME,CAMO) \
	class CFP_BattleDressUniform_##CAMO##: CFP_Uniform { \
		displayName = NAME; \
		uniformClass = CFP_U_BattleDressUniform_##CAMO; \
		hiddenSelectionsTextures[] = {\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_##CAMO##.paa,\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_##CAMO##.paa}; \
	};

	UNIFORM_V("Battle Dress Uniform (TIger Stripe 2)",tigerstripe2)
	UNIFORM_V("Battle Dress Uniform (OCP)",scorpion_w2)
	UNIFORM_V("Battle Dress Uniform (Flora Arid)",flora_arid)
	UNIFORM_V("Battle Dress Uniform (Afghan Woodland)",afghan_w)
	UNIFORM_V("Battle Dress Uniform (ACR Desert)",acr_desert)

	class CFP_BattleDressUniform_atacs_au : CFP_Uniform
	{
		displayName = "Battle Dress Uniform (A-Tacs AU)";
		uniformClass = "CFP_U_BattleDressUniform_atacs_au";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\BattleDressUniform\camo\BDU_atacs_au.paa","\x\cfp\addons\uniforms\FieldUniform\camo\CombatUniform_atacs_au.paa"};
	};