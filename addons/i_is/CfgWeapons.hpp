class CfgWeapons
{

	class UniformItem;
	class U_I_CombatUniform;
	class H_Shemag_tan;
	class H_Bandanna_gry;
	class H_Bandmask_blk;
	class G_Balaclava_blk;

	class CFP_U_I_IS_uniform: U_I_CombatUniform
	{
		scope = 2;
		displayName = "Islamic State Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\uniforms\fielduniform\is\ui\icon_is_combatuniform_tan.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\FieldUniform\IS\IS_pixelated_desert.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_i_is_uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};

	class IS_shemag_black: H_Shemag_tan
	{
		scope = 2;
		displayName = "Islamic State Shemag";
		picture = "\x\cfp\addons\headgear\shemagh\ui\icon_is_shemag.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\shemagh\IS_shemag_black.paa"};
	};
	class IS_bandanna_black_logo1: H_Bandanna_gry
	{
		scope = 2;
		displayName = "Islamic State Bandana";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\bandana\IS_bandana_black_logo1.paa"};
	};
	class IS_bandanna_black_logo2: H_Bandanna_gry
	{
		scope = 2;
		displayName = "Islamic State Bandana 2";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\bandana\IS_bandana_black_logo2.paa"};
	};
};