// ************************************************ Uniforms ****************************
class YPG_uniform : U_I_CombatUniform 
{	
	scope = 2;
	displayName = "YPG Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_ypg_combatuniform.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\YPG_marpat_1.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_ypg_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};

};

// ************************************************ Shemag ****************************
class YPG_shemag : H_Shemag_tan
{
	scope = 2;
	displayName = "YPG Shemag";
	picture = "\CFP_Iraq_Syria\icon\icon_ypg_shemag.paa";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\shemags\YPG_shemag.paa"};

};

