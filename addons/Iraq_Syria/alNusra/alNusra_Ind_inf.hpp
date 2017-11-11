class cfp_i_alNusra_base : I_Soldier_A_F
{
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	displayName = "al-Nusra Team Leader"; // In-game name of unit
	faction = "CFP_I_alNusra"; // Puts unit under new faction
	modelsides[] = {3,2,1,0};
	vehicleClass = "CFP_I_alNusra_INFANTRY"; 
	icon = "iconMan";
	nakedUniform = "U_BasicBody";  
	uniformClass = "alNusra_uniform";  
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\uniforms\IS_black.paa"};
	camouflage = 1;	
	backpack = ""; // Backpack Class
	headgearProbability = 100;
	allowedHeadgear[] = {"IS_shemag_black"};
	allowedHeadgearB[] = {"H_Bandanna_khk","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_gry","H_Bandanna_camo","H_Bandanna_mcamo"};
	facewear = "";
	allowedfacewear[] = {""};
	randomWeaponProbability = 50;
	linkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit. 
	respawnLinkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	weapons[] = {"CUP_arifle_AK47","Throw","Put"}; // Weapons added to the unit.
	respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"}; // Weapons added to the unit. Should be identical to the weapons section
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	identityTypes[] = {"NoGlasses", "Language_Ackbar", "Head_TK", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\alNusra\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\alNusra\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_alnusra_infantry.jpg";
};


class cfp_i_alNusra_team_leader : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Team Leader"; // In-game name of unit
	icon = "iconManOfficer"; 
	headgearProbability = 100;
	randomWeaponProbability = 50;
	linkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit. 
	respawnLinkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};
	
class cfp_i_alNusra_squad_leader : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Squad Leader"; 
	icon = "iconManLeader"; 
	headgearProbability = 100;
	randomWeaponProbability = 75;
	linkedItems[] = {"V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	weapons[] = {"CUP_arifle_M16A4_Base","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_M16A4_Base","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_i_alNusra_grenadier : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Grenadier"; 
	headgearProbability = 100;
	randomWeaponProbability = 20;
	linkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	respawnLinkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_i_alNusra_rifleman : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Rifleman"; 
	headgearProbability = 100;
	randomWeaponProbability = 100;	
	linkedItems[] = {"V_TacChestrig_grn_F", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacChestrig_grn_F", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_i_alNusra_machinegunner : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Machinegunner";  
	icon = "iconManMG"; 
	backpack = "b_assaultpack_blk"; 
	headgearProbability = 100;
	randomWeaponProbability = 50;
	linkedItems[] = {"V_TacVest_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_blk", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};
	
class cfp_i_alNusra_sniper : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Sniper"; 
	icon = "iconManRecon"; 
	headgearProbability = 100;
	randomWeaponProbability = 25;
	linkedItems[] = {"V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"V_BandollierB_khk", "ItemRadio"}; 
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};
	
class cfp_i_alNusra_at : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Anti-Tank"; 
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 100;
	randomWeaponProbability = 100;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_i_alNusra_medic : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "B_AssaultPack_rgr_Medic"; 
	headgearProbability = 100;
	randomWeaponProbability = 0;
	linkedItems[] = {"V_Chestrig_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"V_Chestrig_blk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

};

class cfp_i_alNusra_sapper : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Sapper"; 
	icon = "iconManExplosive"; 
	backpack = "B_AssaultPack_khk";
	headgearProbability = 100;
	randomWeaponProbability = 100;
	linkedItems[] = {"V_Chestrig_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"V_Chestrig_blk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_i_alNusra_crewman : cfp_i_alNusra_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Crewman"; 
	icon = "iconManEngineer"; 
	headgearProbability = 100;
	randomWeaponProbability = 30;
	linkedItems[] = {"V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"V_BandollierB_khk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

// Static weapon variants for use with VCOM

class cfp_i_alNusra_rifleman_dshkm : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_i_alNusra_rifleman_kord : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_i_alNusra_rifleman_podnos : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_i_alNusra_rifleman_ags30 : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_i_alNusra_rifleman_spg9 : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};

class cfp_i_alNusra_rifleman_metis : cfp_i_alNusra_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "al-Nusra Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};
