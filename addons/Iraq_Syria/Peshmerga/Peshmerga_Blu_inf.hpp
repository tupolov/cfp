class cfp_b_pesh_base : I_soldier_F
{
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	displayName = "Peshmerga Leader"; 
	faction = "CFP_B_PESH";
	modelSides[] = {0,1,2,3};
	side = 1;
	vehicleClass = "CFP_B_PESH_INFANTRY"; 
	icon = "iconMan"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "PESH_uniform";  
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\Peshmerga_woodland_1.paa"};
	camouflage = 1;	
	backpack = ""; 
	headgearProbability = 0;
	allowedHeadgear[] = {"H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","CUP_H_RACS_Helmet_tan","CUP_H_RACS_Helmet_olive"};
	allowedHeadgearB[] = {""};
	facewear = "";
	allowedfacewear[] = {""};
	randomWeaponProbability = 0;
	beardProbability = 0;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"rhs_weap_akm","Binocular","Throw","Put"}; 
	respawnweapons[] = {"Throw","Put"};
	magazines[] = {""};
	Respawnmagazines[] = {""};
	identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\Peshmerga\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\Peshmerga\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_pesh_infantry.jpg";
};

class cfp_b_pesh_leader : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Leader"; 
	icon = "iconManOfficer"; 
	headgearProbability = 100;
	allowedHeadgear[] = {"PESH_Beret","PESH_Beret_CTG"};
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio","PESH_Beret"};
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio","PESH_Beret"};
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_pesh_grenadier : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Grenadier"; 
	icon = "iconManExplosive"; 
	headgearProbability = 15;
	randomWeaponProbability = 20;
	beardProbability = 50;
	linkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	respawnLinkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_pesh_rifleman : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Rifleman"; 
	icon = "iconMan"; 
	headgearProbability = 15;
	randomWeaponProbability = 100;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_pesh_machinegunner : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Machinegunner"; 
	icon = "iconManMG"; 
	nakedUniform = "U_BasicBody";  
	backpack = "b_assaultpack_blk"; 
	headgearProbability = 15;
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class cfp_b_pesh_sniper : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Sniper"; 
	icon = "iconManRecon"; 
	camouflage = 0.6;	
	headgearProbability = 5;
	randomWeaponProbability = 35;
	beardProbability = 50;
	linkedItems[] = {"V_BandollierB_oli", "ItemRadio"};  
	respawnLinkedItems[] = {"V_BandollierB_oli", "ItemRadio"};
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};

class cfp_b_pesh_at : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga AT Gunner"; 
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 15;
	randomWeaponProbability = 100;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_pesh_medic : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "B_AssaultPack_rgr_Medic"; 
	headgearProbability = 15;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_pesh_crewman : cfp_b_pesh_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Crewman"; 
	icon = "iconManEngineer"; 
	nakedUniform = "U_BasicBody";  
	headgearProbability = 15;
	randomWeaponProbability = 30;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

// Static weapon variants for use with VCOM

class cfp_b_pesh_rifleman_dshkm : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_b_pesh_rifleman_kord : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_b_pesh_rifleman_podnos : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_b_pesh_rifleman_ags30 : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_b_pesh_rifleman_metis : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};


class cfp_b_pesh_rifleman_spg9 : cfp_b_pesh_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Peshmerga Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};
