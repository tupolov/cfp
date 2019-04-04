#define public 2

#define mag_xx(a,b) class _xx_##a {magazine = CUP_##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = CUP_##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}


class CBA_Extended_EventHandlers_base;
class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_SAD { displayName = "Men (Special Activities Division)";  };
};
class CfgVehicles {

    class CUP_B_US_SpecOps;
    class CUP_B_US_SpecOps_OCimport_01 : CUP_B_US_SpecOps { scope = 0; class EventHandlers; };

	class CFP_B_USCIA_Paramilitary_Officer_Base : CUP_B_US_SpecOps_OCimport_01 {
 		author = "Tupolov";
        scope = 1;
        scopeCurator = 1;
        displayName = "Paramilitary Officer";
        side = 1;
        faction = "CFP_B_USCIA";
        editorSubcategory = "CFP_EdSubcat_Personnel_SAD";
        identityTypes[] = { "Head_NATO" , "LanguageENG_F" , "G_GUERIL_default" };

        uniformClass = "U_BG_Guerilla2_1";

        randomGearProbability = 100;

        // Civilian clothes
		uniformList[] = {
			"CUP_I_B_PMC_Unit_1", 0.2,
            "CUP_I_B_PMC_Unit_2", 0.2,
            "CUP_I_B_PMC_Unit_3", 0.2,
            "CUP_I_B_PMC_Unit_4", 0.2,
            "CUP_I_B_PMC_Unit_5", 0.2,
            "CUP_I_B_PMC_Unit_6", 0.2,
            "CUP_I_B_PMC_Unit_7", 0.2,
            "CUP_I_B_PMC_Unit_8", 0.2,
            "CUP_I_B_PMC_Unit_9", 0.2,
            "CUP_I_B_PMC_Unit_10", 0.2,
            "CUP_I_B_PMC_Unit_11", 0.2,
            "CUP_I_B_PMC_Unit_12", 0.2,
            "CUP_I_B_PMC_Unit_13", 0.2,
            "CUP_I_B_PMC_Unit_14", 0.2,
            "CUP_I_B_PMC_Unit_15", 0.2,
            "CUP_I_B_PMC_Unit_16", 0.2,
            "CUP_I_B_PMC_Unit_17", 0.2,
            "CUP_I_B_PMC_Unit_19", 0.2,
            "CUP_I_B_PMC_Unit_20", 0.2,
            "CUP_I_B_PMC_Unit_21", 0.2,
            "CUP_I_B_PMC_Unit_22", 0.2,
            "CUP_I_B_PMC_Unit_23", 0.2,
            "CUP_I_B_PMC_Unit_24", 0.2,
            "CFP_GUER_GreenTan", 0.2,
            "CFP_GUER_ERDLpants", 0.2,
            "CFP_GUER_3CDespants", 0.2,
            "CFP_GUER_ChocChippants", 0.2,
            "CFP_GUER_MCampants", 0.2,
            "CFP_GUER_M81Tee", 0.2,
            "CFP_GUER_TanTee", 0.2,
            "CFP_U_WorkUniform_3Desert", 0.2,
            "CFP_U_WorkUniform_ChocChip", 0.2,
            "CFP_U_WorkUniform_M81Des", 0.2,
            "CFP_GUER_M81", 0.2
		};

		// Basic Rigs
		vestList[] = {
			"CFP_HV5_Ciras_Olive", 0.4,
            "CFP_LBT1961_CB", 0.2,
            "CFP_LBT1961_GRN", 0.2,
            "CFP_LBT1961_OGA_OD", 0.2,
            "CFP_MBSS_Green", 0.2,
            "CFP_MBSS_BLK", 0.2,
            "CFP_MBSS_TAN", 0.2,
            "CFP_MBSS_CB", 0.2,
            "CFP_MBSS_PACA_operator", 0.2,
            "CFP_MBSS_PACA", 0.2,
            "CFP_MBSS_PACA_BLK", 0.2,
            "CFP_MBSS_PACA_TAN", 0.2,
            "CFP_MBSS_PACA_CB", 0.2,
            "CFP_RAV_OGA", 0.4,
            "CFP_RAV_Green", 0.4,
            "CFP_RAV_Black", 0.4
		};

		// Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
        	"", 0.6,
        	"G_Bandanna_blk", 0.1,
            "G_Bandanna_khk", 0.2,
            "G_Bandanna_tan", 0.2,
            "CUP_TK_NeckScarf", 0.3,
            "G_Shades_Black",0.3,
            "G_Shades_Blue",0.3,
            "SP_Shades_Black",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.4,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Shemagh_Face_Atacsau", 0.2,
            "CFP_Shemagh_Half_Red", 0.2,
            "CFP_Shemagh_Half_Black", 0.2,
            "CFP_Shemagh_Half_White", 0.2,
            "CFP_Shemagh_Half_Tan", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2
        };

      	// Baseball caps, boonies,
        headgearList[] = {
            "", 0.4,
			"SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
			"H_WatchCap_cbr", 0.25,
            "H_WatchCap_khk", 0.2,
            "H_WatchCap_blk", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "CUP_H_USMC_BOONIE_DES", 0.25,
            "CUP_H_USMC_BOONIE_PRR_DES", 0.25,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "H_BoonieHat_khk",0.25,
            "H_BoonieHat_mcamo",0.25,
            "H_BoonieHat_khk_hs",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "CUP_H_PMC_Cap_Back_Tan",0.35,
            "CUP_H_PMC_Cap_Back_EP_Tan",0.35,
            "CUP_H_PMC_Cap_Back_Grey",0.35,
            "CUP_H_PMC_Cap_Back_EP_Grey",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_EP_Tan",0.35,
            "CUP_H_PMC_Cap_EP_Grey",0.35,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        nvgList[] = {
            "", 1
        };

        insigniaList[] = {};

        backpackList[] = {
            "",0.7,
			"B_AssaultPack_cbr", 0.25,
            "B_AssaultPack_khk", 0.25,
            "B_AssaultPack_mcamo", 0.25,
            "B_AssaultPack_cbr", 0.25,
			"SP_Carryall_Tan", 0.2,
			"B_Carryall_khk", 0.2,
            "B_Carryall_mcamo", 0.2,
            "B_Carryall_cbr", 0.2,
            "B_Kitbag_mcamo", 0.2,
            "B_Kitbag_cbr", 0.2,
            "CUP_B_AssaultPack_Coyote", 0.2
        };

        grenadeList[] = {
        	{"HandGrenade",4}, 0.25,
			{"MiniGrenade",4}, 0.25,
			{"CUP_HandGrenade_M67",4}, 0.25,
			{"CUP_HandGrenade_L109A2_HE",4}, 0.25
        };

        // 6-8 options
        rifleList[] = {
        	{"CUP_arifle_M4A3_camo",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A3_black",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
        	{"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
        	{"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
        	{"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
        	{"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
        	{"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_G36",6}}, 0.2,
        	{"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2
        };

        handgunList[] = {
            {"CUP_hgun_Glock17",{"CUP_17Rnd_9x19_glock17",3}}, 0.8,
           	{"CUP_hgun_M9",{"CUP_15Rnd_9x19_M9",3}}, 0.4, // M9
        	{"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.4,
        	{"CUP_hgun_MicroUzi",{"CUP_30Rnd_9x19_UZI",3}}, 0.2,
        	{"CUP_hgun_M9_snds",{"CUP_15Rnd_9x19_M9",3}}, 0.2
        };

        explosiveList[] = {
        	{}, 0.9,
        	{{"CUP_TimeBomb_M",2}}, 0.2,
        	{{"CUP_Mine_M",2}}, 0.2,
        	{{"CUP_PipeBomb_M",2}}, 0.2,
        	{{"CUP_IED_V1_M",2}}, 0.2
        };

        backpack = "CUP_B_USPack_Coyote_Specops";
        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Throw","Put"};
        linkedItems[] = {"CFP_LBT1961_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_LBT1961_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_Eotech553_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CUP_I_B_PMC_Unit_7",{{"CUP_17Rnd_9x19_glock17",1,17},{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CFP_LBT1961_GRN",{{"FirstAidKit",1},{"HandGrenade",4,1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_B_USPack_Coyote_Specops",{}},"","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
	};

    class CFP_B_USCIA_Paramilitary_Officer_Base2 : CUP_B_US_SpecOps_OCimport_01 {
        author = "Tupolov";
        scope = 1;
        scopeCurator = 1;
        displayName = "Paramilitary Officer";
        side = 1;
        faction = "CFP_B_USCIA";
        editorSubcategory = "CFP_EdSubcat_Personnel_SAD";
        identityTypes[] = { "Head_NATO" , "LanguageENG_F" , "G_GUERIL_default" };

        uniformClass = "U_BG_Guerilla2_1";

        randomGearProbability = 100;
        randomWeaponProbability = 100;

        // Civilian clothes
        uniformList[] = {
            "CUP_I_B_PMC_Unit_1", 0.2,
            "CUP_I_B_PMC_Unit_2", 0.2,
            "CUP_I_B_PMC_Unit_3", 0.2,
            "CUP_I_B_PMC_Unit_4", 0.2,
            "CUP_I_B_PMC_Unit_5", 0.2,
            "CUP_I_B_PMC_Unit_6", 0.2,
            "CUP_I_B_PMC_Unit_7", 0.2,
            "CUP_I_B_PMC_Unit_8", 0.2,
            "CUP_I_B_PMC_Unit_9", 0.2,
            "CUP_I_B_PMC_Unit_10", 0.2,
            "CUP_I_B_PMC_Unit_11", 0.2,
            "CUP_I_B_PMC_Unit_12", 0.2,
            "CUP_I_B_PMC_Unit_13", 0.2,
            "CUP_I_B_PMC_Unit_14", 0.2,
            "CUP_I_B_PMC_Unit_15", 0.2,
            "CUP_I_B_PMC_Unit_16", 0.2,
            "CUP_I_B_PMC_Unit_17", 0.2,
            "CUP_I_B_PMC_Unit_19", 0.2,
            "CUP_I_B_PMC_Unit_20", 0.2,
            "CUP_I_B_PMC_Unit_21", 0.2,
            "CUP_I_B_PMC_Unit_22", 0.2,
            "CUP_I_B_PMC_Unit_23", 0.2,
            "CUP_I_B_PMC_Unit_24", 0.2,
            "CFP_GUER_GreenTan", 0.3,
            "CFP_GUER_ERDLpants", 0.3,
            "CFP_GUER_3CDespants", 0.3,
            "CFP_GUER_ChocChippants", 0.3,
            "CFP_GUER_MCampants", 0.3,
            "CFP_GUER_M81Tee", 0.3,
            "CFP_GUER_TanTee", 0.3,
            "CFP_U_WorkUniform_3Desert", 0.3,
            "CFP_U_WorkUniform_ChocChip", 0.3,
            "CFP_U_WorkUniform_M81Des", 0.3,
            "CFP_GUER_M81", 0.3

        };

        // Basic Rigs
        vestList[] = {
            "CFP_HV5_Ciras_Olive", 0.4,
            "CFP_LBT1961_CB", 0.2,
            "CFP_LBT1961_GRN", 0.2,
            "CFP_LBT1961_OGA_OD", 0.2,
            "CFP_MBSS_Green", 0.2,
            "CFP_MBSS_BLK", 0.2,
            "CFP_MBSS_TAN", 0.2,
            "CFP_MBSS_CB", 0.2,
            "CFP_MBSS_PACA_operator", 0.2,
            "CFP_MBSS_PACA", 0.2,
            "CFP_MBSS_PACA_BLK", 0.2,
            "CFP_MBSS_PACA_TAN", 0.2,
            "CFP_MBSS_PACA_CB", 0.2,
            "CFP_RAV_OGA", 0.4,
            "CFP_RAV_Green", 0.4,
            "CFP_RAV_Black", 0.4
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 0.6,
            "G_Bandanna_blk", 0.1,
            "G_Bandanna_khk", 0.2,
            "G_Bandanna_tan", 0.2,
            "CUP_TK_NeckScarf", 0.3,
            "G_Shades_Black",0.3,
            "G_Shades_Blue",0.3,
            "SP_Shades_Black",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.4,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Shemagh_Face_Atacsau", 0.2,
            "CFP_Shemagh_Half_Red", 0.2,
            "CFP_Shemagh_Half_Black", 0.2,
            "CFP_Shemagh_Half_White", 0.2,
            "CFP_Shemagh_Half_Tan", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2
        };

        // Baseball caps, boonies,
        headgearList[] = {
            "", 0.4,
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "H_WatchCap_cbr", 0.25,
            "H_WatchCap_khk", 0.2,
            "H_WatchCap_blk", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "CUP_H_USMC_BOONIE_DES", 0.25,
            "CUP_H_USMC_BOONIE_PRR_DES", 0.25,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "H_BoonieHat_khk",0.25,
            "H_BoonieHat_mcamo",0.25,
            "H_BoonieHat_khk_hs",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "CUP_H_PMC_Cap_Back_Tan",0.35,
            "CUP_H_PMC_Cap_Back_EP_Tan",0.35,
            "CUP_H_PMC_Cap_Back_Grey",0.35,
            "CUP_H_PMC_Cap_Back_EP_Grey",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_Back_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_PRR_Tan",0.35,
            "CUP_H_PMC_Cap_PRR_Grey",0.35,
            "CUP_H_PMC_Cap_EP_Tan",0.35,
            "CUP_H_PMC_Cap_EP_Grey",0.35,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        nvgList[] = {
            "", 1
        };

        backpackList[] = {
            "",0.7,
            "B_AssaultPack_cbr", 0.25,
            "B_AssaultPack_khk", 0.25,
            "B_AssaultPack_mcamo", 0.25,
            "B_AssaultPack_cbr", 0.25,
            "SP_Carryall_Tan", 0.2,
            "B_Carryall_khk", 0.2,
            "B_Carryall_mcamo", 0.2,
            "B_Carryall_cbr", 0.2,
            "B_Kitbag_mcamo", 0.2,
            "B_Kitbag_cbr", 0.2,
            "CUP_B_AssaultPack_Coyote", 0.2
        };

        grenadeList[] = {
            {"HandGrenade",4}, 0.25,
            {"MiniGrenade",4}, 0.25,
            {"CUP_HandGrenade_M67",4}, 0.25,
            {"CUP_HandGrenade_L109A2_HE",4}, 0.25
        };

        // 6-8 options
        rifleList[] = {
            {"CUP_arifle_M4A3_camo",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
            {"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
            {"CUP_arifle_M4A3_black",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.2,
            {"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
            {"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
            {"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_G36",6}}, 0.2,
            {"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2
        };

        handgunList[] = {
            {"CUP_hgun_Glock17",{"CUP_17Rnd_9x19_glock17",3}}, 0.8,
            {"CUP_hgun_M9",{"CUP_15Rnd_9x19_M9",3}}, 0.4, // M9
            {"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.4,
            {"CUP_hgun_MicroUzi",{"CUP_30Rnd_9x19_UZI",3}}, 0.2,
            {"CUP_hgun_M9_snds",{"CUP_15Rnd_9x19_M9",3}}, 0.2
        };

        explosiveList[] = {
            {}, 0.9,
            {{"CUP_TimeBomb_M",2}}, 0.2,
            {{"CUP_Mine_M",2}}, 0.2,
            {{"CUP_PipeBomb_M",2}}, 0.2,
            {{"CUP_IED_V1_M",2}}, 0.2
        };

        backpack = "CUP_B_USPack_Coyote_Specops";
        weapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black","CUP_hgun_Glock17","Throw","Put"};
        linkedItems[] = {"CFP_LBT1961_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_LBT1961_GRN","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_black","","CUP_acc_Flashlight","CUP_optic_Eotech553_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CUP_I_B_PMC_Unit_7",{{"CUP_17Rnd_9x19_glock17",1,17},{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CFP_LBT1961_GRN",{{"FirstAidKit",1},{"HandGrenade",4,1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_B_USPack_Coyote_Specops",{}},"","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };
        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

	class CFP_B_USCIA_paramilitary_officer_01 : CFP_B_USCIA_Paramilitary_Officer_Base {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Officer";

    };

	class CFP_B_USCIA_paramilitary_officer_covert_01 : CFP_B_USCIA_Paramilitary_Officer_Base2 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_covert_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Officer (Covert)";

        uniformClass = "CUP_O_TKI_Khet_Jeans_01";

        uniformList[] = {
            "CFP_U_KhetPartug_Long_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
            "CFP_U_KhetPartug_Long_Black", 0.2,
            "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
            "CFP_U_KhetPartug_Long_Blue", 0.2,
            "CFP_U_KhetPartug_Long_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Long_Brown", 0.2,
            "CFP_U_KhetPartug_Long_Creme", 0.2,
            "CFP_U_KhetPartug_Long_Grey", 0.2,
            "CFP_U_KhetPartug_Long_Purple", 0.2,
            "CFP_U_KhetPartug_Long_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Blue", 0.2,
            "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
            "CFP_U_KhetPartug_Short_Brown", 0.2,
            "CFP_U_KhetPartug_Short_Creme", 0.2,
            "CFP_U_KhetPartug_Short_Grey", 0.2,
            "CFP_U_KhetPartug_Short_Purple", 0.2,
            "CFP_U_KhetPartug_Short_Tan", 0.2,
            "CFP_U_KhetPartug_Short_Black", 0.2
        };

        vestList[] = {
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_EDRL", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CFP_TakJacket_Woodland", 0.2,
            "CFP_TakJacket_Marpat", 0.2,
            "CFP_TakJacket_M81", 0.2,
            "CFP_TakJacket_EDRL", 0.2,
            "CFP_TakJacket_ChocChip", 0.2,
            "CFP_LBT1961_CB", 0.2,
            "CFP_LBT1961_GRN", 0.2,
            "CFP_LBT1961_OGA_OD", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Beard", 0.3,
            "CUP_TK_NeckScarf", 0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CUP_FR_Neckscarf",0.3,
            "",0.3,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Shemagh_Face_Atacsau", 0.2,
            "CFP_Shemagh_Half_Red", 0.2,
            "CFP_Shemagh_Half_Black", 0.2,
            "CFP_Shemagh_Half_White", 0.2,
            "CFP_Shemagh_Half_Tan", 0.2,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3
        };

        // Baseball caps, boonies,
        headgearList[] = {
            "CUP_H_TKI_Lungee_Open_01", 0.3,
            "CUP_H_TKI_Lungee_Open_02", 0.3,
            "CUP_H_TKI_Lungee_Open_03", 0.3,
            "CUP_H_TKI_Lungee_Open_04", 0.3,
            "CUP_H_TKI_Lungee_Open_05", 0.3,
            "CUP_H_TKI_Lungee_Open_06", 0.3,
            "CUP_H_TKI_Pakol_1_01", 0.25,
            "CUP_H_TKI_Pakol_1_02", 0.25,
            "CUP_H_TKI_Pakol_1_03", 0.25,
            "CUP_H_TKI_Pakol_1_04", 0.25,
            "CUP_H_TKI_Pakol_1_05", 0.25,
            "CUP_H_TKI_Pakol_1_06", 0.25,
            "CUP_H_TKI_Pakol_2_01", 0.25,
            "CUP_H_TKI_Pakol_2_02", 0.25,
            "CUP_H_TKI_Pakol_2_03", 0.25,
            "CUP_H_TKI_Pakol_2_04", 0.25,
            "CUP_H_TKI_Pakol_2_05", 0.25,
            "CUP_H_TKI_Pakol_2_06", 0.25,
            "CUP_H_TKI_SkullCap_01", 0.25,
            "CUP_H_TKI_SkullCap_02", 0.25,
            "CUP_H_TKI_SkullCap_03", 0.25,
            "CUP_H_TKI_SkullCap_04", 0.25,
            "CUP_H_TKI_SkullCap_05", 0.25,
            "CUP_H_TKI_SkullCap_06", 0.25,
            "CFP_Lungee_Open_Tan", 0.2,
            "CFP_Lungee_Open_LightOlive", 0.2,
            "CFP_Lungee_Open_Grey", 0.2,
            "CFP_Lungee_Open_Creme", 0.2,
            "CFP_Lungee_Open_Brown", 0.2,
            "CFP_Lungee_Open_BlueGrey", 0.2,
            "CFP_Lungee_Open_Blue", 0.2
        };

        nvgList[] = {
            "", 1
        };

        backpackList[] = {
            "",0.7,
            "CUP_B_AlicePack_Khaki", 0.25,
            "B_FieldPack_cbr", 0.2,
            "B_FieldPack_khk", 0.2
        };

        insigniaList[] = {};

        // 6-8 options
        rifleList[] = {
            {"CUP_arifle_M4A1_camo_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_M4A1_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.3,
            {"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.4,
            {"CUP_arifle_AK107",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_AKS74",{"CUP_30Rnd_545x39_AK_M",6}}, 0.4,
            {"CUP_arifle_AKS74_pso",{"CUP_30Rnd_545x39_AK_M",6}}, 0.1,
            {"CUP_arifle_AKS74U",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3,
            {"CUP_arifle_CZ805_A2_Holo_Laser",{"CUP_30Rnd_556x45_G36",6}}, 0.2,
            {"CUP_arifle_Mk16_CQC_FG_Aim_Laser_snds",{"CUP_30Rnd_556x45_Stanag",6}}, 0.2
        };

        backpack = "CUP_B_USPack_Coyote_Specops";
        weapons[] = {"CUP_arifle_AK74M","CUP_hgun_MicroUzi","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M","CUP_hgun_MicroUzi","Throw","Put"};
        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_06","CUP_H_TKI_SkullCap_01","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_06","CUP_H_TKI_SkullCap_01","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI","CUP_30Rnd_9x19_UZI"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"CUP_hgun_MicroUzi","","","",{"CUP_30Rnd_9x19_UZI",30},{},""},{"CUP_O_TKI_Khet_Partug_02",{{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_OI_TKI_Jacket3_06",{{"CUP_30Rnd_545x39_AK_M",3,30},{"CUP_30Rnd_9x19_UZI",2,30},{"CUP_HandGrenade_M67",2,1}}},{"CUP_B_USPack_Coyote_Specops",{{"CUP_HandGrenade_M67",1,1},{"CUP_IED_V1_M",2,1}}},"CUP_H_TKI_SkullCap_01","CUP_TK_NeckScarf",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};
    };

	class CFP_B_USCIA_paramilitary_officer_assault_01 : CFP_B_USCIA_Paramilitary_Officer_Base {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_01.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (Leader)";
        uniformClass = "CFP_U_FieldUniform_multicam";
        identityTypes[] = { "Head_NATO", "LanguageENG_F", "CFP_G_USRANGERS"};
        // Camo clothes
        uniformList[] = {
            "CFP_U_Crye_Tiger_Desert", 0.2,
            "CFP_U_Crye_Tiger_Desert_SS", 0.2,
            "CFP_U_Fielduniform_tiger_desert_ss", 0.2,
            "CFP_U_Fielduniform_tiger_desert", 0.2
        };

        insigniaList[] = {
            "BLOOD", 0.5
        };

        // Carrier
        vestList[] = {
            "CFP_HV5_Ciras_Olive", 0.8,
            "V_TacVest_khk", 0.3,
            "V_TacVest_brn", 0.3,
            "SP_Modular1_Atacs_au", 0.3,
            "CUP_V_PMC_CIRAS_Coyote_Patrol", 0.3,
            "CUP_V_I_RACS_Carrier_Vest", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_2", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_3", 0.25,
            "CUP_V_B_GER_Carrier_Rig_2_Brown", 0.25,
            "CUP_V_B_RRV_DA1",0.25,
            "CUP_V_B_RRV_DA2",0.25,
            "CUP_V_B_RRV_Scout3",0.25,
            "SP_Modular1_Tan", 0.25,
            "SP_Tactical1_Tan", 0.25,
            "V_PlateCarrier1_blk", 0.25,
            "V_PlateCarrier2_blk", 0.25,
            "SP_PlateCarrier1_Tan", 0.25,
            "SP_PlateCarrier1_Grey", 0.25,
            "CFP_RAV_OGA", 0.3,
            "CFP_RAV_Green", 0.3,
            "CFP_RAV_Black", 0.3,
            "CFP_FAPC_Operator_OGA", 0.25
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "G_Bandanna_blk", 0.4,
            "G_Bandanna_khk", 0.4,
            "G_Bandanna_tan", 0.4,
            "CFP_Shemagh_Neck_M81", 0.4,
            "CUP_TK_NeckScarf", 0.3,
            "CUP_FR_Neckscarf2",0.3,
            "G_Balaclava_Black", 0.3,
            "SP_Balaclava_Skull", 0.3,
            "SP_Balaclava_Skull2", 0.3,
            "SP_Balaclava_Venom", 0.3,
            "CFP_Shemagh_Face_Atacsau", 0.2,
            "CFP_Shemagh_Half_Red", 0.2,
            "CFP_Shemagh_Half_Black", 0.2,
            "CFP_Shemagh_Half_White", 0.2,
            "CFP_Shemagh_Half_Tan", 0.2,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Beard", 0.3
        };

        // Baseball caps, boonies,
        headgearList[] = {
            "CFP_OpsC_Uncov_Goggles", 0.5,
            "CFP_OpsC_Uncov_Goggle_Off", 0.5,
            "VSM_OPS2017_Helmet_Tan", 0.6,
            "SP_ProTecHelmet_Tan", 0.3,
            "SP_ProTecHelmet_Black", 0.25,
            "SP_MichHelmet_Black1", 0.25,
            "SP_MichHelmet_Black2", 0.25,
            "SP_MichHelmet_Tan1", 0.3,
            "SP_MichHelmet_Tan2", 0.3,
            "CUP_H_USArmy_Helmet_Pro_gog", 0.25,
            "CUP_H_USArmy_Helmet_Pro", 0.25,
            "CFP_OPS2017_Helmet_OliveFabric", 0.4,
            "CFP_OPS2017_Helmet_Grey", 0.4
        };

        backpack = "B_AssaultPack_cbr";
        weapons[] = {"CUP_arifle_M4A3_desert","CUP_hgun_Glock17_blk","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_desert","CUP_hgun_Glock17_blk","Throw","Put"};
        linkedItems[] = {"CFP_HV5_Ciras_Olive","CFP_OpsC_Uncov_Goggles","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_HV5_Ciras_Olive","CFP_OpsC_Uncov_Goggles","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_desert","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","CUP_optic_ACOG_Reflex_Desert",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tiger_Desert_SS",{{"CUP_30Rnd_556x45_Stanag",3,30},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CFP_HV5_Ciras_Olive",{{"FirstAidKit",1},{"HandGrenade",2,1},{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",2,1},{"B_IR_Grenade",1,1},{"Chemlight_blue",2,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"B_AssaultPack_cbr",{}},"CFP_OpsC_Uncov_Goggles","SP_Balaclava_Skull2",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    class CFP_B_USCIA_paramilitary_officer_assault_02 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_02.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (Grenadier)";

        // Carrier
        vestList[] = {
            "CUP_V_PMC_CIRAS_Coyote_Grenadier", 1.0
        };

        backpack = "B_AssaultPack_cbr";
        weapons[] = {"CUP_arifle_M4A1_BUIS_desert_GL","CUP_hgun_Glock17_blk","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_desert_GL","CUP_hgun_Glock17_blk","Throw","Put"};
        linkedItems[] = {"CUP_V_PMC_CIRAS_Coyote_Grenadier","SP_MichHelmet_Tan1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Coyote_Grenadier","SP_MichHelmet_Tan1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_desert_GL","","CUP_acc_ANPEQ_15_Flashlight_Tan_L","CUP_optic_ACOG_Reflex_Desert",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_FieldUniform_tiger_desert_SS",{{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CUP_V_PMC_CIRAS_Coyote_Grenadier",{{"FirstAidKit",1},{"HandGrenade",2,1},{"SmokeShell",2,1},{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",6,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"B_AssaultPack_cbr",{{"CUP_1Rnd_HEDP_M203",6,1},{"CUP_1Rnd_Smoke_M203",8,1}}},"SP_MichHelmet_Tan1","G_Bandanna_khk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    class CFP_B_USCIA_paramilitary_officer_assault_03 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_03.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (AT)";

        backpack = "B_AssaultPack_cbr";
        weapons[] = {"CUP_arifle_M4A3_desert","CUP_launch_M136","CUP_hgun_Glock17_blk","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_desert","CUP_launch_M136","CUP_hgun_Glock17_blk","Throw","Put"};
        linkedItems[] = {"CUP_V_B_RRV_DA1","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_DA1","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_M136_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_M136_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_Stanag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_desert","","CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L","CUP_optic_ACOG_Reflex_Desert",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_M136","","","",{"CUP_M136_M",1},{},""},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tiger_Desert",{{"CUP_30Rnd_556x45_Stanag",3,30},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CUP_V_B_RRV_DA1",{{"FirstAidKit",1},{"HandGrenade",2,1},{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",2,1},{"B_IR_Grenade",1,1},{"Chemlight_blue",2,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"B_AssaultPack_cbr",{{"CUP_M136_M",1,1}}},"CFP_OPS2017_Helmet_OliveFabric","G_Bandanna_blk",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    class CFP_B_USCIA_paramilitary_officer_assault_04 : CFP_B_USCIA_paramilitary_officer_assault_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_paramilitary_officer_assault_04.JPG";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary Trooper (AR)";

        // Carrier
        vestList[] = {
            "CUP_V_B_RRV_MG", 0.33,
            "CFP_CarrierRig_Gunner_OGA", 0.33,
            "CFP_CarrierRig_Gunner_OGA_OD", 0.33
        };

        backpack = "B_AssaultPack_cbr";
        weapons[] = {"CUP_lmg_Mk48_des","CUP_hgun_Glock17_blk","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_Mk48_des","CUP_hgun_Glock17_blk","Throw","Put"};
        linkedItems[] = {"CUP_V_B_RRV_MG","VSM_OPS2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CUP_V_B_RRV_MG","VSM_OPS2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_des","","CUP_acc_ANPEQ_15_Flashlight_Tan_L","CUP_optic_ACOG_Reflex_Desert",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tiger_Desert",{{"CUP_17Rnd_9x19_glock17",2,17}}},{"CUP_V_B_RRV_MG",{{"FirstAidKit",1},{"HandGrenade",2,1},{"SmokeShell",2,1},{"B_IR_Grenade",1,1},{"Chemlight_blue",2,1},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100},{"CUP_17Rnd_9x19_glock17",1,17}}},{"B_AssaultPack_cbr",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2,100}}},"VSM_OPS2017_Helmet_Tan","CUP_FR_NeckScarf",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    // Vehicles

    class B_CTRG_LSV_01_light_F;
    class B_CTRG_LSV_01_light_F_OCimport_01 : B_CTRG_LSV_01_light_F { scope = 0; class EventHandlers; class Turrets; };
    class B_CTRG_LSV_01_light_F_OCimport_02 : B_CTRG_LSV_01_light_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_SUV_TKA;
    class CUP_O_SUV_TKA_OCimport_01 : CUP_O_SUV_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_SUV_TKA_OCimport_02 : CUP_O_SUV_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
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

    class CFP_O_TBAN_Offroad_Armed_01;
    class CFP_O_TBAN_Offroad_Armed_01_OCimport_01 : CFP_O_TBAN_Offroad_Armed_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_TBAN_Offroad_Armed_01_OCimport_02 : CFP_O_TBAN_Offroad_Armed_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class I_C_Offroad_02_unarmed_F;
    class I_C_Offroad_02_unarmed_F_OCimport_01 : I_C_Offroad_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Offroad_02_unarmed_F_OCimport_02 : I_C_Offroad_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class B_G_Offroad_01_F;
    class B_G_Offroad_01_F_OCimport_01 : B_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_G_Offroad_01_F_OCimport_02 : B_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_UH1H_TK_GUE;
    class CUP_I_UH1H_TK_GUE_OCimport_01 : CUP_I_UH1H_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UH1H_TK_GUE_OCimport_02 : CUP_I_UH1H_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_Ural_CDF;
    class CUP_B_Ural_CDF_OCimport_01 : CUP_B_Ural_CDF { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Ural_CDF_OCimport_02 : CUP_B_Ural_CDF_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CFP_O_TBAN_Technical_PK_01;
    class CFP_O_TBAN_Technical_PK_01_OCimport_01 : CFP_O_TBAN_Technical_PK_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_O_TBAN_Technical_PK_01_OCimport_02 : CFP_O_TBAN_Technical_PK_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };


    class CFP_B_USCIA_LSV_01 : B_CTRG_LSV_01_light_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_LSV_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "LSV";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Sand";

    };

    class CFP_B_USCIA_LSV_02 : CFP_B_USCIA_LSV_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_LSV_02.JPG";
        displayName = "LSV (Special Forces)";
        crew = "CFP_B_USCIA_paramilitary_officer_assault_01";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        ALiVE_orbatCreator_texture = "Black";
    };

    class CFP_B_USCIA_SUV_01 : CUP_O_SUV_TKA_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_SUV_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_SUV\data\suv_body_bluewhite_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIV";

    };

    class CFP_B_USCIA_Datsun_PK_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Datsun_PK_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun PK";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "desert";

    };

    class CFP_B_USCIA_Datsun_PK_02 : CFP_B_USCIA_Datsun_PK_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Datsun_PK_02.JPG";
        displayName = "Datsun PK (Covert)";
        crew = "CFP_B_USCIA_paramilitary_officer_covert_01";
    };

    class CFP_B_USCIA_Offroad_01 : CFP_O_TBAN_Offroad_Armed_01_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Offroad_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Armed)";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_B_USCIA_paramilitary_officer_01"; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_06";

    };

    class CFP_B_USCIA_Offroad_02 : B_G_Offroad_01_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Offroad_02.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };
    class CFP_B_USCIA_MB_4WD_01 : I_C_Offroad_02_unarmed_F_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_MB_4WD_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "MB 4WD";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;[_unit,['Olive',1], ['hideLeftDoor',1,'hideRightDoor',1,'hideHeadSupportRear',1,'hideHeadSupportFront',1,'hideRollcage',1,'hideSpareWheel',1]] call BIS_fnc_initVehicle;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "White";

    };

    class CUP_Mi8_Base;
    class CUP_O_Mi17_TK : CUP_Mi8_Base { class EventHandlers;  class Turrets;};
    class CUP_O_Mi17_TK_OCimport_01 : CUP_O_Mi17_TK {
        scope = 0;
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };
    class CFP_B_USCIA_Mi_8MT_01 : CUP_O_Mi17_TK_OCimport_01
    {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Mi_8MT_01.JPG";
        scope = 2;
        side = 1;
        displayName = "Mi-8MT";
        faction = "CFP_B_USCIA";
        vehicleClass = "CFP_B_USCIA_AIRCRAFT";
        camouflage = 4;
        crew = "CFP_B_USCIA_paramilitary_officer_01";
        typicalCargo[] = {"CFP_B_USCIA_paramilitary_officer_01","CFP_B_USCIA_paramilitary_officer_01"};
        hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_cia1_2_co.paa"};
        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
        };
    };

    class CFP_B_USCIA_UH_1H_01 : CUP_I_UH1H_TK_GUE_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_UH_1H_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1H";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class RightDoorGun : RightDoorGun { gunnerType = ""; };
            class LeftDoorGun : LeftDoorGun { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa'];_unit setObjectTextureGlobal [2,'CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class CFP_B_USCIA_Ural_01 : CUP_B_Ural_CDF_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Ural_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_un_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_un_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "UN";

    };

    class CFP_B_USCIA_Technical_01 : CFP_O_TBAN_Technical_PK_01_OCimport_02 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Technical_01.JPG";
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Technical";
        side = 1;
        faction = "CFP_B_USCIA";
        crew = "CFP_B_USCIA_paramilitary_officer_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USCIA_paramilitary_officer_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_trup4_civ_CO.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "striped";

    };

    class CFP_B_USCIA_Technical_02 : CFP_B_USCIA_Technical_01 {
        editorPreview = "\x\cfp\addons\b_uscia\data\preview\CFP_B_USCIA_Technical_02.JPG";
        displayName = "Datsun Technical (Covert)";
        crew = "CFP_B_USCIA_paramilitary_officer_covert_01";
    };

    class CUP_USBasicAmmunitionBox; // CUP_USBasicAmmunitionBox

    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox

    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox

    class CUP_USLaunchersBox; // CUP_USLaunchersBox

    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_USCIA_AmmoBox : CUP_USBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(HandGrenade,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_TimeBomb_M,50);
            mag_xx(SmokeShell,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(Chemlight_blue,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_1Rnd_Smoke_M203,50);
            mag_xx(CUP_M136_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_USCIA_WeaponsBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_M4A3_black,10);
            weap_xx(CUP_hgun_Glock17,10);
            weap_xx(CUP_arifle_M4A1_Aim,10);
            weap_xx(CUP_arifle_M4A3_desert,10);
            weap_xx(CUP_hgun_Glock17_blk,10);
            weap_xx(CUP_arifle_M4A1_BUIS_desert_GL,10);
            weap_xx(CUP_lmg_Mk48_des,10);
        };
        class TransportItems {
            item_xx(CUP_acc_Flashlight,10);
            item_xx(CUP_optic_Eotech553_Black,10);
            item_xx(CUP_optic_CompM2_Black,10);
            item_xx(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L,10);
            item_xx(CUP_optic_ACOG_Reflex_Desert,10);
            item_xx(CUP_acc_ANPEQ_15_Flashlight_Tan_L,10);
        };
    };
    class CFP_B_USCIA_LaunchersBox : CUP_USLaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_M136_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_M136,5);
        };
        class TransportItems {
        };
    };
    class CFP_B_USCIA_UniformBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_GUER_MCampants,15);
            item_xx(CFP_U_KhetPartug_Long_light_olive,15);
            item_xx(CFP_U_FieldUniform_tiger_desert,15);
            item_xx(CFP_U_Crye_Tiger_Desert_SS,15);
            item_xx(CFP_U_Crye_Tiger_Desert,15);
            item_xx(CFP_U_FieldUniform_tiger_desert_SS,15);
        };
    };
    class CFP_B_USCIA_SupportBox : CUP_USSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_MBSS_PACA_TAN,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_Oakleys_Embr,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_LBT1961_CB,10);
            item_xx(CFP_Lungee_Open_Brown,10);
            item_xx(CFP_Neck_Wrap3,10);
            item_xx(CUP_B_USPack_Coyote_Specops,10);
            item_xx(SP_PlateCarrier1_Tan,10);
            item_xx(SP_MichHelmet_Black2,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(CUP_V_PMC_CIRAS_Coyote_Grenadier,10);
            item_xx(CFP_OpsC_Uncov_Goggles,10);
            item_xx(CFP_Beard,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(CUP_V_B_RRV_DA2,10);
            item_xx(SP_ProTecHelmet_Tan,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(CUP_B_AssaultPack_Coyote,10);
            item_xx(CFP_CarrierRig_Gunner_OGA_OD,10);
            item_xx(CFP_OpsC_Uncov_Goggle_Off,10);
        };
    };
    class CFP_B_USCIA_SupplyBox : CUP_USVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = US CIA (Middle East) Supply Box;
        class TransportMagazines {
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(HandGrenade,50);
            mag_xx(MiniGrenade,50);
            mag_xx(CUP_TimeBomb_M,50);
            mag_xx(SmokeShell,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(Chemlight_blue,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_1Rnd_Smoke_M203,50);
            mag_xx(CUP_M136_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_M4A3_black,10);
            weap_xx(CUP_hgun_Glock17,10);
            weap_xx(CUP_arifle_M4A1_Aim,10);
            weap_xx(CUP_arifle_M4A3_desert,10);
            weap_xx(CUP_hgun_Glock17_blk,10);
            weap_xx(CUP_arifle_M4A1_BUIS_desert_GL,10);
            weap_xx(CUP_lmg_Mk48_des,10);
            weap_xx(CUP_launch_M136,10);
        };
        class TransportItems {
            item_xx(CUP_acc_Flashlight,10);
            item_xx(CUP_optic_Eotech553_Black,10);
            item_xx(CUP_optic_CompM2_Black,10);
            item_xx(CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L,10);
            item_xx(CUP_optic_ACOG_Reflex_Desert,10);
            item_xx(CUP_acc_ANPEQ_15_Flashlight_Tan_L,10);
            item_xx(CFP_MBSS_PACA_TAN,10);
            item_xx(H_Booniehat_khk,10);
            item_xx(CFP_Oakleys_Embr,10);
            item_xx(B_AssaultPack_cbr,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CFP_LBT1961_CB,10);
            item_xx(CFP_Lungee_Open_Brown,10);
            item_xx(CFP_Neck_Wrap3,10);
            item_xx(CUP_B_USPack_Coyote_Specops,10);
            item_xx(SP_PlateCarrier1_Tan,10);
            item_xx(SP_MichHelmet_Black2,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(CUP_V_PMC_CIRAS_Coyote_Grenadier,10);
            item_xx(CFP_OpsC_Uncov_Goggles,10);
            item_xx(CFP_Beard,10);
            item_xx(B_Kitbag_cbr,10);
            item_xx(CUP_V_B_RRV_DA2,10);
            item_xx(SP_ProTecHelmet_Tan,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(CUP_B_AssaultPack_Coyote,10);
            item_xx(CFP_CarrierRig_Gunner_OGA_OD,10);
            item_xx(CFP_OpsC_Uncov_Goggle_Off,10);
            item_xx(CFP_GUER_MCampants,10);
            item_xx(CFP_U_KhetPartug_Long_light_olive,10);
            item_xx(CFP_U_FieldUniform_tiger_desert,10);
            item_xx(CFP_U_Crye_Tiger_Desert_SS,10);
            item_xx(CFP_U_Crye_Tiger_Desert,10);
            item_xx(CFP_U_FieldUniform_tiger_desert_SS,10);
        };
    };

};


