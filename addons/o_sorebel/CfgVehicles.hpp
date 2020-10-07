//////////////////////////////////////////////////////////////////////////////////
#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_I_Datsun_PK_TK;
    class CUP_I_Datsun_PK_TK_OCimport_01 : CUP_I_Datsun_PK_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_TK_OCimport_02 : CUP_I_Datsun_PK_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_I_V3S_Open_TKG;
    class CUP_I_V3S_Open_TKG_OCimport_01 : CUP_I_V3S_Open_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Open_TKG_OCimport_02 : CUP_I_V3S_Open_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_UAZ_MG_CHDKZ;
    class CUP_O_UAZ_MG_CHDKZ_OCimport_01 : CUP_O_UAZ_MG_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_MG_CHDKZ_OCimport_02 : CUP_O_UAZ_MG_CHDKZ_OCimport_01 {
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

    class CUP_O_TK_INS_Bomber;
    class CUP_O_TK_INS_Bomber_OCimport_01 : CUP_O_TK_INS_Bomber { scope = 0; class EventHandlers; };
    class CUP_O_TK_INS_Bomber_OCimport_02 : CUP_O_TK_INS_Bomber_OCimport_01 { class EventHandlers; };


    class CFP_O_SOREBEL_Rifleman_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Rifleman_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
    	genericNames = "Afromen";
        faction = "CFP_O_SOREBEL";

        identityTypes[] = {"Head_African","LanguagePER_F"};
        uniformClass = "U_I_C_Soldier_Bandit_4_F";

        weapons[] = {"CUP_arifle_AK47","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","hgun_Rook40_F","Throw","Put"};
        linkedItems[] = {"V_BandollierB_cbr","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_BandollierB_cbr","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"U_I_C_Soldier_Bandit_4_F",{{"FirstAidKit",1},{"Chemlight_red",1,1}}},{"V_BandollierB_cbr",{{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// Somali Clothing
    		uniformList[] = {
    	"CFP_GUER_TanTee", 0.3,
        "CFP_GUER_M81", 0.3,
        "CFP_GUER_ERDLpants", 0.3,
        "CFP_GUER_GreenTan", 0.3,
        "CFP_GUER_MCampants", 0.3,
        "CFP_GUER_PolyDespants", 0.3,
        "CFP_GUER_M81Tee", 0.3,
        "CFP_GUER_PolyDesTee", 0.3,
        "CFP_Polo_RealMadrid", 0.2,
        "CFP_Polo_Liverpool", 0.2,
        "CFP_Polo_Sudan", 0.2,
        "CFP_Bandit_Adidas", 0.2,
        "CFP_Bandit_Chang", 0.2,
        "CFP_Bandit_Africa", 0.2,
        "U_I_C_Soldier_Bandit_4_F", 0.2,
    	"U_I_C_Soldier_Bandit_1_F", 0.2,
    	"CUP_U_I_GUE_Anorak_03", 0.2,
    	"U_I_C_Soldier_Bandit_5_F", 0.2,
    	"U_I_C_Soldier_Bandit_2_F", 0.2,
    	"U_I_C_Soldier_Bandit_3_F", 0.2,
    	"U_C_Poloshirt_salmon", 0.2,
    	"U_I_C_Soldier_Para_4_F", 0.2,
    	"CFP_U_WorkUniform_M81Des", 0.2,
    	"U_C_Poloshirt_blue", 0.2,
    	"U_C_Poloshirt_tricolour", 0.2,
    	"U_C_Man_casual_5_F", 0.2,
    	"U_I_C_Soldier_Para_5_F", 0.2,
    	"U_BG_Guerrilla_6_1", 0.2
    		};

    	// Somali Headgear
    		headgearList[] = {
    	"", 0.5,
    	"H_Bandanna_khk", 0.05,
    	"H_Bandanna_sand", 0.05,
    	"H_Cap_blk", 0.05,
    	"H_Booniehat_khk", 0.05,
    	"H_Cap_oli", 0.05,
    	"H_Bandanna_camo", 0.05,
    	"H_Cap_grn", 0.05,
        "CFP_PatrolCap_EDRL", 0.05,
        "CFP_PatrolCap_M81", 0.05,
        "CFP_PatrolCap_PolygonWoodland", 0.05,
        "CFP_PatrolCap_Woodland", 0.05,
        "CFP_BoonieHat_AfricanWoodland", 0.05,
        "CFP_BoonieHat_PolygonDesert", 0.05,
        "CFP_BoonieHat_PolygonWoodland", 0.05,
        "CFP_BoonieHat_M81", 0.05
    		};

        // Somali Facewear

            facewearList[] = {
        "", 0.6,
        "G_Aviator", 0.2,
        "CFP_Oakleys_Clr", 0.2,
        "CFP_Oakleys_Drk", 0.2,
        "CFP_Oakleys_Embr", 0.2,
        "CFP_Neck_Wrap2", 0.3,
        "CFP_Neck_Wrap3", 0.3,
        "CFP_Neck_Wrap4", 0.3,
        "CFP_Neck_Plain2", 0.3,
        "CFP_Neck_Plain3", 0.3,
        "CFP_Neck_Plain4", 0.3,
        "CFP_Scarfshades_tan", 0.3,
        "CFP_Scarfshades_grey", 0.3,
        "CFP_Scarfshades_white", 0.3,
        "CFP_Scarfshades_green", 0.3,
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



         // Somali Pirate Vests
            vestList[] = {
            "CFP_UtilityJacket_Woodland", 0.4,
            "CFP_UtilityJacket_M81", 0.4,
            "CFP_UtilityJacket_EDRL", 0.4,
            "CFP_UtilityJacket_ChocChip", 0.4,
            "CFP_Alice_Vest2", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_Lime", 0.4,
            "CFP_UtilityJacket_PolygonWoodland", 0.2,
            "CFP_TakJacket_PolygonWoodland", 0.1,
            "CFP_TakJacket_PolygonDesert", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_UtilityJacket_PolygonDesert", 0.2
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

    class CFP_O_SOREBEL_Sharpshooter_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Sharpshooter_01.JPG;

        displayName = "Sharpshooter";


        weapons[] = {"CUP_arifle_FNFAL_railed","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_FNFAL_railed","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL_railed","","","CUP_optic_LeupoldM3LR",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"U_I_C_Soldier_Bandit_1_F",{{"FirstAidKit",1}}},{"CUP_V_O_TK_Vest_1",{{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"HandGrenade",2,1},{"CUP_20Rnd_762x51_FNFAL_M",3,20}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Grenadier_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Grenadier_01.JPG;

        displayName = "Grenadier";


        weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"};
        linkedItems[] = {"CFP_AK_Vest_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_Vest_LOlive","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CUP_U_I_GUE_Anorak_03",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"1Rnd_Smoke_Grenade_shell",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1}}},{"CFP_AK_Vest_LOlive",{{"CUP_30Rnd_545x39_AK_M",3,30},{"CUP_1Rnd_HE_GP25_M",4,1}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Rifleman_Light_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Rifleman_Light_01.JPG;

        displayName = "Rifleman (Light)";


        weapons[] = {"CUP_arifle_FNFAL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_FNFAL","Throw","Put"};
        linkedItems[] = {"CFP_AK_Vest_Lime","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_Vest_Lime","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"U_I_C_Soldier_Bandit_5_F",{{"CUP_20Rnd_762x51_FNFAL_M",1,20}}},{"CFP_AK_Vest_Lime",{{"CUP_20Rnd_762x51_FNFAL_M",3,20}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Warlord_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Warlord_01.JPG;

        displayName = "Warlord";


        weapons[] = {"CUP_arifle_AK74M_GL","CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","CUP_hgun_Makarov","Throw","Put"};
        linkedItems[] = {"V_TacVest_camo","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_TacVest_camo","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"U_I_C_Soldier_Bandit_3_F",{{"CUP_30Rnd_545x39_AK_M",1,30},{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{"V_TacVest_camo",{{"HandGrenade",2,1},{"O_IR_Grenade",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_8Rnd_9x18_Makarov_M",1,8},{"CUP_1Rnd_HE_GP25_M",2,1}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Autorifleman_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Autorifleman_01.JPG;

        displayName = "Autorifleman [RPK]";


        weapons[] = {"CUP_arifle_RPK74_45","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74_45","Throw","Put"};
        linkedItems[] = {"CFP_AK_Vest_Tan","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_Vest_Tan","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_45","","","",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"U_C_Poloshirt_salmon",{}},{"CFP_AK_Vest_Tan",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",3,45}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    };

    class CFP_O_SOREBEL_Autorifleman_2_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Autorifleman_2_01.JPG;

        displayName = "Machine Gunner [PKM]";


        weapons[] = {"CUP_lmg_Pecheneg","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg","Throw","Put"};
        linkedItems[] = {"CUP_V_I_Guerilla_Jacket","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_I_Guerilla_Jacket","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{}},{"CUP_V_I_Guerilla_Jacket",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Bonesetter_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Bonesetter_01.JPG;

        displayName = "Bonesetter";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        backpack = "CFP_Kitbag_PolygonWoodland";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_06","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_06","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81Des",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CUP_V_OI_TKI_Jacket3_06",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_Kitbag_PolygonWoodland",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Rifleman_AT_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Rifleman_AT_01.JPG;

        displayName = "Rifleman AT";

        backpack = "CFP_RPGPack_Khaki";
        weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V2","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V_PGO7V2","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_RPG7V_PGO7V2","","","CUP_optic_PGO7V2",{"CUP_PG7VL_M",1},{},""},{},{"U_C_Poloshirt_blue",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7VL_M",1,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Marksman_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Marksman_01.JPG;

        displayName = "Marksman";


        weapons[] = {"CUP_arifle_FNFAL_railed","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_FNFAL_railed","Throw","Put"};
        linkedItems[] = {"CFP_AK_Vest_EDRL","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CFP_AK_Vest_EDRL","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL_railed","","","CUP_optic_LeupoldM3LR",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"U_C_Poloshirt_tricolour",{}},{"CFP_AK_Vest_EDRL",{{"CUP_20Rnd_762x51_FNFAL_M",3,20}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Rifleman_AA_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Rifleman_AA_01.JPG;

        displayName = "Rifleman AA";


        weapons[] = {"CUP_arifle_AK74","CUP_launch_Igla","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_Igla","Throw","Put"};
        linkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_Igla_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_Igla_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{"CUP_launch_Igla","","","",{"CUP_Igla_M",1},{},""},{},{"U_I_C_Soldier_Para_2_F",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

     class CFP_O_SOREBEL_Asst_Gunner_DShKM_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_DShKM_High_01.JPG;
        displayName = "Asst. Gunner [DShKM]";

        linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"U_I_C_Soldier_Bandit_4_F",{{"Chemlight_red",1,1},{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1}}},{"V_BandollierB_cbr",{{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"","CFP_Beard",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Asst_Gunner_SPG_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_SPG_01.JPG;
        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"U_I_C_Soldier_Bandit_1_F",{{"Chemlight_red",1,1},{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1}}},{"V_BandollierB_cbr",{{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Asst_Gunner_Mortar_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_Mortar_01.JPG;
        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"V_BandollierB_cbr","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_BandollierB_cbr","","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        weapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        respawnWeapons[] = {"CUP_arifle_AK47","hgun_Rook40_F"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","16Rnd_9x21_Mag"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"U_C_Poloshirt_salmon",{{"Chemlight_red",1,1},{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1}}},{"V_BandollierB_cbr",{{"16Rnd_9x21_Mag",1,16},{"SmokeShell",1,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Technical_PK_01 : CUP_I_Datsun_PK_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Technical_PK_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical (PK)";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SOREBEL_Rifleman_01"; };
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

    class CFP_O_SOREBEL_Truck_01 : CUP_I_V3S_Open_TKG_OCimport_02 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Truck_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SOREBEL_Technical_DSHkM_01 : CUP_O_UAZ_MG_CHDKZ_OCimport_02 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Technical_DSHkM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical (DSHkM)";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa"
        };

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_SOREBEL_Rifleman_01"; };
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

    class CUP_Hilux_unarmed_Base;
    class CFP_O_SOREBEL_Hilux_01 :CUP_Hilux_unarmed_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_DShKM_01 : CUP_Hilux_DSHKM_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_SPG_01 : CUP_Hilux_SPG9_Base {
        author = "CFP";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_Igla_01 : CUP_Hilux_igla_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_Metis_01 : CUP_Hilux_metis_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_Podnos_01 : CUP_Hilux_podnos_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_MLRS_01 : CUP_Hilux_MLRS_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_ZU_23_01 : CUP_Hilux_zu23_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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
    class CFP_O_SOREBEL_Hilux_AGS_30_01 : CUP_Hilux_AGS30_Base {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
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

    class CFP_O_SOREBEL_Technical_SPG_01 : CUP_O_UAZ_SPG9_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Technical_SPG_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Technical (SPG 9)";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_SOREBEL_Rifleman_01"; };
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

    class CUP_O_DSHKM_TK_INS;
    class CFP_O_SOREBEL_DShKM_01 : CUP_O_DSHKM_TK_INS {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_DShKM_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
    };

    class CFP_O_SOREBEL_Gunner_DShKM_High_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_DShKM_High_01.JPG;

        displayName = "Gunner [DShKM High]";

        backpack = "CUP_B_DShkM_TripodHigh_Bag";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","H_Bandanna_sand","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","H_Bandanna_sand","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Bandit_2_F",{{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CUP_V_OI_TKI_Jacket3_03",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"H_Bandanna_sand","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Gunner_DShKM_Low_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_DShKM_Low_01.JPG;

        displayName = "Gunner [DShKM Low]";

        backpack = "CUP_B_DShkM_TripodLow_Bag";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","H_Bandanna_camo","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","H_Bandanna_camo","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_01",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"H_Bandanna_camo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Gunner_SPG_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_SPG_01.JPG;

        displayName = "Gunner [SPG-9]";

        backpack = "CUP_B_SPG9_Tripod_Bag";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Para_5_F",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_05",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Gunner_Mortar_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Gunner_Mortar_01.JPG;

        displayName = "Gunner [Mortar]";

        backpack = "CUP_B_Podnos_Bipod_Bag";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","H_Cap_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","H_Cap_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CUP_V_OI_TKI_Jacket2_02",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"H_Cap_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Bombmaker_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Bombmaker_01.JPG;

        displayName = "Bombmaker";
        canDeactivateMines = 1;
        engineer = 1;
        backpack = "CFP_KItbag_Woodland";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_C_Poloshirt_tricolour",{}},{"CUP_V_OI_TKI_Jacket3_01",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CFP_Kitbag_Woodland",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_SOREBEL_Bombmaker_2_01 : CFP_O_SOREBEL_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_sorebel\data\preview\CFP_O_SOREBEL_Bombmaker_2_01.JPG;

        displayName = "Bombmaker";
        canDeactivateMines = 1;
        engineer = 1;
        backpack = "CFP_Kitbag_M81";
        weapons[] = {"CUP_arifle_AK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_01","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81Des",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30}}},{"CUP_V_OI_TKI_Jacket2_01",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CFP_Kitbag_M81",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CFP_O_SOREBEL_DShKM_Low_01 : CUP_O_DSHkM_MiniTriPod_TK_INS {

        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM [Low]";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
    };

    class CUP_O_2b14_82mm_TK_INS;
    class CFP_O_SOREBEL_Podnos_2B14_01 : CUP_O_2b14_82mm_TK_INS {

        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
    };

    class CUP_O_SPG9_TK_INS;
    class CFP_O_SOREBEL_SPG_9_01 : CUP_O_SPG9_TK_INS {

        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_SOREBEL";
        crew = "CFP_O_SOREBEL_Rifleman_01";
    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_SOREBEL_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Ammo Box;
        class TransportMagazines {
            mag_xx(Chemlight_red,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(HandGrenade,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(O_IR_Grenade,50);
            mag_xx(SmokeShellOrange,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_SOREBEL_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(hgun_Rook40_F,10);
            weap_xx(CUP_arifle_FNFAL_railed,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_RPK74_45,10);
            weap_xx(CUP_lmg_Pecheneg,10);
            weap_xx(CUP_arifle_AK74,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldM3LR,10);
        };
    };
    class CFP_O_SOREBEL_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
            mag_xx(CUP_Igla_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V_PGO7V2,5);
            weap_xx(CUP_launch_Igla,5);
        };
        class TransportItems {
            item_xx(CUP_optic_PGO7V2,5);
        };
    };
    class CFP_O_SOREBEL_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(U_C_Man_casual_5_F,15);
            item_xx(U_BG_Guerrilla_6_1,15);
            item_xx(U_I_C_Soldier_Para_5_F,15);
            item_xx(U_C_Poloshirt_blue,15);
            item_xx(U_C_Poloshirt_tricolour,15);
            item_xx(CFP_U_WorkUniform_M81Des,15);
            item_xx(U_C_Poloshirt_salmon,15);
            item_xx(U_I_C_Soldier_Bandit_2_F,15);
            item_xx(CUP_U_I_GUE_Anorak_03,15);
            item_xx(U_I_C_Soldier_Bandit_4_F,15);
            item_xx(U_I_C_Soldier_Para_4_F,15);
            item_xx(U_I_C_Soldier_Bandit_1_F,15);
            item_xx(U_I_C_Soldier_Para_2_F,15);
        };
    };
    class CFP_O_SOREBEL_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(V_BandollierB_cbr,10);
            item_xx(H_Cap_grn,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(Binocular,10);
            item_xx(CUP_V_O_TK_Vest_1,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CFP_PatrolCap_Woodland,10);
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(H_Bandanna_sand,10);
            item_xx(CFP_Tactical1_EDRL,10);
            item_xx(H_Cap_oli,10);
            item_xx(V_TacVest_camo,10);
            item_xx(H_Cap_blk,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CUP_V_I_Guerilla_Jacket,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_V_OI_TKI_Jacket3_06,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_AK_VEST_EDRL,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_Tactical1_Woodland,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CFP_Kitbag_EDRL,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_01,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_05,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket2_02,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_Kitbag_Woodland,10);
            item_xx(CUP_V_OI_TKI_Jacket2_01,10);
            item_xx(CFP_Kitbag_M81,10);
        };
    };
    class CFP_O_SOREBEL_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Somali Rebels Supply Box;
        class TransportMagazines {
            mag_xx(Chemlight_red,50);
            mag_xx(16Rnd_9x21_Mag,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(HandGrenade,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(1Rnd_SmokeRed_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(O_IR_Grenade,50);
            mag_xx(SmokeShellOrange,50);
            mag_xx(SmokeShellYellow,50);
            mag_xx(CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(hgun_Rook40_F,10);
            weap_xx(CUP_arifle_FNFAL_railed,10);
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_RPK74_45,10);
            weap_xx(CUP_lmg_Pecheneg,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_launch_RPG7V_PGO7V2,10);
            weap_xx(CUP_launch_Igla,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(V_BandollierB_cbr,10);
            item_xx(H_Cap_grn,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(Binocular,10);
            item_xx(CUP_V_O_TK_Vest_1,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(CFP_AK_VEST_LOlive,10);
            item_xx(CFP_PatrolCap_Woodland,10);
            item_xx(CFP_AK_VEST_Lime,10);
            item_xx(H_Bandanna_sand,10);
            item_xx(CFP_Tactical1_EDRL,10);
            item_xx(H_Cap_oli,10);
            item_xx(V_TacVest_camo,10);
            item_xx(H_Cap_blk,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_AK_VEST_Tan,10);
            item_xx(CUP_V_I_Guerilla_Jacket,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_V_OI_TKI_Jacket3_06,10);
            item_xx(CFP_Kitbag_PolygonWoodland,10);
            item_xx(CFP_RPGPack_Khaki,10);
            item_xx(CFP_AK_VEST_EDRL,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_Tactical1_Woodland,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CFP_Kitbag_EDRL,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_01,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket3_05,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket2_02,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CFP_Kitbag_Woodland,10);
            item_xx(CUP_V_OI_TKI_Jacket2_01,10);
            item_xx(CFP_Kitbag_M81,10);
            item_xx(U_C_Man_casual_5_F,10);
            item_xx(U_BG_Guerrilla_6_1,10);
            item_xx(U_I_C_Soldier_Para_5_F,10);
            item_xx(U_C_Poloshirt_blue,10);
            item_xx(U_C_Poloshirt_tricolour,10);
            item_xx(CFP_U_WorkUniform_M81Des,10);
            item_xx(U_C_Poloshirt_salmon,10);
            item_xx(U_I_C_Soldier_Bandit_2_F,10);
            item_xx(CUP_U_I_GUE_Anorak_03,10);
            item_xx(U_I_C_Soldier_Bandit_4_F,10);
            item_xx(U_I_C_Soldier_Para_4_F,10);
            item_xx(U_I_C_Soldier_Bandit_1_F,10);
            item_xx(U_I_C_Soldier_Para_2_F,10);
            item_xx(CUP_optic_PGO7V2,5);
        };
    };
};