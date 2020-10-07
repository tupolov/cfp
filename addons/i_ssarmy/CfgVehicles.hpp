#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_I_Datsun_PK;
    class CUP_I_Datsun_PK_OCimport_01 : CUP_I_Datsun_PK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_OCimport_02 : CUP_I_Datsun_PK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_ZU23_SLA;
    class CUP_O_Ural_ZU23_SLA_OCimport_01 : CUP_O_Ural_ZU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_ZU23_SLA_OCimport_02 : CUP_O_Ural_ZU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Datsun_4seat;
    class CUP_I_Datsun_4seat_OCimport_01 : CUP_I_Datsun_4seat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_OCimport_02 : CUP_I_Datsun_4seat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_V3S_Open_NAPA;
    class CUP_V3S_Open_NAPA_OCimport_01 : CUP_V3S_Open_NAPA { scope = 0; class EventHandlers; };
    class CUP_V3S_Open_NAPA_OCimport_02 : CUP_V3S_Open_NAPA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_2b14_82mm_TK_GUE;
    class CUP_I_2b14_82mm_TK_GUE_OCimport_01 : CUP_I_2b14_82mm_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_2b14_82mm_TK_GUE_OCimport_02 : CUP_I_2b14_82mm_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_T72_NAPA;
    class CUP_I_T72_NAPA_OCimport_01 : CUP_I_T72_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_T72_NAPA_OCimport_02 : CUP_I_T72_NAPA_OCimport_01 {
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

    class CUP_O_BM21_SLA;
    class CUP_O_BM21_SLA_OCimport_01 : CUP_O_BM21_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BM21_SLA_OCimport_02 : CUP_O_BM21_SLA_OCimport_01 {
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

    class O_G_Van_01_transport_F;
    class O_G_Van_01_transport_F_OCimport_01 : O_G_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Van_01_transport_F_OCimport_02 : O_G_Van_01_transport_F_OCimport_01 {
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

    class O_G_Van_02_transport_F;
    class O_G_Van_02_transport_F_OCimport_01 : O_G_Van_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Van_02_transport_F_OCimport_02 : O_G_Van_02_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
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

    class CUP_C_S1203_CIV;
    class CUP_C_S1203_CIV_OCimport_01 : CUP_C_S1203_CIV { scope = 0; class EventHandlers; };
    class CUP_C_S1203_CIV_OCimport_02 : CUP_C_S1203_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCImport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_Transport_TKA_OCImport_02 : CUP_O_LR_Transport_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
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

    class CUP_O_Ural_SLA;
    class CUP_O_Ural_SLA_OCimport_01 : CUP_O_Ural_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_SLA_OCimport_02 : CUP_O_Ural_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_S1203_Ambulance_CDF;
    class CUP_B_S1203_Ambulance_CDF_OCimport_01 : CUP_B_S1203_Ambulance_CDF { scope = 0; class EventHandlers; };
    class CUP_B_S1203_Ambulance_CDF_OCimport_02 : CUP_B_S1203_Ambulance_CDF_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_Mi17_UN;
    class CUP_I_Mi17_UN_OCimport_01 : CUP_I_Mi17_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Mi17_UN_OCimport_02 : CUP_I_Mi17_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };

    class CUP_I_Mi24_D_Dynamic_UN;
    class CUP_I_Mi24_D_Dynamic_UN_OCimport_01 : CUP_I_Mi24_D_Dynamic_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Mi24_D_Dynamic_UN_OCimport_02 : CUP_I_Mi24_D_Dynamic_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_I_SSArmy_Soldier_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_BDU_M81Sudan";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_BDU_OD_Sudan", 0.4,
          "CFP_BDU_M81Sudan", 0.6
        };

        //Helmets
        headgearList[] = {
            "", 0.5,
            "SP_Beret2_Red", 0.2,
            "SP_Beret2_Black", 0.2,
            "SP_BeanieHat_Black", 0.1,
            "SP_BeanieHat_Tan", 0.1,
            "SP_BeanieHat_Green", 0.1,
            "CFP_PatrolCap_M81Sudan", 0.2,
            "SP_PatrolCap_Green", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.4,
            "G_Aviator", 0.3,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.3,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.1,
            "CFP_Neck_Wrap4", 0.1,
            "CFP_Neck_Plain2", 0.1,
            "CFP_Neck_Plain3", 0.1,
            "CFP_Neck_Plain4", 0.1,
            "CFP_Scarfshades_tan", 0.1,
            "CFP_Scarfshades_grey", 0.1,
            "CFP_Scarfshades_white", 0.1,
            "CFP_Scarfshades_green", 0.1,
            "CFP_Shemagh_Neck_Gold", 0.1,
            "CFP_Shemagh_Neck_Creme", 0.1,
            "CFP_Shemagh_Neck_White", 0.1,
            "CFP_Shemagh_Neck", 0.3
        };

        //Vests
        vestList[] = {
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "CFP_Alice_Vest2", 0.4
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
               init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
           };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Soldier_02 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_02.JPG;

        displayName = "Machinegunner";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_TacticalPack_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_TacticalPack_oli",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_03 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_03.JPG;

        displayName = "Rifleman AT";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_04 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_04.JPG;

        displayName = "Marksman";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CFP_Alice_Vest2",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_05 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_05.JPG;

        displayName = "Rifleman AA";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_9K32Strela"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_9K32Strela"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_9K32Strela","","","",{"CUP_Strela_2_M",1},{},""},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"CUP_Strela_2_M",1,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_06 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_06.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_BDU_M81Sudan";

        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class CFP_I_SSArmy_Soldier_07 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_07.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_08 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_08.JPG;

        displayName = "Engineer";
        canDeactivateMines = 1;
        engineer = 1;

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_BDU_M81Sudan";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_AlicePack_Egineer",{{"ToolKit",1},{"MineDetector",1},{"APERSMine_Range_Mag",3,1},{"CUP_PipeBomb_M",3,1},{"DemoCharge_Remote_Mag",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_09 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_09.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_M81_Sudan";

        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Beret2_Red","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class CFP_I_SSArmy_Soldier_10 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_10.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_FieldUniform_police_sudan_SS";

        linkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_police_sudan_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Beret2_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class CFP_I_SSArmy_Soldier_11 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_11.JPG;

        displayName = "Rifleman";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_TYPE_56_2"};
        respawnWeapons[] = {"CUP_arifle_TYPE_56_2"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_TYPE_56_2","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_12 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_12.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_FieldUniform_police_sudan_SS";

        linkedItems[] = {"CFP_Alice_Vest2_Black","SP_PatrolCap_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Black","SP_PatrolCap_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_police_sudan_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Alice_Vest2_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_PatrolCap_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class CFP_I_SSArmy_Soldier_13 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_13.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commando Team Leader";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_tigerstripe2";

        linkedItems[] = {"CFP_AK_VEST_Olive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_tigerstripe2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;


        //Helmets
        headgearList[] = {
            "SP_Beret2_Red", 0.7,
            "SP_Beret2_Black", 0.3
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.4,
            "G_Aviator", 0.3,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.3,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.1,
            "CFP_Neck_Wrap4", 0.1,
            "CFP_Neck_Plain2", 0.1,
            "CFP_Neck_Plain3", 0.1,
            "CFP_Neck_Plain4", 0.1,
            "CFP_Scarfshades_tan", 0.1,
            "CFP_Scarfshades_grey", 0.1,
            "CFP_Scarfshades_white", 0.1,
            "CFP_Scarfshades_green", 0.1,
            "CFP_Shemagh_Neck_Gold", 0.1,
            "CFP_Shemagh_Neck_Creme", 0.1,
            "CFP_Shemagh_Neck_White", 0.1,
            "CFP_Shemagh_Neck", 0.3
        };

        //Vests
        vestList[] = {
            "CFP_AK_VEST_EDRL", 0.3,
            "CFP_Tactical1_SudanTiger", 0.6,
            "CFP_AK_VEST_Olive", 0.3,
            "CFP_AK_VEST_LOlive", 0.3,
            "CFP_AK_VEST_Black", 0.3,
            "CFP_AK_VEST_Tan", 0.3
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

    class CFP_I_SSArmy_Soldier_14 : CFP_I_SSArmy_Soldier_13 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_14.JPG;

        displayName = "Commando";

        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_tigerstripe2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_15 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_15.JPG;

        displayName = "Gunner (DShKM)";

        linkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_16 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_16.JPG;

        displayName = "Gunner (DShKM Low)";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodLow_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_17 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_17.JPG;

        displayName = "Assistant Gunner (DShKM)";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_18 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_18.JPG;

        displayName = "Gunner (SPG-9)";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_19 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_19.JPG;

        displayName = "Assistant Gunner (SPG-9)";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_20 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_20.JPG;

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_21 : CFP_I_SSArmy_Soldier_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_21.JPG;

        displayName = "Assistant Gunner (Mortar)";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_OD_Sudan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_22 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_22.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        genericNames = "Afromen";
        side = 2;
        faction = "CFP_I_SSArmy";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "SP_0000_Standard_FieldUniform_Green";

        linkedItems[] = {"CUP_V_CZ_vest20","CUP_H_TK_PilotHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_CZ_vest20","CUP_H_TK_PilotHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Green",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74_plum_M",3,30},{"SmokeShellRed",2,1},{"Chemlight_red",2,1}}},{"CUP_V_CZ_vest20",{}},{},"CUP_H_TK_PilotHelmet","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


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

    class CFP_I_SSArmy_Soldier_23 : CFP_I_SSArmy_Soldier_13 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_23.JPG;

        displayName = "Commando Machinegunner";

        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_TacticalPack_oli";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_FieldUniform_tigerstripe2",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_TacticalPack_oli",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SSArmy_Soldier_24 : CFP_I_SSArmy_Soldier_13 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Soldier_24.JPG;

        displayName = "Commando AT";

        linkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_FieldUniform_tigerstripe2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGO",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_DSHKM_base;
    class CFP_I_SSArmy_DShKM_01 : CUP_DSHKM_base {

        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

    };

     class CUP_Hilux_unarmed_Base;
    class CFP_I_SSArmy_Hilux_01 :CUP_Hilux_unarmed_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_Hilux_DSHKM_Base;
    class CFP_I_SSArmy_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_Hilux_SPG9_Base;
    class CFP_I_SSArmy_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_igla_Base;
    class CFP_I_SSArmy_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_metis_Base;
    class CFP_I_SSArmy_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_podnos_Base;
    class CFP_I_SSArmy_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_MLRS_Base;
    class CFP_I_SSArmy_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_zu23_Base;
    class CFP_I_SSArmy_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_AGS30_Base;
    class CFP_I_SSArmy_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        textureList[]=
        {
            "Red",1,
            "Guer3",1,
            "Guer6",1,
            "Guer7",1,
            "Guer8",1,
            "White",1,
            "White2",1,
            "Creme",1,
            "Red2",1,
            "Tan",1,
            "Blue",1
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CFP_I_SSArmy_Pickup_PK_01 : CUP_I_Datsun_PK_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Pickup_PK_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_03"; };
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

    class CUP_SPG9_base;
    class CFP_I_SSArmy_SPG_9_01 : CUP_SPG9_base {

        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

    };

    class CUP_ZU23_base;
    class CFP_I_SSArmy_ZU_23_01 : CUP_ZU23_base {

        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

    };

    class CUP_DSHKM_MiniTripod_base;
    class CFP_I_SSArmy_DShKM_Low_01 : CUP_DSHKM_MiniTripod_base {

        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

    };

    class CFP_I_SSArmy_Ural_ZU_23_01 : CUP_O_Ural_ZU23_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_ZU_23_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (ZU-23)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
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

    class CFP_I_SSArmy_Pickup_01 : CUP_I_Datsun_4seat_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Pickup_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Praga_V3S_01 : CUP_V3S_Open_NAPA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Praga_V3S_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CUP_2b14_82mm_Base;
    class CFP_I_SSArmy_Mortar_01 : CUP_2b14_82mm_Base {

        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

    };

    class CFP_I_SSArmy_T72_01 : CUP_I_T72_NAPA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_T72_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_06";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_06"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_1_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_2_co.paa'];_unit setObjectTextureGlobal [2,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_3_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "NAPA";

    };

    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class CFP_I_SSArmy_T55_01 : CUP_O_T55_CSAT_OCimport_01 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_T55_01.JPG;
        scope = 2;
        side = 2;
        displayName = "T-55";
        faction = "CFP_I_SSArmy";
        vehicleClass = "CFP_I_SSArmy_ARMORED";
        camouflage = 4;
        crew = "CFP_I_SSArmy_Soldier_06";
        typicalCargo[] = {"CFP_I_SSArmy_Soldier_06","CFP_I_SSArmy_Soldier_06","CFP_I_SSArmy_Soldier_06"};
        hiddenSelectionsTextures[] = {"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_TKG_co.paa","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_TKG_co.paa"};

    };

    class CFP_I_SSArmy_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_BM_21_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
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

    class CFP_I_SSArmy_Offroad_01 : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Offroad_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_10";

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

    class CFP_I_SSArmy_Truck_01 : O_G_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Truck_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Van_Transport_01 : O_G_Van_02_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Van_Transport_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Transport)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_10";

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
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_UAZ_DShKM_01 : CUP_O_UAZ_MG_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_UAZ_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
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

    class CFP_I_SSArmy_Skoda_1203_01 : CUP_C_S1203_CIV_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Skoda_1203_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda 1203";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Land_Rover_01 : CUP_O_LR_Transport_TKA_OCImport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Land_Rover_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
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
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Land_Rover_SPG_9_01 : CUP_O_LR_SPG9_TKA_OCImport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Land_Rover_SPG_9_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover SPG-9";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";
        hiddenSelectionsTextures[] = {
            "\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa"
        };

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
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

    class CFP_I_SSArmy_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_Repair_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Repair)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Ural_Ammunition_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_Ammunition_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Ammunition)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_Refuel_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Refuel)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ural_Open_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Open)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_Ambulance_01 : CUP_B_S1203_Ambulance_CDF_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Ambulance_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ambulance";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_07";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Mi_17_01 : CUP_I_Mi17_UN_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Mi_17_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-17";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_22";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Mi8\mi17_ssudan.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa"};

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
            class BackTurret : BackTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_I_SSArmy_Soldier_22"; };
        };
    };

    class CFP_I_SSArmy_Mi_24D_01 : CUP_I_Mi24_D_Dynamic_UN_OCimport_02 {
        editorPreview = \x\cfp\addons\i_ssarmy\data\preview\CFP_I_SSArmy_Mi_24D_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24D";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_22";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Mi24\mi24_ssudan.paa","\x\cfp\addons\vehicles\Mi24\mi24_ssudan2.paa"};

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_22"; };
        };
    };

};

