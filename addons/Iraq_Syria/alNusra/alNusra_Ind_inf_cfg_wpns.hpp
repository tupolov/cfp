// ************************************************ Uniforms ****************************
class alNusra_uniform : U_I_CombatUniform 
{
	scope = 2;
	displayName = "al-Nusra Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_al-Nusra_combatuniform.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IS_black.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_i_alNusra_team_leader";
		containerClass = "Supply50";
		mass = 50;
	};
};
