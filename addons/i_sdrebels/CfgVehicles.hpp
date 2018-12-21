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

    class CFP_I_SDRebels_Soldier_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        genericNames = "AfroMen";
        side = 2;
        faction = "CFP_I_SDRebels";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_BDU_DDPM";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_DDPM",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_PatrolCap_DDPM", 0.6,
        "SP_Beret2_Black", 0.2,
        "SP_Beret2_Red", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_BeanieHat_Green", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Oakleys_Embr", 0.1
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

    class CFP_I_SDRebels_Soldier_02 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        genericNames = "AfroMen";
        side = 2;
        faction = "CFP_I_SDRebels";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_BDU_M81Sudan2";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_GL"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_GL","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_OD",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",10,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_PatrolCap_M81Sudan", 0.6,
        "SP_Beret2_Black", 0.2,
        "SP_Beret2_Red", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_BeanieHat_Green", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Oakleys_Embr", 0.1
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

    class CFP_I_SDRebels_Soldier_03 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        genericNames = "AfroMen";
        side = 2;
        faction = "CFP_I_SDRebels";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CUP_U_B_US_BDU_desert";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CUP_U_B_US_BDU_desert",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_PatrolCap_ChocChip", 0.6,
        "SP_Beret2_Black", 0.2,
        "SP_Beret2_Red", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_BeanieHat_Green", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Oakleys_Embr", 0.1
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

    class CFP_I_SDRebels_Soldier_04 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        genericNames = "AfroMen";
        side = 2;
        faction = "CFP_I_SDRebels";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_BDU_M81";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_OD",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_PatrolCap_M81", 0.6,
        "SP_Beret2_Black", 0.2,
        "SP_Beret2_Red", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_BeanieHat_Green", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Oakleys_Embr", 0.1
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

    class CFP_I_SDRebels_Soldier_05 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        genericNames = "AfroMen";
        engineer = 1;
        canDeactivateMines = 1;
        side = 2;
        faction = "CFP_I_SDRebels";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CUP_U_B_US_BDU_OD";

        linkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_OD",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"ToolKit",1},{"MineDetector",1},{"APERSMine_Range_Mag",3,1},{"CUP_PipeBomb_M",1,1},{"DemoCharge_Remote_Mag",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Headgear
            headgearList[] = {
        "", 0.3,
        "SP_PatrolCap_Green", 0.6,
        "SP_Beret2_Black", 0.2,
        "SP_Beret2_Red", 0.2,
        "SP_BeanieHat_Black", 0.2,
        "SP_BeanieHat_Tan", 0.2,
        "SP_BeanieHat_Green", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Oakleys_Embr", 0.1
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

    class CFP_I_SDRebels_Soldier_06 : CFP_I_SDRebels_Soldier_01 {

        displayName = "Squad Leader";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_DDPM",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_07 : CFP_I_SDRebels_Soldier_02 {

        displayName = "Machinegunner";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_BDU_M81Sudan2",{{"FirstAidKit",1}}},{"CFP_UtilityJacket_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_B_AlicePack_OD",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_08 : CFP_I_SDRebels_Soldier_03 {

        displayName = "Marksman";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CUP_U_B_US_BDU_desert",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_09 : CFP_I_SDRebels_Soldier_05 {

        displayName = "Gunner (DShKM)";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_OD",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_UtilityJacket_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_10 : CFP_I_SDRebels_Soldier_04 {

        displayName = "Gunner (DShKM Low)";

        linkedItems[] = {"CFP_AK_VEST_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodLow_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_11 : CFP_I_SDRebels_Soldier_01 {

        displayName = "Assistant (DShKM)";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_DDPM",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_12 : CFP_I_SDRebels_Soldier_03 {

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_desert",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_UtilityJacket_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_13 : CFP_I_SDRebels_Soldier_02 {

        displayName = "Assistant (Mortar)";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81Sudan2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_14 : CFP_I_SDRebels_Soldier_05 {

        displayName = "Gunner (SPG-9)";

        linkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_OD",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Soldier_15 : CFP_I_SDRebels_Soldier_04 {

        displayName = "Assistant (SPG-9)";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_I_SDRebels_Praga_V3S_01  : CUP_I_V3S_Open_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Praga_V3S_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";


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

    class CFP_I_SDRebels_Praga_V3S_Repair_01  : CUP_I_V3S_Repair_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Praga_V3S_Repair_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Repair)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_repair_egue_co'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_I_SDRebels_Praga_V3S_Refuel_01  : CUP_I_V3S_Refuel_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Praga_V3S_Refuel_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Refuel)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SDRebels_Praga_V3S_Ammunition_01  : CUP_I_V3S_Rearm_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Praga_V3S_Ammunition_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Ammunition)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
    class CFP_I_SDRebels_Truck_01  : C_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Truck_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };
    class CFP_I_SDRebels_Pickup_PK_01  : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Pickup_PK_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SDRebels_Soldier_02"; };
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
    class CFP_I_SDRebels_Pickup_01  : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Pickup_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

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
    class CFP_I_SDRebels_T55_01  : CUP_I_T55_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_T55_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SDRebels_Soldier_02"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_TKG_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_TKG_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_I_SDRebels_ZU_23_01  : CUP_I_ZU23_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_ZU_23_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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

    class CFP_I_SDRebels_SPG_9_01  : CUP_I_SPG9_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_SPG_9_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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

    class CFP_I_SDRebels_Mortar_01  : CUP_I_2b14_82mm_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Mortar_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

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

    class CFP_I_SDRebels_DShKM_01  : CUP_I_DSHKM_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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

    class CFP_I_SDRebels_DShKM_Low_01  : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_DShKM_Low_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

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

    class CFP_I_SDRebels_UAZ_DShKM_01  : CUP_O_UAZ_MG_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_UAZ_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_I_SDRebels_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKC";

    };

    class CFP_I_SDRebels_Land_Rover_SPG_01  : CUP_O_LR_SPG9_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Land_Rover_SPG_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (SPG-9)";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SDRebels_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "OLIVE";

    };

    class CFP_I_SDRebels_Land_Rover_01  : CUP_O_LR_Transport_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Land_Rover_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "OLIVE";

    };

    class CFP_I_SDRebels_Offroad_02  : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_Offroad_02 .JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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
    class CFP_I_SDRebels_D30_01  : CUP_O_D30_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_D30_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_01";

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

    class CFP_I_SDRebels_D30_AT_01  : CUP_O_D30_AT_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\i_sdrebels\data\preview\CFP_I_SDRebels_D30_AT_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D30 AT";
        side = 2;
        faction = "CFP_I_SDRebels";
        crew = "CFP_I_SDRebels_Soldier_02";

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
};