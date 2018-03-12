#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles
{
    class I_Soldier_F;
    class I_Soldier_02_F;
    class I_Soldier_A_F : I_Soldier_02_F {
        class EventHandlers;
    };

    class cfp_o_is_uniform : I_Soldier_F {
        scope = 1;
        side = 0;
        displayName = "Field Uniform (Islamic State)";
        faction = "CFP_O_IS";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1;
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "CFP_U_o_is_uniform";
        model = "\x\cfp\addons\models\FieldUniform.p3d";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\fielduniform\is\IS_pixelated_desert.paa"};
        hiddenSelections[] = {"Camo", "insignia"};
    };

    class cfp_o_is_base: I_Soldier_A_F
    {
        genericnames = "TakistaniMen";
        scope = 1;
        scopeCurator = 0;
        displayName = "IS Base";
        faction = "CFP_O_IS";
        modelSides[] = {0,1,2,3};
        side = 0;
        vehicleClass = "CFP_o_is_INFANTRY";
        icon = "iconMan";
        nakedUniform = "U_BasicBody";
        uniformClass = "CFP_U_o_is_uniform";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\uniforms\fielduniform\is\IS_pixelated_desert.paa"};
        camouflage = 1;
        backpack = "";
        randomWeaponProbability = 50;
        randomGearProbability = 50;
        linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"Throw","Put"};
        respawnweapons[] = {"Throw","Put"};
        magazines[] = {};
        Respawnmagazines[] = {};
        identityTypes[] = {"Language_Ackbar","Head_TK"};

        uniformList[] = {
            "CFP_U_o_is_uniform",1
        };

        headgearList[] = {
            "IS_shemag_black", 0.5,
            "H_ShemagOpen_khk", 0.5,
            "H_Shemag_olive", 0.5,
            "H_ShemagOpen_tan", 0.5,
            "H_Bandanna_khk", 0.25,
            "H_Bandanna_cbr", 0.25,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_gry", 0.25,
            "H_Bandanna_camo", 0.25,
            "H_Bandanna_mcamo", 0.25
        };

        insigniaList[] = {
            "", 0.5,
            "insignia_cfp_o_is", 0.5
        };

        facewearList[] = {
            "", 0.5,
            "G_Bandanna_blk", 0.25,
            "G_Bandanna_khk", 0.25,
            "G_Bandanna_oli", 0.25,
            "G_Bandanna_tan", 0.25,
            "IS_Balaclava", 0.1,
            "IS_Balaclava_logo1", 0.1,
            "IS_Balaclava_logo2", 0.1
        };

        vestList[] = {
            "V_TacVest_blk", 0.5,
            "V_TacVest_khk", 0.5,
            "V_TacVest_brn", 0.5,
            "V_TacVest_oli", 0.5,
            "V_TacVest_camo", 0.5,
            "SP_OpforRig1_Black", 0.5,
            "SP_OpforRig1_Green", 0.5,
            "SP_OpforRig1_Tan", 0.5,
            "SP_OpforRig1_Grey", 0.5,
            "V_TacChestrig_grn_F", 0.5,
            "V_TacChestrig_cbr_F", 0.5,
            "V_TacChestrig_oli_F", 0.5,
            "CUP_V_B_GER_Carrier_Rig_2_Brown", 0.5,
            "CUP_V_I_RACS_Carrier_Rig_2", 0.5,
            "CUP_V_I_RACS_Carrier_Rig_wdl_2",  0.5,
            "CUP_V_RUS_Smersh_1", 0.5,
            "CUP_V_O_Ins_Carrier_Rig_Light", 0.5,
            "CUP_V_I_Carrier_Belt", 0.5,
            "CUP_V_O_Ins_Carrier_Rig", 0.5
        };

        grenadeList[] = {{"CUP_HandGrenade_RGD5",2},1};

        rifleList[] = {
            {"CUP_arifle_AKM",{"CUP_30Rnd_545x39_AK_M",6}}, 0.45,
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.05,
            {"CUP_arifle_AK47",{"CUP_30Rnd_545x39_AK_M",6}}, 0.05,
            {"CUP_arifle_Sa58P",{"CUP_30Rnd_Sa58_M",6}}, 0.05,
            {"CUP_arifle_M16A4_Base",{"CUP_30Rnd_556x45_Stanag",6}}, 0.05,
            {"CUP_arifle_M4A1",{"CUP_30Rnd_556x45_Stanag",6}}, 0.05,
            {"CUP_arifle_G36K",{"CUP_30Rnd_556x45_G36",6}}, 0.05,
            {"CUP_arifle_FNFAL_OSW",{"CUP_20Rnd_762x51_FNFAL_M",6}}, 0.05,
            {"CUP_arifle_M4A1_desert",{"CUP_30Rnd_556x45_Stanag",6}}, 0.05
        };
        handgunList[] = {
            "", 0.7,
            {"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.3
        };

        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) call CFP_main_fnc_randomizeUnit; (_this select 0) spawn CFP_o_is_fnc_randomizeUniform; [_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];"; //
            };
        };
        editorPreview = "x\cfp\addons\uniforms\FieldUniform\IS\UI\Preview_is_infantry.jpg";
    };
    class cfp_o_is_team_leader: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Team Leader";
        icon = "iconManOfficer";
        randomGearProbability = 50;
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        rifleList[] = {
            {"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.5,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_M4A1",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2,
            {"CUP_arifle_M16A4_GL",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",8}}}, 0.1
        };
    };
    class cfp_o_is_squad_leader: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Squad Leader";
        icon = "iconManLeader";
        randomGearProbability = 80;
        randomWeaponProbability = 75;
        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        rifleList[] = {
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.6,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_M4A1",{"CUP_30Rnd_556x45_Stanag",6}}, 0.1,
            {"CUP_arifle_G36K",{"CUP_30Rnd_556x45_G36",6}}, 0.1
        };
    };
    class cfp_o_is_grenadier: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Grenadier";
        icon = "iconManExplosive";
        randomGearProbability = 60;
        randomWeaponProbability = 20;
        linkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        respawnLinkedItems[] = {"V_HarnessOGL_gry","ItemRadio"};
        weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        vestList[] = {"V_HarnessOGL_gry",0.5,"V_HarnessOGL_brn",0.5};
        rifleList[] = {
            {"CUP_arifle_M4A1_BUIS_GL",{{"CUP_30Rnd_556x45_Stanag",6},{"CUP_1Rnd_HE_M203",8}}}, 0.5,
            {"CUP_arifle_AK74M_GL",{{"CUP_30Rnd_545x39_AK_M",6},{"CUP_1Rnd_HE_GP25_M",8}}}, 0.5
        };
    };
    class cfp_o_is_rifleman: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Rifleman";
        icon = "iconMan";
        randomGearProbability = 50;
        randomWeaponProbability = 100;
        linkedItems[] = {"V_HarnessO_gry","ItemRadio"};
        respawnLinkedItems[] = {"V_HarnessO_gry","ItemRadio"};
        weapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKM","Binocular","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
    };
    class cfp_o_is_militaman: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Militaman";
        icon = "iconMan";
        randomGearProbability = 80;
        randomWeaponProbability = 30;
        uniformClass = "U_I_C_Soldier_Para_5_F";
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_srifle_LeeEnfield","Binocular","Throw","Put"};
        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_HandGrenade_RGD5"};
        uniformList[] = {
            "U_I_C_Soldier_Para_5_F",0.33,
            "U_I_C_Soldier_Bandit_3_F",0.33,
            "U_BG_Guerilla2_1",0.33
        };
        vestList[] = {
            "V_BandollierB_khk", 0.5,
            "V_BandollierB_cbr", 0.5,
            "V_BandollierB_rgr", 0.5,
            "V_BandollierB_blk", 0.5,
            "V_BandollierB_oli", 0.5,
            "V_TacChestrig_grn_F", 0.5,
            "V_TacChestrig_cbr_F", 0.5,
            "V_TacChestrig_oli_F", 0.5
        };

        rifleList[] = {
            {"CUP_srifle_LeeEnfield_rail",{"CUP_10x_303_M",10}}, 0.5,
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.5
        };
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) call  CFP_main_fnc_randomizeUnit; [_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];";
            };
        };
    };
    class cfp_o_is_irregular: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Irregular";
        icon = "iconMan";
        randomGearProbability = 80;
        randomWeaponProbability = 35;
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        uniformClass = "U_I_C_Soldier_Para_5_F";
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_smg_MP5A5","Throw","Put"};
        respawnweapons[] = {"CUP_smg_MP5A5","Throw","Put"};
        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_HandGrenade_RGD5"};
        uniformList[] = {
            "U_I_C_Soldier_Para_5_F",0.33,
            "U_I_C_Soldier_Bandit_3_F",0.33,
            "U_BG_Guerilla2_1",0.33
        };
        vestList[] = {
            "V_BandollierB_khk", 0.5,
            "V_BandollierB_cbr", 0.5,
            "V_BandollierB_rgr", 0.5,
            "V_BandollierB_blk", 0.5,
            "V_BandollierB_oli", 0.5,
            "V_TacChestrig_grn_F", 0.5,
            "V_TacChestrig_cbr_F", 0.5,
            "V_TacChestrig_oli_F", 0.5
        };
        rifleList[] = {
            {"CUP_srifle_LeeEnfield_rail",{"CUP_10x_303_M",10}}, 0.5,
            {"SMG_05_F",{"30Rnd_9x21_Mag_SMG_02",6}}, 0.5
        };
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) call  CFP_main_fnc_randomizeUnit; [_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];";
            };
        };
    };
    class cfp_o_is_autorifleman: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Autorifleman";
        icon = "iconManMG";
        randomGearProbability = 60;
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVest_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_blk","ItemRadio"};
        weapons[] = {"CUP_lmg_m249_pip1","Throw","Put"};
        respawnweapons[] = {"CUP_lmg_m249_pip1","Throw","Put"};
        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        Respawnmagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        backpackList[] = {
            "b_assaultpack_blk", 0.5,
            "b_assaultpack_cbr", 0.5,
            "b_assaultpack_dgtl", 0.5,
            "b_assaultpack_khk", 0.5,
            "B_OutdoorPack_blk", 0.5,
            "B_OutdoorPack_tan", 0.5,
            "B_HuntingBackpack", 0.5,
            "B_Kitbag_cbr", 0.5
        };
        rifleList[] = {
            {"CUP_lmg_m249_para",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3}}, 0.8,
            {"CUP_lmg_m249_pip4",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",5}}, 0.2
        };
    };
    class cfp_o_is_machinegunner: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Machinegunner";
        icon = "iconManMG";
        randomGearProbability = 60;
        randomWeaponProbability = 50;
        linkedItems[] = {"V_TacVest_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_blk","ItemRadio"};
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        backpackList[] = {
            "b_assaultpack_blk", 0.5,
            "b_assaultpack_cbr", 0.5,
            "b_assaultpack_khk", 0.5,
            "B_OutdoorPack_blk", 0.5,
            "B_OutdoorPack_tan", 0.5,
            "B_HuntingBackpack", 0.5,
            "B_Kitbag_cbr", 0.5
        };
        rifleList[] = {
            {"CUP_lmg_Pecheneg",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3}}, 0.6,
            {"CUP_lmg_M240",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",4}}, 0.3,
            {"CUP_arifle_RPK74",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3}}, 0.1
        };
    };
    class cfp_o_is_sniper: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Sniper";
        icon = "iconManRecon";
        camouflage = 0.6;
        randomWeaponProbability = 25;
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
        Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
        backpackList[] = {
            "", 0.5,
            "B_Kitbag_rgr", 0.5
        };
        vestList[] = {
            "V_BandollierB_khk", 0.5,
            "V_BandollierB_cbr", 0.5,
            "V_BandollierB_rgr", 0.5,
            "V_BandollierB_blk", 0.5,
            "V_BandollierB_oli", 0.5
        };
        rifleList[] = {
            {"CUP_srifle_SVD_des",{"CUP_10Rnd_762x54_SVD_M",6},"CUP_optic_PSO_1"}, 0.6,
            {"CUP_srifle_LeeEnfield_rail",{"CUP_10x_303_M",10},"CUP_optic_SB_11_4x20_PM"}, 0.3,
            {"CUP_srifle_M107_Base",{"CUP_10Rnd_127x99_M107",7},"CUP_optic_SB_3_12x50_PMII"}, 0.1
        };
    };
    class cfp_o_is_at: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Anti-Tank";
        icon = "iconManAT";
        backpack = "CUP_B_RPGPack_Khaki";
        randomWeaponProbability = 100;
        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        rifleList[] = {
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.6,
            {"CUP_arifle_AKM",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_M16A4_Base",{"CUP_30Rnd_556x45_Stanag",6}}, 0.1
        };
        launcherList[] = {
            {"CUP_launch_RPG7V",{"CUP_PG7VL_M",1}}, 0.6,
            {"CUP_launch_RPG18",{"CUP_RPG18_M",1}}, 0.1,
            {"CUP_launch_M136",{"CUP_M136_M",6}}, 0.1,
            {"CUP_launch_RPG7V",{"CUP_OG7_M",4}}, 0.2
        };
    };
    class cfp_o_is_medic: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Medic";
        icon = "iconManMedic";
        attendant = 1;
        backpack = "B_AssaultPack_rgr_Medic";
        randomGearProbability = 60;
        linkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        rifleList[] = {
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.6,
            {"CUP_arifle_AKM",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_M4A1",{"CUP_30Rnd_556x45_Stanag",6}}, 0.1
        };
    };
    class cfp_o_is_sapper: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Sapper";
        icon = "iconManExplosive";
        backpack = "B_AssaultPack_khk";
        randomGearProbability = 60;
        randomWeaponProbability = 100;
        linkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        respawnLinkedItems[] = {"V_Chestrig_blk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        backpackList[] = {
            "b_assaultpack_blk", 0.5,
            "b_assaultpack_cbr", 0.5,
            "b_assaultpack_khk", 0.5,
            "B_OutdoorPack_blk", 0.5,
            "B_OutdoorPack_tan", 0.5,
            "B_HuntingBackpack", 0.5,
            "B_Kitbag_cbr", 0.5
        };
        explosiveList[] = {
            {{"APERSMine_Range_Mag",1},{"IEDLandSmall_Remote_Mag",1}}, 0.3,
            {{"DemoCharge_Remote_Mag",1},{"IEDUrbanSmall_Remote_Mag",1}}, 0.3,
            {{"APERSTripMine_Wire_Mag",1},{"IEDLandSmall_Remote_Mag",1}}, 0.3
        };
    };
    class cfp_o_is_crewman: cfp_o_is_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Crewman";
        icon = "iconManEngineer";
        randomGearProbability = 50;
        randomWeaponProbability = 30;
        linkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemRadio"};
        weapons[] = {"CUP_arifle_AKM","Throw","Put"};
        respawnweapons[] = {"CUP_arifle_AKM","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        rifleList[] = {
            {"CUP_arifle_AKS",{"CUP_30Rnd_545x39_AK_M",6}}, 0.6,
            {"CUP_arifle_AKM",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"SMG_05_F",{"30Rnd_9x21_Mag_SMG_02",6}}, 0.1
        };
    };
    class cfp_o_is_rifleman_dshkm: cfp_o_is_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Gunner [DSHKM]";
        icon = "iconManAT";
        backpack = "CUP_B_DShkM_TripodHigh_Bag";
    };
    class cfp_o_is_rifleman_kord: cfp_o_is_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Gunner [KORD]";
        icon = "iconManAT";
        backpack = "CUP_B_Kord_Tripod_Bag";
    };
    class cfp_o_is_rifleman_podnos: cfp_o_is_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Gunner [Podnos]";
        icon = "iconManAT";
        backpack = "CUP_B_Podnos_Bipod_Bag";
    };
    class cfp_o_is_rifleman_ags30: cfp_o_is_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Gunner [AGS30]";
        icon = "iconManAT";
        backpack = "CUP_B_AGS30_Tripod_Bag";
    };
    class cfp_o_is_rifleman_metis: cfp_o_is_rifleman
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Gunner [METIS]";
        icon = "iconManAT";
        backpack = "CUP_B_Metis_Tripod_Bag";
    };
    class cfp_o_is_rifleman_spg9: cfp_o_is_rifleman
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
        faction = "CFP_O_IS";
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
        faction = "CFP_O_IS";
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
        faction = "CFP_O_IS";
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
    class cfp_o_is_offroad : Offroad_01_base_F_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Offroad";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad.jpg";
    };

    class cfp_o_is_offroad_OCimport_01 : cfp_o_is_offroad { scope = 0; class Eventhandlers; };
    class cfp_o_is_offroad_flag : cfp_o_is_offroad_OCimport_01
    {
        displayName = "IS Offroad (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_flag.jpg";
    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_o_is_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Offroad MG";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_MG.jpg";
    };

    class cfp_o_is_offroad_M2_OCimport_01 : cfp_o_is_offroad_M2 { scope = 0; class Eventhandlers; };
    class cfp_o_is_offroad_M2_flag : cfp_o_is_offroad_M2_OCimport_01
    {
        displayName = "IS Offroad MG (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Offroad_MG_flag.jpg";
    };
    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_pickup_PK : CUP_I_Datsun_PK_TK_Random_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Pickup PK";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
    };

    class cfp_o_is_pickup_PK_OCimport_01 : cfp_o_is_pickup_PK { scope = 0; class Eventhandlers; };
    class cfp_o_is_pickup_PK_flag : cfp_o_is_pickup_PK_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Pickup PK (Flag)";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Datsun_PK.jpg";
    };

    class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_LR_M2 : CUP_O_LR_MG_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS L.R. M2";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR_MG.jpg";
    };
    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_LR_SPG9 : CUP_O_LR_SPG9_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS L.R. SPG9";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR_SPG.jpg";
    };
    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_LR_Unarmed : CUP_O_LR_Transport_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS L.R.";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_LR.jpg";
    };
    class CUP_O_UAZ_MG_RU;
    class CUP_O_UAZ_MG_RU_OCimport_01 : CUP_O_UAZ_MG_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_MG : CUP_O_UAZ_MG_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ MG";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_DShKM.jpg";
    };
    class CUP_O_UAZ_AGS30_RU;
    class CUP_O_UAZ_AGS30_RU_OCimport_01 : CUP_O_UAZ_AGS30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_AGS30 : CUP_O_UAZ_AGS30_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ AGS30";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_AGS.jpg";
    };
    class CUP_O_UAZ_SPG9_RU;
    class CUP_O_UAZ_SPG9_RU_OCimport_01 : CUP_O_UAZ_SPG9_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ SPG9";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_SPG.jpg";
    };
    class CUP_O_UAZ_METIS_RU;
    class CUP_O_UAZ_METIS_RU_OCimport_01 : CUP_O_UAZ_METIS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_METIS : CUP_O_UAZ_METIS_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ METIS";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ_Metis.jpg";
    };
    class CUP_O_UAZ_Unarmed_RU;
    class CUP_O_UAZ_Unarmed_RU_OCimport_01 : CUP_O_UAZ_Unarmed_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_UAZ.jpg";
    };
    class CUP_O_UAZ_Open_RU;
    class CUP_O_UAZ_Open_RU_OCimport_01 : CUP_O_UAZ_Open_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_UAZ_Open : CUP_O_UAZ_Open_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS UAZ Open";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 : CUP_B_HMMWV_DSHKM_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS HMMWV DShKM";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_HMMWV_AGS_GPK_ACR;
    class CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01 : CUP_B_HMMWV_AGS_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_hmmwv_ags : CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS HMMWV AGS";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_Ural : CUP_O_Ural_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Ural";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Ural.jpg";
    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Ural ZU23";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_Ural_ZU23.jpg";
    };
    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BTR40_MG : CUP_O_BTR40_MG_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BTR40 MG";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BTR40.jpg";
    };

    class cfp_o_is_BTR40_MG_flag : cfp_o_is_BTR40_MG
    {
        displayName = "IS BTR40 MG (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON : ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BTR40_flag.jpg";
    };

    class CUP_O_M113_TKA;
    class CUP_O_M113_TKA_OCimport_01 : CUP_O_M113_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M113 : CUP_O_M113_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS M113";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_M113_2.jpg";
    };


    class cfp_o_is_M113_flag : cfp_o_is_M113
    {
        displayName = "IS M113 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON : ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_M113_2_flag.jpg";
    };

    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BMP1 : CUP_O_BMP1_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BMP-1";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1.jpg";
    };

    class cfp_o_is_BMP1_OCimport_01 : cfp_o_is_BMP1 { scope = 0; class Eventhandlers; };
    class cfp_o_is_BMP1_flag : cfp_o_is_BMP1_OCimport_01
    {
        displayName = "IS BMP-1 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1_flag.jpg";
    };
    class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BMP1P : CUP_O_BMP1P_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BMP-1P";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1P.jpg";
    };

    class cfp_o_is_BMP1P_OCimport_01 : cfp_o_is_BMP1P { scope = 0; class Eventhandlers; };
    class cfp_o_is_BMP1P_flag : cfp_o_is_BMP1P_OCimport_01
    {
        displayName = "IS BMP-1P (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP1P_flag.jpg";
    };
    class CUP_B_BMP_HQ_CZ_Des;
    class CUP_B_BMP_HQ_CZ_Des_OCimport_01 : CUP_B_BMP_HQ_CZ_Des { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BMP2_PKM : CUP_B_BMP_HQ_CZ_Des_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BMP-2 PKM";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_PKM.jpg";
    };

    class cfp_o_is_BMP2_PKM_OCimport_01 : cfp_o_is_BMP2_PKM { scope = 0; class Eventhandlers; };
    class cfp_o_is_BMP2_PKM_flag : cfp_o_is_BMP2_PKM_OCimport_01
    {
        displayName = "IS BMP-2 PKM (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_PKM_flag.jpg";
    };
    class CUP_B_BMP2_CZ_DES;
    class CUP_B_BMP2_CZ_DES_OCimport_01 : CUP_B_BMP2_CZ_DES { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BMP2 : CUP_B_BMP2_CZ_DES_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BMP-2";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2.jpg";
    };
    class CUP_O_BMP2_ZU_TKA;
    class CUP_O_BMP2_ZU_TKA_OCimport_01 : CUP_O_BMP2_ZU_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_BMP2_ZU : CUP_O_BMP2_ZU_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS BMP-2 ZSU";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_BMP2_ZSU.jpg";
    };
    class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_T34 : CUP_O_T34_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS T34";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_ARMORED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T34.jpg";
    };

    class cfp_o_is_T34_OCimport_01 : cfp_o_is_T34 { scope = 0; class Eventhandlers; };
    class cfp_o_is_T34_flag : cfp_o_is_T34_OCimport_01
    {
        displayName = "IS T34 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T34_flag.jpg";
    };
    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_T55 : CUP_O_T55_CSAT_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS T55";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_ARMORED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T55.jpg";
    };

    class cfp_o_is_T55_OCimport_01 : cfp_o_is_T55 { scope = 0; class Eventhandlers; };
    class cfp_o_is_T55_flag : cfp_o_is_T55_OCimport_01
    {
        displayName = "IS T55 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T55_flag.jpg";
    };
    class CUP_O_T72_TKA;
    class CUP_O_T72_TKA_OCimport_01 : CUP_O_T72_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_T72 : CUP_O_T72_TKA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS T72";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_ARMORED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_T72_tan.jpg";
    };

    class cfp_o_is_T72_OCimport_01 : cfp_o_is_T72 { scope = 0; class Eventhandlers; };
    class cfp_o_is_T72_flag : cfp_o_is_T72_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS T72 (Flag)";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_ARMORED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\onkilled.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T72_flag.jpg";
    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_ZSU : CUP_O_ZSU23_SLA_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS ZSU";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_ARMORED";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_is\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_ZSU.jpg";
    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_ZU23 : CUP_O_ZU23_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS ZU23";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS DSHKM";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_o_is_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS DSHkM Mini TriPod";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_KORD : CUP_O_KORD_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS KORD";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_KORD_high : CUP_O_KORD_high_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS KORD High";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_AGS : CUP_O_AGS_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS AGS";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M2Static : CUP_B_M2StaticMG_US_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS M2";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_M2StaticMG_MiniTripod_US;
    class CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M2Static_MiniTripod : CUP_B_M2StaticMG_MiniTripod_US_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS M2 Mini Tripod";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_Metis : CUP_O_Metis_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS Metis";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_o_is_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS SPG9";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_TOW_TriPod_USMC;
    class CUP_B_TOW_TriPod_USMC_OCimport_01 : CUP_B_TOW_TriPod_USMC { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_o_is_TOW : CUP_B_TOW_TriPod_USMC_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS TOW";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS 2b14 82mm";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_M252_US;
    class CUP_B_M252_US_OCimport_01 : CUP_B_M252_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M252 : CUP_B_M252_US_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS M252";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_D30_RU;
    class CUP_O_D30_RU_OCimport_01 : CUP_O_D30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_D30 : CUP_O_D30_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS D30";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_O_D30_AT_RU;
    class CUP_O_D30_AT_RU_OCimport_01 : CUP_O_D30_AT_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_D30_AT : CUP_O_D30_AT_RU_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS D30 AT";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };
    class CUP_B_M119_US;
    class CUP_B_M119_US_OCimport_01 : CUP_B_M119_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M119 : CUP_B_M119_US_OCimport_01
    {
        scope = 2;
        side = 0;
        displayName = "IS M119";
        faction = "CFP_O_IS";
        vehicleClass = "CFP_o_is_STATIC";
        camouflage = 4;
        crew = "cfp_o_is_crewman";
        typicalCargo[] = {"cfp_o_is_crewman"};
    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox

    class CFP_O_IS_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(IEDUrbanSmall_Remote_Mag,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_IS_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_M16A4_Base,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_lmg_m249_pip1,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_Sa58P,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_IS_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Launchers Box;
        class TransportMagazines {
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG18,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_IS_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_o_is_uniform,15);
            item_xx(U_I_C_Soldier_Para_5_F,15);
        };
    };
    class CFP_O_IS_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(H_Bandanna_mcamo,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_khk,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(V_HarnessO_gry,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(V_TacVest_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(V_TacVest_camo,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(H_Bandanna_cbr,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(IS_shemag_black,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
        };
    };
    class CFP_O_IS_SupplyBox : O_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(IEDUrbanSmall_Remote_Mag,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_M16A4_Base,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_lmg_m249_pip1,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_Sa58P,10);
            weap_xx(CUP_launch_RPG18,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(Binocular,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(H_Bandanna_mcamo,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_khk,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(V_HarnessO_gry,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(V_TacVest_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(V_TacVest_camo,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(H_Bandanna_cbr,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(IS_shemag_black,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CFP_U_o_is_uniform,10);
            item_xx(U_I_C_Soldier_Para_5_F,10);
        };
    };
};