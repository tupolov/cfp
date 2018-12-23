#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles
{

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_O_Ural_ZU23_SLA;
    class CUP_O_Ural_ZU23_SLA_OCimport_01 : CUP_O_Ural_ZU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_ZU23_SLA_OCimport_02 : CUP_O_Ural_ZU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BRDM2_SLA;
    class CUP_O_BRDM2_SLA_OCimport_01 : CUP_O_BRDM2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BRDM2_SLA_OCimport_02 : CUP_O_BRDM2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BTR60_SLA;
    class CUP_O_BTR60_SLA_OCimport_01 : CUP_O_BTR60_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR60_SLA_OCimport_02 : CUP_O_BTR60_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoGunner_1;
            class CargoGunner_2;
        };
    };

    class CUP_O_BTR90_RU;
    class CUP_O_BTR90_RU_OCimport_01 : CUP_O_BTR90_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR90_RU_OCimport_02 : CUP_O_BTR90_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP1_TKA_OCimport_02 : CUP_O_BMP1_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CommanderOptics;
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_O_BMP2_SLA;
    class CUP_O_BMP2_SLA_OCimport_01 : CUP_O_BMP2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_SLA_OCimport_02 : CUP_O_BMP2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_07;
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

    class CUP_O_UAZ_Unarmed_SLA;
    class CUP_O_UAZ_Unarmed_SLA_OCimport_01 : CUP_O_UAZ_Unarmed_SLA { scope = 0; class EventHandlers; };
    class CUP_O_UAZ_Unarmed_SLA_OCimport_02 : CUP_O_UAZ_Unarmed_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_UAZ_Open_SLA;
    class CUP_O_UAZ_Open_SLA_OCimport_01 : CUP_O_UAZ_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_Open_SLA_OCimport_02 : CUP_O_UAZ_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
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

    class CUP_O_UAZ_SPG9_SLA;
    class CUP_O_UAZ_SPG9_SLA_OCimport_01 : CUP_O_UAZ_SPG9_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_SPG9_SLA_OCimport_02 : CUP_O_UAZ_SPG9_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_UAZ_AGS30_SLA;
    class CUP_O_UAZ_AGS30_SLA_OCimport_01 : CUP_O_UAZ_AGS30_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_AGS30_SLA_OCimport_02 : CUP_O_UAZ_AGS30_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
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

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Mi24_P_Dynamic_RU;
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_01 : CUP_O_Mi24_P_Dynamic_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_02 : CUP_O_Mi24_P_Dynamic_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_Su25_Dyn_SLA;
    class CUP_O_Su25_Dyn_SLA_OCimport_01 : CUP_O_Su25_Dyn_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Su25_Dyn_SLA_OCimport_02 : CUP_O_Su25_Dyn_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_C130J_TKA;
    class CUP_O_C130J_TKA_OCimport_01 : CUP_O_C130J_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_C130J_TKA_OCimport_02 : CUP_O_C130J_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_T72_SLA;
    class CUP_O_T72_SLA_OCimport_01 : CUP_O_T72_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T72_SLA_OCimport_02 : CUP_O_T72_SLA_OCimport_01 {
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

    class CUP_O_D30_SLA;
    class CUP_O_D30_SLA_OCimport_01 : CUP_O_D30_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_D30_SLA_OCimport_02 : CUP_O_D30_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_D30_AT_SLA;
    class CUP_O_D30_AT_SLA_OCimport_01 : CUP_O_D30_AT_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_D30_AT_SLA_OCimport_02 : CUP_O_D30_AT_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_M113_TKA;
    class CUP_O_M113_TKA_OCimport_01 : CUP_O_M113_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_M113_TKA_OCimport_02 : CUP_O_M113_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BMP2_ZU_TKA;
    class CUP_O_BMP2_ZU_TKA_OCimport_01 : CUP_O_BMP2_ZU_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_ZU_TKA_OCimport_02 : CUP_O_BMP2_ZU_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class CUP_O_LR_Ambulance_TKA;
    class CUP_O_LR_Ambulance_TKA_OCimport_01 : CUP_O_LR_Ambulance_TKA { scope = 0; class EventHandlers; };
    class CUP_O_LR_Ambulance_TKA_OCimport_02 : CUP_O_LR_Ambulance_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Datsun_PK;
    class CUP_O_Datsun_PK_OCimport_01 : CUP_O_Datsun_PK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Datsun_PK_OCimport_02 : CUP_O_Datsun_PK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Datsun_4seat;
    class CUP_O_Datsun_4seat_OCimport_01 : CUP_O_Datsun_4seat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Datsun_4seat_OCimport_02 : CUP_O_Datsun_4seat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_O_BMP2_AMB_TKA;
    class CUP_O_BMP2_AMB_TKA_OCimport_01 : CUP_O_BMP2_AMB_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_AMB_TKA_OCimport_02 : CUP_O_BMP2_AMB_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_B_AFARMY_HMMWV_01;
    class CFP_B_AFARMY_HMMWV_01_OCimport_01 : CFP_B_AFARMY_HMMWV_01 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_AFARMY_HMMWV_01_OCimport_01.JPG; scope = 0; class EventHandlers; };
    class CFP_B_AFARMY_HMMWV_01_OCimport_02 : CFP_B_AFARMY_HMMWV_01_OCimport_01 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_AFARMY_HMMWV_01_OCimport_02.JPG; scope = 0; class EventHandlers; };

    class CFP_B_AFARMY_HMMWV_DShKM_01;
    class CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_01 : CFP_B_AFARMY_HMMWV_DShKM_01 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_01.JPG; scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_02 : CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_01 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_02.JPG;
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M60A3_USMC;
    class CUP_B_M60A3_USMC_OCimport_01 : CUP_B_M60A3_USMC { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M60A3_USMC_OCimport_02 : CUP_B_M60A3_USMC_OCimport_01 {
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

    class CUP_O_BTR40_TKA;
    class CUP_O_BTR40_TKA_OCimport_01 : CUP_O_BTR40_TKA { scope = 0; class EventHandlers; };
    class CUP_O_BTR40_TKA_OCimport_02 : CUP_O_BTR40_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR40_MG_TKA_OCimport_02 : CUP_O_BTR40_MG_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_B_AFGPolice_Offroad_ANCOP_01;
    class CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_01 : CFP_B_AFGPolice_Offroad_ANCOP_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_02 : CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_B_SDARMY_Soldier_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_02 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_02.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","SP_SSh68NetHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","SP_SSh68NetHelmet_Green1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_SSh68NetHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_03 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_03.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"CFP_Cap_Sudan_08","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_04 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_04.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AA";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_PASGTHelmet_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_PASGTHelmet_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_9K32Strela"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_9K32Strela"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_9K32Strela","","","",{"CUP_Strela_2_M",1},{},""},{},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_Kitbag_cbr",{{"CUP_Strela_2_M",1,1}}},"CFP_PASGTHelmet_Sudan_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_05 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_05.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_cbr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"CFP_Cap_Sudan_07","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_06 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_06.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        backpack = "B_AssaultPack_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",75},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",1,75}}},{"CFP_Alice_Vest2_Tan",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",3,75}}},{"B_AssaultPack_cbr",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",2,75}}},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_07 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_07.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_Alice_Vest2","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74_plum_M",2,30}}},{"CFP_Alice_Vest2",{{"CUP_30Rnd_545x39_AK74_plum_M",4,30}}},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_08 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_08.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"CFP_Cap_Sudan_08","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_09 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_09.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"ToolKit",1},{"MineDetector",1},{"APERSMine_Range_Mag",3,1},{"CUP_PipeBomb_M",3,1},{"DemoCharge_Remote_Mag",2,1}}},"CFP_Cap_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_10 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_10.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "SP_0000_Standard_FieldUniform_Tan_SS";

        linkedItems[] = {"CUP_V_B_PilotVest","CUP_H_TK_PilotHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CUP_V_B_PilotVest","CUP_H_TK_PilotHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_smg_MP5A5"};
        respawnWeapons[] = {"CUP_smg_MP5A5"};

        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_MP5A5","","","",{"CUP_30Rnd_9x19_MP5",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Tan_SS",{{"FirstAidKit",1},{"CUP_30Rnd_9x19_MP5",2,30},{"SmokeShellRed",2,1},{"Chemlight_red",1,1}}},{"CUP_V_B_PilotVest",{{"CUP_30Rnd_9x19_MP5",1,30}}},{},"CUP_H_TK_PilotHelmet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_11 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_11.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_BrownDigital_SS";

        linkedItems[] = {"CUP_V_B_PilotVest","CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"CUP_V_B_PilotVest","CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_smg_MP5A5"};
        respawnWeapons[] = {"CUP_smg_MP5A5"};

        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_MP5A5","","","",{"CUP_30Rnd_9x19_MP5",30},{},""},{},{},{"CFP_U_FieldUniform_BrownDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_9x19_MP5",4,30}}},{"CUP_V_B_PilotVest",{{"CUP_30Rnd_9x19_MP5",1,30}}},{},"CUP_H_RUS_ZSH_Shield_Up","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_12 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_12.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{}},{},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_13 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_13.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Squad Leader";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_14 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_14.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Medic";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Gray_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Gray_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"CFP_Basic_Helmet_Gray_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_15 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_15.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Engineer";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"ToolKit",1},{"MineDetector",1},{"APERSMine_Range_Mag",3,1},{"CUP_PipeBomb_M",3,1},{"DemoCharge_Remote_Mag",2,1}}},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_16 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_16.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper AT";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V_PGO7V3"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V_PGO7V3"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V_PGO7V3","","","CUP_optic_PGO7V3",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_17 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_17.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper AA";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Gray_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_Basic_Helmet_Gray_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_9K32Strela"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_9K32Strela"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_9K32Strela","","","",{"CUP_Strela_2_M",1},{},""},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_Kitbag_cbr",{{"CUP_Strela_2_M",1,1}}},"CFP_Basic_Helmet_Gray_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_18 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_18.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paratrooper Machinegunner";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_TacVest_camo","CFP_Basic_Helmet_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","CFP_Basic_Helmet_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CUP_B_MG_Ammo";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_camo",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_B_MG_Ammo",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"CFP_Basic_Helmet_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_19 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_19.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Paratrooper";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_FieldUniform_AridDigital_SS";

        linkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",75},{},""},{},{},{"CFP_U_FieldUniform_AridDigital_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",1,75}}},{"V_TacVest_camo",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",2,75}}},{"B_AssaultPack_rgr",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",2,75}}},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_20 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_20.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"SP_Holster1_Brown","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Holster1_Brown","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_M9"};
        respawnWeapons[] = {"CUP_hgun_M9"};

        magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"SP_Holster1_Brown",{}},{},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_21 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_21.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CFP_PASGTHelmet_Sudan_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_22 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_22.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"CFP_Cap_Sudan_07","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_23 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_23.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assistant Gunner (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_AK_VEST_Tan","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CFP_PASGTHelmet_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{}},{"CUP_B_DShkM_Gun_Bag",{}},"CFP_PASGTHelmet_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_24 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_24.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CFP_Cap_Sudan_08","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_25 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_25.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (DShKM Low)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword2";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_08","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodLow_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"CFP_Cap_Sudan_08","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_26 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_26.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assistant Gunner (Mortar)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_05","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_PASGTHelmet_Sudan_05","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"CFP_PASGTHelmet_Sudan_05","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_27 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_27.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (Mortar)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_Sword";

        linkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest2_Tan","CFP_Cap_Sudan_07","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_Sword",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest2_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"CFP_Cap_Sudan_07","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_28 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_28.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assistant Gunner (SPG-9)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_Cap_Sudan_01","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"CFP_Cap_Sudan_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_29 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_29.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Gunner (SPG-9)";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_TK","LanguageGRE_F"};

        uniformClass = "CFP_U_BattleDressUniform_AridDigital";

        linkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","SP_Beret2_Red","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_AridDigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"SP_Beret2_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_30 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_30.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_WorkUniform_SudanPolice";

        linkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_SudanPolice",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_Beret2_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_31 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_31.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_WorkUniform_SudanPolice";

        linkedItems[] = {"CFP_AK_VEST_Black","CFP_Cap_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","CFP_Cap_Sudan_06","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_SudanPolice",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CFP_Cap_Sudan_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };

    class CFP_B_SDARMY_Soldier_32 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Soldier_32.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Policeman";
        side = 1;
        faction = "CFP_B_SDARMY";

        identityTypes[] = {"Head_African","LanguageGRE_F"};

        uniformClass = "CFP_U_WorkUniform_SudanPolice2";

        linkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","SP_Beret2_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_SudanPolice2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_Beret2_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_FLAG_SUDAN";

    };
    class CFP_B_SDARMY_Ural_ZU_23_01 : CUP_O_Ural_ZU23_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_ZU_23_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (ZU-23)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_BRDM_2_01 : CUP_O_BRDM2_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BRDM_2_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BRDM-2";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\rus_brdm2_01_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_BTR_60_01 : CUP_O_BTR60_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BTR_60_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
            class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BTR60\sudanbody1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BTR60\sudanbody2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_BTR_90_01 : CUP_O_BTR90_RU_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BTR_90_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-90";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BTR90\sudanbody1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BTR90\sudanbody2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_BMP_1_01 : CUP_O_BMP1_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BMP_1_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-1";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class CommanderOptics : CommanderOptics { gunnerType = "CFP_B_SDARMY_Soldier_20"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BMP\trup_sudan.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BMP\veza0_sudan.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_BMP_2_01 : CUP_O_BMP2_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BMP_2_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BM_21_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_01 : CUP_O_UAZ_Unarmed_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_UAZ_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_Open_01 : CUP_O_UAZ_Open_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_UAZ_Open_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (Open)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_DShKM_01 : CUP_O_UAZ_MG_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_UAZ_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_SPG_01 : CUP_O_UAZ_SPG9_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_UAZ_SPG_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (SPG-9)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_GL_01 : CUP_O_UAZ_AGS30_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_UAZ_GL_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (GL)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_Open_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Open)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_Refuel_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Refuel)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_Repair_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Repair)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_09";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Ammunition_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Ural_Ammunition_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Ammunition)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Mi_24P_01 : CUP_O_Mi24_P_Dynamic_RU_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Mi_24P_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24P";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_10";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_10"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Mi24\mi24_sudan.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Mi24\mi24_sudan2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";
    };

    class CUP_O_Mi17_TK;
    class CUP_O_Mi17_TK_OCimport_01 : CUP_O_Mi17_TK { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_SDARMY_Mi_8MT_01 : CUP_O_Mi17_TK_OCimport_01
    {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Mi_8MT_01.JPG;
        scope = 2;
        side = 1;
        displayName = "Mi-8MT";
        faction = "CFP_B_SDARMY";
        vehicleClass = "CFP_B_SDARMY_AIRCRAFT";
        camouflage = 4;
        crew = "CFP_B_SDARMY_Soldier_10";
        typicalCargo[] = {"CFP_B_SDARMY_Soldier_10","CFP_B_SDARMY_Soldier_10"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Mi8\mi17_sudan.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa"};
    };

    class CFP_B_SDARMY_SU_25_01 : CUP_O_Su25_Dyn_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_SU_25_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SU-25";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_11";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

           class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\SU25\su25_body1_sudan_co.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\SU25\su25_body2_sudan_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_C130_01 : CUP_O_C130J_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_C130_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-130";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_11";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_11"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\C130\c130j_body_sudan.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\C130\c130j_wings_sudan.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_T72_01 : CUP_O_T72_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_T72_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\T72\sudanbody1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\T72\sudanbody2.paa'];_unit setObjectTextureGlobal [2,'\x\cfp\addons\vehicles\T72\sudanbody3.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_SDARMY_T55_01 : CUP_O_T55_CSAT_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "T-55";
        faction = "CFP_B_SDARMY";
        vehicleClass = "CFP_B_SDARMY_ARMORED";
        camouflage = 4;
        crew = "CFP_B_SDARMY_Soldier_07";
        typicalCargo[] = {"CFP_B_SDARMY_Soldier_07","CFP_B_SDARMY_Soldier_07","CFP_B_SDARMY_Soldier_07"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\T55\t55_body_sudan.paa","\x\cfp\addons\vehicles\T55\t55_tower_sudan.paa"};
        editorPreview = "\x\cfp\addons\vehicles\UI\Preview_IS_T55.jpg";
    };

    class CFP_B_SDARMY_DShKM_01 : CUP_O_DSHKM_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_DShKM_Low_01 : CUP_O_DSHKM_MiniTripod_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_DShKM_Low_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_SPG_9_01 : CUP_O_SPG9_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_SPG_9_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_Podnos_2B14_01 : CUP_O_2b14_82mm_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Podnos_2B14_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_D30_01 : CUP_O_D30_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_D30_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_D30_AT_01 : CUP_O_D30_AT_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_D30_AT_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D30 AT";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

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

    class CFP_B_SDARMY_M113A3_01 : CUP_O_M113_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_M113A3_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\M113a3\sudanbody1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\M113a3\sudanbody2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_BMP_2AA_01 : CUP_O_BMP2_ZU_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BMP_2AA_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2 (AA)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_Land_Rover_Ambulance_01 : CUP_O_LR_Ambulance_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Land_Rover_Ambulance_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (Ambulance)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_08";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_base_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_desert_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_special_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "GBD";

    };

    class CFP_B_SDARMY_Pickup_PK_01 : CUP_O_Datsun_PK_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Pickup_PK_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
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

    class CFP_B_SDARMY_Pickup_01 : CUP_O_Datsun_4seat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Pickup_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

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

    class CFP_B_SDARMY_BMP_2Ambulance_01 : CUP_O_BMP2_AMB_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_BMP_2Ambulance_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2 (Ambulance)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body1.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\BMP2\SudanBMP2body2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_HMMWV_01 : CFP_B_AFARMY_HMMWV_01_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_HMMWV_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\Data\hmmwv_body_canvas_1_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_parts_1_ca.paa'];_unit setObjectTextureGlobal [4,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gpk_tower_co.paa'];_unit setObjectTextureGlobal [5,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_01_co.paa'];_unit setObjectTextureGlobal [6,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_co.paa'];_unit setObjectTextureGlobal [7,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_Des_co.paa'];_unit setObjectTextureGlobal [8,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_co.paa'];_unit setObjectTextureGlobal [9,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_B_SDARMY_HMMWV_DShKM_01 : CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_HMMWV_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_canvas_1_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_gpk_tower_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_B_SDARMY_M60_01 : CUP_B_M60A3_USMC_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_M60_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "M60";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\M60\Sudanbodyuv.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\M60\SudanM60Turret.paa'];_unit setObjectTextureGlobal [2,'\x\cfp\addons\vehicles\M60\Gun_mnt_co.paa'];_unit setObjectTextureGlobal [3,'\x\cfp\addons\vehicles\M60\M60_gun_co.paa'];_unit setObjectTextureGlobal [4,'\x\cfp\addons\vehicles\M60\M60_fuelcan_co.paa'];_unit setObjectTextureGlobal [5,'\x\cfp\addons\vehicles\M60\Sudanwheel_1_g_co.paa'];_unit setObjectTextureGlobal [6,'\x\cfp\addons\vehicles\M60\wheel_2_g_co.paa'];_unit setObjectTextureGlobal [7,'CUP\TrackedVehicles\CUP_TrackedVehicles_M1_Abrams\data\m1abrams_02_co.paa'];_unit setObjectTextureGlobal [8,'\x\cfp\addons\vehicles\M60\SudanBk.paa'];_unit setObjectTextureGlobal [9,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\m60_alp_uvs_1024s_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CFP_B_SDARMY_Walid_01 : CUP_O_BTR40_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Walid_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_Walid_DShKM_01 : CUP_O_BTR40_MG_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Walid_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Truck_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_04";

    };

    class CFP_B_SDARMY_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Offroad_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_12";

    };
    class CFP_B_SDARMY_Offroad_Police_01 : CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdarmy\data\preview\CFP_B_SDARMY_Offroad_Police_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Police)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_30";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Blue";

    };
    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class CUP_USLaunchersBox; // CUP_USLaunchersBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_SDARMY_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_Strela_2_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_SDARMY_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_RPK74,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_hgun_M9,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AK47,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_B_SDARMY_LaunchersBox : CUP_USLaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
            mag_xx(CUP_Strela_2_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
            weap_xx(CUP_launch_9K32Strela,5);
            weap_xx(CUP_launch_RPG7V_PGO7V3,5);
        };
        class TransportItems {
            item_xx(CUP_optic_PGO7V3,5);
        };
    };
    class CFP_B_SDARMY_UniformBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(SP_0000_Standard_BattleDressUniform_Green,15);
            item_xx(CFP_Uniform_Sudan_15,15);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,15);
            item_xx(CFP_U_BattleDressUniform_ChocChip,15);
            item_xx(CFP_Uniform_Sudan_09,15);
            item_xx(CFP_U_BattleDressUniform_3ColorDesert,15);
            item_xx(CFP_Uniform_Sudan_10,15);
            item_xx(CFP_Uniform_Sudan_13,15);
            item_xx(CFP_U_BattleDressUniform_BrownDigital,15);
            item_xx(SP_0000_Standard_Coverall_Green,15);
            item_xx(CFP_U_FieldUniform_AridDigital_SS,15);
            item_xx(CFP_U_FieldUniform_BrownDigital_SS,15);
            item_xx(CFP_Uniform_Sudan_06,15);
            item_xx(CFP_U_BattleDressUniform_Sword,15);
            item_xx(CFP_Uniform_Sudan_08,15);
            item_xx(CFP_U_BattleDressUniform_Sword2,15);
            item_xx(CFP_Uniform_Sudan_05,15);
            item_xx(CFP_U_WorkUniform_SudanPolice,15);
            item_xx(CFP_U_WorkUniform_SudanPolice2,15);
        };
    };
    class CFP_B_SDARMY_SupportBox : CUP_USSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_M1Helmet_GrayDim,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_Harness1_Green,10);
            item_xx(SP_SSh68NetHelmet_Green1,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Beret_Brown_Sudan,10);
            item_xx(CUP_B_AA_Backpack,10);
            item_xx(SP_Harness1_Tan,10);
            item_xx(SP_Beret2_Red,10);
            item_xx(CUP_B_MG_Ammo,10);
            item_xx(SP_PASGTHelmet_Tan1,10);
            item_xx(CUP_H_SLA_TankerHelmet,10);
            item_xx(CFP_Cap_Sudan_03,10);
            item_xx(CFP_Cap_Sudan_05,10);
            item_xx(CUP_V_B_PilotVest,10);
            item_xx(CUP_H_TK_PilotHelmet,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(CUP_H_RUS_ZSH_Shield_Down,10);
            item_xx(CFP_Cap_Sudan_01,10);
            item_xx(V_TacVest_brn,10);
            item_xx(CFP_Basic_Helmet_Gray_Green,10);
            item_xx(CFP_Basic_Helmet_Tan,10);
            item_xx(V_TacVest_khk,10);
            item_xx(SP_Beret_Red,10);
            item_xx(SP_Holster1_Brown,10);
            item_xx(SP_Beret_Green,10);
            item_xx(CFP_PASGTHelmet_Sudan_02,10);
            item_xx(SP_Shemagh_Tan,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(SP_SSh68NetHelmet_Tan1,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CFP_AK_VEST_Black,10);
            item_xx(CFP_Cap_Sudan_06,10);
            item_xx(V_TacVest_blk,10);
            item_xx(SP_Beret2_Blue,10);
            item_xx(SP_Beret_Blue,10);
        };
    };
    class CFP_B_SDARMY_SupplyBox : CUP_USVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudanese Armed Forces Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_Strela_2_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_RPK74,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_hgun_M9,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_launch_RPG7V,10);
            weap_xx(CUP_launch_9K32Strela,10);
            weap_xx(CUP_launch_RPG7V_PGO7V3,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_M1Helmet_GrayDim,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_Harness1_Green,10);
            item_xx(SP_SSh68NetHelmet_Green1,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CFP_Beret_Brown_Sudan,10);
            item_xx(CUP_B_AA_Backpack,10);
            item_xx(SP_Harness1_Tan,10);
            item_xx(SP_Beret2_Red,10);
            item_xx(CUP_B_MG_Ammo,10);
            item_xx(SP_PASGTHelmet_Tan1,10);
            item_xx(CUP_H_SLA_TankerHelmet,10);
            item_xx(CFP_Cap_Sudan_03,10);
            item_xx(CFP_Cap_Sudan_05,10);
            item_xx(CUP_V_B_PilotVest,10);
            item_xx(CUP_H_TK_PilotHelmet,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(CUP_H_RUS_ZSH_Shield_Down,10);
            item_xx(CFP_Cap_Sudan_01,10);
            item_xx(V_TacVest_brn,10);
            item_xx(CFP_Basic_Helmet_Gray_Green,10);
            item_xx(CFP_Basic_Helmet_Tan,10);
            item_xx(V_TacVest_khk,10);
            item_xx(SP_Beret_Red,10);
            item_xx(SP_Holster1_Brown,10);
            item_xx(SP_Beret_Green,10);
            item_xx(CFP_PASGTHelmet_Sudan_02,10);
            item_xx(SP_Shemagh_Tan,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(SP_SSh68NetHelmet_Tan1,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CFP_AK_VEST_Black,10);
            item_xx(CFP_Cap_Sudan_06,10);
            item_xx(V_TacVest_blk,10);
            item_xx(SP_Beret2_Blue,10);
            item_xx(SP_Beret_Blue,10);
            item_xx(SP_0000_Standard_BattleDressUniform_Green,10);
            item_xx(CFP_Uniform_Sudan_15,10);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,10);
            item_xx(CFP_U_BattleDressUniform_ChocChip,10);
            item_xx(CFP_Uniform_Sudan_09,10);
            item_xx(CFP_U_BattleDressUniform_3ColorDesert,10);
            item_xx(CFP_Uniform_Sudan_10,10);
            item_xx(CFP_Uniform_Sudan_13,10);
            item_xx(CFP_U_BattleDressUniform_BrownDigital,10);
            item_xx(SP_0000_Standard_Coverall_Green,10);
            item_xx(CFP_U_FieldUniform_AridDigital_SS,10);
            item_xx(CFP_U_FieldUniform_BrownDigital_SS,10);
            item_xx(CFP_Uniform_Sudan_06,10);
            item_xx(CFP_U_BattleDressUniform_Sword,10);
            item_xx(CFP_Uniform_Sudan_08,10);
            item_xx(CFP_U_BattleDressUniform_Sword2,10);
            item_xx(CFP_Uniform_Sudan_05,10);
            item_xx(CFP_U_WorkUniform_SudanPolice,10);
            item_xx(CFP_U_WorkUniform_SudanPolice2,10);
            item_xx(CUP_optic_PGO7V3,5);
        };
    };
};