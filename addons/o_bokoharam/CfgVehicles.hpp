//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.5.0.1711091
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

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

     class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_MG_TKA_OCimport_02 : CUP_O_LR_MG_TKA_OCimport_01 { 
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

    class O_G_Offroad_01_armed_F;
    class O_G_Offroad_01_armed_F_OCimport_01 : O_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_armed_F_OCimport_02 : O_G_Offroad_01_armed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class CUP_B_M1151_M2_USA;
    class CUP_B_M1151_M2_USA_OCimport_01 : CUP_B_M1151_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1151_M2_USA_OCimport_02 : CUP_B_M1151_M2_USA_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
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



    class CFP_O_BH_Rifleman_AK47_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AK47)";
        side = 0;
	genericNames = "AfroMen";
        faction = "CFP_O_BOKOHARAM";

        identityTypes[] = {"Head_African","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_KhetPartug_Short_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_Shemagh_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	randomGearProbability = 100;

	// Boko Haram Gear
		uniformList[] = {
	    "CFP_U_KhetPartug_Short_M81", 0.25,
	    "CFP_U_KhetPartug_Long_M81", 0.25,
	    "CFP_U_KhetPartug_Long_olive", 0.25,
	    "CFP_U_KhetPartug_Long_olive_polygon", 0.25,
	    "CFP_U_KhetPartug_Long_light_olive", 0.25,
	    "CFP_U_KhetPartug_Short_olive", 0.25,
	    "CFP_U_KhetPartug_Short_light_olive", 0.25,
	    "CFP_U_KhetPartug_Short_olive_polygon", 0.25,
	    "CUP_O_TKI_Khet_Partug_04", 0.25,
	    "CUP_O_TKI_Khet_Partug_02", 0.25
		};

	// Boko Haram Headgear
		headgearList[] = {
	    "SP_Shemagh_Black", 0.2,
	    "SP_Shemagh_CheckBlack", 0.2,
	    "SP_Shemagh_CheckGreen", 0.2,
	    "SP_Shemagh_CheckRed", 0.2,
	    "SP_Shemagh_CheckTan", 0.2,
	    "SP_Shemagh_CheckWhite", 0.2,
	    "SP_Shemagh_Green", 0.2,
	    "SP_Shemagh_Grey", 0.2,
	    "SP_Shemagh_Tan", 0.2,
	    "SP_Shemagh_White", 0.2,
	    "CUP_H_TK_Lungee", 0.2,
	    "CUP_H_TKI_Lungee_Open_01", 0.2,
	    "CUP_H_TKI_Lungee_Open_02", 0.2,
	    "CUP_H_TKI_Lungee_Open_03", 0.2,
	    "CUP_H_TKI_Lungee_Open_04", 0.2,
	    "CUP_H_TKI_Lungee_Open_05", 0.2,
	    "CUP_H_TKI_Lungee_Open_06", 0.2,
	    "CUP_H_TKI_Lungee_01", 0.2,
	    "CUP_H_TKI_Lungee_02", 0.2,
	    "CUP_H_TKI_Lungee_03", 0.2,
	    "CUP_H_TKI_Lungee_04", 0.2,
	    "CUP_H_TKI_Lungee_05", 0.2,
	    "CUP_H_TKI_Lungee_06", 0.2
	        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2;  _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_BH_Rifleman_AK74_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Rifleman [AK74]";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"CUP_H_TKI_Lungee_02","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
  
    };

    class CFP_O_BH_Team_Leader_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Team Leader [AKM]";
       
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"CUP_H_TKI_Lungee_Open_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    
    };

    class CFP_O_BH_Machine_Gunner_PKM_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Machine Gunner [PKM]";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{}},{"CUP_V_OI_TKI_Jacket2_01",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{},"SP_Shemagh_CheckGreen","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Rifleman_AT_AK47_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Rifleman AT [AK47]";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"H_Shemag_olive","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Grenadier_AK74_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Grenadier [AK74]";
       
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",3,1}}},{},"CUP_H_TKI_Lungee_Open_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Medic_AK47_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Medic [AK47]";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacChestrig_cbr_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_TK_Medic_Desert",{}},"SP_Shemagh_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Explosive_Specialist_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Explosive Specialist";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_KhetPartug_Long_M81",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"SP_Carryall_Green",{{"DemoCharge_Remote_Mag",5,1},{"ATMine_Range_Mag",1,1},{"APERSTripMine_Wire_Mag",2,1}}},"SP_Shemagh_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Sniper_SVD_01 : CFP_O_BH_Rifleman_AK47_01 {
        
        displayName = "Sniper [SVD]";
       
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"V_TacChestrig_grn_F",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"SP_Shemagh_CheckTan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Sniper_Enfield_01 : CFP_O_BH_Rifleman_AK47_01 {
       
        displayName = "Sniper [Enfield]";
        
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield_rail","","","CUP_optic_LeupoldM3LR",{"CUP_10x_303_M",10},{},""},{},{},{"CFP_U_KhetPartug_Short_M81",{{"CUP_10x_303_M",3,10}}},{"V_TacChestrig_grn_F",{{"CUP_10x_303_M",7,10}}},{},"CUP_H_TKI_Lungee_05","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_BH_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

       class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_2.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISISDirty2";

    };

    class CFP_O_BH_Offroad_MG_01 : O_G_Offroad_01_armed_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad MG";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
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

    class CFP_O_BH_Pickup_PK_01 : CUP_I_Datsun_PK_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup PK";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Grenadier_AK74_01";

         class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_2.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISDatsun9c2";

    };

    class CFP_O_BH_Landrover_SPG9_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Landrover [SPG9]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK47_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_1.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS";

    };

    class CFP_O_BH_Humvee_M2_01 : CUP_B_M1151_M2_USA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Humvee [M2]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
        };



         class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\Data\hmmwv_body_canvas_1_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_parts_1_ca.paa'];_unit setObjectTextureGlobal [4,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gpk_tower_co.paa'];_unit setObjectTextureGlobal [5,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_01_co.paa'];_unit setObjectTextureGlobal [6,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_co.paa'];_unit setObjectTextureGlobal [7,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_Des_co.paa'];_unit setObjectTextureGlobal [8,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_wl_co.paa'];_unit setObjectTextureGlobal [9,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_O_BH_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Team_Leader_01";

         class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_is_4.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "URALIS4";

    };

    class CFP_O_BH_Landrover_M2_01 : CUP_O_LR_MG_TKA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Landrover [M2]";
        side = 0;
        faction = "CFP_O_BOKOHARAM";
        crew = "CFP_O_BH_Rifleman_AK74_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_BH_Rifleman_AK47_01"; };
        };



         class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_2.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS2";

    };

};