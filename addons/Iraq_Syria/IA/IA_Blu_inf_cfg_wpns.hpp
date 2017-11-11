// ************************************************ Uniforms ****************************

class IA_uniform_generic : U_I_CombatUniform 
{
	scope = 2;
	displayName = "IA Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_ia_uniform_woodland.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\woodland.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_ia_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};
};

class IA_uniform_sf_b : U_B_CombatUniform_mcam 
{
	scope = 2;
	displayName = "IA SF Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_ia_sf_combatuniform.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IraqiSF.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_ia_sf";
		containerClass = "Supply50";
		mass = 50;
	};
};
