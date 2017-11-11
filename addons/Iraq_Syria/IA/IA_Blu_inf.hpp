class cfp_ia_base : I_Soldier_A_F
{
	genericnames = "TakistaniMen";
	scope = 0;
	scopeCurator = 0;
	displayName = "IA Officer"; 
	faction = "CFP_B_IA";
	modelsides[] = {1,2};
	side = 1;
	vehicleClass = "CFP_B_IA_INFANTRY"; 
	icon = "iconManOfficer"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "IA_uniform_generic";  
	hiddenSelections[] = {"Camo","insignia"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\woodland.paa"};
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
	magazines[] = {""};
	Respawnmagazines[] = {""};
	identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\IA\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\IA\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_ia_infantry.jpg";

};

class cfp_b_ia_officer : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Officer"; 
	vehicleClass = "CFP_B_IA_INFANTRY"; 
	icon = "iconManOfficer"; 
	headgearProbability = 90;
	randomWeaponProbability = 50;
	beardProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch","ItemRadio"};
	weapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_ia_grenadier : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Grenadier"; 
	icon = "iconManExplosive"; 
	headgearProbability = 40;
	randomWeaponProbability = 20;
	linkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	respawnLinkedItems[] = {"V_HarnessOGL_gry", "ItemRadio"}; 
	weapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_M16A2_GL","Binocular","Throw","Put"}; 
	magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_1Rnd_HE_M203","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_ia_rifleman : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Rifleman"; 
	icon = "iconMan"; 
	headgearProbability = 40;
	randomWeaponProbability = 100;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
};

class cfp_b_ia_machinegunner : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Machinegunner"; 
	icon = "iconManMG"; 
	backpack = "b_assaultpack_blk"; 
	headgearProbability = 40;
	randomWeaponProbability = 50;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; 
	respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
};

class cfp_b_ia_sniper : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Sniper"; 
	vehicleClass = "IA_infantry_b"; 
	icon = "iconManRecon"; 
	camouflage = 0.6;	
	headgearProbability = 40;
	randomWeaponProbability = 25;
	linkedItems[] = {"V_BandollierB_oli", "ItemRadio"};  
	respawnLinkedItems[] = {"V_BandollierB_oli", "ItemRadio"};
	weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"}; 
	respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
};

class cfp_b_ia_at : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Anti-Tank"; 
	icon = "iconManAT"; 
	backpack = "CUP_B_RPGPack_Khaki"; 
	headgearProbability = 40;
	randomWeaponProbability = 100;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
	magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ia_medic : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Medic"; 
	icon = "iconManMedic"; 
	attendant = 1;
	backpack = "B_AssaultPack_rgr_Medic"; 
	headgearProbability = 40;
	randomWeaponProbability = 25;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ia_sapper : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Sapper"; 
	icon = "iconManExplosive"; 
	backpack = "B_AssaultPack_khk";
	headgearProbability = 40;
	randomWeaponProbability = 100;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ia_crewman : cfp_ia_base
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Crewman"; 
	icon = "iconManEngineer"; 
	headgearProbability = 30;
	randomWeaponProbability = 30;
	linkedItems[] = {"V_TacVest_camo", "ItemRadio"};  
	respawnLinkedItems[] = {"V_TacVest_camo", "ItemRadio"};
	weapons[] = {"CUP_arifle_AKS","Throw","Put"}; 
	respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
	magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
};

class cfp_b_ia_sf : B_Soldier_F
{
	modelSides[] = {0,1,2,3};
	side = 1;
	genericnames = "TakistaniMen";
	scope = 2;
	scopeCurator = 2;
	displayName = "IA SF"; 
	faction = "CFP_B_IA"; 
	vehicleClass = "CFP_B_IA_INFANTRY"; 
	icon = "iconMan"; 
	nakedUniform = "U_BasicBody";  
	uniformClass = "IA_uniform_sf_b";
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IraqiSF.paa"};
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
	identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria\IA\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\IA\script\randomize_weapon.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria\Previews\Preview_ia_sf_infantry.jpg";
};

// Static weapon variants for use with VCOM

class cfp_b_ia_rifleman_dshkm : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [DSHKM]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_DShkM_TripodHigh_Bag"; 
};

class cfp_b_ia_rifleman_kord : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [KORD]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Kord_Tripod_Bag"; 
};

class cfp_b_ia_rifleman_podnos : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [Podnos]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Podnos_Bipod_Bag"; 
};

class cfp_b_ia_rifleman_ags30 : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [AGS30]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_AGS30_Tripod_Bag"; 
};

class cfp_b_ia_rifleman_metis : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [METIS]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_Metis_Tripod_Bag"; 
};


class cfp_b_ia_rifleman_spg9 : cfp_b_ia_rifleman
{
	scope = 2;
	scopeCurator = 2;
	displayName = "IA Gunner [SPG9]";  
	icon = "iconManAT"; 
	backpack = "CUP_B_SPG9_Tripod_Bag"; 
};
