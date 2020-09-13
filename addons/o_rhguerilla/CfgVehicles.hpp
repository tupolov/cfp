#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"


class CBA_Extended_EventHandlers_base;

class CfgVehicles {
	
		class O_G_Soldier_F;
		class O_G_Soldier_F_OCimport_01 : O_G_Soldier_F { scope = 0; class EventHandlers; };
		class O_G_Soldier_F_OCimport_02 : O_G_Soldier_F_OCimport_01 { class EventHandlers; };
		
		class O_crew_F;
		class O_crew_F_OCimport_01 : O_crew_F { scope = 0; class EventHandlers; };
		class O_crew_F_OCimport_02 : O_crew_F_OCimport_01 { class EventHandlers; };
		
		class CUP_SPG9_base;
		class CUP_SPG9_base_OCimport_01 : CUP_SPG9_base { scope = 0; class EventHandlers; class Turrets; };
		class CUP_SPG9_base_OCimport_02 : CUP_SPG9_base_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

		class CUP_2b14_82mm_Base;
		class CUP_2b14_82mm_Base_OCimport_01 : CUP_2b14_82mm_Base { scope = 0; class EventHandlers; class Turrets; };
		class CUP_2b14_82mm_Base_OCimport_02 : CUP_2b14_82mm_Base_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

		class CUP_ZU23_base;
		class CUP_ZU23_base_OCimport_01 : CUP_ZU23_base { scope = 0; class EventHandlers; class Turrets; };
		class CUP_ZU23_base_OCimport_02 : CUP_ZU23_base_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };
	
		class CUP_DSHKM_base;
		class CUP_DSHKM_base_OCimport_01 : CUP_DSHKM_base { scope = 0; class EventHandlers; class Turrets; };
		class CUP_DSHKM_base_OCimport_02 : CUP_DSHKM_base_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
        };
    };

		class CUP_DSHKM_MiniTripod_base;
		class CUP_DSHKM_MiniTripod_base_OCimport_01 : CUP_DSHKM_MiniTripod_base { scope = 0; class EventHandlers; class Turrets; };
		class CUP_DSHKM_MiniTripod_base_OCimport_02 : CUP_DSHKM_MiniTripod_base_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class MainTurret;
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
		
		class CUP_I_T34_NAPA;
		class CUP_I_T34_NAPA_OCimport_01 : CUP_I_T34_NAPA { scope = 0; class EventHandlers; class Turrets; };
		class CFP_O_RHGUERILLAS_T34_01 : CUP_I_T34_NAPA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_T34_01.JPG;
		scope = 2;
        side = 0;
        displayName = "T34 (ZIPRA)";
        faction = "CFP_O_RHGUERILLAS";
        vehicleClass = "CFP_O_RHGUERILLAS_ARMORED";
        camouflage = 4;
        crew = "CFP_O_RHGUERILLAS_Crewman_01";
		typicalCargo[] = {"CFP_O_RHGUERILLAS_Crewman_01","CFP_O_RHGUERILLAS_Crewman_01", "CFP_O_RHGUERILLAS_Crewman_01"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CUP_B_Bergen_BAF)
    };
	
	class CUP_O_BRDM2_SLA;
    class CUP_O_BRDM2_SLA_OCimport_01 : CUP_O_BRDM2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BRDM2_SLA_OCimport_02 : CUP_O_BRDM2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };
	
	class CUP_D30_Base;
    class CUP_D30_Base_OCimport_01 : CUP_D30_Base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_D30_Base_OCimport_02 : CUP_D30_Base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };
	
    class CFP_O_RHGUERILLAS_Rifleman_01 : O_G_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Rifleman_01.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AK-47)";
		genericNames = "ZimNames";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";

        identityTypes[] = {"Head_African","CUP_D_Language_TK","G_GUERIL_default"};

        uniformClass = "CUP_U_O_TK_Green";

        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"};

        backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",3,30}}},{"CUP_B_Bergen_BAF",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		
		
		randomGearProbability = 100;
		
		//Uniforms
        uniformList[] = {
          "U_I_C_Soldier_Bandit_1_F", 0.2,
          "U_I_C_Soldier_Bandit_3_F", 0.2,
		  "U_I_C_Soldier_Bandit_5_F", 0.2,
		  "CUP_U_B_BDUv2_OD", 0.2,
		  "CUP_U_B_BDUv2_roll2_OD", 0.2,
		  "CUP_U_B_BDUv2_roll_OD", 0.2,
          "CUP_U_B_BDUv2_dirty_OD", 0.2,
          "CUP_U_B_BDUv2_roll2_dirty_OD", 0.2,
          "CUP_U_B_BDUv2_roll_dirty_OD", 0.2,
          "CFP_BDU_Tan", 0.3,
          "CFP_BDU_Tan2", 0.3,
		  "U_C_Poloshirt_blue", 0.2,
		  "U_C_Poloshirt_salmon", 0.2,
          "U_BG_Guerrilla_6_1", 0.2,
		  "U_BG_Guerilla2_1", 0.2,
          "U_BG_Guerilla2_3", 0.2,
          "CFP_GUER_GreenTan", 0.2,
		  "CFP_GUER_TanTee", 0.2,
          "U_I_L_Uniform_01_tshirt_black_F", 0.2,
          "U_C_Mechanic_01_F", 0.2,
		  "U_I_C_Soldier_Para_2_F", 0.2,
          "U_I_C_Soldier_Para_3_F", 0.2,
          "U_I_C_Soldier_Para_5_F", 0.2,
          "U_I_C_Soldier_Para_1_F", 0.2,
		  "U_I_C_Soldier_Para_4_F", 0.2,
		  "U_I_C_Soldier_Camo_F", 0.2,
		  "CUP_I_B_PMC_Unit_1", 0.2,
          "CUP_I_B_PMC_Unit_13", 0.2,
		  "CUP_I_B_PMC_Unit_3", 0.2,
		  "U_I_G_resistanceLeader_F", 0.2,
          "CUP_U_O_SLA_Green", 0.2,
          "CUP_U_O_TK_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.3,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.2,
			"H_Bandanna_gry", 0.2,
            "SP_PatrolCap_Green", 0.3,
            "SP_PatrolCap_Tan", 0.3,
			"SP_BoonieHat_Green", 0.1,
            "SP_BoonieHat_Tan", 0.1,
			"H_Beret_blk", 0.2,
            "CUP_H_ChDKZ_Beret", 0.2,
			"SP_BeanieHat_Tan", 0.1,
            "SP_BeanieHat_Green", 0.1,
            "SP_BeanieHat_Black", 0.1,
			"CFP_Headband_wdl", 0.1,
			"H_HeadBandage_clean_F", 0.1,
			"CUP_H_NAPA_Fedora", 0.1,
            "H_Hat_Safari_olive_F", 0.1,
            "H_Hat_Safari_sand_F", 0.1
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.4,
            "G_Aviator", 0.2,
			"CUP_G_TK_RoundGlasses_blk", 0.1,
			"G_Spectacles", 0.1,
			"SP_Shades_Black", 0.1,
            "CFP_beard", 0.2,
			"CUP_FR_NeckScarf5", 0.2,
			"CUP_FR_NeckScarf3", 0.1,
			"CUP_FR_NeckScarf2", 0.1
		};

        //Vests
        vestList[] = {
            "CUP_V_B_ALICE", 0.1,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Tan", 0.3,
            "SP_Bandolier1_Green", 0.2,
            "SP_Bandolier1_Tan", 0.2,
            "SP_OpforRig1_Green", 0.3,
            "SP_OpforRig1_Tan", 0.3,
            "V_BandollierB_rgr", 0.2,
            "V_BandollierB_khk", 0.2,
            "V_BandollierB_oli", 0.3
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

    class CFP_O_RHGUERILLAS_RPG_man_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_RPG_man_01.JPG;
        displayName = "RPG man";
        
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","launch_RPG7_F","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","launch_RPG7_F","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","RPG7_F","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","RPG7_F","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{},{"U_I_C_Soldier_Para_2_F",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_RPGPack_Khaki",{{"RPG7_F",3,1}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Squad_Leader_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Squad_Leader_01.JPG;
        displayName = "Squad Leader";
                   
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Binocular","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Binocular","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Bergen_BAF",{{"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",2,30}}},"CUP_H_ChDKZ_Beret","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Machinegunner_RPK_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Machinegunner_RPK_01.JPG;
        displayName = "Machinegunner (RPK)";
        
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};

        magazines[] = {"CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
        respawnMagazines[] = {"CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",40},{},""},{},{},{"U_I_C_Soldier_Para_5_F",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",2,75},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",1,75},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Bergen_BAF",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",4,75}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Machinegunner_PKM_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Machinegunner_PKM_01.JPG;
        displayName = "Machinegunner (PKM)";
        
        linkedItems[] = {"CFP_AK_VEST_Olive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"U_I_C_Soldier_Para_2_F",{{"FirstAidKit",1}}},{"CFP_AK_VEST_Olive",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Bergen_BAF",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Medic_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Medic_01.JPG;
        displayName = "Medic";
		attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"SmokeShell",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Bergen_BAF",{{"Medikit",1},{"FirstAidKit",5},{"CUP_30Rnd_762x39_AK47_M",2,30}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Saboteur_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Saboteur_01.JPG;
        displayName = "Saboteur";
		engineer = 1;
        canDeactivateMines = 1;
		icon = "iconManEngineer";
		picture = "pictureRepair";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Bergen_BAF",{{"ToolKit",1},{"MineDetector",1},{"CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M",2,30},{"CUP_MineE_M",1,1},{"DemoCharge_Remote_Mag",1,1},{"APERSMine_Range_Mag",1,1}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Marksman_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Marksman_01.JPG;
        displayName = "Marksman";
        
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD","Binocular","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_SVD","Binocular","Throw","Put"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x54_SVD_M",4,10}}},{"CUP_B_Bergen_BAF",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},"CUP_H_ChDKZ_Beret","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Mortarman_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Mortarman_01.JPG;
        displayName = "Gunner (Mortar)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"CUP_H_ChDKZ_Beret","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Mortarman_02 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Mortarman_02.JPG;
        displayName = "Assistant Gunner (Mortar)";
        
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
		
		backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Rifleman_02 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Rifleman_02.JPG;
        displayName = "Rifleman (AKM)";
 
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Bergen_BAF",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Rifleman_03 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Rifleman_03.JPG;
        displayName = "Rifleman (SKS)";
       
        linkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_SKS","Throw","Put"};
        respawnWeapons[] = {"CUP_SKS","Throw","Put"};

        magazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_SKS","","","",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x39_SKS_M",4,10}}},{"CUP_B_Bergen_BAF",{{"CUP_10Rnd_762x39_SKS_M",4,10}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Rifleman_04 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Rifleman_04.JPG;
        displayName = "Rifleman (FN FAL)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL5060","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_FNFAL5060","Throw","Put"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL5060","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_20Rnd_762x51_FNFAL_M",3,20}}},{"CUP_B_Bergen_BAF",{{"CUP_20Rnd_762x51_FNFAL_M",2,20}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Rifleman_05 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Rifleman_05.JPG;
        displayName = "Rifleman (G3)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G3A3_ris","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_G3A3_ris","Throw","Put"};

        magazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_G3","CUP_20Rnd_762x51_G3"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G3A3_ris","","","",{"CUP_20Rnd_762x51_G3",20},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_20Rnd_762x51_G3",3,20}}},{"CUP_B_Bergen_BAF",{{"CUP_20Rnd_762x51_G3",2,20}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Militiaman_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Militiaman_01.JPG;
        displayName = "Militiaman (SKS)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_SKS","Throw","Put"};
        respawnWeapons[] = {"CUP_SKS","Throw","Put"};

        magazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x39_SKS_M","CUP_10Rnd_762x39_SKS_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_SKS","","","",{"CUP_10Rnd_762x39_SKS_M",10},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x39_SKS_M",4,10}}},{"CUP_B_Bergen_BAF",{{"CUP_10Rnd_762x39_SKS_M",4,10}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

	class CFP_O_RHGUERILLAS_Militiaman_02 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Militiaman_02.JPG;
        displayName = "Militiaman (Mosin-Nagant)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_Mosin_Nagant","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_Mosin_Nagant","Throw","Put"};

        magazines[] = {"CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
        respawnMagazines[] = {"CUP_5Rnd_762x54_Mosin_M","CUP_5Rnd_762x54_Mosin_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_Mosin_Nagant","","","",{"CUP_5Rnd_762x54_Mosin_M",5},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_5Rnd_762x54_Mosin_M",4,5}}},{"CUP_B_Bergen_BAF",{{"CUP_5Rnd_762x54_Mosin_M",6,5}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };
	
    class CFP_O_RHGUERILLAS_Gunner_SPG_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Gunner_SPG_01.JPG;
        displayName = "SPG-9 Gunner";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Asst_Gunner_SPG_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Asst_Gunner_SPG_01.JPG;
        displayName = "SPG-9 Assistant";
       
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Strela_man_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
		editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Strela_man_01.JPG;
        displayName = "Strela man";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_9K32Strela_Loaded","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_9K32Strela_Loaded","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_bakelite_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_bakelite_M","CUP_Strela_2_M","CUP_30Rnd_762x39_AK47_bakelite_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_bakelite_M",30},{},""},{"CUP_launch_9K32Strela_Loaded","","","",{"CUP_Strela_2_M",1},{},""},{},{"CFP_BDU_Tan2",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_bakelite_M",3,30}}},{"CUP_B_AlicePack_Khaki",{{"CUP_30Rnd_762x39_AK47_bakelite_M",2,30}}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
    
    };

    class CFP_O_RHGUERILLAS_Gunner_Dshkm_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Gunner_Dshkm_01.JPG;
        displayName = "Gunner (DShKM)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_RHGUERILLAS_Asst_Gunner_DShKM_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Asst_Gunner_DShKM_01.JPG;
        displayName = "Assistant Gunner (DShKM)";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_Early","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"CUP_H_ChDKZ_Beret","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };
	
	class CFP_O_RHGUERILLAS_Team_Leader_01 : CFP_O_RHGUERILLAS_Rifleman_01 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Team_Leader_01.JPG;
        displayName = "Team Leader";
        
        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_ChDKZ_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM_Early","Binocular","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early","Binocular","Throw","Put"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		
		backpack = "CUP_B_Bergen_BAF";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM_Early","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_U_O_TK_Green",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_Bergen_BAF",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},"CUP_H_ChDKZ_Beret","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };
	
	class CFP_O_RHGUERILLAS_Commander_01 : O_G_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Commander_01.JPG;
		
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "Commander";
		genericNames = "ZimNames";
		side = 0;
        faction = "CFP_O_RHGUERILLAS";
		
		identityTypes[] = {"Head_African","CUP_D_Language_TK","G_GUERIL_default"};
		
		uniformClass = "U_I_C_Soldier_Camo_F";
        
        linkedItems[] = {"CUP_V_O_TK_OfficerBelt","CUP_H_SLA_OfficerCap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_TK_OfficerBelt","CUP_H_SLA_OfficerCap","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_Makarov","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"};

        magazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"U_I_C_Soldier_Camo_F",{{"FirstAidKit",1}}},{"CUP_V_O_TK_OfficerBelt",{{"CUP_8Rnd_9x18_Makarov_M",3,8}}},{},"CUP_H_SLA_OfficerCap","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		
		class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

	class CFP_O_RHGUERILLAS_Crewman_01 : O_crew_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Crewman_01.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
		genericNames = "ZimNames";
		side = 0;
        faction = "CFP_O_RHGUERILLAS";
		
		identityTypes[] = {"Head_African","CUP_D_Language_TK","G_GUERIL_default"};
		
		uniformClass = "CUP_U_O_TK_Green";
        
        linkedItems[] = {"CUP_V_O_TK_OfficerBelt","CUP_H_SLA_TankerHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_O_TK_OfficerBelt","CUP_H_SLA_TankerHelmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_hgun_SA61","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_SA61","Throw","Put"};

        magazines[] = {"CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_B_765x17_Ball_M"};
        respawnMagazines[] = {"CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_B_765x17_Ball_M"};

        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_SA61","","","",{"CUP_10Rnd_B_765x17_Ball_M",10},{},""},{"U_I_C_Soldier_Camo_F",{{"FirstAidKit",1}}},{"CUP_V_O_TK_OfficerBelt",{{"CUP_10Rnd_B_765x17_Ball_M",3,10}}},{},"CUP_H_SLA_TankerHelmet","G_Aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};
		
		
		class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
		
	class CFP_O_RHGUERILLAS_SPG_9 : CUP_SPG9_base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_SPG_9.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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

    class CFP_O_RHGUERILLAS_Podnos_Mortar : CUP_2b14_82mm_Base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Podnos_Mortar.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "82mm Mortar";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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
	
	class CFP_O_RHGUERILLAS_ZU23 : CUP_ZU23_base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_ZU23.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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
	
	class CFP_O_RHGUERILLAS_DSHKM : CUP_DSHKM_base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_DSHKM.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (high)";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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

    class CFP_O_RHGUERILLAS_DSHkM_MiniTriPod : CUP_DSHKM_MiniTripod_base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_DSHkM_MiniTriPod.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "DSHkM (low)";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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
	
	class CFP_O_RHGUERILLAS_Ural_Open : CUP_O_Ural_Open_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_Ural_Open.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";
		TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CUP_B_Bergen_BAF)
		
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
	
	class CFP_O_RHGUERILLAS_BRDM_2_01 : CUP_O_BRDM2_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_BRDM_2_01.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "BRDM-2 (ZIPRA)";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Crewman_01";
		TRANSPORTWEAPONSMEDIUM(CUP_arifle_AK47,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CUP_B_Bergen_BAF)
        
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_RHGUERILLAS_Crewman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator
            {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
	
	class CFP_O_RHGUERILLAS_D30_01 : CUP_D30_Base_OCimport_02 {
        editorPreview = \x\cfp\addons\o_rhguerilla\data\preview\CFP_O_RHGUERILLAS_D30_01.JPG;
		author = "DishLord";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30 (ZIPRA)";
        side = 0;
        faction = "CFP_O_RHGUERILLAS";
        crew = "CFP_O_RHGUERILLAS_Rifleman_01";

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
	
	class FlagPole_F;
	class ZANU_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "ZANU (ZANLA)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\o_rhguerilla\data\flags\ZANU.paa""";
};
	};
	class ZAPU_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "ZAPU (ZIPRA)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\o_rhguerilla\data\flags\ZAPU.paa""";
};
	};
	
	class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

	class CFP_O_RHGUERILLAS_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Rhodesian Guerillas 70s Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_bakelite_M,50);
            mag_xx(CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M,50);
            mag_xx(CUP_10Rnd_762x39_SKS_M,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M,50);
            mag_xx(CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_5Rnd_762x54_Mosin_M,50);
            mag_xx(CUP_20Rnd_762x51_G3,50);
            mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_G3,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShell,50);
            mag_xx(RPG7_F,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_MineE_M,50);
            mag_xx(APERSMine_Range_Mag,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
		/* ACE CARGO : */
		ace_cargo_size = 2; // Cargo space the object takes
		ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
		ace_dragging_dragPosition[] = {0, 1.3, 0};  // Offset of the model from the body while dragging (same as attachTo)
		ace_dragging_dragDirection = 90; // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
		ace_dragging_carryPosition[] = {0, 1.2, 1};  // Offset of the model from the body while dragging (same as attachTo)
		ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
    };
	class CFP_O_RHGUERILLAS_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Rhodesian Guerillas 70s Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_bakelite_M,50);
            mag_xx(CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_bakelite_M,50);
            mag_xx(CUP_10Rnd_762x39_SKS_M,50);
            mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M,50);
            mag_xx(CUP_40Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_5Rnd_762x54_Mosin_M,50);
            mag_xx(CUP_20Rnd_762x51_G3,50);
            mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_G3,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_FNFAL_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47_Early,10);
            weap_xx(CUP_arifle_AKM_Early,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_SKS,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_arifle_RPK74,10);
            weap_xx(CUP_srifle_SVD,10);
            weap_xx(CUP_arifle_FNFAL5060,10);
            weap_xx(CUP_arifle_G3A3_ris,10);
            weap_xx(CUP_srifle_Mosin_Nagant,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_hgun_SA61,10);
        };
        class TransportItems {
        };
		/* ACE CARGO : */
		ace_cargo_size = 8; // Cargo space the object takes
		ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
		ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
		ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };
	class CFP_O_RHGUERILLAS_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Rhodesian Guerillas 70s Launchers Box;
        class TransportMagazines {
            mag_xx(RPG7_F,50);
            mag_xx(CUP_Strela_2_M,50);
        };
        class TransportWeapons {
            weap_xx(launch_RPG7_F,10);
            weap_xx(CUP_launch_9K32Strela,10);
        };
        class TransportItems {
        };
		/* ACE CARGO : */
		ace_cargo_size = 4; // Cargo space the object takes
		ace_cargo_canLoad = 1; // Enables the object to be loaded (1-yes, 0-no)
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
		ace_dragging_dragPosition[] = {0, 1.8, 0};  // Offset of the model from the body while dragging (same as attachTo)
		ace_dragging_dragDirection = 90; // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };
	class CFP_O_RHGUERILLAS_UniformBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Rhodesian Guerillas 70s Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_U_B_BDUv2_OD,15);
            item_xx(CUP_U_B_BDUv2_roll2_OD,15);
            item_xx(CUP_U_B_BDUv2_roll_OD,15);
            item_xx(CUP_U_B_BDUv2_dirty_OD,15);
            item_xx(CUP_U_B_BDUv2_roll2_dirty_OD,15);
            item_xx(CUP_U_B_BDUv2_roll_dirty_OD,15);
            item_xx(CFP_BDU_Tan,15);
            item_xx(CFP_BDU_Tan2,15);
            item_xx(U_C_Poloshirt_blue,15);
            item_xx(U_C_Poloshirt_salmon,15);
            item_xx(U_BG_Guerrilla_6_1,15);
            item_xx(U_BG_Guerilla2_1,15);
            item_xx(U_BG_Guerilla2_3,15);
            item_xx(CFP_GUER_GreenTan,15);
            item_xx(CFP_GUER_TanTee,15);
            item_xx(U_I_L_Uniform_01_tshirt_black_F,15);
			item_xx(U_C_Mechanic_01_F,15);
			item_xx(U_I_C_Soldier_Para_2_F,15);
			item_xx(U_I_C_Soldier_Para_3_F,15);
			item_xx(U_I_C_Soldier_Para_5_F,15);
			item_xx(U_I_C_Soldier_Para_1_F,15);
			item_xx(U_I_C_Soldier_Para_4_F,15);
			item_xx(U_I_C_Soldier_Camo_F,15);
			item_xx(CUP_I_B_PMC_Unit_1,15);
			item_xx(CUP_I_B_PMC_Unit_13,15);
			item_xx(CUP_I_B_PMC_Unit_3,15);
			item_xx(U_I_G_resistanceLeader_F,15);
			item_xx(CUP_U_O_SLA_Green,15);
			item_xx(CUP_U_O_TK_Green,15);
			item_xx(U_I_C_Soldier_Bandit_3_F,15);
			item_xx(U_I_C_Soldier_Bandit_5_F,15);
			item_xx(H_Bandanna_sand,15);
			item_xx(H_Bandanna_khk,15);
			item_xx(H_Bandanna_gry,15);
			item_xx(SP_PatrolCap_Green,15);
			item_xx(SP_PatrolCap_Tan,15);
			item_xx(SP_BoonieHat_Green,15);
			item_xx(SP_BoonieHat_Tan,15);
			item_xx(H_Beret_blk,15);
			item_xx(CUP_H_ChDKZ_Beret,15);
			item_xx(SP_BeanieHat_Tan,15);
			item_xx(SP_BeanieHat_Green,15);
			item_xx(SP_BeanieHat_Black,15);
			item_xx(CFP_Headband_wdl,15);
			item_xx(H_HeadBandage_clean_F,15);
			item_xx(CUP_H_NAPA_Fedora,15);
			item_xx(H_Hat_Safari_olive_F,15);
			item_xx(H_Hat_Safari_sand_F,15);
			item_xx(G_Aviator,15);
			item_xx(CUP_G_TK_RoundGlasses_blk,15);
			item_xx(G_Spectacles,15);
			item_xx(SP_Shades_Black,15);
			item_xx(CFP_beard,15);
			item_xx(CUP_FR_NeckScarf5,15);
			item_xx(CUP_FR_NeckScarf3,15);
			item_xx(CUP_FR_NeckScarf2,15);
        };
		/* ACE CARGO : */
		ace_cargo_size = 8; // Cargo space the object takes
		ace_cargo_canLoad = 0; // Enables the object to be loaded (1-yes, 0-no)
		ace_dragging_canDrag = 0;  // Can be dragged (0-no, 1-yes)
		ace_dragging_canCarry = 0;  // Can be carried (0-no, 1-yes)
    };
    };