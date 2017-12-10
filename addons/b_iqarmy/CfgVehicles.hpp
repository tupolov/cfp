class CfgVehicles
{
	class B_Soldier_base_F;
	class B_soldier_F : B_Soldier_base_F {
		class EventHandlers;
	};
	class I_Soldier_02_F;
	class I_Soldier_A_F : I_Soldier_02_F {
		class EventHandlers;
	};
	class cfp_ia_base: I_Soldier_A_F
	{
		genericnames = "TakistaniMen";
		scope = 0;
		scopeCurator = 0;
		displayName = "IA Officer";
		faction = "CFP_B_IQARMY";
		modelsides[] = {6};
		side = 1;
		vehicleClass = "cfp_b_iqarmy_INFANTRY";
		icon = "iconManOfficer";
		nakedUniform = "U_BasicBody";
		uniformClass = "IA_uniform_generic";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqarmy\data\woodland.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 90;
		allowedHeadgear[] = {"H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","CUP_H_RACS_Helmet_tan","CUP_H_RACS_Helmet_olive"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {""};
		respawnLinkedItems[] = {""};
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {};
		Respawnmagazines[] = {};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_weapon.sqf""";
			};
		};
		Editorpreview = "x\cfp\addons\b_iqarmy\data\Preview_ia_infantry.jpg";
	};
	class cfp_b_iqarmy_officer: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Officer";
		vehicleClass = "cfp_b_iqarmy_INFANTRY";
		icon = "iconManOfficer";
		headgearProbability = 90;
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_iqarmy_grenadier: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Grenadier";
		icon = "iconManExplosive";
		headgearProbability = 40;
		randomWeaponProbability = 20;
		linkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
		respawnLinkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_iqarmy_rifleman: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Rifleman";
		icon = "iconMan";
		headgearProbability = 40;
		randomWeaponProbability = 100;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_iqarmy_machinegunner: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Machinegunner";
		icon = "iconManMG";
		backpack = "b_assaultpack_blk";
		headgearProbability = 40;
		randomWeaponProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
	class cfp_b_iqarmy_sniper: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Sniper";
		vehicleClass = "IA_infantry_b";
		icon = "iconManRecon";
		camouflage = 0.6;
		headgearProbability = 40;
		randomWeaponProbability = 25;
		linkedItems[] = {"V_BandollierB_oli","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemRadio"};
		weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_iqarmy_at: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Anti-Tank";
		icon = "iconManAT";
		backpack = "CUP_B_RPGPack_Khaki";
		headgearProbability = 40;
		randomWeaponProbability = 100;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_iqarmy_medic: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Medic";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		headgearProbability = 40;
		randomWeaponProbability = 25;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_iqarmy_sapper: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Sapper";
		icon = "iconManExplosive";
		backpack = "B_AssaultPack_khk";
		headgearProbability = 40;
		randomWeaponProbability = 100;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_iqarmy_crewman: cfp_ia_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Crewman";
		icon = "iconManEngineer";
		headgearProbability = 30;
		randomWeaponProbability = 30;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_iqarmy_sf: B_Soldier_F
	{
		modelSides[] = {6};
		side = 1;
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "IA SF";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_INFANTRY";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "IA_uniform_sf_b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqarmy\data\IraqiSF.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 100;
		allowedHeadgear[] = {"SP_ACHHelmet_Hunter1","H_PASGT_basic_olive_F","CUP_H_RACS_Helmet_tan"};
		allowedHeadgearB[] = {""};
		facewear = "G_Bandanna_blk";
		allowedfacewear[] = {"G_Bandanna_blk","G_Bandanna_blk","G_Bandanna_blk","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli"};
		randomWeaponProbability = 100;
		linkedItems[] = {"CUP_V_PMC_IOTV_Coyote_Patrol","CUP_optic_RCO_desert","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_PMC_IOTV_Coyote_Patrol","CUP_optic_RCO_desert","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1_desert","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_M4A1_desert","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_weapon.sqf""";
			};
		};
		Editorpreview = "x\cfp\addons\b_iqarmy\data\Preview_ia_sf_infantry.jpg";
	};
	class cfp_b_iqarmy_rifleman_dshkm: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [DSHKM]";
		icon = "iconManAT";
		backpack = "CUP_B_DShkM_TripodHigh_Bag";
	};
	class cfp_b_iqarmy_rifleman_kord: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [KORD]";
		icon = "iconManAT";
		backpack = "CUP_B_Kord_Tripod_Bag";
	};
	class cfp_b_iqarmy_rifleman_podnos: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [Podnos]";
		icon = "iconManAT";
		backpack = "CUP_B_Podnos_Bipod_Bag";
	};
	class cfp_b_iqarmy_rifleman_ags30: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [AGS30]";
		icon = "iconManAT";
		backpack = "CUP_B_AGS30_Tripod_Bag";
	};
	class cfp_b_iqarmy_rifleman_metis: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [METIS]";
		icon = "iconManAT";
		backpack = "CUP_B_Metis_Tripod_Bag";
	};
	class cfp_b_iqarmy_rifleman_spg9: cfp_b_iqarmy_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "IA Gunner [SPG9]";
		icon = "iconManAT";
		backpack = "CUP_B_SPG9_Tripod_Bag";
	};

	class CUP_B_HMMWV_M2_USA;
    class CUP_B_HMMWV_M2_USA_OCimport_01 : CUP_B_HMMWV_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_HMMWV_M2 : CUP_B_HMMWV_M2_USA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA HMMWV M2";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_HMMWV.jpg";
	};
	class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 : CUP_B_HMMWV_DSHKM_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA HMMWV GPK DShKM";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_HMMWV_M2_GPK_ACR;
    class CUP_B_HMMWV_M2_GPK_ACR_OCimport_01 : CUP_B_HMMWV_M2_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_hmmwv_m2_gpk : CUP_B_HMMWV_M2_GPK_ACR_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA HMMWV GPK M2";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_Ural : CUP_O_Ural_CHDKZ_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA Ural";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_Ural.jpg";
	};
	class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA Ural ZU23";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_Ural_ZU23.jpg";
	};
	class CUP_B_RG31_M2_USMC;
    class CUP_B_RG31_M2_USMC_OCimport_01 : CUP_B_RG31_M2_USMC { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_rg31 : CUP_B_RG31_M2_USMC_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP RG31";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Mastiff_HMG_GB_D;
    class CUP_B_Mastiff_HMG_GB_D_OCimport_01 : CUP_B_Mastiff_HMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_mastiff_hmg : CUP_B_Mastiff_HMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Mastiff HMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Mastiff_LMG_GB_D;
    class CUP_B_Mastiff_LMG_GB_D_OCimport_01 : CUP_B_Mastiff_LMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_mastiff_lmg : CUP_B_Mastiff_LMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Mastiff LMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Ridgback_HMG_GB_D;
    class CUP_B_Ridgback_HMG_GB_D_OCimport_01 : CUP_B_Ridgback_HMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_ridgback_hmg : CUP_B_Ridgback_HMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Ridgback HMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Ridgback_LMG_GB_D;
    class CUP_B_Ridgback_LMG_GB_D_OCimport_01 : CUP_B_Ridgback_LMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_ridgback_lmg : CUP_B_Ridgback_LMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Ridgback LMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Wolfhound_HMG_GB_D;
    class CUP_B_Wolfhound_HMG_GB_D_OCimport_01 : CUP_B_Wolfhound_HMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_wolfhound_hmg : CUP_B_Wolfhound_HMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Wolfhound HMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_B_Wolfhound_LMG_GB_D;
    class CUP_B_Wolfhound_LMG_GB_D_OCimport_01 : CUP_B_Wolfhound_LMG_GB_D { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_mrap_wolfhound_lmg : CUP_B_Wolfhound_LMG_GB_D_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA MRAP Wolfhound LMG";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
	};
	class CUP_O_BTR60_TK;
    class CUP_O_BTR60_TK_OCimport_01 : CUP_O_BTR60_TK { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_BTR60 : CUP_O_BTR60_TK_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA BTR60";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_BTR60.jpg";
	};
	class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_BMP1 : CUP_O_BMP1_TKA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA BMP-1";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_BMP1.jpg";
	};
	class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_BMP1P : CUP_O_BMP1P_TKA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA BMP-1P";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_BMP1P.jpg";
	};
	class CUP_O_BMP2_TKA;
    class CUP_O_BMP2_TKA_OCimport_01 : CUP_O_BMP2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_BMP2 : CUP_O_BMP2_TKA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA BMP-2";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_MECHANIZED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_BMP2.jpg";
	};
	class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_T55 : CUP_O_T55_CSAT_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA T55";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_T55.jpg";
	};
	class CUP_O_T72_TKA;
    class CUP_O_T72_TKA_OCimport_01 : CUP_O_T72_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_T72 : CUP_O_T72_TKA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA T72";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_T72.jpg";
	};
	class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_ZSU : CUP_O_ZSU23_SLA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA ZSU";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
	};
	class CUP_B_M1A1_DES_US_Army;
    class CUP_B_M1A1_DES_US_Army_OCimport_01 : CUP_B_M1A1_DES_US_Army { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_M1A1 : CUP_B_M1A1_DES_US_Army_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA M1A1";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_ARMORED";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_M1A1.jpg";
	};
	class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_ZU23 : CUP_O_ZU23_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA ZU23";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman"};
	};
	class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA DSHKM";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_b_iqarmy_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA DSHkM Mini TriPod";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_KORD : CUP_O_KORD_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA KORD";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_KORD_high : CUP_O_KORD_high_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA KORD High";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_AGS : CUP_O_AGS_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA AGS";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_Metis : CUP_O_Metis_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA Metis";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_b_iqarmy_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA SPG9";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA 2b14 82mm";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_D30_RU;
    class CUP_O_D30_RU_OCimport_01 : CUP_O_D30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_D30 : CUP_O_D30_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA D30";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_D30_AT_RU;
    class CUP_O_D30_AT_RU_OCimport_01 : CUP_O_D30_AT_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_D30_AT : CUP_O_D30_AT_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA D30 AT";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_STATIC";
		camouflage = 4;
		crew = "cfp_b_iqarmy_rifleman";
		typicalCargo[] = {"cfp_b_iqarmy_rifleman"};
	};
	class CUP_O_Mi24_V_RU;
    class CUP_O_Mi24_V_RU_OCimport_01 : CUP_O_Mi24_V_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_MI24V : CUP_O_Mi24_V_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA Mi-24v";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_AIRCRAFT";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_MI24V.jpg";
	};
	class CUP_O_Mi24_P_RU;
    class CUP_O_Mi24_P_RU_OCimport_01 : CUP_O_Mi24_P_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_MI24P : CUP_O_Mi24_P_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA Mi-24p";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_AIRCRAFT";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		class EventHandlers : EventHandlers
		{
			class ADDON
			{
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqarmy\Scripts\randomize_tex.sqf""";
			};
		};
		Editorpreview = "\x\cfp\addons\b_iqarmy\data\Preview_IA_MI24P.jpg";
	};
	class CUP_O_Su25_Dyn_RU;
    class CUP_O_Su25_Dyn_RU_OCimport_01 : CUP_O_Su25_Dyn_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_iqarmy_SU25 : CUP_O_Su25_Dyn_RU_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA SU25";
		faction = "CFP_B_IQARMY";
		vehicleClass = "cfp_b_iqarmy_AIRCRAFT";
		camouflage = 4;
		crew = "cfp_b_iqarmy_crewman";
		typicalCargo[] = {"cfp_b_iqarmy_crewman","cfp_b_iqarmy_crewman"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqarmy\data\su25_body1_ia.paa","\x\cfp\addons\b_iqarmy\data\su25_body2_ia.paa"};
		editorPreview = "\x\cfp\addons\b_iqarmy\data\Preview_ia_su25.jpg";
	};
};