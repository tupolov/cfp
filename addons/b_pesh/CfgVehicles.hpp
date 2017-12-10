class CfgVehicles
{
    class I_Soldier_base_F;
    class I_soldier_F : I_Soldier_base_F {
        class EventHandlers;
    };
    class cfp_b_pesh_base: I_soldier_F
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
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\Peshmerga_woodland_1.paa"};
        camouflage = 1;
        backpack = "";
        headgearProbability = 0;
        allowedHeadgear[] = {"H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","H_PASGT_basic_olive_F","CUP_H_RACS_Helmet_tan","CUP_H_RACS_Helmet_olive"};
        allowedHeadgearB[] = {""};
        facewear = "";
        allowedfacewear[] = {""};
        randomWeaponProbability = 0;
        beardProbability = 0;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
        respawnweapons[] = {"Throw","Put"};
        magazines[] = {};
        Respawnmagazines[] = {};
        identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_weapon.sqf""";
            };
        };
        Editorpreview = "x\cfp\addons\b_pesh\data\Preview_pesh_infantry.jpg";
    };
    class cfp_b_pesh_leader: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Leader";
        icon = "iconManOfficer";
        headgearProbability = 100;
        allowedHeadgear[] = {"PESH_Beret","PESH_Beret_CTG"};
        randomWeaponProbability = 50;
        beardProbability = 50;
        linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","PESH_Beret"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio","PESH_Beret"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_b_pesh_grenadier: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Grenadier";
        icon = "iconManExplosive";
        headgearProbability = 15;
        randomWeaponProbability = 20;
        beardProbability = 50;
        linkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        respawnLinkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_b_pesh_rifleman: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Rifleman";
        icon = "iconMan";
        headgearProbability = 15;
        randomWeaponProbability = 100;
        beardProbability = 50;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_b_pesh_machinegunner: cfp_b_pesh_base
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
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    };
    class cfp_b_pesh_sniper: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Sniper";
        icon = "iconManRecon";
        camouflage = 0.6;
        headgearProbability = 5;
        randomWeaponProbability = 35;
        beardProbability = 50;
        linkedItems[] = {"V_BandollierB_oli","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_oli","ItemRadio"};
        weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
    };
    class cfp_b_pesh_at: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga AT Gunner";
        icon = "iconManAT";
        backpack = "CUP_B_RPGPack_Khaki";
        headgearProbability = 15;
        randomWeaponProbability = 100;
        beardProbability = 50;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_b_pesh_medic: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Medic";
        icon = "iconManMedic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        headgearProbability = 15;
        beardProbability = 50;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_b_pesh_crewman: cfp_b_pesh_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Crewman";
        icon = "iconManEngineer";
        nakedUniform = "U_BasicBody";
        headgearProbability = 15;
        randomWeaponProbability = 30;
        beardProbability = 50;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };
    class cfp_b_pesh_rifleman_dshkm: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [DSHKM]";
        icon = "iconManAT";
        backpack = "CUP_B_DShkM_TripodHigh_Bag";
    };
    class cfp_b_pesh_rifleman_kord: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [KORD]";
        icon = "iconManAT";
        backpack = "CUP_B_Kord_Tripod_Bag";
    };
    class cfp_b_pesh_rifleman_podnos: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [Podnos]";
        icon = "iconManAT";
        backpack = "CUP_B_Podnos_Bipod_Bag";
    };
    class cfp_b_pesh_rifleman_ags30: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [AGS30]";
        icon = "iconManAT";
        backpack = "CUP_B_AGS30_Tripod_Bag";
    };
    class cfp_b_pesh_rifleman_metis: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [METIS]";
        icon = "iconManAT";
        backpack = "CUP_B_Metis_Tripod_Bag";
    };
    class cfp_b_pesh_rifleman_spg9: cfp_b_pesh_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [SPG9]";
        icon = "iconManAT";
        backpack = "CUP_B_SPG9_Tripod_Bag";
    };

    class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_Kurdistan : FlagCarrier_OCimport_01
    {
        author = "AccuracythruVolume";
        displayName = "Flag (Kurdistan)";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture '\x\cfp\addons\b_pesh\data\ISC_flag_Kurdistan.paa'";
            };
        };
    };

    class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_b_pesh_offroad : Offroad_01_base_F_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Offroad";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa","\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Offroad.jpg";
    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_b_pesh_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Offroad MG";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa","\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Offroad_M2.jpg";
    };
    class CUP_B_HMMWV_M2_USA;
    class CUP_B_HMMWV_M2_USA_OCimport_01 : CUP_B_HMMWV_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_HMMWV_M2 : CUP_B_HMMWV_M2_USA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga HMMWV M2";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_HMMWV.jpg";
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Ural : CUP_O_Ural_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Ural";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Ural.jpg";
    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Ural ZU23";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Ural_ZU23.jpg";
    };
    class CUP_O_BRDM2_TKA;
    class CUP_O_BRDM2_TKA_OCimport_01 : CUP_O_BRDM2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BRDM : CUP_O_BRDM2_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BRDM";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\brdm_pesh_1.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BRDM.jpg";
    };
    class CUP_O_BTR60_TK;
    class CUP_O_BTR60_TK_OCimport_01 : CUP_O_BTR60_TK { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BTR60 : CUP_O_BTR60_TK_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BTR60";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BTR60.jpg";
    };
    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BMP1 : CUP_O_BMP1_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BMP-1";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BMP1.jpg";
    };
    class CUP_O_BMP2_TKA;
    class CUP_O_BMP2_TKA_OCimport_01 : CUP_O_BMP2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BMP2 : CUP_O_BMP2_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BMP-2";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BMP2.jpg";
    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_ZSU : CUP_O_ZSU23_SLA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga ZSU";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_ARMORED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_ZSU.jpg";
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_2b14 : CUP_O_2b14_82mm_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga 2b14";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Metis : CUP_O_Metis_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Metis";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_ags30 : CUP_O_AGS_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga AGS30";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_dshkm : CUP_O_DSHKM_TK_INS_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga DSHKM";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_b_pesh_dshkm_minitripod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga DSHKM (Minitripod)";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_zu23 : CUP_O_ZU23_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga ZU23";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
};