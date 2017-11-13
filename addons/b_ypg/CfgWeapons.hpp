class CfgWeapons
{
	class UniformItem;

	class U_I_CombatUniform;

	class H_Shemag_tan;

	class YPG_uniform: U_I_CombatUniform
	{
		scope = 2;
		displayName = "YPG Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\b_ypg\data\icon_ypg_combatuniform.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\YPG_marpat_1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_b_ypg_rifleman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class YPG_shemag: H_Shemag_tan
	{
		scope = 2;
		displayName = "YPG Shemag";
		picture = "\x\cfp\addons\b_ypg\data\icon_ypg_shemag.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\YPG_shemag.paa"};
	};
};