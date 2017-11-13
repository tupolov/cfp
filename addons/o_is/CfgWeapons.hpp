class CfgWeapons
{

	class UniformItem;
	class U_I_CombatUniform;
	class H_Shemag_tan;
	class H_Bandanna_gry;
	class H_Bandmask_blk;
	class G_Balaclava_blk;

	class IS_uniform_o: U_I_CombatUniform
	{
		scope = 2;
		displayName = "IS Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\o_is\data\icon_is_combatuniform_tan.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_is\data\IS_pixelated_desert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_o_is_rifleman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class IS_shemag_black: H_Shemag_tan
	{
		scope = 2;
		displayName = "IS Shemag";
		picture = "\x\cfp\addons\o_is\data\icon_is_shemag.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_is\data\IS_shemag_black.paa"};
	};
	class IS_bandanna_black_logo1: H_Bandanna_gry
	{
		scope = 2;
		displayName = "IS Bandanna";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_is\data\IS_bandana_black_logo1.paa"};
	};
	class IS_bandanna_black_logo2: H_Bandanna_gry
	{
		scope = 2;
		displayName = "IS Bandanna";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_is\data\IS_bandana_black_logo2.paa"};
	};
	class IS_Balaclava_black_logo1: G_Balaclava_blk
	{
		scope = 2;
		displayName = "IS Balaclava";
		picture = "\A3\characters_f_bootcamp\data\UI\icon_g_balaclava_clean_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_is\data\IS_balaclava_black_logo1.paa"};
	};
};