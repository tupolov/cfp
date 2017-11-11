class cfp_b_ypg_base : I_Soldier_F
{
	displayName = "YPG Base"; 
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	faction = "CFP_B_YPG";
	modelsides[] = {1,2};
	side = 1;
	vehicleClass = "CFP_B_YPG_INFANTRY"; 
	icon = "iconMan"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "YPG_uniform"; 
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\YPG_marpat_1.paa"};
	camouflage = 1;			
	backpack = ""; 
	headgearProbability = 85;
	allowedHeadgear[] = {"YPG_shemag"};
	allowedHeadgearB[] = {""};
	facewear = "";
	allowedfacewear[] = {""};
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	weapons[] = {"Throw","Put"}; 
	respawnweapons[] = {"Throw","Put"};
	magazines[] = {""};
	Respawnmagazines[] = {""};
	identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_Greek", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\YPG\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\YPG\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_ypg_infantry.jpg";

};	


class cfp_b_ypg_leader : cfp_b_ypg_base
{
	displayName = "YPG Leader"; 
	scope = 2;
	scopeCurator = 2;
	icon = "iconManOfficer"; 
	headgearProbability = 85;
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};	
class cfp_b_ypg_rifleman : cfp_b_ypg_base
{
	displayName = "YPG Rifleman"; 
	scope = 2;
	scopeCurator = 2;
	icon = "iconMan"; 
	headgearProbability = 85;
	randomWeaponProbability = 100;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_ypg_machinegunner : cfp_b_ypg_base
{
	displayName = "YPG Machinegunner"; 
	scope = 2;
	scopeCurator = 2;
	icon = "iconManMG"; 
	backpack = "b_assaultpack_blk"; 
	headgearProbability = 85;
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class cfp_b_ypg_sniper : cfp_b_ypg_base
{
	displayName = "YPG Sniper"; 
	scope = 2;
	scopeCurator = 2;
	icon = "iconManRecon"; 
	camouflage = 0.6;	
	headgearProbability = 85;
	randomWeaponProbability = 35;
	beardProbability = 50;
	linkedItems[] = {"V_BandollierB_oli", "ItemRadio"};  
	respawnLinkedItems[] = {"V_BandollierB_oli", "ItemRadio"};
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};

class cfp_b_ypg_at : cfp_b_ypg_base
{
	displayName = "YPG AT Gunner"; 
	scope = 2;
	scopeCurator = 2;
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 85;
	randomWeaponProbability = 100;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ypg_medic : cfp_b_ypg_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "B_AssaultPack_rgr_Medic"; 
	headgearProbability = 85;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ypg_crewman : cfp_b_ypg_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Crewman"; 
	icon = "iconManEngineer"; 
	headgearProbability = 85;
	randomWeaponProbability = 30;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

};

// Static weapon variants for use with VCOM

class cfp_b_ypg_rifleman_dshkm : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_b_ypg_rifleman_kord : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_b_ypg_rifleman_podnos : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_b_ypg_rifleman_ags30 : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_b_ypg_rifleman_metis : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};

class cfp_b_ypg_rifleman_spg9 : cfp_b_ypg_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "YPG Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};
