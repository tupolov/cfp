class CfgVehicles
{


    class I_Soldier_02_F;
    class I_Soldier_A_F : I_Soldier_02_F {
        class EventHandlers;
    };

    class cfp_i_alNusra_base: I_Soldier_A_F
    {
        genericnames = "TakistaniMen";
        scope = 0;
        scopeCurator = 0;
        displayName = "al-Nusra Team Leader";
        faction = "CFP_I_ALNUSRA";
        modelsides[] = {3,2,1,0};
        vehicleClass = "CFP_I_alNusra_INFANTRY";
        icon = "iconMan";
        nakedUniform = "U_BasicBody";
        uniformClass = "alNusra_uniform";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\i_alnusra\data\IS_black.paa"};
        camouflage = 1;
        backpack = "";
        headgearProbability = 100;
        allowedHeadgear[] = {"IS_shemag_black"};
        allowedHeadgearB[] = {"H_Bandanna_khk","H_Bandanna_cbr","H_Bandanna_sgg","H_Bandanna_gry","H_Bandanna_camo","H_Bandanna_mcamo"};
        facewear = "";
        allowedfacewear[] = {""};
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        identityTypes[] = {"NoGlasses","Language_Ackbar","Head_TK","G_IRAN_default"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_weapon.sqf""";
            };
        };
        editorPreview = "x\cfp\addons\i_alnusra\data\Preview_alnusra_infantry.jpg";
    };
    class cfp_i_alNusra_team_leader: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Team Leader";
        icon = "iconManOfficer";
        headgearProbability = 100;
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_i_alNusra_squad_leader: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Squad Leader";
        icon = "iconManLeader";
        headgearProbability = 100;
        randomWeaponProbability = 75;
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"CUP_arifle_M16A4_Base","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_M16A4_Base","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_i_alNusra_grenadier: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Grenadier";
        headgearProbability = 100;
        randomWeaponProbability = 20;
        linkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        respawnLinkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_i_alNusra_rifleman: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Rifleman";
        headgearProbability = 100;
        randomWeaponProbability = 100;
        linkedItems[] = {"V_TacChestrig_grn_F","ItemRadio"};
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","ItemRadio"};
        weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_i_alNusra_machinegunner: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Machinegunner";
        icon = "iconManMG";
        backpack = "b_assaultpack_blk";
        headgearProbability = 100;
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVest_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_blk","ItemRadio"};
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    };
    class cfp_i_alNusra_sniper: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Sniper";
        icon = "iconManRecon";
        headgearProbability = 100;
        randomWeaponProbability = 25;
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
    };
    class cfp_i_alNusra_at: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Anti-Tank";
        icon = "iconManAT";
        backpack = "CUP_B_RPGPack_Khaki";
        headgearProbability = 100;
        randomWeaponProbability = 100;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_i_alNusra_medic: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Medic";
        icon = "iconManMedic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        headgearProbability = 100;
        randomWeaponProbability = 0;
        linkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_i_alNusra_sapper: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Sapper";
        icon = "iconManExplosive";
        backpack = "B_AssaultPack_khk";
        headgearProbability = 100;
        randomWeaponProbability = 100;
        linkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_i_alNusra_crewman: cfp_i_alNusra_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Crewman";
        icon = "iconManEngineer";
        headgearProbability = 100;
        randomWeaponProbability = 30;
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_i_alNusra_rifleman_dshkm: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [DSHKM]";
        icon = "iconManAT";
        backpack = "CUP_B_DShkM_TripodHigh_Bag";
    };
    class cfp_i_alNusra_rifleman_kord: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [KORD]";
        icon = "iconManAT";
        backpack = "CUP_B_Kord_Tripod_Bag";
    };
    class cfp_i_alNusra_rifleman_podnos: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [Podnos]";
        icon = "iconManAT";
        backpack = "CUP_B_Podnos_Bipod_Bag";
    };
    class cfp_i_alNusra_rifleman_ags30: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [AGS30]";
        icon = "iconManAT";
        backpack = "CUP_B_AGS30_Tripod_Bag";
    };
    class cfp_i_alNusra_rifleman_spg9: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [SPG9]";
        icon = "iconManAT";
        backpack = "CUP_B_SPG9_Tripod_Bag";
    };
    class cfp_i_alNusra_rifleman_metis: cfp_i_alNusra_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Gunner [METIS]";
        icon = "iconManAT";
        backpack = "CUP_B_Metis_Tripod_Bag";
    };

    class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_alNusra : FlagCarrier_OCimport_01
    {
        author = "AccuracythruVolume";
        displayName = "Flag (al-Nusra)";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) setFlagTexture '\x\cfp\addons\i_alnusra\data\ISC_flag_alNusra.paa'";
            };
        };
    };

    class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_i_alNusra_offroad : Offroad_01_base_F_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Offroad";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\i_alnusra\data\offroad_an_01.paa","\x\cfp\addons\i_alnusra\data\offroad_an_01.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Offroad.jpg";
    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_i_alNusra_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Offroad MG";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\i_alnusra\data\offroad_an_02.paa","\x\cfp\addons\i_alnusra\data\offroad_an_02.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Offroad_MG.jpg";
    };
    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_pickup_PK : CUP_I_Datsun_PK_TK_Random_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Pickup PK";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_M2 : CUP_O_LR_MG_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R. M2";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR_MG.jpg";
    };
    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_SPG9 : CUP_O_LR_SPG9_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R. SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR_SPG.jpg";
    };
    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_Unarmed : CUP_O_LR_Transport_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R.";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR.jpg";
    };
    class CUP_O_UAZ_MG_RU;
    class CUP_O_UAZ_MG_RU_OCimport_01 : CUP_O_UAZ_MG_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_MG : CUP_O_UAZ_MG_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ MG";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_MG.jpg";
    };
    class CUP_B_UAZ_AGS30_CDF;
    class CUP_B_UAZ_AGS30_CDF_OCimport_01 : CUP_B_UAZ_AGS30_CDF { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_AGS30 : CUP_B_UAZ_AGS30_CDF_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ AGS30";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_AGS.jpg";
    };
    class CUP_O_UAZ_SPG9_RU;
    class CUP_O_UAZ_SPG9_RU_OCimport_01 : CUP_O_UAZ_SPG9_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_SPG.jpg";
    };
    class CUP_O_UAZ_METIS_RU;
    class CUP_O_UAZ_METIS_RU_OCimport_01 : CUP_O_UAZ_METIS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_METIS : CUP_O_UAZ_METIS_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ METIS";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_UAZ_Unarmed_RU;
    class CUP_O_UAZ_Unarmed_RU_OCimport_01 : CUP_O_UAZ_Unarmed_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ.jpg";
    };
    class CUP_O_UAZ_Open_RU;
    class CUP_O_UAZ_Open_RU_OCimport_01 : CUP_O_UAZ_Open_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_Open : CUP_O_UAZ_Open_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ Open";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_Ural : CUP_O_Ural_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Ural";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Ural.jpg";
    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Ural ZU23";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Ural_ZU23.jpg";
    };
    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_BMP1 : CUP_O_BMP1_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra BMP-1";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_BMP1.jpg";
    };
    class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_BMP1P : CUP_O_BMP1P_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra BMP-1P";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_BMP1P.jpg";
    };
    class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_T34 : CUP_O_T34_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra T34";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_T34.jpg";
    };
    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_T55 : CUP_O_T55_CSAT_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra T55";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_T55.jpg";
    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_ZSU : CUP_O_ZSU23_SLA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra ZSU";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_ZSU.jpg";
    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_ZU23 : CUP_O_ZU23_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra ZU23";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra DSHKM";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_alNusra_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra DSHkM Mini TriPod";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_KORD : CUP_O_KORD_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra KORD";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_KORD_high : CUP_O_KORD_high_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra KORD High";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_AGS : CUP_O_AGS_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra AGS";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_alNusra_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra 2b14 82mm";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
};