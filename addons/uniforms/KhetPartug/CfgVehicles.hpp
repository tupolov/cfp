
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

	class CFP_KhetPartug_Long_AfricanWoodland: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (African Woodland)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_AfricanWoodland.paa"};
	};

	class CFP_KhetPartug_Long_Woodland: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Woodland)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Woodland.paa"};
	};

	class CFP_KhetPartug_Long_PolygonDesert: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Polygon Desert)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_PolygonDesert.paa"};
	};

	class CFP_KhetPartug_Long_EDRL: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (EDRL)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_EDRL.paa"};
	};

	class CFP_KhetPartug_Long_Black: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Black)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Black.paa"};
	};

	class CFP_KhetPartug_Short_EDRL: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (EDRL)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_EDRL.paa"};
	};

	class CFP_KhetPartug_Short_GreenOlive: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Green Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_GreenOlive.paa"};
	};

	class CFP_KhetPartug_Short_Woodland: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Woodland)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Woodland.paa"};
	};

	class CFP_KhetPartug_Short_PolygonDesert: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Olive)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_PolygonDesert.paa"};
	};

	class CFP_KhetPartug_Short_Blue: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Blue)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Blue.paa"};
	};

	class CFP_KhetPartug_Short_BlueGrey: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (BlueGrey)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_BlueGrey.paa"};
	};

	class CFP_KhetPartug_Short_Brown: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Brown)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Brown.paa"};
	};

	class CFP_KhetPartug_Short_Creme: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Creme)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Creme.paa"};
	};

	class CFP_KhetPartug_Short_Grey: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Grey)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Grey.paa"};
	};

	class CFP_KhetPartug_Short_Purple: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Purple)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Purple.paa"};
	};

	class CFP_KhetPartug_Short_Tan: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Tan)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Tan.paa"};
	};

	class CFP_KhetPartug_Short_White: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (White)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_White.paa"};
	};

	class CFP_KhetPartug_Long_Blue: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Blue)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Blue.paa"};
	};

	class CFP_KhetPartug_Long_BlueGrey: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (BlueGrey)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_BlueGrey.paa"};
	};

	class CFP_KhetPartug_Long_Brown: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Brown)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Brown.paa"};
	};

	class CFP_KhetPartug_Long_Creme: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Creme)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Creme.paa"};
	};

	class CFP_KhetPartug_Long_Grey: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Grey)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Grey.paa"};
	};

	class CFP_KhetPartug_Long_Purple: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Purple)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Purple.paa"};
	};

	class CFP_KhetPartug_Long_Tan: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (Tan)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_Tan.paa"};
	};

	class CFP_KhetPartug_Long_White: CFP_KhetPartug_Long_M81
	{
		displayName = "Khet Partug, Long (White)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Long_White.paa"};
	};

	class CFP_KhetPartug_Short_Black: CFP_KhetPartug_Short_M81
	{
		displayName = "Khet Partug, Short (Black)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\KhetPartug\camo\KhetPartug_Short_Black.paa"};
	};