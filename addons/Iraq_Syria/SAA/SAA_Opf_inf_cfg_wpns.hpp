// ************************************************ Uniforms ****************************

class SAA_uniform_officer : AFG_1996Leaf_BattleDressUniform  
{
	scope = 2;
	displayName = "SAA Officer Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_saa_uniformwoodland.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_officer_woodland.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_o_saa_officer";
		containerClass = "Supply50";
		mass = 50;
	};
};

class SAA_uniform : AFG_1996Leaf_BattleDressUniform
{
	scope = 2;
	displayName = "SAA Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_saa_uniformwoodland.paa";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_uniform_woodland.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_o_saa_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};
};


/*

class SAA_uniform_officer : U_I_OfficerUniform  
{
	scope = 2;
	displayName = "SAA Officer Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_saa_uniformwoodland.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_officer_woodland.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_o_saa_officer";
		containerClass = "Supply50";
		mass = 50;
	};
};

class SAA_uniform : U_I_C_Soldier_Camo_F
{
	scope = 2;
	displayName = "SAA Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_saa_uniformwoodland.paa";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_uniform_woodland.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_o_saa_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};
};

*/