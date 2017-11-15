class CfgWeapons
{
	class UniformItem;
	class U_I_CombatUniform;

	class IP_uniform_officer_b: U_I_CombatUniform
	{
		scope = 2;
		displayName = "Iraqi Police Uniform (Digital)";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\b_iqpolice\data\icon_ip_uniform_digital.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\IP_digital_flag.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_b_iqpolice_officer";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class IP_uniform_policeman_b: IP_uniform_officer_b
	{
		picture = "\x\cfp\addons\b_iqpolice\data\icon_ip_uniform_dpm.paa";
		displayName = "Iraqi Police Uniform (DPM)";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\IP_dpm_flag.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_b_iqpolice_policeman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
};