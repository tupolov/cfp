#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

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

    class CUP_O_UAZ_MG_SLA;
    class CUP_O_UAZ_MG_SLA_OCimport_01 : CUP_O_UAZ_MG_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_MG_SLA_OCimport_02 : CUP_O_UAZ_MG_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
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

    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_Transport_TKA_OCimport_02 : CUP_O_LR_Transport_TKA_OCimport_01 {
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

    class CUP_O_T55_TK;
    class CUP_O_T55_TK_OCimport_01 : CUP_O_T55_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T55_TK_OCimport_02 : CUP_O_T55_TK_OCimport_01 {
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


    class CFP_B_SDMilitia_Soldier_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        genericNames = "AfroMen";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_Tanoan","LanguagePER_F"};

        uniformClass = "CFP_BDU_ChocChip";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_ChocChip",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Clothing
            uniformList[] = {
        "CFP_BDU_ChocChip", 0.2,
        "CFP_BDU_CEU", 0.2,
        "CFP_GUER_Khk_Wdl", 0.2,
        "CFP_BDU_M81", 0.2,
        "CFP_BDU_ERDL", 0.2,
        "CFP_BDU_Tan", 0.2,
        "CUP_U_B_US_BDU_desert", 0.2,
        "CUP_U_B_US_BDU_OD", 0.2,
        "CFP_U_WorkUniform_3Desert", 0.2,
        "CFP_U_WorkUniform_TanM81", 0.2,
        "CFP_BDU_Sword2", 0.2,
        "CFP_GUER_Tigerpants", 0.2,
        "CFP_GUER_ERDLpants", 0.2,
        "CFP_GUER_ChocChippants", 0.2
            };

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_Lungee_Shemagh", 0.2,
        "CFP_Lungee_Shemagh_Green", 0.2,
        "CFP_Lungee_Shemagh_White", 0.2,
        "CFP_Lungee_Shemagh_Yellow", 0.2,
        "CFP_Lungee_Shemagh_Red", 0.2,
        "CFP_Lungee_Shemagh_LightBlue", 0.2,
        "CFP_Shemagh_Full_Red", 0.3,
        "CFP_Shemagh_Full_Black", 0.3,
        "CFP_Shemagh_Full_Gold", 0.2,
        "CFP_Shemagh_Full_Tan", 0.2,
        "CFP_Shemagh_Full_Green", 0.3,
        "CFP_Shemagh_Full_White", 0.3,
        "CFP_Shemagh_Full_Creme", 0.2,
        "CFP_Shemagh_Full_M81", 0.4,
        "CFP_Lungee_Shemagh_M81", 0.4,
        "CFP_Lungee_M81", 0.4,
        "CFP_Lungee_BlueGrey", 0.2,
        "CFP_Lungee_Brown", 0.2,
        "CFP_Lungee_Green", 0.2,
        "CFP_Lungee_Grey", 0.2,
        "CFP_Lungee_LightOlive", 0.2,
        "CFP_Lungee_Tan", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "SP_Goggles_Black", 0.1,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Oakleys_Embr", 0.1
            };

        // Vests
            vestList[] = {
        "CFP_AK_VEST_Black", 0.2,
        "CFP_AK_VEST_EDRL", 0.2,
        "CFP_AK_VEST_LOlive", 0.2,
        "CFP_AK_VEST_Olive", 0.2,
        "CFP_AK_VEST_Tan", 0.2,
        "CFP_AK_VEST_Lime", 0.2,
        "CFP_AK_VEST_M81", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2,
        "CUP_V_OI_TKI_Jacket3_03", 0.2
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

    class CFP_B_SDMilitia_Soldier_02 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        genericNames = "AfroMen";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CUP_U_B_US_BDU_desert";

        linkedItems[] = {"CFP_TakJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CUP_U_B_US_BDU_desert",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_TakJacket_ChocChip",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Clothing
            uniformList[] = {
        "CFP_BDU_ChocChip", 0.2,
        "CFP_BDU_CEU", 0.2,
        "CFP_GUER_Khk_Wdl", 0.2,
        "CFP_BDU_M81", 0.2,
        "CFP_BDU_ERDL", 0.2,
        "CFP_BDU_Tan", 0.2,
        "CUP_U_B_US_BDU_desert", 0.2,
        "CUP_U_B_US_BDU_OD", 0.2,
        "CFP_U_WorkUniform_3Desert", 0.2,
        "CFP_U_WorkUniform_TanM81", 0.2,
        "CFP_BDU_Sword2", 0.2,
        "CFP_GUER_Tigerpants", 0.2,
        "CFP_GUER_ERDLpants", 0.2,
        "CFP_GUER_ChocChippants", 0.2
            };

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_Lungee_Shemagh", 0.2,
        "CFP_Lungee_Shemagh_Green", 0.2,
        "CFP_Lungee_Shemagh_White", 0.2,
        "CFP_Lungee_Shemagh_Yellow", 0.2,
        "CFP_Lungee_Shemagh_Red", 0.2,
        "CFP_Lungee_Shemagh_LightBlue", 0.2,
        "CFP_Shemagh_Full_Red", 0.3,
        "CFP_Shemagh_Full_Black", 0.3,
        "CFP_Shemagh_Full_Gold", 0.2,
        "CFP_Shemagh_Full_Tan", 0.2,
        "CFP_Shemagh_Full_Green", 0.3,
        "CFP_Shemagh_Full_White", 0.3,
        "CFP_Shemagh_Full_Creme", 0.2,
        "CFP_Shemagh_Full_M81", 0.4,
        "CFP_Lungee_Shemagh_M81", 0.4,
        "CFP_Lungee_M81", 0.4,
        "CFP_Lungee_BlueGrey", 0.2,
        "CFP_Lungee_Brown", 0.2,
        "CFP_Lungee_Green", 0.2,
        "CFP_Lungee_Grey", 0.2,
        "CFP_Lungee_LightOlive", 0.2,
        "CFP_Lungee_Tan", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "SP_Goggles_Black", 0.1,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Oakleys_Embr", 0.1
            };

        // Vests
            vestList[] = {
        "CFP_AK_VEST_Black", 0.2,
        "CFP_AK_VEST_EDRL", 0.2,
        "CFP_AK_VEST_LOlive", 0.2,
        "CFP_AK_VEST_Olive", 0.2,
        "CFP_AK_VEST_Tan", 0.2,
        "CFP_AK_VEST_Lime", 0.2,
        "CFP_AK_VEST_M81", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2,
        "CUP_V_OI_TKI_Jacket3_03", 0.2
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

    class CFP_B_SDMilitia_Soldier_03 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        genericNames = "AfroMen";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_GUER_Khk_Wdl";

        linkedItems[] = {"CFP_TakJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_GUER_Khk_Wdl",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CFP_TakJacket_M81",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Clothing
            uniformList[] = {
        "CFP_BDU_ChocChip", 0.2,
        "CFP_BDU_CEU", 0.2,
        "CFP_GUER_Khk_Wdl", 0.2,
        "CFP_BDU_M81", 0.2,
        "CFP_BDU_ERDL", 0.2,
        "CFP_BDU_Tan", 0.2,
        "CUP_U_B_US_BDU_desert", 0.2,
        "CUP_U_B_US_BDU_OD", 0.2,
        "CFP_U_WorkUniform_3Desert", 0.2,
        "CFP_U_WorkUniform_TanM81", 0.2,
        "CFP_BDU_Sword2", 0.2,
        "CFP_GUER_Tigerpants", 0.2,
        "CFP_GUER_ERDLpants", 0.2,
        "CFP_GUER_ChocChippants", 0.2
            };

        // Headgear
            headgearList[] = {
        "", 0.3,
        "CFP_Lungee_Shemagh", 0.2,
        "CFP_Lungee_Shemagh_Green", 0.2,
        "CFP_Lungee_Shemagh_White", 0.2,
        "CFP_Lungee_Shemagh_Yellow", 0.2,
        "CFP_Lungee_Shemagh_Red", 0.2,
        "CFP_Lungee_Shemagh_LightBlue", 0.2,
        "CFP_Shemagh_Full_Red", 0.3,
        "CFP_Shemagh_Full_Black", 0.3,
        "CFP_Shemagh_Full_Gold", 0.2,
        "CFP_Shemagh_Full_Tan", 0.2,
        "CFP_Shemagh_Full_Green", 0.3,
        "CFP_Shemagh_Full_White", 0.3,
        "CFP_Shemagh_Full_Creme", 0.2,
        "CFP_Shemagh_Full_M81", 0.4,
        "CFP_Lungee_Shemagh_M81", 0.4,
        "CFP_Lungee_M81", 0.4,
        "CFP_Lungee_BlueGrey", 0.2,
        "CFP_Lungee_Brown", 0.2,
        "CFP_Lungee_Green", 0.2,
        "CFP_Lungee_Grey", 0.2,
        "CFP_Lungee_LightOlive", 0.2,
        "CFP_Lungee_Tan", 0.2
            };

        // Facewear
            facewearList[] = {
        "", 0.5,
        "G_Aviator", 0.4,
        "SP_Goggles_Black", 0.1,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.4,
        "CFP_Oakleys_Embr", 0.1
            };

        // Vests
            vestList[] = {
        "CFP_AK_VEST_Black", 0.2,
        "CFP_AK_VEST_EDRL", 0.2,
        "CFP_AK_VEST_LOlive", 0.2,
        "CFP_AK_VEST_Olive", 0.2,
        "CFP_AK_VEST_Tan", 0.2,
        "CFP_AK_VEST_Lime", 0.2,
        "CFP_AK_VEST_M81", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2,
        "CUP_V_OI_TKI_Jacket3_03", 0.2
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

    class CFP_B_SDMilitia_Soldier_04 : CFP_B_SDMilitia_Soldier_03 {

        displayName = "Machinegunner";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_WorkUniform_3Desert",{{"FirstAidKit",1}}},{"CFP_AK_VEST_Tan",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_05 : CFP_B_SDMilitia_Soldier_01 {

        displayName = "Engineer";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_TanM81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_03",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"DemoCharge_Remote_Mag",5,1},{"SatchelCharge_Remote_Mag",1,1},{"APERSTripMine_Wire_Mag",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_06 : CFP_B_SDMilitia_Soldier_02 {

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_OD";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_CEU",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_OD",{{"FirstAidKit",10},{"Medikit",1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_07 : CFP_B_SDMilitia_Soldier_03 {

        displayName = "Gunner (DShKM)";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Sword2",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_08 : CFP_B_SDMilitia_Soldier_01 {

        displayName = "Gunner (DShKM/Low)";

        linkedItems[] = {"CFP_TakJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodLow_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_TanTee",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_09 : CFP_B_SDMilitia_Soldier_02 {

        displayName = "Assistant (DShKM)";

        linkedItems[] = {"CFP_UtilityJacket_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_Tigerpants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_Woodland",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_10 : CFP_B_SDMilitia_Soldier_03 {

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ERDLpants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_DDPM",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_11 : CFP_B_SDMilitia_Soldier_01 {

        displayName = "Assistant (Mortar)";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_B_US_BDU_OD",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_03",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_12 : CFP_B_SDMilitia_Soldier_02 {

        displayName = "Gunner (SPG-9)";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_Tan",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_02",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_13 : CFP_B_SDMilitia_Soldier_03 {

        displayName = "Assistant (SPG-9)";

        linkedItems[] = {"CFP_TakJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_ChocChip","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_ChocChip",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_14 : CFP_B_SDMilitia_Soldier_03 {

        displayName = "Leader";

        linkedItems[] = {"CFP_TakJacket_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_Woodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ChocChippants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_TakJacket_Woodland",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_15 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman";
        genericNames = "AfroMen";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_Tanoan","LanguagePER_F"};

        uniformClass = "CFP_U_KhetPartug_Short_Brown";

        linkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_DDPM","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_Brown",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_TakJacket_DDPM",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        // Uniforms
            uniformList[] = {
        "CFP_U_KhetPartug_Long_Olive", 0.2,
        "CFP_U_KhetPartug_Short_Olive", 0.2,
        "CFP_U_KhetPartug_Long_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_EDRL", 0.3,
        "CFP_U_KhetPartug_Long_Black", 0.2,
        "CFP_U_KhetPartug_Short_M81", 0.3,
        "CFP_U_KhetPartug_Long_M81", 0.3,
        "CFP_U_KhetPartug_Long_EDRL", 0.2,
        "CFP_U_KhetPartug_Long_Brown", 0.2,
        "CFP_U_KhetPartug_Long_Creme", 0.2,
        "CFP_U_KhetPartug_Long_Grey", 0.2,
        "CFP_U_KhetPartug_Long_Purple", 0.2,
        "CFP_U_KhetPartug_Long_Tan", 0.2,
        "CFP_U_KhetPartug_Long_White", 0.2,
        "CFP_U_KhetPartug_Short_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
        "CFP_U_KhetPartug_Short_Brown", 0.2,
        "CFP_U_KhetPartug_Short_Creme", 0.2,
        "CFP_U_KhetPartug_Short_Grey", 0.2,
        "CFP_U_KhetPartug_Short_Purple", 0.2,
        "CFP_U_KhetPartug_Short_Tan", 0.4,
        "CFP_U_KhetPartug_Short_White", 0.2,
        "CFP_GUER_TanTee", 0.4,
        "CFP_GUER_Tigerpants", 0.4,
        "CFP_GUER_ERDLpants", 0.4,
        "CFP_GUER_ChocChippants", 0.4,
        "CFP_GUER_Khk_Wdl", 0.4,
        "CFP_U_KhetPartug_Short_Black", 0.2
            };

        // Headgear
            headgearList[] = {
        "CUP_H_TKI_Lungee_Open_01", 0.2,
        "CUP_H_TKI_Lungee_Open_02", 0.2,
        "CUP_H_TKI_Lungee_Open_03", 0.2,
        "CUP_H_TKI_Lungee_Open_04", 0.2,
        "CUP_H_TKI_Lungee_Open_05", 0.2,
        "CUP_H_TKI_Lungee_Open_06", 0.2,
        "CFP_Lungee_Open_M81", 0.5,
        "CFP_Lungee_Open_Tan", 0.2,
        "CFP_Lungee_Open_LightOlive", 0.2,
        "CFP_Lungee_Open_Grey", 0.2,
        "CFP_Lungee_Open_Creme", 0.2,
        "CFP_Lungee_Open_Brown", 0.2,
        "CFP_Lungee_Open_BlueGrey", 0.2,
        "CFP_Lungee_Open_Blue", 0.2
            };

        // Vests
            vestList[] = {
        "CFP_TakJacket_Woodland", 0.2,
        "CFP_TakJacket_Marpat", 0.2,
        "CFP_TakJacket_M81", 0.2,
        "CFP_TakJacket_EDRL", 0.2,
        "CFP_TakJacket_ChocChip", 0.2,
        "CFP_TakJacket_DDPM", 0.2,
        "CFP_TakJacket_SudanWoodland", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2
            };

        // Facewear
            facewearList[] = {
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfbeard_white", 0.2,
        "CFP_Scarfbeard_grey", 0.2,
        "CFP_Scarfbeard_green", 0.2,
        "CFP_Scarfbeard_tan", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Shemagh_Half_White", 0.3,
        "CFP_Shemagh_Half_Tan", 0.3,
        "CFP_Shemagh_Half_Black", 0.3
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

    class CFP_B_SDMilitia_Soldier_16 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militiaman AT";
        genericNames = "AfroMen";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_U_KhetPartug_Long_Creme";

        linkedItems[] = {"CFP_TakJacket_SudanWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_SudanWoodland","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_M14","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_srifle_M14","CUP_launch_RPG7V"};

        magazines[] = {"20Rnd_762x51_Mag","CUP_PG7V_M","20Rnd_762x51_Mag"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","CUP_PG7V_M","20Rnd_762x51_Mag"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"20Rnd_762x51_Mag",20},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_KhetPartug_Long_Creme",{{"FirstAidKit",1},{"20Rnd_762x51_Mag",2,20}}},{"CFP_TakJacket_SudanWoodland",{{"20Rnd_762x51_Mag",5,20}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Uniforms
            uniformList[] = {
        "CFP_U_KhetPartug_Long_Olive", 0.2,
        "CFP_U_KhetPartug_Short_Olive", 0.2,
        "CFP_U_KhetPartug_Long_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_EDRL", 0.3,
        "CFP_U_KhetPartug_Long_Black", 0.2,
        "CFP_U_KhetPartug_Short_M81", 0.3,
        "CFP_U_KhetPartug_Long_M81", 0.3,
        "CFP_U_KhetPartug_Long_EDRL", 0.2,
        "CFP_U_KhetPartug_Long_Brown", 0.2,
        "CFP_U_KhetPartug_Long_Creme", 0.2,
        "CFP_U_KhetPartug_Long_Grey", 0.2,
        "CFP_U_KhetPartug_Long_Purple", 0.2,
        "CFP_U_KhetPartug_Long_Tan", 0.2,
        "CFP_U_KhetPartug_Long_White", 0.2,
        "CFP_U_KhetPartug_Short_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
        "CFP_U_KhetPartug_Short_Brown", 0.2,
        "CFP_U_KhetPartug_Short_Creme", 0.2,
        "CFP_U_KhetPartug_Short_Grey", 0.2,
        "CFP_U_KhetPartug_Short_Purple", 0.2,
        "CFP_U_KhetPartug_Short_Tan", 0.4,
        "CFP_U_KhetPartug_Short_White", 0.2,
        "CFP_GUER_TanTee", 0.4,
        "CFP_GUER_Tigerpants", 0.4,
        "CFP_GUER_ERDLpants", 0.4,
        "CFP_GUER_ChocChippants", 0.4,
        "CFP_GUER_Khk_Wdl", 0.4,
        "CFP_U_KhetPartug_Short_Black", 0.2
            };

        // Headgear
            headgearList[] = {
        "CUP_H_TKI_Lungee_Open_01", 0.2,
        "CUP_H_TKI_Lungee_Open_02", 0.2,
        "CUP_H_TKI_Lungee_Open_03", 0.2,
        "CUP_H_TKI_Lungee_Open_04", 0.2,
        "CUP_H_TKI_Lungee_Open_05", 0.2,
        "CUP_H_TKI_Lungee_Open_06", 0.2,
        "CFP_Lungee_Open_M81", 0.5,
        "CFP_Lungee_Open_Tan", 0.2,
        "CFP_Lungee_Open_LightOlive", 0.2,
        "CFP_Lungee_Open_Grey", 0.2,
        "CFP_Lungee_Open_Creme", 0.2,
        "CFP_Lungee_Open_Brown", 0.2,
        "CFP_Lungee_Open_BlueGrey", 0.2,
        "CFP_Lungee_Open_Blue", 0.2
            };

        // Vests
            vestList[] = {
        "CFP_TakJacket_Woodland", 0.2,
        "CFP_TakJacket_Marpat", 0.2,
        "CFP_TakJacket_M81", 0.2,
        "CFP_TakJacket_EDRL", 0.2,
        "CFP_TakJacket_ChocChip", 0.2,
        "CFP_TakJacket_DDPM", 0.2,
        "CFP_TakJacket_SudanWoodland", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2
            };

        // Facewear
            facewearList[] = {
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Shemagh_Half_White", 0.3,
        "CFP_Shemagh_Half_Tan", 0.3,
        "CFP_Shemagh_Half_Black", 0.3
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

    class CFP_B_SDMilitia_Soldier_17 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia Sniper";
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_African","LanguagePER_F"};

        uniformClass = "CFP_U_KhetPartug_Long_olive";

        linkedItems[] = {"CFP_TakJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_KhetPartug_Long_olive",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10}}},{"CFP_TakJacket_EDRL",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        // Uniforms
            uniformList[] = {
        "CFP_U_KhetPartug_Long_Olive", 0.2,
        "CFP_U_KhetPartug_Short_Olive", 0.2,
        "CFP_U_KhetPartug_Long_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_EDRL", 0.3,
        "CFP_U_KhetPartug_Long_Black", 0.2,
        "CFP_U_KhetPartug_Short_M81", 0.3,
        "CFP_U_KhetPartug_Long_M81", 0.3,
        "CFP_U_KhetPartug_Long_EDRL", 0.2,
        "CFP_U_KhetPartug_Long_Brown", 0.2,
        "CFP_U_KhetPartug_Long_Creme", 0.2,
        "CFP_U_KhetPartug_Long_Grey", 0.2,
        "CFP_U_KhetPartug_Long_Purple", 0.2,
        "CFP_U_KhetPartug_Long_Tan", 0.2,
        "CFP_U_KhetPartug_Long_White", 0.2,
        "CFP_U_KhetPartug_Short_Woodland", 0.3,
        "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
        "CFP_U_KhetPartug_Short_Brown", 0.2,
        "CFP_U_KhetPartug_Short_Creme", 0.2,
        "CFP_U_KhetPartug_Short_Grey", 0.2,
        "CFP_U_KhetPartug_Short_Purple", 0.2,
        "CFP_U_KhetPartug_Short_Tan", 0.4,
        "CFP_U_KhetPartug_Short_White", 0.2,
        "CFP_GUER_TanTee", 0.4,
        "CFP_GUER_Tigerpants", 0.4,
        "CFP_GUER_ERDLpants", 0.4,
        "CFP_GUER_ChocChippants", 0.4,
        "CFP_GUER_Khk_Wdl", 0.4,
        "CFP_U_KhetPartug_Short_Black", 0.2
            };

        // Headgear
            headgearList[] = {
        "CUP_H_TKI_Lungee_Open_01", 0.2,
        "CUP_H_TKI_Lungee_Open_02", 0.2,
        "CUP_H_TKI_Lungee_Open_03", 0.2,
        "CUP_H_TKI_Lungee_Open_04", 0.2,
        "CUP_H_TKI_Lungee_Open_05", 0.2,
        "CUP_H_TKI_Lungee_Open_06", 0.2,
        "CFP_Lungee_Open_M81", 0.5,
        "CFP_Lungee_Open_Tan", 0.2,
        "CFP_Lungee_Open_LightOlive", 0.2,
        "CFP_Lungee_Open_Grey", 0.2,
        "CFP_Lungee_Open_Creme", 0.2,
        "CFP_Lungee_Open_Brown", 0.2,
        "CFP_Lungee_Open_BlueGrey", 0.2,
        "CFP_Lungee_Open_Blue", 0.2
            };

        // Vests
            vestList[] = {
        "CFP_TakJacket_Woodland", 0.2,
        "CFP_TakJacket_Marpat", 0.2,
        "CFP_TakJacket_M81", 0.2,
        "CFP_TakJacket_EDRL", 0.2,
        "CFP_TakJacket_ChocChip", 0.2,
        "CFP_TakJacket_DDPM", 0.2,
        "CFP_TakJacket_SudanWoodland", 0.2,
        "CFP_UtilityJacket_Woodland", 0.2,
        "CFP_UtilityJacket_M81", 0.2,
        "CFP_UtilityJacket_EDRL", 0.2,
        "CFP_UtilityJacket_ChocChip", 0.2
            };

        // Facewear
            facewearList[] = {
        "CFP_Shemagh_Neck_M81", 0.4,
        "CFP_Shemagh_Neck", 0.2,
        "CFP_Shemagh_Neck_Tan", 0.2,
        "CFP_Shemagh_Neck_Red", 0.2,
        "CFP_Shemagh_Neck_White", 0.2,
        "CFP_Scarfbeard_white", 0.2,
        "CFP_Scarfbeard_grey", 0.2,
        "CFP_Scarfbeard_green", 0.2,
        "CFP_Scarfbeard_tan", 0.2,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
        "CFP_Shemagh_Half_White", 0.3,
        "CFP_Shemagh_Half_Tan", 0.3,
        "CFP_Shemagh_Half_Black", 0.3
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

    class CFP_B_SDMilitia_Soldier_18 : CFP_B_SDMilitia_Soldier_15 {

        displayName = "Militia Machinegunner";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_KhetPartug_Long_White",{{"FirstAidKit",1}}},{"CFP_UtilityJacket_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_B_AlicePack_Khaki",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_19 : CFP_B_SDMilitia_Soldier_17 {

        displayName = "Militia Engineer";
        engineer = 1;

        linkedItems[] = {"CUP_V_OI_TKI_Jacket6_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket6_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_Brown",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CUP_V_OI_TKI_Jacket6_02",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AlicePack_Khaki",{{"ToolKit",1},{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"APERSTripMine_Wire_Mag",3,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_B_SDMilitia_Soldier_20 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        genericNames = "AfroMen";
        engineer = 1;
        side = 1;
        faction = "CFP_B_SDMilitia";

        identityTypes[] = {"Head_African","Language_PER_F"};

        uniformClass = "CFP_BDU_ChocChip";

        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_BDU_ChocChip",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"CUP_H_RUS_TSH_4_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_SDMilitia_Offroad_01  : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Offroad_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_07";

    };

    class CFP_B_SDMilitia_UAZ_DShKM_01  : CUP_O_UAZ_MG_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_UAZ_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_01"; };
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

    class CFP_B_SDMilitia_Ural_ZU_23_01  : CUP_O_Ural_ZU23_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Ural_ZU_23_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (ZU-23)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_01"; };
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

    class CFP_B_SDMilitia_Pickup_PK_01  : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Pickup_PK_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_01"; };
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

    class CFP_B_SDMilitia_Pickup_01  : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Pickup_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

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

    class CFP_B_SDMilitia_Land_Rover_01  : CUP_O_LR_Transport_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Land_Rover_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_sand_base_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_special_acr_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CZD";

    };

    class CFP_B_SDMilitia_Land_Rover_SPG_01  : CUP_O_LR_SPG9_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Land_Rover_SPG_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (SPG-9)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_01"; };
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

    class CFP_B_SDMilitia_Pickup_Militia_01  : CFP_B_SDMilitia_Pickup_01 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Pickup_Militia_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (Militia)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_15";

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

    class CFP_B_SDMilitia_Pickup_PK_Militia_01  : CFP_B_SDMilitia_Pickup_PK_01 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Pickup_PK_Militia_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK/Militia)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_15";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_15"; };
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

    class CFP_B_SDMilitia_Offroad_Militia_01  : C_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Offroad_Militia_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Militia)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_15";

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

    class CFP_B_SDMilitia_Truck_01  : C_Van_01_transport_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Truck_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

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

    class CFP_B_SDMilitia_Walid_01  : CUP_O_BTR40_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Walid_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";


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

    class CFP_B_SDMilitia_Walid_DShKM_01  : CUP_O_BTR40_MG_TKA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_Walid_DShKM_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid (DShKM)";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_01"; };
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

    class CFP_B_SDMilitia_T55_01  : CUP_O_T55_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\b_sdmilitia\data\preview\CFP_B_SDMilitia_T55_01.JPG;
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 1;
        faction = "CFP_B_SDMilitia";
        crew = "CFP_B_SDMilitia_Soldier_20";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDMilitia_Soldier_20"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\T55\t55_body_sudan.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\T55\t55_tower_sudan.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sudan";

    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_B_SDMilitia_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_SDMilitia_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_FNFAL5061,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_B_SDMilitia_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Launchers Box;
        class TransportMagazines {
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_SDMilitia_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(SP_0000_Standard_BattleDressUniform_GreenOlive,15);
            item_xx(CFP_U_BattleDressUniform_woodlanddark,15);
            item_xx(CFP_Uniform_Sudan_14,15);
            item_xx(CFP_Uniform_SPLMN_01,15);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,15);
            item_xx(CFP_Uniform_Sudan_16,15);
            item_xx(CFP_Uniform_SPLM_27,15);
            item_xx(CFP_Uniform_RSF_01,15);
            item_xx(CFP_Uniform_SPLM_24,15);
            item_xx(CFP_U_KhetPartug_Short_BlueGrey,15);
            item_xx(CFP_U_KhetPartug_Short_GreenOlive,15);
            item_xx(CFP_Uniform_SPLM_16,15);
            item_xx(CFP_U_KhetPartug_Long_Creme,15);
            item_xx(CFP_Uniform_Sudan_05,15);
        };
    };
    class CFP_B_SDMilitia_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(SP_SSh68Helmet_Tan1,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(CFP_Cap_Sudan_03,10);
            item_xx(CFP_SPLM_RPG_Backpack,10);
            item_xx(CUP_V_OI_TKI_Jacket3_02,10);
            item_xx(SP_SSh68Helmet_Green1,10);
            item_xx(CFP_Bandolier_SPLM_01,10);
            item_xx(CFP_PatrolCap_M81,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(CFP_Basic_Helmet_Gray_Green,10);
            item_xx(CUP_B_AlicePack_Egineer,10);
            item_xx(CUP_V_OI_TKI_Jacket1_01,10);
            item_xx(CUP_B_AlicePack_Medic,10);
            item_xx(CFP_UtilityJacket_M81,10);
            item_xx(CFP_Cap_Sudan_08,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_PatrolCap_Green,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_01,10);
            item_xx(CFP_Jacket_SPLM_02,10);
            item_xx(CFP_Lungee_Open_Tan,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_Shemagh_CheckTan,10);
            item_xx(CFP_Lungee_Shemagh,10);
            item_xx(CFP_Lungee_Open_LightOlive,10);
            item_xx(CUP_V_OI_TKI_Jacket6_03,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_H_SLA_TankerHelmet,10);
        };
    };
    class CFP_B_SDMilitia_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Sudan Rapid Support Forces / Janjaweed Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_arifle_FNFAL5061,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CFP_UtilityJacket_Woodland,10);
            item_xx(SP_SSh68Helmet_Tan1,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(CFP_Cap_Sudan_03,10);
            item_xx(CFP_SPLM_RPG_Backpack,10);
            item_xx(CUP_V_OI_TKI_Jacket3_02,10);
            item_xx(SP_SSh68Helmet_Green1,10);
            item_xx(CFP_Bandolier_SPLM_01,10);
            item_xx(CFP_PatrolCap_M81,10);
            item_xx(CFP_TakJacket_ChocChip,10);
            item_xx(CFP_Basic_Helmet_Gray_Green,10);
            item_xx(CUP_B_AlicePack_Egineer,10);
            item_xx(CUP_V_OI_TKI_Jacket1_01,10);
            item_xx(CUP_B_AlicePack_Medic,10);
            item_xx(CFP_UtilityJacket_M81,10);
            item_xx(CFP_Cap_Sudan_08,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(SP_PatrolCap_Green,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(SP_M1Helmet_Green,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_01,10);
            item_xx(CFP_Jacket_SPLM_02,10);
            item_xx(CFP_Lungee_Open_Tan,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(SP_Shemagh_CheckTan,10);
            item_xx(CFP_Lungee_Shemagh,10);
            item_xx(CFP_Lungee_Open_LightOlive,10);
            item_xx(CUP_V_OI_TKI_Jacket6_03,10);
            item_xx(SP_Shemagh_CheckGreen,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_H_SLA_TankerHelmet,10);
            item_xx(SP_0000_Standard_BattleDressUniform_GreenOlive,10);
            item_xx(CFP_U_BattleDressUniform_woodlanddark,10);
            item_xx(CFP_Uniform_Sudan_14,10);
            item_xx(CFP_Uniform_SPLMN_01,10);
            item_xx(CFP_U_BattleDressUniform_woodlandlight,10);
            item_xx(CFP_Uniform_Sudan_16,10);
            item_xx(CFP_Uniform_SPLM_27,10);
            item_xx(CFP_Uniform_RSF_01,10);
            item_xx(CFP_Uniform_SPLM_24,10);
            item_xx(CFP_U_KhetPartug_Short_BlueGrey,10);
            item_xx(CFP_U_KhetPartug_Short_GreenOlive,10);
            item_xx(CFP_Uniform_SPLM_16,10);
            item_xx(CFP_U_KhetPartug_Long_Creme,10);
            item_xx(CFP_Uniform_Sudan_05,10);
        };
    };
};