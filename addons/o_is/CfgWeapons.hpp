class CfgWeapons
{

	class H_Shemag_tan;
	class H_Bandanna_gry;
	class H_Bandmask_blk;
	class G_Balaclava_blk;

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