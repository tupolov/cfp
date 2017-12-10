class CfgVehicles
{
	class I_Soldier_02_F;
	class I_Soldier_A_F : I_Soldier_02_F {
		class EventHandlers;
	};
	class cfp_i_is_base: I_Soldier_A_F
	{
		genericnames = "TakistaniMen";
		scope = 0;
		scopeCurator = 0;
		displayName = "IS Base";
		faction = "CFP_I_IS";
		modelSides[] = {0,1,2,3};
		side = 2;
		vehicleClass = "CFP_i_is_INFANTRY";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "IS_uniform_i";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\fielduniform\is\IS_pixelated_desert.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 50;
		allowedHeadgear[] = {"IS_shemag_black","H_ShemagOpen_khk","H_Shemag_olive","H_ShemagOpen_tan"};
		allowedHeadgearB[] = {"H_Bandanna_khk","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_gry","H_Bandanna_camo","H_Bandanna_mcamo"};
		facewear = "";
		allowedfacewear[] = {"G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan"};
		randomWeaponProbability = 50;
		linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {};
		Respawnmagazines[] = {};
		identityTypes[] = {"NoGlasses","Language_Ackbar","Head_TK","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_weapon.sqf""";
			};
		};
		editorPreview = "x\cfp\addons\uniforms\FieldUniform\IS\UI\Preview_is_infantry.jpg";
	};
	class cfp_i_is_team_leader: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Team Leader";
		icon = "iconManOfficer";
		headgearProbability = 50;
		randomWeaponProbability = 50;
		linkedItems[] = {"IS_uniform_i","V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_squad_leader: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Squad Leader";
		icon = "iconManLeader";
		headgearProbability = 80;
		randomWeaponProbability = 75;
		linkedItems[] = {"IS_uniform_i","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_grenadier: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Grenadier";
		icon = "iconManExplosive";
		headgearProbability = 60;
		randomWeaponProbability = 20;
		linkedItems[] = {"IS_uniform_i","V_HarnessOGL_gry","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_HarnessOGL_gry","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_rifleman: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Rifleman";
		icon = "iconMan";
		headgearProbability = 50;
		randomWeaponProbability = 100;
		linkedItems[] = {"IS_uniform_i","V_HarnessO_gry","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_HarnessO_gry","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_militaman: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Militaman";
		icon = "iconMan";
		headgearProbability = 80;
		randomWeaponProbability = 30;
		linkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk","ItemRadio"};
		respawnLinkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk","ItemRadio"};
		weapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"};
		magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_irregular: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Irregular";
		icon = "iconMan";
		headgearProbability = 80;
		randomWeaponProbability = 35;
		linkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk","ItemRadio"};
		respawnLinkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk","ItemRadio"};
		weapons[] = {"CUP_smg_MP5A5","Throw","Put"};
		respawnweapons[] = {"CUP_smg_MP5A5","Throw","Put"};
		magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_autorifleman: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Autorifleman";
		icon = "iconManMG";
		headgearProbability = 60;
		randomWeaponProbability = 50;
		linkedItems[] = {"IS_uniform_i","V_TacVest_blk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_TacVest_blk","ItemRadio"};
		weapons[] = {"CUP_lmg_m249_pip1","Throw","Put"};
		respawnweapons[] = {"CUP_lmg_m249_pip1","Throw","Put"};
		magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
		Respawnmagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
	};
	class cfp_i_is_machinegunner: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Machinegunner";
		icon = "iconManMG";
		headgearProbability = 60;
		randomWeaponProbability = 50;
		linkedItems[] = {"IS_uniform_i","V_TacVest_blk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_TacVest_blk","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
	class cfp_i_is_sniper: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Sniper";
		icon = "iconManRecon";
		camouflage = 0.6;
		headgearProbability = 80;
		randomWeaponProbability = 25;
		linkedItems[] = {"IS_uniform_i","V_BandollierB_khk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_BandollierB_khk","ItemRadio"};
		weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	};
	class cfp_i_is_at: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Anti-Tank";
		icon = "iconManAT";
		backpack = "CUP_B_RPGPack_Khaki";
		headgearProbability = 60;
		randomWeaponProbability = 100;
		linkedItems[] = {"IS_uniform_i","V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_i_is_medic: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		headgearProbability = 60;
		linkedItems[] = {"IS_uniform_i","V_Chestrig_blk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_Chestrig_blk","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_i_is_sapper: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Sapper";
		icon = "iconManExplosive";
		backpack = "B_AssaultPack_khk";
		headgearProbability = 60;
		randomWeaponProbability = 100;
		linkedItems[] = {"IS_uniform_i","V_Chestrig_blk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_Chestrig_blk","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_i_is_crewman: cfp_i_is_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Crewman";
		icon = "iconManEngineer";
		headgearProbability = 50;
		randomWeaponProbability = 30;
		linkedItems[] = {"IS_uniform_i","V_BandollierB_khk","ItemRadio"};
		respawnLinkedItems[] = {"IS_uniform_i","V_BandollierB_khk","ItemRadio"};
		weapons[] = {"CUP_arifle_AKM","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_i_is_rifleman_dshkm: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [DSHKM]";
		icon = "iconManAT";
		backpack = "CUP_B_DShkM_TripodHigh_Bag";
	};
	class cfp_i_is_rifleman_kord: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [KORD]";
		icon = "iconManAT";
		backpack = "CUP_B_Kord_Tripod_Bag";
	};
	class cfp_i_is_rifleman_podnos: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [Podnos]";
		icon = "iconManAT";
		backpack = "CUP_B_Podnos_Bipod_Bag";
	};
	class cfp_i_is_rifleman_ags30: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [AGS30]";
		icon = "iconManAT";
		backpack = "CUP_B_AGS30_Tripod_Bag";
	};
	class cfp_i_is_rifleman_metis: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [METIS]";
		icon = "iconManAT";
		backpack = "CUP_B_Metis_Tripod_Bag";
	};
	class cfp_i_is_rifleman_spg9: cfp_i_is_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IS Gunner [SPG9]";
		icon = "iconManAT";
		backpack = "CUP_B_SPG9_Tripod_Bag";
	};

	class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_IS : FlagCarrier_OCimport_01
	{
		author = "AccuracythruVolume";
		displayName = "Flag (Islamic State)";
		scope = 2;
		scopeCurator = 2;
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) setFlagTexture '\x\cfp\addons\flags\IslamicState\ISC_flag_IS.paa'";
			};
		};
	};
	class FlagChecked_F;
    class FlagChecked_F_OCimport_01 : FlagChecked_F { scope = 0; class Eventhandlers; };
    class IS_Flag_1 : FlagChecked_F_OCimport_01
	{
		_generalMacro = "FlagCarrier";
		faction = "CFP_I_IS";
		vehicleClass = "IS_Flags";
		scope = 2;
		side = 4;
		accuracy = 1000;
		displayName = "Flag IS 1";
		armor = 1;
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_1.paa""";
			};
		};
	};

    class IS_Flag_2 : FlagChecked_F_OCimport_01
	{
		_generalMacro = "FlagCarrier";
		faction = "CFP_I_IS";
		vehicleClass = "IS_Flags";
		scope = 2;
		side = 4;
		accuracy = 1000;
		displayName = "Flag IS 2";
		armor = 1;
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_2.paa""";
			};
		};
	};

    class IS_Flag_3 : FlagChecked_F_OCimport_01
	{
		_generalMacro = "FlagCarrier";
		faction = "CFP_I_IS";
		vehicleClass = "IS_Flags";
		scope = 2;
		side = 4;
		accuracy = 1000;
		displayName = "Flag IS 3";
		armor = 1;
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_3.paa""";
			};
		};
	};

	class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad : Offroad_01_base_F_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Offroad";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad.jpg";
	};

    class cfp_i_is_offroad_OCimport_01 : cfp_i_is_offroad { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad_flag : cfp_i_is_offroad_OCimport_01
	{
		displayName = "IS Offroad (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_flag.jpg";
	};
	class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Offroad MG";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_MG.jpg";
	};

    class cfp_i_is_offroad_M2_OCimport_01 : cfp_i_is_offroad_M2 { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad_M2_flag : cfp_i_is_offroad_M2_OCimport_01
	{
		displayName = "IS Offroad MG (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_MG_flag.jpg";
	};
	class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class Eventhandlers; };
    class cfp_i_is_pickup_PK : CUP_I_Datsun_PK_TK_Random_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Pickup PK";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
	};

    class cfp_i_is_pickup_PK_OCimport_01 : cfp_i_is_pickup_PK { scope = 0; class Eventhandlers; };
    class cfp_i_is_pickup_PK_flag : cfp_i_is_pickup_PK_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Pickup PK (Flag)";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Datsun_PK.jpg";
	};

	class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_LR_M2 : CUP_O_LR_MG_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS L.R. M2";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR_MG.jpg";
	};
	class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_LR_SPG9 : CUP_O_LR_SPG9_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS L.R. SPG9";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR_SPG.jpg";
	};
	class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_LR_Unarmed : CUP_O_LR_Transport_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS L.R.";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR.jpg";
	};
	class CUP_O_UAZ_MG_RU;
    class CUP_O_UAZ_MG_RU_OCimport_01 : CUP_O_UAZ_MG_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_MG : CUP_O_UAZ_MG_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ MG";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_DShKM.jpg";
	};
	class CUP_O_UAZ_AGS30_RU;
    class CUP_O_UAZ_AGS30_RU_OCimport_01 : CUP_O_UAZ_AGS30_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_AGS30 : CUP_O_UAZ_AGS30_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ AGS30";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_AGS.jpg";
	};
	class CUP_O_UAZ_SPG9_RU;
    class CUP_O_UAZ_SPG9_RU_OCimport_01 : CUP_O_UAZ_SPG9_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ SPG9";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_SPG.jpg";
	};
	class CUP_O_UAZ_METIS_RU;
    class CUP_O_UAZ_METIS_RU_OCimport_01 : CUP_O_UAZ_METIS_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_METIS : CUP_O_UAZ_METIS_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ METIS";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_Metis.jpg";
	};
	class CUP_O_UAZ_Unarmed_RU;
    class CUP_O_UAZ_Unarmed_RU_OCimport_01 : CUP_O_UAZ_Unarmed_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ.jpg";
	};
	class CUP_O_UAZ_Open_RU;
    class CUP_O_UAZ_Open_RU_OCimport_01 : CUP_O_UAZ_Open_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_UAZ_Open : CUP_O_UAZ_Open_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS UAZ Open";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
	};
	class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 : CUP_B_HMMWV_DSHKM_GPK_ACR { scope = 0; class Eventhandlers; };
    class cfp_i_is_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS HMMWV DShKM";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_HMMWV_AGS_GPK_ACR;
    class CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01 : CUP_B_HMMWV_AGS_GPK_ACR { scope = 0; class Eventhandlers; };
    class cfp_i_is_hmmwv_ags : CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS HMMWV AGS";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class Eventhandlers; };
    class cfp_i_is_Ural : CUP_O_Ural_CHDKZ_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Ural";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Ural.jpg";
	};
	class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class Eventhandlers; };
    class cfp_i_is_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Ural ZU23";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Ural_ZU23.jpg";
	};
	class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_BTR40_MG : CUP_O_BTR40_MG_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BTR40 MG";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MOTORIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BTR40.jpg";
	};

    class cfp_i_is_BTR40_MG_flag : cfp_i_is_BTR40_MG
	{
		displayName = "IS BTR40 MG (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON : ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BTR40_flag.jpg";
	};

	class CUP_O_M113_TKA;
    class CUP_O_M113_TKA_OCimport_01 : CUP_O_M113_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_M113 : CUP_O_M113_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS M113";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_M113_2.jpg";
	};


    class cfp_i_is_M113_flag : cfp_i_is_M113
	{
		displayName = "IS M113 (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON : ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_M113_2_flag.jpg";
	};

	class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1 : CUP_O_BMP1_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BMP-1";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1.jpg";
	};

    class cfp_i_is_BMP1_OCimport_01 : cfp_i_is_BMP1 { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1_flag : cfp_i_is_BMP1_OCimport_01
	{
		displayName = "IS BMP-1 (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1_flag.jpg";
	};
	class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1P : CUP_O_BMP1P_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BMP-1P";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1P.jpg";
	};

    class cfp_i_is_BMP1P_OCimport_01 : cfp_i_is_BMP1P { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1P_flag : cfp_i_is_BMP1P_OCimport_01
	{
		displayName = "IS BMP-1P (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1P_flag.jpg";
	};
	class CUP_B_BMP_HQ_CZ_Des;
    class CUP_B_BMP_HQ_CZ_Des_OCimport_01 : CUP_B_BMP_HQ_CZ_Des { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP2_PKM : CUP_B_BMP_HQ_CZ_Des_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BMP-2 PKM";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_PKM.jpg";
	};

    class cfp_i_is_BMP2_PKM_OCimport_01 : cfp_i_is_BMP2_PKM { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP2_PKM_flag : cfp_i_is_BMP2_PKM_OCimport_01
	{
		displayName = "IS BMP-2 PKM (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_PKM_flag.jpg";
	};
	class CUP_B_BMP2_CZ_DES;
    class CUP_B_BMP2_CZ_DES_OCimport_01 : CUP_B_BMP2_CZ_DES { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP2 : CUP_B_BMP2_CZ_DES_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BMP-2";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2.jpg";
	};
	class CUP_O_BMP2_ZU_TKA;
    class CUP_O_BMP2_ZU_TKA_OCimport_01 : CUP_O_BMP2_ZU_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP2_ZU : CUP_O_BMP2_ZU_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS BMP-2 ZSU";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_MECHANIZED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_ZSU.jpg";
	};
	class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_T34 : CUP_O_T34_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS T34";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_ARMORED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T34.jpg";
	};

    class cfp_i_is_T34_OCimport_01 : cfp_i_is_T34 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T34_flag : cfp_i_is_T34_OCimport_01
	{
		displayName = "IS T34 (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T34_flag.jpg";
	};
	class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class Eventhandlers; };
    class cfp_i_is_T55 : CUP_O_T55_CSAT_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS T55";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_ARMORED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T55.jpg";
	};

    class cfp_i_is_T55_OCimport_01 : cfp_i_is_T55 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T55_flag : cfp_i_is_T55_OCimport_01
	{
		displayName = "IS T55 (Flag)";
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T55_flag.jpg";
	};
	class CUP_O_T72_TKA;
    class CUP_O_T72_TKA_OCimport_01 : CUP_O_T72_TKA { scope = 0; class Eventhandlers; };
    class cfp_i_is_T72 : CUP_O_T72_TKA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS T72";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_ARMORED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_T72_tan.jpg";
	};

    class cfp_i_is_T72_OCimport_01 : cfp_i_is_T72 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T72_flag : cfp_i_is_T72_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS T72 (Flag)";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_ARMORED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T72_flag.jpg";
	};
	class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class Eventhandlers; };
    class cfp_i_is_ZSU : CUP_O_ZSU23_SLA_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS ZSU";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_ARMORED";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_ZSU.jpg";
	};
	class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_ZU23 : CUP_O_ZU23_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS ZU23";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class Eventhandlers; };
    class cfp_i_is_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS DSHKM";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; };
    class cfp_i_is_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS DSHkM Mini TriPod";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_KORD : CUP_O_KORD_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS KORD";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_KORD_high : CUP_O_KORD_high_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS KORD High";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_AGS : CUP_O_AGS_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS AGS";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class Eventhandlers; };
    class cfp_i_is_M2Static : CUP_B_M2StaticMG_US_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS M2";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_M2StaticMG_MiniTripod_US;
    class CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_US { scope = 0; class Eventhandlers; };
    class cfp_i_is_M2Static_MiniTripod : CUP_B_M2StaticMG_MiniTripod_US_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS M2 Mini Tripod";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_Metis : CUP_O_Metis_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS Metis";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; };
    class cfp_i_is_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS SPG9";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_TOW_TriPod_USMC;
    class CUP_B_TOW_TriPod_USMC_OCimport_01 : CUP_B_TOW_TriPod_USMC { scope = 0; class Eventhandlers; };
    class cfp_i_is_TOW : CUP_B_TOW_TriPod_USMC_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS TOW";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS 2b14 82mm";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_M252_US;
    class CUP_B_M252_US_OCimport_01 : CUP_B_M252_US { scope = 0; class Eventhandlers; };
    class cfp_i_is_M252 : CUP_B_M252_US_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS M252";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_D30_RU;
    class CUP_O_D30_RU_OCimport_01 : CUP_O_D30_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_D30 : CUP_O_D30_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS D30";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_O_D30_AT_RU;
    class CUP_O_D30_AT_RU_OCimport_01 : CUP_O_D30_AT_RU { scope = 0; class Eventhandlers; };
    class cfp_i_is_D30_AT : CUP_O_D30_AT_RU_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS D30 AT";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
	class CUP_B_M119_US;
    class CUP_B_M119_US_OCimport_01 : CUP_B_M119_US { scope = 0; class Eventhandlers; };
    class cfp_i_is_M119 : CUP_B_M119_US_OCimport_01
	{
		scope = 2;
		side = 2;
		displayName = "IS M119";
		faction = "CFP_I_IS";
		vehicleClass = "CFP_i_is_STATIC";
		camouflage = 4;
		crew = "cfp_i_is_crewman";
		typicalCargo[] = {"cfp_i_is_crewman"};
	};
};