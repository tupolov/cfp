// ************************************************ Uniforms ****************************
class PESH_uniform : U_I_CombatUniform 
{
	scope = 2;
	displayName = "Peshmerga Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_saa_uniformwoodland.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\Peshmerga_woodland_1.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_pesh_rifleman";
		containerClass = "Supply50";
		mass = 50;
	};
};
	