class CfgWeapons
{

	class UniformItem;
	class U_I_CombatUniform;
	class U_B_CombatUniform_mcam;

	class IA_uniform_generic: U_I_CombatUniform
	{
		scope = 2;
		displayName = "Iraqi Army Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\b_iqarmy\data\icon_ia_uniform_woodland.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqarmy\data\woodland.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CFP_B_IQARMY_rifleman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class IA_uniform_sf_b: U_B_CombatUniform_mcam
	{
		scope = 2;
		displayName = "Iraqi Special Forces Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\b_iqarmy\data\icon_ia_sf_combatuniform.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqarmy\data\IraqiSF.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CFP_B_IQARMY_sf";
			containerClass = "Supply50";
			mass = 50;
		};
	};
};