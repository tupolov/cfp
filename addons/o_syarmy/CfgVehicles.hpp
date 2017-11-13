class CfgVehicles
{

	class I_Soldier_A_F;
	class cfp_o_syarmy_base: I_Soldier_A_F
	{
		genericnames = "TakistaniMen";
		scope = 0;
		scopeCurator = 0;
		displayName = "SAA Soldier";
		faction = "cfp_o_syarmy";
		modelSides[] = {0,1,2,3};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;
		vehicleClass = "cfp_o_syarmy_INFANTRY";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "SAA_uniform";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\saa_uniform_woodland.paa","\x\cfp\addons\o_syarmy\data\woodland.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 60;
		allowedHeadgear[] = {"CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_TK_Helmet","CUP_H_RUS_6B27_olive","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 20;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {""};
		Respawnmagazines[] = {""};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_weapon.sqf""";
			};
		};
		editorPreview = "x\cfp\addons\o_syarmy\data\Preview_saa_infantry.jpg";
	};
	class cfp_o_syarmy_officer: cfp_o_syarmy_base
	{
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Officer";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_INFANTRY";
		icon = "iconManOfficer";
		nakedUniform = "U_BasicBody";
		uniformClass = "SAA_uniform_officer";
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\saa_officer_woodland.paa","\x\cfp\addons\o_syarmy\data\woodland.paa"};
		headgearProbability = 50;
		allowedHeadgear[] = {"CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_TK_Helmet","CUP_H_RUS_6B27_olive","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"SAA_uniform_officer","CUP_V_CDF_6B3_2_FST","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform_officer","CUP_V_CDF_6B3_2_FST","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		class EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_weapon.sqf""";
			};
		};
	};
	class cfp_o_syarmy_grenadier: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Grenadier";
		icon = "iconManExplosive";
		headgearProbability = 60;
		randomWeaponProbability = 20;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_o_syarmy_rifleman: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Rifleman";
		icon = "iconMan";
		uniformClass = "SAA_uniform";
		headgearProbability = 80;
		randomWeaponProbability = 100;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_o_syarmy_machinegunner: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Machinegunner";
		icon = "iconManMG";
		backpack = "b_assaultpack_blk";
		headgearProbability = 60;
		randomWeaponProbability = 50;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
	class cfp_o_syarmy_sniper: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Sniper";
		icon = "iconManRecon";
		camouflage = 0.6;
		headgearProbability = 80;
		randomWeaponProbability = 25;
		linkedItems[] = {"SAA_uniform","V_BandollierB_oli","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","V_BandollierB_oli","ItemRadio"};
		weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	};
	class cfp_o_syarmy_at: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Anti-Tank";
		icon = "iconManAT";
		backpack = "CUP_B_RPGPack_Khaki";
		headgearProbability = 60;
		randomWeaponProbability = 100;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_o_syarmy_medic: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CUP_B_AlicePack_Khaki";
		headgearProbability = 60;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_o_syarmy_sapper: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Sapper";
		icon = "iconManExplosive";
		nakedUniform = "U_BasicBody";
		backpack = "B_AssaultPack_khk";
		headgearProbability = 60;
		randomWeaponProbability = 100;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_o_syarmy_crewman: cfp_o_syarmy_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Crewman";
		icon = "iconManEngineer";
		headgearProbability = 50;
		randomWeaponProbability = 30;
		linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_o_syarmy_rifleman_dshkm: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [DSHKM]";
		icon = "iconManAT";
		backpack = "CUP_B_DShkM_TripodHigh_Bag";
	};
	class cfp_o_syarmy_rifleman_kord: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [KORD]";
		icon = "iconManAT";
		backpack = "CUP_B_Kord_Tripod_Bag";
	};
	class cfp_o_syarmy_rifleman_podnos: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [Podnos]";
		icon = "iconManAT";
		backpack = "CUP_B_Podnos_Bipod_Bag";
	};
	class cfp_o_syarmy_rifleman_ags30: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [AGS30]";
		icon = "iconManAT";
		backpack = "CUP_B_AGS30_Tripod_Bag";
	};
	class cfp_o_syarmy_rifleman_spg9: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [SPG9]";
		icon = "iconManAT";
		backpack = "CUP_B_SPG9_Tripod_Bag";
	};
	class cfp_o_syarmy_rifleman_metis: cfp_o_syarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SAA Gunner [METIS]";
		icon = "iconManAT";
		backpack = "CUP_B_Metis_Tripod_Bag";
	};

	class FlagCarrier;
	class Offroad_01_base_F;
	class I_Plane_Fighter_03_AA_F;
	class I_Plane_Fighter_03_CAS_F;
	class O_Plane_CAS_02_F;
	class CUP_I_Datsun_PK_TK_Random;
	class CUP_O_LR_MG_TKA;
	class CUP_O_LR_SPG9_TKA;
	class CUP_O_LR_Transport_TKA;
	class CUP_O_UAZ_MG_RU;
	class CUP_O_UAZ_AGS30_RU;
	class CUP_O_UAZ_SPG9_RU;
	class CUP_O_UAZ_METIS_RU;
	class CUP_O_UAZ_Open_RU;
	class CUP_O_UAZ_Unarmed_RU;
	class CUP_UAZ_AGS30_Base;
	class CUP_O_Ural_CHDKZ;
	class CUP_O_Ural_ZU23_CHDKZ;
	class CUP_O_BM21_RU;
	class CUP_O_BTR40_MG_TKA;
	class CUP_O_BTR60_TK;
	class CUP_O_BRDM2_TKA;
	class CUP_O_M113_TKA;
	class CUP_I_M113_RACS;
	class CUP_O_BMP1_TKA;
	class CUP_O_BMP1P_TKA;
	class CUP_O_BMP2_TKA;
	class CUP_O_BMP2_ZU_TKA;
	class CUP_O_T34_TKA;
	class CUP_O_T55_CSAT;
	class CUP_O_T55_TK;
	class CUP_O_T72_TKA;
	class CUP_O_ZSU23_SLA;
	class CUP_O_Mi24_V_RU;
	class CUP_O_Mi24_P_RU;
	class CUP_O_Su25_Dyn_RU;
	class CUP_O_ZU23_RU;
	class CUP_O_DSHKM_TK_INS;
	class CUP_O_DSHkM_MiniTriPod_TK_INS;
	class CUP_O_KORD_RU;
	class CUP_O_KORD_high_RU;
	class CUP_O_AGS_RU;
	class CUP_O_Metis_RU;
	class CUP_O_SPG9_TK_INS;
	class CUP_O_2b14_82mm_RU;
	class CUP_O_D30_RU;
	class CUP_O_D30_AT_RU;

	class cfp_o_syarmy_Ural: CUP_O_Ural_CHDKZ
	{
		scope = 2;
		side = 0;
		displayName = "SAA Ural";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_Ural.jpg";
	};
	class cfp_o_syarmy_Ural_ZU23: CUP_O_Ural_ZU23_CHDKZ
	{
		scope = 2;
		side = 0;
		displayName = "SAA Ural ZU23";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_Ural_ZU23.jpg";
	};
	class cfp_o_syarmy_BTR40_MG: CUP_O_BTR40_MG_TKA
	{
		scope = 2;
		side = 0;
		displayName = "SAA BTR40 MG";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_BTR40.jpg";
	};
	class cfp_o_syarmy_BTR60: CUP_O_BTR60_TK
	{
		scope = 2;
		side = 0;
		displayName = "SAA BTR60";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_BTR60.jpg";
	};
	class cfp_o_syarmy_BMP1: CUP_O_BMP1_TKA
	{
		scope = 2;
		side = 0;
		displayName = "SAA BMP-1";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_BMP1.jpg";
	};
	class cfp_o_syarmy_BMP1P: CUP_O_BMP1P_TKA
	{
		scope = 2;
		side = 0;
		displayName = "SAA BMP-1P";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_BMP1P.jpg";
	};
	class cfp_o_syarmy_BMP2: CUP_O_BMP2_TKA
	{
		scope = 2;
		side = 0;
		displayName = "SAA BMP-2";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_BMP2.jpg";
	};
	class cfp_o_syarmy_T55: CUP_O_T55_CSAT
	{
		scope = 2;
		side = 0;
		displayName = "SAA T55";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_T55_desert.jpg";
	};
	class cfp_o_syarmy_T72: CUP_O_T72_TKA
	{
		scope = 2;
		side = 0;
		displayName = "SAA T72";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_T72_tan.jpg";
	};
	class cfp_o_syarmy_ZSU: CUP_O_ZSU23_SLA
	{
		scope = 2;
		side = 0;
		displayName = "SAA ZSU";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
	};
	class cfp_o_syarmy_L39_AA: I_Plane_Fighter_03_AA_F
	{
		scope = 2;
		side = 0;
		displayName = "SAA L-39 AntiAir";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_AIR";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_L39_AA.jpg";
	};
	class cfp_o_syarmy_L39_CAS: I_Plane_Fighter_03_CAS_F
	{
		scope = 2;
		side = 0;
		displayName = "SAA L-39 CAS";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_AIR";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman"};
		class EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_L39_CAS.jpg";
	};
	class cfp_o_syarmy_yak130: O_Plane_CAS_02_F
	{
		scope = 2;
		side = 0;
		displayName = "SAA Yak-130";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_AIR";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\01.paa","\x\cfp\addons\o_syarmy\data\02.paa"};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_SAA_Yak130.jpg";
	};
	class cfp_o_syarmy_SU25: CUP_O_Su25_Dyn_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA SU25";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_AIR";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\su25_body1_saa.paa","\x\cfp\addons\o_syarmy\data\su25_body2_saa.paa"};
		editorPreview = "\x\cfp\addons\o_syarmy\data\Preview_saa_su25.jpg";
	};
	class cfp_o_syarmy_ZU23: CUP_O_ZU23_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA ZU23";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_crewman";
		typicalCargo[] = {"cfp_o_syarmy_crewman"};
	};
	class cfp_o_syarmy_DSHKM: CUP_O_DSHKM_TK_INS
	{
		scope = 2;
		side = 0;
		displayName = "SAA DSHKM";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_DSHkM_Mini_TriPod: CUP_O_DSHkM_MiniTriPod_TK_INS
	{
		scope = 2;
		side = 0;
		displayName = "SAA DSHkM Mini TriPod";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_KORD: CUP_O_KORD_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA KORD";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_KORD_high: CUP_O_KORD_high_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA KORD High";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_AGS: CUP_O_AGS_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA AGS";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_Metis: CUP_O_Metis_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA Metis";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_SPG9: CUP_O_SPG9_TK_INS
	{
		scope = 2;
		side = 0;
		displayName = "SAA SPG9";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_2b14_82mm: CUP_O_2b14_82mm_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA 2b14 82mm";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_D30: CUP_O_D30_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA D30";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
	class cfp_o_syarmy_D30_AT: CUP_O_D30_AT_RU
	{
		scope = 2;
		side = 0;
		displayName = "SAA D30 AT";
		faction = "cfp_o_syarmy";
		vehicleClass = "cfp_o_syarmy_STATIC";
		camouflage = 4;
		crew = "cfp_o_syarmy_rifleman";
		typicalCargo[] = {"cfp_o_syarmy_rifleman"};
	};
};