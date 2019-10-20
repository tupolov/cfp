#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_I_T55_TK_GUE;
    class CUP_I_T55_TK_GUE_OCimport_01 : CUP_I_T55_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_T55_TK_GUE_OCimport_02 : CUP_I_T55_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_I_ZU23_TK_GUE;
    class CUP_I_ZU23_TK_GUE_OCimport_01 : CUP_I_ZU23_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_ZU23_TK_GUE_OCimport_02 : CUP_I_ZU23_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_SPG9_TK_GUE;
    class CUP_I_SPG9_TK_GUE_OCimport_01 : CUP_I_SPG9_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_SPG9_TK_GUE_OCimport_02 : CUP_I_SPG9_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_2b14_82mm_TK_GUE;
    class CUP_I_2b14_82mm_TK_GUE_OCimport_01 : CUP_I_2b14_82mm_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_2b14_82mm_TK_GUE_OCimport_02 : CUP_I_2b14_82mm_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_DSHKM_TK_GUE;
    class CUP_I_DSHKM_TK_GUE_OCimport_01 : CUP_I_DSHKM_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_DSHKM_TK_GUE_OCimport_02 : CUP_I_DSHKM_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_DSHkM_MiniTriPod_TK_GUE;
    class CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_01 : CUP_I_DSHkM_MiniTriPod_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_UAZ_MG_SLA;
    class CUP_O_UAZ_MG_SLA_OCimport_01 : CUP_O_UAZ_MG_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_MG_SLA_OCimport_02 : CUP_O_UAZ_MG_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_SPG9_TKA_OCimport_02 : CUP_O_LR_SPG9_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_Transport_TKA_OCimport_02 : CUP_O_LR_Transport_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
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

    class CUP_I_Datsun_4seat_TK;
    class CUP_I_Datsun_4seat_TK_OCimport_01 : CUP_I_Datsun_4seat_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_TK_OCimport_02 : CUP_I_Datsun_4seat_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_TK_Random_OCimport_02 : CUP_I_Datsun_PK_TK_Random_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Van_01_transport_F;
    class C_Van_01_transport_F_OCimport_01 : C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_01_transport_F_OCimport_02 : C_Van_01_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };

    class CUP_O_BM21_SLA;
    class CUP_O_BM21_SLA_OCimport_01 : CUP_O_BM21_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BM21_SLA_OCimport_02 : CUP_O_BM21_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_V3S_Open_TKG;
    class CUP_I_V3S_Open_TKG_OCimport_01 : CUP_I_V3S_Open_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Open_TKG_OCimport_02 : CUP_I_V3S_Open_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Repair_TKG;
    class CUP_I_V3S_Repair_TKG_OCimport_01 : CUP_I_V3S_Repair_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Repair_TKG_OCimport_02 : CUP_I_V3S_Repair_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Refuel_TKG;
    class CUP_I_V3S_Refuel_TKG_OCimport_01 : CUP_I_V3S_Refuel_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Refuel_TKG_OCimport_02 : CUP_I_V3S_Refuel_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Rearm_TKG;
    class CUP_I_V3S_Rearm_TKG_OCimport_01 : CUP_I_V3S_Rearm_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Rearm_TKG_OCimport_02 : CUP_I_V3S_Rearm_TKG_OCimport_01 { scope = 0; class EventHandlers; };


   class CFP_O_SSREBELS_Soldier_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        genericNames = "Afromen";
        side = 0;
        faction = "CFP_O_SSREBELS";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_WorkUniform_DDPM";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK47","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_DDPM",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_U_BattleDressUniform_M81", 0.2,
          "CFP_U_BattleDressUniform_DDPM", 0.4,
          "CFP_U_BattleDressUniform_tigerstripe2", 0.2,
          "CFP_U_BattleDressUniform_BrownDigital", 0.2,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WorkUniform_Green", 0.2,
          "CFP_U_BattleDressUniform_tigerstripe", 0.2,
          "SP_0000_Standard_BattleDressUniform_Green", 0.4,
          "CFP_BDU_M81", 0.2,
          "CUP_U_B_US_BDU_OD", 0.4,
          "CFP_U_BattleDressUniform_woodlanddark", 0.2,
          "CFP_U_BattleDressUniform_M81_Sudan", 0.4,
          "CFP_U_WorkUniform_DDPM", 0.4,
          "CFP_U_WorkUniform_M81_Sudan", 0.4,
          "CFP_U_WorkUniform_DDPM", 0.2,
          "CFP_GUER_ChocChippants", 0.2,
          "CFP_GuER_Khk_Wdl", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.6,
            "SP_Beret2_Red", 0.2,
            "SP_BoonieHat_M81", 0.2,
            "SP_BoonieHat_Green", 0.2,
            "H_Booniehat_khk", 0.2,
            "H_Booniehat_oli", 0.2,
            "SP_BaseballCap_Green", 0.2,
            "SP_BaseballCap_Black", 0.2,
            "SP_BaseballCap_Tan", 0.2,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Green", 0.2,
            "CFP_PatrolCap_M81", 0.2,
            "SP_PatrolCap_Green", 0.2,
            "CFP_PatrolCap_DDPM", 0.2,
            "CFP_PatrolCap_M81Sudan", 0.2,
            "SP_PatrolCap_Black", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "G_Aviator", 0.4,
            "CFP_Oakleys_Clr", 0.3,
            "CFP_Oakleys_Drk", 0.4,
            "CFP_Oakleys_Embr", 0.3,
            "CFP_Neck_Wrap2", 0.1,
            "CFP_Neck_Wrap3", 0.1,
            "CFP_Neck_Wrap4", 0.1,
            "CFP_Neck_Plain2", 0.1,
            "CFP_Neck_Plain3", 0.1,
            "CFP_Neck_Plain4", 0.1,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Shemagh_Half_Red", 0.1,
            "CFP_Shemagh_Half_White", 0.1,
            "CFP_Shemagh_Half_Tan", 0.1,
            "CFP_Shemagh_Half_Black", 0.1,
            "CFP_Shemagh_Face_Atacsau", 0.1,
            "CFP_Shemagh_Neck_Gold", 0.1,
            "CFP_Shemagh_Neck_Creme", 0.1,
            "CFP_Shemagh_Neck_Red", 0.1,
            "CFP_Shemagh_Neck_White", 0.1,
            "CFP_Shemagh_Neck", 0.1
        };

        //Vests
        vestList[] = {
            "CFP_AK_VEST_M81", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Tactical1_SudanTiger", 0.3,
            "CFP_Alice_Vest2_Tan", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SOUTH_SUDAN";

    };

    class CFP_O_SSREBELS_Soldier_02 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_02.JPG;

        displayName = "Rifleman";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_Tigerpants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"CUP_HandGrenade_RGD5",2,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_03 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_03.JPG;

        displayName = "Rifleman AT";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_GUER_ERDLpants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_04 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_04.JPG;

        displayName = "Machinegunner";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_BattleDressUniform_M81_Sudan",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_AssaultPack_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_05 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_05.JPG;

        displayName = "Marksman";
        side = 0;
        faction = "CFP_O_SSREBELS";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_DDPM";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_BattleDressUniform_DDPM",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_06 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_06.JPG;

        displayName = "Engineer";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_OD",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"ToolKit",1},{"MineDetector",1},{"APERSMine_Range_Mag",2,1},{"CUP_PipeBomb_M",3,1},{"DemoCharge_Remote_Mag",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_07 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_07.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_DDPM",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_08 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_08.JPG;

        displayName = "Grenadier";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_GL"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_GL","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81_Sudan",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"CUP_1Rnd_HE_GP25_M",4,1}}},{"B_AssaultPack_rgr",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_09 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_09.JPG;

        displayName = "Gunner (DShKM)";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_BrownDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_10 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_10.JPG;

        displayName = "Gunner (DShKM/Low)";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodLow_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_BattleDressUniform_Green",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_11 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_11.JPG;

        displayName = "Assistant (DShKM)";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_Uniform_SPLM_05",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_12 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_12.JPG;

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81Des",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_13 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_13.JPG;

        displayName = "Assistant (Mortar)";

        linkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81Des",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_ChocChip",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_14 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_14.JPG;

        displayName = "Gunner (SPG-9)";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_tigerstripe2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_15 : CFP_O_SSREBELS_Soldier_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_15.JPG;

        displayName = "Assistant (SPG-9)";

        linkedItems[] = {"CFP_UtilityJacket_PolygonDesert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_PolygonDesert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ChocChippants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_PolygonDesert",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_16 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_16.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman";
        genericNames = "Afromen";
        side = 0;
        faction = "CFP_O_SSREBELS";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_Bandit_Adidas";

        linkedItems[] = {"CFP_TakJacket_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_Bandit_Adidas",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_OD",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_Bandit_Adidas", 0.2,
          "CFP_Bandit_Africa", 0.2,
          "CFP_Bandit_Chang", 0.2,
          "CFP_Bandit_ChocChip", 0.2,
          "CFP_GUER_ChocChippants", 0.2,
          "CUP_I_B_PMC_Unit_1", 0.2,
          "CFP_Polo_Liverpool", 0.2,
          "CFP_Polo_RealMadrid", 0.2,
          "CFP_Polo_Sudan", 0.2,
          "CFP_GuER_Khk_Wdl", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.6,
            "SP_BaseballCap_Green", 0.2,
            "SP_BaseballCap_Black", 0.2,
            "SP_BaseballCap_Tan", 0.2,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Green", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "G_Aviator", 0.4,
            "CFP_Oakleys_Clr", 0.3,
            "CFP_Oakleys_Drk", 0.4,
            "CFP_Oakleys_Embr", 0.3,
            "CFP_Neck_Wrap2", 0.1,
            "CFP_Neck_Wrap3", 0.1,
            "CFP_Neck_Wrap4", 0.1,
            "CFP_Neck_Plain2", 0.1,
            "CFP_Neck_Plain3", 0.1,
            "CFP_Neck_Plain4", 0.1,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Shemagh_Half_Red", 0.1,
            "CFP_Shemagh_Half_White", 0.1,
            "CFP_Shemagh_Half_Tan", 0.1,
            "CFP_Shemagh_Half_Black", 0.1,
            "CFP_Shemagh_Face_Atacsau", 0.1,
            "CFP_Shemagh_Neck_Gold", 0.1,
            "CFP_Shemagh_Neck_Creme", 0.1,
            "CFP_Shemagh_Neck_Red", 0.1,
            "CFP_Shemagh_Neck_White", 0.1,
            "CFP_Shemagh_Neck", 0.1
        };

        //Vests
        vestList[] = {
            "CFP_AK_VEST_M81", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "CFP_TakJacket_DDPM", 0.1,
            "CFP_TakJacket_SudanWoodland", 0.1,
            "CFP_TakJacket_OD", 0.1,
            "CFP_UtilityJacket_Woodland", 0.1,
            "CFP_UtilityJacket_M81", 0.1,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CFP_Alice_Vest2", 0.4,
            "CFP_Alice_Vest2_Tan", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SOUTH_SUDAN";

    };

    class CFP_O_SSREBELS_Soldier_17 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_17.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        genericNames = "Afromen";
        side = 0;
        faction = "CFP_O_SSREBELS";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_BrownDigital";

        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_BrownDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_Beret2_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SOUTH_SUDAN";

    };

    class CFP_O_SSREBELS_Soldier_18 : CFP_O_SSREBELS_Soldier_16 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_18.JPG;

        displayName = "Militia AT";

        linkedItems[] = {"CFP_TakJacket_SudanWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_SudanWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CUP_I_B_PMC_Unit_1",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_SudanWoodland",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_19 : CFP_O_SSREBELS_Soldier_16 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_19.JPG;

        displayName = "Militia Machinegunner";

        linkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_Bandit_Africa",{{"FirstAidKit",1}}},{"CFP_TakJacket_DDPM",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_B_AlicePack_OD",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_Soldier_20 : CFP_O_SSREBELS_Soldier_16 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Soldier_20.JPG;

        displayName = "Militia Marksman";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14"};
        respawnWeapons[] = {"CUP_srifle_M14"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{},{"CFP_Bandit_Chang",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_DMR",1,20},{"20Rnd_762x51_Mag",2,20}}},{"CFP_UtilityJacket_M81",{{"CUP_20Rnd_762x51_DMR",2,20},{"20Rnd_762x51_Mag",4,20}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SSREBELS_T55_01 : CUP_I_T55_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_T55_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_ZU_23_01 : CUP_I_ZU23_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_ZU_23_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_SPG_9_01 : CUP_I_SPG9_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_SPG_9_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Mortar_01 : CUP_I_2b14_82mm_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Mortar_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_DShKM_01 : CUP_I_DSHKM_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_DShKM_Low_01 : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_DShKM_Low_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_UAZ_DShKM_01 : CUP_O_UAZ_MG_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_UAZ_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa"
        };

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Land_Rover_SPG_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Land_Rover_SPG_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (SPG-9)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Land_Rover_01 : CUP_O_LR_Transport_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Land_Rover_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"
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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Offroad_02 : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Offroad_02.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_12";

    };

    class CFP_O_SSREBELS_Offroad_White_Army_01 : CFP_O_SSREBELS_Offroad_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Offroad_White_Army_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_muddy.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Muddy";

    };

    class CFP_O_SSREBELS_Pickup_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Pickup_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Pickup_White_Army_01 : CFP_O_SSREBELS_Pickup_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Pickup_White_Army_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Pickup_PK_01 : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Pickup_PK_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Pickup_PK_White_Army_01 : CFP_O_SSREBELS_Pickup_PK_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Pickup_PK_White_Army_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK/Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_20"; };
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
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Truck_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };

    class CFP_O_SSREBELS_Truck_White_Army_01 : CFP_O_SSREBELS_Truck_01 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Truck_White_Army_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Brown";

    };

    class CFP_O_SSREBELS_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_BM_21_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Praga_V3S_01 : CUP_I_V3S_Open_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Praga_V3S_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Praga_V3S_Repair_01 : CUP_I_V3S_Repair_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Praga_V3S_Repair_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Repair)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Praga_V3S_Refuel_01 : CUP_I_V3S_Refuel_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Praga_V3S_Refuel_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Refuel)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Praga_V3S_Ammunition_01 : CUP_I_V3S_Rearm_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_ssrebels\data\preview\CFP_O_SSREBELS_Praga_V3S_Ammunition_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Ammunition)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        //ALiVE_orbatCreator_owned = 1;

    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class CUP_RUVehicleBox; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class CFP_O_SSREBELS_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Ammo Box";
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_SSREBELS_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Weapons Box";
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_SSREBELS_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Launchers Box";
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_SSREBELS_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Uniform Box";
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_U_C_Worker_02,15);
            item_xx(CUP_I_B_PMC_Unit_4,15);
        };
    };
    class CFP_O_SSREBELS_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Support Box";
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_TakJacket_SudanWoodland,10);
            item_xx(H_Cap_oli,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(H_Cap_grn,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_TakJacket_OD,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_AlicePack_Khaki,10);
            item_xx(CUP_V_OI_TKI_Jacket1_01,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_TakJacket_DDPM,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(H_Bandanna_surfer_blk,10);
            item_xx(SP_Beret_Green,10);
            item_xx(H_Bandanna_gry,10);
            item_xx(H_Cap_blk,10);
        };
    };
    class CFP_O_SSREBELS_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = "Sudan People's Liberation Movement In Opposition Supply Box";
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CFP_TakJacket_SudanWoodland,10);
            item_xx(H_Cap_oli,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(CUP_H_SLA_BeanieGreen,10);
            item_xx(H_Cap_grn,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_TakJacket_OD,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_AlicePack_Khaki,10);
            item_xx(CUP_V_OI_TKI_Jacket1_01,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CFP_TakJacket_DDPM,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(H_Bandanna_surfer_blk,10);
            item_xx(SP_Beret_Green,10);
            item_xx(H_Bandanna_gry,10);
            item_xx(H_Cap_blk,10);
            item_xx(CUP_U_C_Worker_02,10);
            item_xx(CUP_I_B_PMC_Unit_4,10);
        };
    };
};