
	class CFP_U_ACU: B_Soldier_base_F
	{

		scope = 1;
		displayName = "ANA ACU v1";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "CFP_U_ACU";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "CFP_U_ACU";
		nakedUniform = "U_BasicBody";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag", "clan", "insignia"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\uniforms\ACU\camo\acu_shirt_ana_co.paa", "x\cfp\addons\uniforms\ACU\camo\acu_pants_ana_co.paa"};

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};




		};
	};

	class CFP_U_ACU_ANA_01: CFP_U_ACU
	{
		displayName = "ANA ACU";
		vehicleClass = "CFP_U_ACU_ANA_01";
		uniformClass = "CFP_U_ACU_ANA_01";
		hiddenSelections[] = {"Camo1", "Camo2", "flag"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\uniforms\ACU\camo\acu_shirt_ana_co.paa", "x\cfp\addons\uniforms\ACU\camo\acu_pants_ana_co.paa", "x\cfp\addons\uniforms\ACU\camo\afg_mountain_ca.paa"};
	};

	class CFP_U_ACU_ANA_02: CFP_U_ACU
	{
		displayName = "ANA ACU";
		vehicleClass = "CFP_U_ACU_ANA_02";
		uniformClass = "CFP_U_ACU_ANA_02";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_kneepad.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\uniforms\ACU\camo\acu_shirt_ana_co.paa", "x\cfp\addons\uniforms\ACU\camo\acu_pants_ana_co.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa", "x\cfp\addons\uniforms\ACU\camo\afg_mountain_ca.paa"};
	};

	class CFP_U_ACU_ANA_WDL_01: CFP_U_ACU
	{
		displayName = "ANA ACU";
		vehicleClass = "CFP_U_ACU_ANA_WDL_01";
		uniformClass = "CFP_U_ACU_ANA_WDL_01";
		hiddenSelections[] = {"Camo1", "Camo2", "flag"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\uniforms\ACU\camo\acu_shirt_ana_wdl_co.paa", "x\cfp\addons\uniforms\ACU\camo\acu_pants_ana_wdl_co.paa", "x\cfp\addons\uniforms\ACU\camo\afg_mountain_ca.paa"};
	};

	class CFP_U_ACU_ANA_WDL_02: CFP_U_ACU
	{
		displayName = "ANA ACU";
		vehicleClass = "CFP_U_ACU_ANA_WDL_02";
		uniformClass = "CFP_U_ACU_ANA_WDL_02";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\ACU\CUP_ACU_1_kneepad.p3d";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3", "flag"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\uniforms\ACU\camo\acu_shirt_ana_wdl_co.paa", "x\cfp\addons\uniforms\ACU\camo\acu_pants_ana_wdl_co.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\oakley_2_od_co.paa", "x\cfp\addons\uniforms\ACU\camo\afg_mountain_ca.paa"};
	};

