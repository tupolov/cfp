class CfgWeapons
{
	class H_Beret_Colonel;
	class PESH_Beret: H_Beret_Colonel
	{
		scope = 2;
		displayName = "Peshmerga Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\peshmerga_beret_eagle.paa"};
	};
	class PESH_Beret_CTG: H_Beret_Colonel
	{
		scope = 2;
		displayName = "Peshmerga Beret";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\peshmerga_beret.paa"};
	};

	class ItemCore;
    class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };
	class PESH_Vest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Peshmerga Chest Rig";
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\Pesh_Vest.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};


	class UniformItem;
	class U_I_CombatUniform;
	class PESH_uniform: U_I_CombatUniform
	{
		scope = 2;
		displayName = "Peshmerga Uniform";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture = "\x\cfp\addons\b_pesh\data\icon_saa_uniformwoodland.paa";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\Peshmerga_woodland_1.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "cfp_b_pesh_rifleman";
			containerClass = "Supply50";
			mass = 50;
		};
	};
};