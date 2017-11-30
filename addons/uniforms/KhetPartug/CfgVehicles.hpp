
	class CFP_KhetPartug_Long_M81: B_Soldier_base_F
	{

		scope = 1;
		displayName = "Khet Partug, Long (M81)";
		faction = "BLU_F";
		modelSides[] = {6};
		vehicleClass = "CFP_KhetPartug";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "CFP_U_KhetPartug_Long_M81";
		nakedUniform = "U_BasicBody";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_1.p3d";
		editorPreview = CUP\Creatures\People\Civil\CUP_Creatures_People_Civil_Takistan\Data\preview\CUP_C_TK_MAN_02.jpg;
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_M81.paa"};
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class CFP_KhetPartug_Short_M81: B_Soldier_base_F
	{
		scope = 1;
		displayName = "Khet Partug, Short (M81)";
		faction = "BLU_F";
		modelSides[] = {6};
		vehicleClass = "CFP_KhetPartug";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1;
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "CFP_U_KhetPartug_Short_M81";
		nakedUniform = "U_BasicBody";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_2.p3d";
		editorPreview = CUP\Creatures\People\Civil\CUP_Creatures_People_Civil_Takistan\Data\preview\CUP_C_TK_MAN_08.jpg;
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_M81.paa"};
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	};

	class CFP_KhetPartug_Long_olive: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\standard\KhetPartug_Long_Olive.paa"};
	};

	class CFP_KhetPartug_short_olive: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\standard\KhetPartug_Short_Olive.paa"};
	};

	class CFP_KhetPartug_Long_light_olive: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Light Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\standard\KhetPartug_Long_light_olive.paa"};
	};

	class CFP_KhetPartug_short_light_olive: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Light Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\standard\KhetPartug_short_light_olive.paa"};
	};

	class CFP_KhetPartug_Long_olive_polygon: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Olive / Desert Polygon)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_olive_polygon.paa"};
	};

	class CFP_KhetPartug_short_olive_polygon: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Olive / Desert Polygon)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_short_olive_polygon.paa"};
	};