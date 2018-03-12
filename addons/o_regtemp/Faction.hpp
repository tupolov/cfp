// FACTION BASICS
	#define FACTION CFP_O_REGTEMP
	#define FACTIONDISPLAY "Template Army"
	#define SIDE 0
	#define SIDETEXT EAST
	#define AUTHOR "Tupolov"

// Editor Subcategories
	#define MANTYPE Normal
	#define SFTYPE SpecOps

// BASE & SF MAN DEFINES
	#define MAN O_Soldier_F
	#define NAMES "Afromen"
	#define IDENTITY {"Head_African","LanguagePER_F","G_IRAN_default"}
	#define IDENTITY_DIVER identityTypes[] = {"Head_African","LanguagePER_F","G_NATO_diver"};
	#define UNIFORM "CFP_U_FieldUniform_multicam"
	#define UNIFORM_SF "CFP_U_FieldUniform_multicam"

// VEHICLE DEFINES
	#define RECON CUP_O_UAZ_Unarmed_TKA
	#define PATROL CUP_O_LR_Transport_TKA
	#define ARMED_MG CUP_O_LR_MG_TKA
	#define SF_ARMED_MG CUP_B_LR_Special_Des_CZ_D
	#define ARMED_AT CUP_O_LR_SPG9_TKA
	#define APC CUP_O_BTR40_TKA
	#define APC_AT CUP_O_BTR60_TK
	#define APC_MG CUP_O_BTR40_MG_TKA
	#define TANK CUP_O_T34_TKA
	#define PLANE CUP_O_L39_TK
	#define SPT_HELI CUP_O_Mi24_D_TK
	#define TRANS_HELI CUP_O_Mi17_TK
	#define MORTAR CUP_O_2b14_82mm_TK_INS
	#define ST_MG CUP_O_DSHkM_TK_INS
	#define ST_AT CUP_O_SPG9_TK_INS
	#define GUN CUP_O_D30_RU
	#define SPGUN CUP_O_T55_TK
	#define ROCKET CUP_O_BM21_TKA
	#define TRUCK CUP_O_Ural_CHDKZ
	#define BOAT CUP_O_PBX_RU
	#define ASSAULT_BOAT CUP_I_RHIB2Turret_RACS
	#define SDV B_SDV_01_F

// LOADOUT DEFINITIONS
	#define BASE_LOADOUT \
        weapons[] = {"CUP_arifle_AK47","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"}; \
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Empty","SP_Mk7Helmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Empty","SP_Mk7Helmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CUP_V_BAF_Osprey_Mk2_DPM_Empty",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"SP_Mk7Helmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define SPECOPS_LOADOUT \
        weapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Empty","SP_Mk7Helmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Empty","SP_Mk7Helmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD","","","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CUP_V_BAF_Osprey_Mk2_DPM_Empty",{{"CUP_30Rnd_556x45_Stanag",5,30}}},{},"SP_Mk7Helmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define SL_LOADOUT \
        weapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_556x45_Stanag",5,30}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define TL_LOADOUT \
        weapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_Mk16_STD","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","SP_PASGTHelmet_Green1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk16_STD","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_556x45_Stanag",5,30}}},{},"SP_PASGTHelmet_Green1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define GL_LOADOUT \
        weapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Throw","Put"}; \
        linkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Tan2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Tan2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_TacChestrig_grn_F",{{"CUP_30Rnd_545x39_AK_M",7,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",3,1}}},{},"SP_PASGTHelmet_Tan2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define AR_LOADOUT backpack = "CUP_B_CivPack_WDL"; \
        weapons[] = {"CUP_lmg_PKM","Throw","Put"}; \
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"}; \
        linkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Black1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_TacChestrig_grn_F","SP_PASGTHelmet_Black1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_FieldUniform_multicam",{}},{"V_TacChestrig_grn_F",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CUP_B_CivPack_WDL",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"SP_PASGTHelmet_Black1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define AT_LOADOUT  backpack = "CUP_B_RPGPack_Khaki"; \
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"}; \
        linkedItems[] = {"V_TacChestrig_oli_F","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_PASGTHelmet_Green2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define AA_LOADOUT backpack = "CUP_B_RPGPack_Khaki"; \
        weapons[] = {"CUP_arifle_AK47","CUP_launch_igla","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_igla","Throw","Put"}; \
        linkedItems[] = {"V_TacChestrig_oli_F","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_TacChestrig_oli_F","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_Igla_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_Igla_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_igla","","","",{"CUP_Igla_M",1},{},""},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacChestrig_oli_F",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_Igla_M",3,1}}},"SP_PASGTHelmet_Green2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	/*
	#define AAR_LOADOUT ALiVE_orbatCreator_loadout[] = {}; \
	*/

	#define MEDIC_LOADOUT backpack = "B_AssaultPack_cbr"; \
        weapons[] = {"CUP_arifle_AKM","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_Vest_2","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_2","SP_PASGTHelmet_Green2","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_O_TK_Vest_2",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{"B_AssaultPack_cbr",{{"FirstAidKit",8}}},"SP_PASGTHelmet_Green2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	/*
	#define MARKS_LOADOUT ALiVE_orbatCreator_loadout[] = {}; \

	#define SCOUT_LOADOUT ALiVE_orbatCreator_loadout[] = {}; \
	*/

	#define SNIPER_LOADOUT \
        weapons[] = {"CUP_srifle_G22_wdl","Throw","Put"}; \
        respawnWeapons[] = {"CUP_srifle_G22_wdl","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_Vest_1","H_Booniehat_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","H_Booniehat_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"}; \
        respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_G22_wdl","","","CUP_optic_LeupoldMk4_10x40_LRT_Woodland",{"CUP_5Rnd_762x67_G22",5},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_5Rnd_762x67_G22",3,5}}},{"CUP_V_O_TK_Vest_1",{{"CUP_5Rnd_762x67_G22",7,5}}},{},"H_Booniehat_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define SPOT_LOADOUT \
        weapons[] = {"CUP_arifle_AKM","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AKM","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_Vest_1","H_Booniehat_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_Vest_1","H_Booniehat_oli","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_V_O_TK_Vest_1",{{"CUP_30Rnd_762x39_AK47_M",7,30}}},{},"H_Booniehat_oli","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	#define CREW_LOADOUT \
        weapons[] = {"CUP_hgun_Makarov","Throw","Put"}; \
        respawnWeapons[] = {"CUP_hgun_Makarov","Throw","Put"}; \
        linkedItems[] = {"CUP_V_CDF_CrewBelt","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"CUP_V_CDF_CrewBelt","H_HelmetCrew_I","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M"}; \
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M"}; \
        ALiVE_orbatCreator_loadout[] = {{},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"CFP_U_FieldUniform_multicam",{}},{"CUP_V_CDF_CrewBelt",{{"CUP_8Rnd_9x18_Makarov_M",2,8}}},{},"H_HelmetCrew_I","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	/*
	#define ENG_LOADOUT ALiVE_orbatCreator_loadout[] = {}; \
	*/

	#define BOMB_LOADOUT  backpack = "B_AssaultPack_rgr"; \
        weapons[] = {"CUP_arifle_AK74M","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AK74M","Throw","Put"}; \
        linkedItems[] = {"V_TacChestrig_cbr_F","SP_PASGTHelmet_Tan1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_TacChestrig_cbr_F","SP_PASGTHelmet_Tan1","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_TacChestrig_cbr_F",{{"MineDetector",1},{"CUP_30Rnd_545x39_AK_M",7,30}}},{"B_AssaultPack_rgr",{{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",3,1},{"APERSTripMine_Wire_Mag",1,1}}},"SP_PASGTHelmet_Tan1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	/*
	#define GUNNER_LOADOUT ALiVE_orbatCreator_loadout[] = {}; \
	*/

	#define PILOT_LOADOUT \
        weapons[] = {"CUP_arifle_AKS74U","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AKS74U","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TK_PilotHelmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TK_PilotHelmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}; \
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"SmokeShell",1,1},{"SmokeShellBlue",1,1}}},{"CUP_V_O_TK_CrewBelt",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{},"CUP_H_TK_PilotHelmet","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};

	#define HPILOT_LOADOUT \
        weapons[] = {"CUP_arifle_AKS74U","Throw","Put"}; \
        respawnWeapons[] = {"CUP_arifle_AKS74U","Throw","Put"}; \
        linkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TK_PilotHelmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}; \
        respawnLinkedItems[] = {"CUP_V_O_TK_CrewBelt","CUP_H_TK_PilotHelmet","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}; \
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_multicam",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"SmokeShell",1,1},{"SmokeShellBlue",1,1}}},{"CUP_V_O_TK_CrewBelt",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{},"CUP_H_TK_PilotHelmet","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};

	#define DIVER_LOADOUT backpack = "B_Assault_Diver"; \
        weapons[] = {"arifle_SDAR_F","hgun_P07_snds_F","Throw","Put"}; \
        respawnWeapons[] = {"arifle_SDAR_F","hgun_P07_snds_F","Throw","Put"}; \
        linkedItems[] = {"V_RebreatherB","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        respawnLinkedItems[] = {"V_RebreatherB","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}; \
        magazines[] = {"20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"}; \
        respawnMagazines[] = {"20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"}; \
        ALiVE_orbatCreator_loadout[] = {{"arifle_SDAR_F","","","",{"20Rnd_556x45_UW_mag",20},{},""},{},{"hgun_P07_snds_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",16},{},""},{"U_B_Wetsuit",{{"FirstAidKit",1},{"30Rnd_556x45_Stanag_red",3,30},{"20Rnd_556x45_UW_mag",2,20},{"16Rnd_9x21_Mag",2,16},{"SmokeShellBlue",2,1},{"Chemlight_blue",4,1}}},{"V_RebreatherB",{}},{"B_Assault_Diver",{{"30Rnd_556x45_Stanag_red",2,30},{"20Rnd_556x45_UW_mag",2,20},{"SatchelCharge_Remote_Mag",1,1},{"MiniGrenade",3,1},{"SmokeShellBlue",2,1},{"Chemlight_blue",4,1},{{"Rangefinder","","","",{},{},""},1}}},"","G_B_Diving",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

// RANDOM GEAR
	/*
	#define RANDOMGEAR \
		randomGearProbability = 100; \
		insigniaList[] = { \
	        "MORALE", 0.5, \
	        "BLOOD", 0.5 \
	    }; \
		headgearList[] = { \
	        "", 0.4, \
			"SP_BaseballCap_Tan", 0.3, \
	        "SP_BaseballCap_Black", 0.3, \
			"H_WatchCap_cbr", 0.25, \
	        "H_WatchCap_khk", 0.2, \
	        "H_WatchCap_blk", 0.2 \
	    }; \
		uniformList[] = { \
			"U_BG_Guerilla2_1", 0.25, \
			"U_BG_Guerilla2_2", 0.25, \
			"U_BG_Guerilla2_3", 0.25, \
			"U_BG_Guerilla3_1", 0.25 \
		}; \
	    nvgList[] = { \
	        "", 1 \
	    }; \
	    facewearList[] = { \
	    	"", 0.6, \
	    	"G_Bandanna_blk", 0.1, \
	        "G_Bandanna_khk", 0.2, \
	        "G_Bandanna_tan", 0.2, \
	        "CUP_TK_NeckScarf", 0.3, \
	        "G_Shades_Black",0.3, \
	        "G_Shades_Blue",0.3, \
	        "SP_Shades_Black",0.3, \
	        "CUP_FR_Neckscarf2",0.3 \
	    }; \
		vestList[] = { \
			"CUP_V_I_RACS_Carrier_Vest", 0.25, \
	        "CUP_V_I_RACS_Carrier_Vest_2", 0.25, \
	        "CUP_V_I_RACS_Carrier_Vest_3", 0.25, \
			"V_Chestrig_khk", 0.25, \
	        "V_Chestrig_oli", 0.25 \
		}; \
		backpackList[] = { \
	        "",0.7, \
			"B_AssaultPack_cbr", 0.25, \
	        "B_AssaultPack_khk", 0.25, \
	        "B_AssaultPack_mcamo", 0.25, \
	        "B_AssaultPack_cbr", 0.25, \
			"SP_Carryall_Tan", 0.2, \
			"B_Carryall_khk", 0.2 \
	    };

	#define RANDOMWEAP \
		randomWeaponProbability = 100; \
	    grenadeList[] = { \
	    	{"HandGrenade",4}, 0.25, \
			{"MiniGrenade",4}, 0.25, \
			{"CUP_HandGrenade_M67",4}, 0.25, \
			{"CUP_HandGrenade_L109A2_HE",4}, 0.25 \
	    }; \
	    rifleList[] = { \
	    	{"CUP_arifle_M4A1_camo_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4, \
	    	{"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4, \
	    	{"CUP_arifle_M4A1_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4, \
	    	{"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3, \
	    	{"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2, \
	    	{"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3, \
	    	{"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1, \
	    	{"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1, \
	    	{"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2, \
	    	{"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2 \
	    }; \
	    handgunList[] = { \
	        {"CUP_hgun_Glock17",{"CUP_17Rnd_9x19_glock17",3}}, 0.8, \
	       	{"CUP_hgun_M9",{"CUP_15Rnd_9x19_M9",3}}, 0.4, \
	    	{"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.4, \
	    	{"CUP_hgun_MicroUzi",{"CUP_30Rnd_9x19_UZI",3}}, 0.2, \
	    	{"CUP_hgun_M9_snds",{"CUP_15Rnd_9x19_M9",3}}, 0.2 \
	    }; \
	    explosiveList[] = { \
	    	{"",0}, 0.9, \
	    	{"CUP_TimeBomb_M",2}, 0.2, \
	    	{"CUP_Mine_M",2}, 0.2, \
	    	{"CUP_PipeBomb_M",2}, 0.2, \
	    	{"CUP_IED_V1_M",2}, 0.2 \
	    };
	*/


