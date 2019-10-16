#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_I_Ural_ZU23_TK_Gue;
    class CUP_I_Ural_ZU23_TK_Gue_OCimport_01 : CUP_I_Ural_ZU23_TK_Gue { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Ural_ZU23_TK_Gue_OCimport_02 : CUP_I_Ural_ZU23_TK_Gue_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M113_desert_USA;
    class CUP_B_M113_desert_USA_OCimport_01 : CUP_B_M113_desert_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M113_desert_USA_OCimport_02 : CUP_B_M113_desert_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class O_G_Offroad_01_F;
    class O_G_Offroad_01_F_OCimport_01 : O_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_F_OCimport_02 : O_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class O_G_Offroad_01_AT_F;
    class O_G_Offroad_01_AT_F_OCimport_01 : O_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_AT_F_OCimport_02 : O_G_Offroad_01_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class I_C_Offroad_02_LMG_F;
    class I_C_Offroad_02_LMG_F_OCimport_01 : I_C_Offroad_02_LMG_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Offroad_02_LMG_F_OCimport_02 : I_C_Offroad_02_LMG_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class LMG_Turret;
            class CargoTurret_01;
        };
    };

    class I_C_Offroad_02_AT_F;
    class I_C_Offroad_02_AT_F_OCimport_01 : I_C_Offroad_02_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Offroad_02_AT_F_OCimport_02 : I_C_Offroad_02_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
            class CargoTurret_01;
        };
    };

    class CUP_O_Ural_SLA;
    class CUP_O_Ural_SLA_OCimport_01 : CUP_O_Ural_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_SLA_OCimport_02 : CUP_O_Ural_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_ZU23_SLA;
    class CUP_O_ZU23_SLA_OCimport_01 : CUP_O_ZU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_ZU23_SLA_OCimport_02 : CUP_O_ZU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_DSHKM_SLA;
    class CUP_O_DSHKM_SLA_OCimport_01 : CUP_O_DSHKM_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_SLA_OCimport_02 : CUP_O_DSHKM_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_DSHKM_MiniTripod_SLA;
    class CUP_O_DSHKM_MiniTripod_SLA_OCimport_01 : CUP_O_DSHKM_MiniTripod_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_MiniTripod_SLA_OCimport_02 : CUP_O_DSHKM_MiniTripod_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M2StaticMG_US_OCimport_02 : CUP_B_M2StaticMG_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_SPG9_SLA;
    class CUP_O_SPG9_SLA_OCimport_01 : CUP_O_SPG9_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_SPG9_SLA_OCimport_02 : CUP_O_SPG9_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_2b14_82mm_SLA;
    class CUP_O_2b14_82mm_SLA_OCimport_01 : CUP_O_2b14_82mm_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_2b14_82mm_SLA_OCimport_02 : CUP_O_2b14_82mm_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class CFP_O_ABUSAYYAF_Rifleman_Light_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Rifleman_Light_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_BG_Guerilla2_3";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"U_BG_Guerilla2_3",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{},{"","","ItemRadio","","",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_2", 0.2,
          "CUP_I_B_PMC_Unit_20", 0.2,
          "U_I_C_Soldier_Bandit_4_F", 0.2,
          "U_I_C_Soldier_Bandit_2_F", 0.2,
          "U_I_C_Soldier_Bandit_1_F", 0.2,
          "U_I_C_Soldier_Bandit_3_F", 0.2,
          "U_I_C_Soldier_Para_1_F", 0.2,
          "CUP_U_I_GUE_Anorak_02", 0.2,
          "CUP_U_I_GUE_Anorak_03", 0.2,
          "CUP_U_I_GUE_Woodland1", 0.2,
          "U_BG_Guerilla2_2", 0.2,
          "U_BG_Guerilla2_3", 0.2,
          "U_BG_Guerrilla_6_1", 0.2,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_KhetPartug_Short_M81", 0.2,
          "CFP_U_KhetPartug_Long_M81", 0.2,
          "CFP_U_KhetPartug_Long_olive", 0.2,
          "CFP_U_KhetPartug_Short_olive", 0.2,
          "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Woodland", 0.2,
          "CFP_U_KhetPartug_Long_Woodland", 0.2,
          "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
          "CFP_U_KhetPartug_Long_Black", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_basijdigital", 0.2,
          "CFP_U_BattleDressUniform_DPMWoodland", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "IS_bandanna_black_logo2", 0.3,
            "IS_bandanna_black_logo1", 0.3,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.25,
            "SP_BeanieHat_Tan", 0.2,
            "CFP_PatrolCap_M81", 0.2,
            "SP_PatrolCap_Black", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3,
            "CFP_Shemagh_Half_Black", 0.3,
            "CFP_Shemagh_Face_Atacsau", 0.3,
            "CFP_Shemagh_Neck_Gold", 0.3,
            "CFP_Shemagh_Neck_Creme", 0.3,
            "CFP_Shemagh_Neck_Red", 0.3,
            "CFP_Shemagh_Neck_White", 0.3,
            "CFP_Shemagh_Neck", 0.3
        };

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.1,
            "CUP_V_OI_TKI_Jacket3_02", 0.1,
            "CUP_V_OI_TKI_Jacket3_01", 0.1,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_UtilityJacket_ChocChip", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this, 'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Rifleman_01 : CFP_O_ABUSAYYAF_Rifleman_Light_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Rifleman_01.JPG;

        displayName = "Rifleman";

        linkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ERDLpants",{{"FirstAidKit",1},{"SmokeShell",2,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Grenadier_01 : CFP_O_ABUSAYYAF_Rifleman_Light_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Grenadier_01.JPG;

        displayName = "Grenadier";

        linkedItems[] = {"CFP_Alice_Vest_Black","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_M16A2_GL"};
        respawnWeapons[] = {"CUP_arifle_M16A2_GL"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2_GL","","","",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HE_M203",1},""},{},{},{"CUP_I_B_PMC_Unit_20",{{"FirstAidKit",1},{"SmokeShell",2,1},{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CFP_Alice_Vest_Black",{{"CUP_1Rnd_HE_M203",8,1},{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_FlareWhite_M203",1,1},{"CUP_FlareRed_M203",1,1},{"1Rnd_Smoke_Grenade_shell",2,1},{"CUP_1Rnd_HEDP_M203",8,1}}},{},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Team_Leader_01 : CFP_O_ABUSAYYAF_Rifleman_Light_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Team_Leader_01.JPG;

        displayName = "Team Leader";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","CUP_hgun_Colt1911"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","CUP_hgun_Colt1911"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_I_GUE_Anorak_02",{{"FirstAidKit",1},{"SmokeShell",2,1},{"CUP_30Rnd_545x39_AK74_plum_M",2,30}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",2,1},{"CUP_7Rnd_45ACP_1911",2,7},{"SmokeShellRed",2,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ABUSAYYAF_Autorifleman_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Autorifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Bandit_4_F";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","ItemRadio"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","ItemRadio"};

        weapons[] = {"CUP_lmg_m249_para"};
        respawnWeapons[] = {"CUP_lmg_m249_para"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_para","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"U_I_C_Soldier_Bandit_4_F",{{"FirstAidKit",1},{"SmokeShell",1,1},{"Chemlight_red",1,1}}},{"CFP_UtilityJacket_EDRL",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1,200}}},{"B_AssaultPack_rgr",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},"","",{},{"","","ItemRadio","","",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_2", 0.2,
          "CUP_I_B_PMC_Unit_20", 0.2,
          "U_I_C_Soldier_Bandit_4_F", 0.2,
          "U_I_C_Soldier_Bandit_2_F", 0.2,
          "U_I_C_Soldier_Bandit_1_F", 0.2,
          "U_I_C_Soldier_Bandit_3_F", 0.2,
          "U_I_C_Soldier_Para_1_F", 0.2,
          "CUP_U_I_GUE_Anorak_02", 0.2,
          "CUP_U_I_GUE_Anorak_03", 0.2,
          "CUP_U_I_GUE_Woodland1", 0.2,
          "U_BG_Guerilla2_2", 0.2,
          "U_BG_Guerilla2_3", 0.2,
          "U_BG_Guerrilla_6_1", 0.2,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_KhetPartug_Short_M81", 0.2,
          "CFP_U_KhetPartug_Long_M81", 0.2,
          "CFP_U_KhetPartug_Long_olive", 0.2,
          "CFP_U_KhetPartug_Short_olive", 0.2,
          "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Woodland", 0.2,
          "CFP_U_KhetPartug_Long_Woodland", 0.2,
          "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
          "CFP_U_KhetPartug_Long_Black", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_basijdigital", 0.2,
          "CFP_U_BattleDressUniform_DPMWoodland", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "CFP_Shemagh_Full_Red", 0.3,
            "CFP_Shemagh_Full_Black", 0.3,
            "CFP_Shemagh_Full_Gold", 0.2,
            "CFP_Shemagh_Full_Tan", 0.2,
            "CFP_Shemagh_Full_Green", 0.2,
            "CFP_Shemagh_Full_Creme", 0.2,
            "CFP_Shemagh_Full_White", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.4,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "G_Aviator", 0.3
        };

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.1,
            "CUP_V_OI_TKI_Jacket3_02", 0.1,
            "CUP_V_OI_TKI_Jacket3_01", 0.1,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_UtilityJacket_ChocChip", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this, 'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Machinegunner_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Machinegunner_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Bandit_2_F";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemRadio"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemRadio"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CFP_AssaultPack_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"U_I_C_Soldier_Bandit_2_F",{{"FirstAidKit",1},{"SmokeShell",1,1},{"Chemlight_red",1,1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CFP_AssaultPack_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"","",{},{"","","ItemRadio","","",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_2", 0.2,
          "CUP_I_B_PMC_Unit_20", 0.2,
          "U_I_C_Soldier_Bandit_4_F", 0.2,
          "U_I_C_Soldier_Bandit_2_F", 0.2,
          "U_I_C_Soldier_Bandit_1_F", 0.2,
          "U_I_C_Soldier_Bandit_3_F", 0.2,
          "U_I_C_Soldier_Para_1_F", 0.2,
          "CUP_U_I_GUE_Anorak_02", 0.2,
          "CUP_U_I_GUE_Anorak_03", 0.2,
          "CUP_U_I_GUE_Woodland1", 0.2,
          "U_BG_Guerilla2_2", 0.2,
          "U_BG_Guerilla2_3", 0.2,
          "U_BG_Guerrilla_6_1", 0.2,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_KhetPartug_Short_M81", 0.2,
          "CFP_U_KhetPartug_Long_M81", 0.2,
          "CFP_U_KhetPartug_Long_olive", 0.2,
          "CFP_U_KhetPartug_Short_olive", 0.2,
          "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
          "CFP_U_KhetPartug_Short_Woodland", 0.2,
          "CFP_U_KhetPartug_Long_Woodland", 0.2,
          "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
          "CFP_U_KhetPartug_Long_Black", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_basijdigital", 0.2,
          "CFP_U_BattleDressUniform_DPMWoodland", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 1.0
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "IS_Balaclava_logo2",0.1,
            "SP_Balaclava_Skull2", 0.2,
            "IS_Balaclava", 0.2,
            "IS_Balaclava_logo1", 0.2,
            "SP_Balaclava_IDF", 0.3,
            "G_Balaclava_oli", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3
        };

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.1,
            "CUP_V_OI_TKI_Jacket3_02", 0.1,
            "CUP_V_OI_TKI_Jacket3_01", 0.1,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_UtilityJacket_ChocChip", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this, 'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Militia_01 : CFP_O_ABUSAYYAF_Autorifleman_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Militia_01.JPG;

        displayName = "Militia";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","ItemRadio"};

        weapons[] = {"CUP_srifle_LeeEnfield","Binocular"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield","Binocular"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","",{"CUP_10x_303_M",10},{},""},{},{},{"U_I_C_Soldier_Bandit_1_F",{{"FirstAidKit",1},{"CUP_10x_303_M",2,10}}},{"CFP_Alice_Vest2_Tan",{{"FirstAidKit",1},{"CUP_10x_303_M",5,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Sniper_01 : CFP_O_ABUSAYYAF_Machinegunner_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Sniper_01.JPG;

        displayName = "Sniper";

        linkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};

        weapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_SA61","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_SA61","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{"CUP_hgun_SA61","","","",{"CUP_10Rnd_B_765x17_Ball_M",10},{},""},{"CFP_U_KhetPartug_Short_M81",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CFP_Alice_Vest2",{{"CUP_10Rnd_762x54_SVD_M",5,10},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",2,1}}},{},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Spotter_01 : CFP_O_ABUSAYYAF_Autorifleman_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Spotter_01.JPG;

        displayName = "Spotter";

        linkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};

        weapons[] = {"CUP_srifle_M14","Binocular"};
        respawnWeapons[] = {"CUP_srifle_M14","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{},{"CUP_U_I_GUE_Woodland1",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"CFP_Alice_Vest2",{{"CUP_20Rnd_762x51_DMR",6,20},{"20Rnd_762x51_Mag",4,20}}},{},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Surgeon_01 : CFP_O_ABUSAYYAF_Machinegunner_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Surgeon_01.JPG;

        displayName = "Surgeon";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","ItemRadio"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_I_B_PMC_Unit_2",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_RPG_Gunner_01 : CFP_O_ABUSAYYAF_Rifleman_Light_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_RPG_Gunner_01.JPG;

        displayName = "RPG Gunner";

        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AKMS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKMS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"U_BG_Guerilla2_2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",2,1},{"CUP_OG7_M",1,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_IED_Specialist_01 : CFP_O_ABUSAYYAF_Machinegunner_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_IED_Specialist_01.JPG;

        displayName = "IED Specialist";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_U_I_GUE_Anorak_03",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"B_AssaultPack_khk",{{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",2,1},{"APERSMine_Range_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Scout_01 : CFP_O_ABUSAYYAF_Rifleman_Light_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Scout_01.JPG;

        displayName = "Scout";

        linkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemRadio"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_GUER_Tigerpants",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CFP_Alice_Vest2",{{"APERSMine_Range_Mag",1,1},{"CUP_30Rnd_556x45_Stanag",4,30}}},{},"","",{},{"","","ItemRadio","","",""}};

    };

    class CFP_O_ABUSAYYAF_Squad_Leader_01 : CFP_O_ABUSAYYAF_Autorifleman_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Squad_Leader_01.JPG;

        displayName = "Squad Leader";

        linkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M16A4_Base","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Base","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_WorkUniform_DPM",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"V_TacVest_camo",{{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_556x45_Stanag",4,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_ABUSAYYAF_Ural_ZU_23_01 : CUP_I_Ural_ZU23_TK_Gue_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Ural_ZU_23_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Ural ZU-23";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_Light_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_M113_01 : CUP_B_M113_desert_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_M113_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG M113";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_olive_drab_co.paa",
            "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Offroad_01 : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Offroad_50_Cal_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_50_Cal_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad (50 Cal)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Offroad_SPG_01 : O_G_Offroad_01_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_SPG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad (SPG)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_ABUSAYYAF_Grenadier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS2Dirty1";

    };

    class CFP_O_ABUSAYYAF_Jeep_SAW_01 : I_C_Offroad_02_LMG_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Jeep_SAW_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Jeep (SAW)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class LMG_Turret : LMG_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Jeep_SPG_01 : I_C_Offroad_02_AT_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Jeep_SPG_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Jeep (SPG)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Ural_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Ural";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\Ural\ural_is_2.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\WHL_TyreSize3.paa"
        };

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_ZU_23_01 : CUP_O_ZU23_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_ZU_23_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG ZU-23";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_DSHKM_01 : CUP_O_DSHKM_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_DSHKM_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG DSHKM";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_DSKHM_Low_01 : CUP_O_DSHKM_MiniTripod_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_DSKHM_Low_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG DSKHM (Low)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_M2_01 : CUP_B_M2StaticMG_US_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_M2_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG M2";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_SPG_9_01 : CUP_O_SPG9_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_SPG_9_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG SPG-9";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Mortar_01 : CUP_O_2b14_82mm_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Mortar_01.JPG;
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Mortar";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
    class CUP_RUBasicAmmunitionBox; //

    class CUP_RUBasicWeaponsBox; //

    class CUP_RUSpecialWeaponsBox; //

    class CUP_RULaunchersBox; //

    class CUP_RUVehicleBox; //

    class CFP_O_ABUSAYYAF_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Ammo Box;
        class TransportMagazines {
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_FlareRed_M203,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_100Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_OG7_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_ABUSAYYAF_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_10Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_M16A2_GL,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_lmg_m249_para,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_srifle_M14,10);
            weap_xx(CUP_arifle_M16A2,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_hgun_Makarov,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_ABUSAYYAF_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_ABUSAYYAF_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(U_BG_Guerilla2_3,15);
            item_xx(CFP_Uniform_SPLM_20,15);
            item_xx(CUP_I_B_PMC_Unit_20,15);
            item_xx(CUP_U_I_GUE_Anorak_02,15);
            item_xx(U_I_C_Soldier_Bandit_3_F,15);
            item_xx(U_I_C_Soldier_Bandit_2_F,15);
            item_xx(CFP_U_KhetPartug_Short_M81,15);
            item_xx(CUP_U_I_GUE_Woodland1,15);
            item_xx(U_I_C_Soldier_Para_1_F,15);
            item_xx(U_BG_Guerilla2_2,15);
            item_xx(CUP_U_I_GUE_Flecktarn2,15);
            item_xx(U_BG_Guerrilla_6_1,15);
        };
    };
    class CFP_O_ABUSAYYAF_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_H_SLA_BeanieGreen,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessO_brn,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(V_TacVestIR_blk,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(IS_bandanna_black_logo2,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(Binocular,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(CFP_Smersh_ArmyGreen,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(V_Chestrig_blk,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_ACHHelmet_Green1,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(CUP_V_RUS_Smersh_2,10);
            item_xx(SP_PASGTHelmet_Black1,10);
            item_xx(CUP_NVG_PVS7,10);
        };
    };
    class CFP_O_ABUSAYYAF_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Supply Box;
        class TransportMagazines {
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_FlareRed_M203,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_100Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_OG7_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_M16A2_GL,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_lmg_m249_para,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_srifle_M14,10);
            weap_xx(CUP_arifle_M16A2,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_H_SLA_BeanieGreen,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessO_brn,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(V_TacVestIR_blk,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(IS_bandanna_black_logo2,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(Binocular,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(CFP_Smersh_ArmyGreen,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(V_Chestrig_blk,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_ACHHelmet_Green1,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(CUP_V_RUS_Smersh_2,10);
            item_xx(SP_PASGTHelmet_Black1,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(U_BG_Guerilla2_3,10);
            item_xx(CFP_Uniform_SPLM_20,10);
            item_xx(CUP_I_B_PMC_Unit_20,10);
            item_xx(CUP_U_I_GUE_Anorak_02,10);
            item_xx(U_I_C_Soldier_Bandit_3_F,10);
            item_xx(U_I_C_Soldier_Bandit_2_F,10);
            item_xx(CFP_U_KhetPartug_Short_M81,10);
            item_xx(CUP_U_I_GUE_Woodland1,10);
            item_xx(U_I_C_Soldier_Para_1_F,10);
            item_xx(U_BG_Guerilla2_2,10);
            item_xx(CUP_U_I_GUE_Flecktarn2,10);
            item_xx(U_BG_Guerrilla_6_1,10);
        };
    };
};