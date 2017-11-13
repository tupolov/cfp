class CfgWeapons
{
	class UniformItem;
	class AFG_1996Leaf_BattleDressUniform;
	class SAA_uniform_officer: AFG_1996Leaf_BattleDressUniform
	{
		scope = 2;
		displayName = "SAA Officer Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\o_syarmy\data\icon_saa_uniformwoodland.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\saa_officer_woodland.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_o_syarmy_officer";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SAA_uniform: AFG_1996Leaf_BattleDressUniform
	{
		scope = 2;
		displayName = "SAA Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\o_syarmy\data\icon_saa_uniformwoodland.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\saa_uniform_woodland.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_o_syarmy_rifleman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
};