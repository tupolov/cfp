// ************************************************ Uniforms ****************************
class IS_uniform_i : U_I_CombatUniform 
{
	scope = 2;
	displayName = "IS Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_is_combatuniform_tan.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\uniforms\IS_tan.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_i_is_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};
};