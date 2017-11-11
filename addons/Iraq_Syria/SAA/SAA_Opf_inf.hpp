class cfp_o_saa_base : I_Soldier_A_F
{
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	displayName = "SAA Soldier"; 
	faction = "CFP_O_SAA"; 
	modelSides[] = {0,1,2,3};
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	side = 0;
	vehicleClass = "CFP_O_SAA_INFANTRY"; 
	icon = "iconMan"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "SAA_uniform"; 
	hiddenSelections[] = {"Camo1","Camo2","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_uniform_woodland.paa","\CFP_Iraq_Syria\textures\Uniforms\woodland.paa"};
	camouflage = 1;	
	backpack = ""; 
	headgearProbability = 60;
	allowedHeadgear[] = {"CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_TK_Helmet","CUP_H_RUS_6B27_olive","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F"};
	allowedHeadgearB[] = {""};
	facewear = "";
	allowedfacewear[] = {""};
	randomWeaponProbability = 20;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"}; 
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"}; 
	weapons[] = {"Throw","Put"}; 
	respawnweapons[] = {"Throw","Put"};
	magazines[] = {""};
	Respawnmagazines[] = {""};
	identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\SAA\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\SAA\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_saa_infantry.jpg";
};


class cfp_o_saa_officer : cfp_o_saa_base
{
	genericnames = "TakistaniMen";
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Officer"; 
	faction = "CFP_O_SAA";
	vehicleClass = "CFP_O_SAA_INFANTRY"; 
	icon = "iconManOfficer"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "SAA_uniform_officer";
	hiddenSelections[] = {"Camo1","Camo2","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\saa_officer_woodland.paa","\CFP_Iraq_Syria\textures\Uniforms\woodland.paa"};
	headgearProbability = 50;
	allowedHeadgear[] = {"CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_SLA_Helmet","CUP_H_TK_Helmet","CUP_H_RUS_6B27_olive","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F"};
	allowedHeadgearB[] = {""};
	facewear = "";
	allowedfacewear[] = {""};
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"SAA_uniform_officer","CUP_V_CDF_6B3_2_FST", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};
	respawnLinkedItems[] = {"SAA_uniform_officer","CUP_V_CDF_6B3_2_FST", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\SAA\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\SAA\script\randomize_weapon.sqf""";
	};
};

class cfp_o_saa_grenadier : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Grenadier"; 
	icon = "iconManExplosive"; 
	headgearProbability = 60;
	randomWeaponProbability = 20;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"}; 
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"}; 
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_o_saa_rifleman : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Rifleman"; 
	icon = "iconMan"; 
	uniformClass = "SAA_uniform";
	headgearProbability = 80;
	randomWeaponProbability = 100;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_o_saa_machinegunner : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Machinegunner"; 
	icon = "iconManMG"; 
	backpack = "b_assaultpack_blk"; 
	headgearProbability = 60;
	randomWeaponProbability = 50;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class cfp_o_saa_sniper : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Sniper"; 
	icon = "iconManRecon";   
	camouflage = 0.6;	
	headgearProbability = 80;
	randomWeaponProbability = 25;
	linkedItems[] = {"SAA_uniform","V_BandollierB_oli", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","V_BandollierB_oli", "ItemRadio"};
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};

class cfp_o_saa_at : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Anti-Tank"; 
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 60;
	randomWeaponProbability = 100;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_o_saa_medic : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "CUP_B_AlicePack_Khaki"; 
	headgearProbability = 60;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	
};

class cfp_o_saa_sapper : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Sapper";  
	icon = "iconManExplosive"; 
	nakedUniform = "U_BasicBody";  
	backpack = "B_AssaultPack_khk";
	headgearProbability = 60;
	randomWeaponProbability = 100;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_o_saa_crewman : cfp_o_saa_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Crewman"; 
	icon = "iconManEngineer"; 
	headgearProbability = 50;
	randomWeaponProbability = 30;
	linkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};  
	respawnLinkedItems[] = {"SAA_uniform","CUP_V_CDF_6B3_2_FST", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

};

// Static weapon variants for use with VCOM

class cfp_o_saa_rifleman_dshkm : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_o_saa_rifleman_kord : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_o_saa_rifleman_podnos : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_o_saa_rifleman_ags30 : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_o_saa_rifleman_spg9 : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};

class cfp_o_saa_rifleman_metis : cfp_o_saa_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "SAA Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};