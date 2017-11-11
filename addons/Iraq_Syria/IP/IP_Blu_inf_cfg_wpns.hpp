// ************************************************ Uniforms ****************************

class IP_uniform_officer_b : U_I_CombatUniform 
{
	scope = 2;
	displayName = "IP Uniform";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";  
	picture = "\CFP_Iraq_Syria\icon\icon_ip_uniform_digital.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IP_digital_flag.paa"};

	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_ip_officer";
		containerClass = "Supply50";
		mass = 50;
	};
};


class IP_uniform_policeman_b : IP_uniform_officer_b
{
	picture = "\CFP_Iraq_Syria\icon\icon_ip_uniform_dpm.paa";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IP_dpm_flag.paa"};
	class ItemInfo: UniformItem 
	{
		uniformModel = "-";
		uniformClass = "cfp_b_ip_policeman";
		containerClass = "Supply50";
		mass = 50;
	};
};