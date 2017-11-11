class cfp_o_is_base : I_Soldier_A_F
{
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	displayName = "IS Base"; // In-game name of unit
	faction = "CFP_O_IS"; // Puts unit under new faction
	modelSides[] = {0,1,2,3};
	side = 0;
	vehicleClass = "CFP_O_IS_INFANTRY"; // Puts unit in the vehicleclass
	icon = "iconMan"; 
	nakedUniform = "U_BasicBody";
	uniformClass = "IS_uniform_o";
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\uniforms\IS_pixelated_desert.paa"};
	camouflage = 1;	
	backpack = ""; // Backpack Class
	headgearProbability = 50;
	allowedHeadgear[] = {"IS_shemag_black","H_ShemagOpen_khk","H_Shemag_olive","H_ShemagOpen_tan"};
	allowedHeadgearB[] = {"H_Bandanna_khk","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_gry","H_Bandanna_camo","H_Bandanna_mcamo"};
	facewear = "";
	allowedfacewear[] = {"G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan"};
	randomWeaponProbability = 50;
	linkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit. 
	respawnLinkedItems[] = {"V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	weapons[] = {"Throw","Put"}; // Weapons added to the unit.
	respawnweapons[] = {"Throw","Put"}; // Weapons added to the unit. Should be identical to the weapons section
	magazines[] = {""};
	Respawnmagazines[] = {""};
	identityTypes[] = {"NoGlasses","Language_Ackbar","Head_TK","G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\IS\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\IS\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_is_infantry.jpg";
};

class cfp_o_is_team_leader : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Team Leader"; // In-game name of unit
	icon = "iconManOfficer"; 
	headgearProbability = 50;
	randomWeaponProbability = 50;
	linkedItems[] = {"IS_uniform_o","V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"}; // Item's added to the unit. 
	respawnLinkedItems[] = {"IS_uniform_o","V_TacVestIR_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Item's added to the unit. Should be identical to the linkedItems section.
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};
	
class cfp_o_is_squad_leader : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Squad Leader";  
	icon = "iconManLeader"; 
	headgearProbability = 80;
	randomWeaponProbability = 75;
	linkedItems[] = {"IS_uniform_o","V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	weapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};

};

class cfp_o_is_grenadier : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Grenadier"; 
	icon = "iconManExplosive"; 
	headgearProbability = 60;
	randomWeaponProbability = 20;
	linkedItems[] = {"IS_uniform_o","V_HarnessOGL_gry", "ItemRadio"}; 
	respawnLinkedItems[] = {"IS_uniform_o","V_HarnessOGL_gry", "ItemRadio"}; 
	weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_o_is_rifleman : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Rifleman";  
	icon = "iconMan"; 
	headgearProbability = 50;
	randomWeaponProbability = 100;
	linkedItems[] = {"IS_uniform_o","V_HarnessO_gry", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_HarnessO_gry", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_o_is_militaman : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Militaman"; 
	icon = "iconMan"; 
	headgearProbability = 80;
	randomWeaponProbability = 30;
	linkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk", "ItemRadio"};
	weapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"};
	magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
};

class cfp_o_is_irregular : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Irregular"; 
	icon = "iconMan"; 
	headgearProbability = 80;
	randomWeaponProbability = 35;
	linkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"U_I_C_Soldier_Para_5_F","V_BandollierB_khk", "ItemRadio"};
	weapons[] = {"CUP_smg_MP5A5","Throw","Put"}; 
	respawnweapons[] = {"CUP_smg_MP5A5","Throw","Put"};
	magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
};

class cfp_o_is_autorifleman : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Autorifleman";  
	icon = "iconManMG"; 
	headgearProbability = 60;
	randomWeaponProbability = 50;
	linkedItems[] = {"IS_uniform_o","V_TacVest_blk", "ItemRadio"}; 		
	respawnLinkedItems[] = {"IS_uniform_o","V_TacVest_blk", "ItemRadio"};
	weapons[] = {"CUP_lmg_m249_pip1","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_m249_pip1","Throw","Put"};
	magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
	Respawnmagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
};

class cfp_o_is_machinegunner : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Machinegunner"; 
	icon = "iconManMG";  
	headgearProbability = 60;
	randomWeaponProbability = 50;
	linkedItems[] = {"IS_uniform_o","V_TacVest_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_TacVest_blk", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class cfp_o_is_sniper : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Sniper"; 
	icon = "iconManRecon"; 
	camouflage = 0.6;
	headgearProbability = 80;
	randomWeaponProbability = 25;
	linkedItems[] = {"IS_uniform_o","V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_BandollierB_khk", "ItemRadio"};
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};

class cfp_o_is_at : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Anti-Tank"; 
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 60;
	randomWeaponProbability = 100;
	linkedItems[] = {"IS_uniform_o","V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_o_is_medic : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "B_AssaultPack_rgr_Medic"; 
	headgearProbability = 60;
	linkedItems[] = {"IS_uniform_o","V_Chestrig_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_Chestrig_blk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_o_is_sapper : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Sapper"; 
	icon = "iconManExplosive"; 
	backpack = "B_AssaultPack_khk";
	headgearProbability = 60;
	randomWeaponProbability = 100;
	linkedItems[] = {"IS_uniform_o","V_Chestrig_blk", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_Chestrig_blk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_o_is_crewman : cfp_o_is_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Crewman"; 
	icon = "iconManEngineer"; 
	headgearProbability = 50;
	randomWeaponProbability = 30;
	linkedItems[] = {"IS_uniform_o","V_BandollierB_khk", "ItemRadio"};  
	respawnLinkedItems[] = {"IS_uniform_o","V_BandollierB_khk", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

// Static weapon variants for use with VCOM

class cfp_o_is_rifleman_dshkm : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_o_is_rifleman_kord : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_o_is_rifleman_podnos : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_o_is_rifleman_ags30 : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_o_is_rifleman_metis : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};


class cfp_o_is_rifleman_spg9 : cfp_o_is_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IS Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};
