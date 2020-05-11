#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_I_Hilux_unarmed_TK;
    class CUP_I_Hilux_unarmed_TK_OCimport_01 : CUP_I_Hilux_unarmed_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_unarmed_TK_OCimport_02 : CUP_I_Hilux_unarmed_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_Hilux_DSHKM_TK;
    class CUP_I_Hilux_DSHKM_TK_OCimport_01 : CUP_I_Hilux_DSHKM_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_DSHKM_TK_OCimport_02 : CUP_I_Hilux_DSHKM_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_SPG9_TK;
    class CUP_I_Hilux_SPG9_TK_OCimport_01 : CUP_I_Hilux_SPG9_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_SPG9_TK_OCimport_02 : CUP_I_Hilux_SPG9_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_igla_TK;
    class CUP_I_Hilux_igla_TK_OCimport_01 : CUP_I_Hilux_igla_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_igla_TK_OCimport_02 : CUP_I_Hilux_igla_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_metis_TK;
    class CUP_I_Hilux_metis_TK_OCimport_01 : CUP_I_Hilux_metis_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_metis_TK_OCimport_02 : CUP_I_Hilux_metis_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_podnos_TK;
    class CUP_I_Hilux_podnos_TK_OCimport_01 : CUP_I_Hilux_podnos_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_podnos_TK_OCimport_02 : CUP_I_Hilux_podnos_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_MLRS_TK;
    class CUP_I_Hilux_MLRS_TK_OCimport_01 : CUP_I_Hilux_MLRS_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_MLRS_TK_OCimport_02 : CUP_I_Hilux_MLRS_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_zu23_TK;
    class CUP_I_Hilux_zu23_TK_OCimport_01 : CUP_I_Hilux_zu23_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_zu23_TK_OCimport_02 : CUP_I_Hilux_zu23_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_AGS30_TK;
    class CUP_I_Hilux_AGS30_TK_OCimport_01 : CUP_I_Hilux_AGS30_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_AGS30_TK_OCimport_02 : CUP_I_Hilux_AGS30_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Hilux_UB32_TK;
    class CUP_I_Hilux_UB32_TK_OCimport_01 : CUP_I_Hilux_UB32_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Hilux_UB32_TK_OCimport_02 : CUP_I_Hilux_UB32_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class cfp_i_is_team_leader : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_team_leader.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Team Leader";
        side = 2;
        faction = "CFP_I_IS";

        identityTypes[] = {"Head_TK","Language_Ackbar"};

        uniformClass = "CFP_FieldUniform_rogtan_SS";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_FieldUniform_rogtan_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_V_OI_TKI_Jacket3_03",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{},"IS_bandanna_black_logo1","CFP_Shemagh_Half_Tan",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_rogtan_SS", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_tanatacs_SS", 0.3,
          "CFP_FieldUniform_marpatm81_SS", 0.3,
          "CFP_FieldUniform_fleckacr_SS", 0.3,
          "CFP_FieldUniform_dcum81_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "CFP_U_FieldUniform_M81_SS", 0.3,
          "CFP_U_FieldUniform_marpat_d_SS", 0.3,
          "CFP_U_FieldUniform_acr_desert_SS", 0.3,
          "CFP_U_FieldUniform_3ColorDesert_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Tan_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "IS_bandanna_black_logo2", 0.3,
            "IS_bandanna_black_logo1", 0.3,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.25,
            "SP_BeanieHat_Tan", 0.2,
            "CFP_PatrolCap_M81", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
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

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.33,
            "CUP_V_OI_TKI_Jacket3_02", 0.2,
            "CUP_V_OI_TKI_Jacket3_01", 0.33,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.3,
            "CFP_UtilityJacket_M81", 0.3,
            "CFP_UtilityJacket_ChocChip", 0.3,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest", 0.2,
            "CFP_MBSS_CB", 0.2,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2
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

    class cfp_i_is_squad_leader : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_squad_leader.JPG;

        displayName = "IS Squad Leader";

        linkedItems[] = {"CFP_AK_VEST_Olive","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_BUIS_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_BUIS_GL","","","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_WorkUniform_3Desert",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CFP_AK_VEST_Olive",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_RGD5",2,1}}},{"B_AssaultPack_rgr",{{"CUP_1Rnd_HE_M203",8,1},{"CUP_1Rnd_HEDP_M203",8,1}}},"IS_bandanna_black_logo1","CFP_Shemagh_Half_Red",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_grenadier : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_grenadier.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Grenadier";
        side = 2;
        faction = "CFP_I_IS";

        identityTypes[] = {"Head_TK","Language_Ackbar"};

        uniformClass = "CFP_FieldUniform_tanblack_SS";

        linkedItems[] = {"CFP_MBSS_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_MBSS_CB","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_AssaultPack_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_FieldUniform_tanblack_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_MBSS_CB",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30}}},{"CFP_AssaultPack_M81",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_rogtan_SS", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_tanatacs_SS", 0.3,
          "CFP_FieldUniform_marpatm81_SS", 0.3,
          "CFP_FieldUniform_fleckacr_SS", 0.3,
          "CFP_FieldUniform_dcum81_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "CFP_U_FieldUniform_M81_SS", 0.3,
          "CFP_U_FieldUniform_marpat_d_SS", 0.3,
          "CFP_U_FieldUniform_acr_desert_SS", 0.3,
          "CFP_U_FieldUniform_3ColorDesert_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Tan_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "CFP_Shemagh_Full_Red", 0.3,
            "CFP_Shemagh_Full_Black", 0.3,
            "CFP_Shemagh_Full_Gold", 0.2,
            "CFP_Shemagh_Full_Tan", 0.2,
            "CFP_Shemagh_Full_Green", 0.2,
            "CFP_Shemagh_Full_Creme", 0.2,
            "CFP_Shemagh_Head_White", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 1.0
        };

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.33,
            "CUP_V_OI_TKI_Jacket3_02", 0.2,
            "CUP_V_OI_TKI_Jacket3_01", 0.33,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.3,
            "CFP_UtilityJacket_M81", 0.3,
            "CFP_UtilityJacket_ChocChip", 0.3,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest", 0.2,
            "CFP_MBSS_CB", 0.2,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2
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

    class cfp_i_is_rifleman : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman.JPG;

        displayName = "IS Rifleman";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_tanatacs_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_V_OI_TKI_Jacket3_02",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_militaman : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_militaman.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Militaman";
        side = 2;
        faction = "CFP_I_IS";

        identityTypes[] = {"Head_TK","Language_Ackbar"};

        uniformClass = "CFP_GUER_3CDespants";

        linkedItems[] = {"V_TacVest_brn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_brn","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield_rail"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield_rail"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield_rail","","","",{"CUP_10x_303_M",10},{},""},{},{},{"CFP_GUER_3CDespants",{{"FirstAidKit",1},{"CUP_10x_303_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_brn",{{"FirstAidKit",1},{"CUP_10x_303_M",5,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"","CFP_Shemagh_Face_Atacsau",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_13", 0.3,
          "CUP_I_B_PMC_Unit_3", 0.3,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "IS_bandanna_black_logo2", 0.3,
            "IS_bandanna_black_logo1", 0.3,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.25,
            "SP_BeanieHat_Tan", 0.2,
            "CFP_PatrolCap_M81", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
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

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.33,
            "CUP_V_OI_TKI_Jacket3_02", 0.2,
            "CUP_V_OI_TKI_Jacket3_01", 0.33,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.3,
            "CFP_UtilityJacket_M81", 0.3,
            "CFP_UtilityJacket_ChocChip", 0.3,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1
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

    class cfp_i_is_irregular : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_irregular.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Irregular";
        side = 2;
        faction = "CFP_I_IS";

        identityTypes[] = {"Head_TK","Language_Ackbar"};

        uniformClass = "CUP_I_B_PMC_Unit_3";

        linkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PatrolCap_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","CFP_PatrolCap_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_LeeEnfield_rail"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield_rail"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield_rail","","","",{"CUP_10x_303_M",10},{},""},{},{},{"CUP_I_B_PMC_Unit_3",{{"FirstAidKit",1},{"CUP_10x_303_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{{"FirstAidKit",1},{"CUP_10x_303_M",5,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"CFP_PatrolCap_M81","CFP_Scarfshades_grey",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CUP_I_B_PMC_Unit_13", 0.3,
          "CUP_I_B_PMC_Unit_3", 0.3,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.4,
            "IS_bandanna_black_logo2", 0.3,
            "IS_bandanna_black_logo1", 0.3,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.25,
            "SP_BeanieHat_Tan", 0.2,
            "CFP_PatrolCap_M81", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
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

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.33,
            "CUP_V_OI_TKI_Jacket3_02", 0.2,
            "CUP_V_OI_TKI_Jacket3_01", 0.33,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.3,
            "CFP_UtilityJacket_M81", 0.3,
            "CFP_UtilityJacket_ChocChip", 0.3,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1
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

    class cfp_i_is_autorifleman : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_autorifleman.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "IS Autorifleman";
        side = 2;
        faction = "CFP_I_IS";

        identityTypes[] = {"Head_TK","Language_Ackbar"};

        uniformClass = "CFP_FieldUniform_marpatm81_SS";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_FieldUniform_marpatm81_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_rogtan_SS", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_tanatacs_SS", 0.3,
          "CFP_FieldUniform_marpatm81_SS", 0.3,
          "CFP_FieldUniform_fleckacr_SS", 0.3,
          "CFP_FieldUniform_dcum81_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "CFP_U_FieldUniform_M81_SS", 0.3,
          "CFP_U_FieldUniform_marpat_d_SS", 0.3,
          "CFP_U_FieldUniform_acr_desert_SS", 0.3,
          "CFP_U_FieldUniform_3ColorDesert_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Tan_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_GUER_3CDespants", 0.2,
          "CFP_GUER_M81Tee", 0.2,
          "CFP_GUER_TanTee", 0.2,
          "CFP_GUER_Tigerpants", 0.2,
          "CFP_GUER_MCampants", 0.2,
          "CFP_GUER_ERDLpants", 0.2,
          "CFP_U_WorkUniform_ChocChip", 0.2,
          "CFP_U_WorkUniform_3Desert", 0.2,
          "CFP_U_WOrkUniform_M81Des", 0.2,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "CFP_U_WorkUniform_DesTiger", 0.2,
          "CFP_U_WorkUniform_Green", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 1.0
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "IS_Balaclava_logo2",0.1,
            "SP_Balaclava_Skull2", 0.2,
            "IS_Balaclava", 0.2,
            "IS_Balaclava_logo1", 0.2,
            "SP_Balaclava_IDF", 0.3,
            "G_Balaclava_oli", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3
        };

        //Vests
        vestList[] = {
            "CUP_V_OI_TKI_Jacket3_03", 0.33,
            "CUP_V_OI_TKI_Jacket3_02", 0.2,
            "CUP_V_OI_TKI_Jacket3_01", 0.33,
            "V_TacVest_brn", 0.4,
            "V_TacVest_khk", 0.4,
            "V_TacVest_blk", 0.33,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.3,
            "CFP_UtilityJacket_Woodland", 0.3,
            "CFP_UtilityJacket_M81", 0.3,
            "CFP_UtilityJacket_ChocChip", 0.3,
            "CFP_TakJacket_M81", 0.1,
            "CFP_TakJacket_ChocChip", 0.1,
            "CFP_TakJacket_Marpat", 0.1,
            "CFP_TakJacket_EDRL", 0.1,
            "CFP_TakJacket_Woodland", 0.1,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_Alice_Vest", 0.2,
            "CFP_MBSS_CB", 0.2,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2
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

    class cfp_i_is_machinegunner : cfp_i_is_grenadier {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_machinegunner.JPG;

        displayName = "IS Machinegunner";

        linkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_Pecheneg"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CFP_Kitbag_Brown";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_FieldUniform_fleckacr_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1}}},{"SP_Tactical1_Black",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"CFP_Kitbag_Brown",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_sniper : cfp_i_is_autorifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_sniper.JPG;

        displayName = "IS Sniper";

        linkedItems[] = {"CFP_Alice_Vest","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_FieldUniform_dcum81_SS",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_at : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_at.JPG;

        displayName = "IS Anti-Tank";

        linkedItems[] = {"CFP_UtilityJacket_ChocChip","H_Bandanna_sand","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_ChocChip","H_Bandanna_sand","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_FieldUniform_blackacu_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_ChocChip",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"H_Bandanna_sand","CFP_Shemagh_Neck_Gold",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_medic : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_medic.JPG;

        displayName = "IS Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_d_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_01",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_Bandanna_gry","CFP_Shemagh_Neck_Creme",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_sapper : cfp_i_is_grenadier {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_sapper.JPG;

        displayName = "IS Sapper";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_mcamo";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Tan_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_khk",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"APERSTripMine_Wire_Mag",1,1}}},{"B_AssaultPack_mcamo",{{"DemoCharge_Remote_Mag",5,1},{"APERSTripMine_Wire_Mag",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_crewman : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_crewman.JPG;

        displayName = "IS Crewman";
        engineer = 1;

        linkedItems[] = {"CFP_RAV_Black","SP_BeanieHat_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_Black","SP_BeanieHat_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_RAV_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"SP_BeanieHat_Black","CFP_Shemagh_Neck_White",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_dshkm : cfp_i_is_rifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_dshkm.JPG;

        displayName = "IS Gunner [DSHKM]";

        linkedItems[] = {"CFP_AK_VEST_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_EDRL","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_3ColorDesert_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","SP_Balaclava_Skull2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_kord : cfp_i_is_autorifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_kord.JPG;

        displayName = "IS Gunner [KORD]";

        linkedItems[] = {"CFP_RAV_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_Green","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Kord_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_desert_flecktarn",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_RAV_Green",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Kord_Tripod_Bag",{}},"","SP_Balaclava_IDF",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_podnos : cfp_i_is_rifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_podnos.JPG;

        displayName = "IS Gunner [Podnos]";

        linkedItems[] = {"CFP_Tactical1_Flecktarn","CFP_Shemagh_Full_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_Flecktarn","CFP_Shemagh_Full_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKMS"};
        respawnWeapons[] = {"CUP_arifle_AKMS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKMS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Tactical1_Flecktarn",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"CFP_Shemagh_Full_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_ags30 : cfp_i_is_rifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_ags30.JPG;

        displayName = "IS Gunner [AGS30]";

        linkedItems[] = {"CFP_UtilityJacket_Woodland","CFP_Shemagh_Full_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_Woodland","CFP_Shemagh_Full_Black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_13",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_Woodland",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"CFP_Shemagh_Full_Black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_metis : cfp_i_is_autorifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_metis.JPG;

        displayName = "IS Gunner [METIS]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_acr_desert_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_rifleman_spg9 : cfp_i_is_rifleman {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_rifleman_spg9.JPG;

        displayName = "IS Gunner [SPG9]";

        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_ChocChip",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_khk",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","IS_Balaclava",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_KORD : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_KORD.JPG;

        displayName = "Asst. Gunner [KORD]";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Kord_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_FieldUniform_tanatacs_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_V_OI_TKI_Jacket3_02",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Kord_Gun_Bag",{}},"H_Bandanna_cbr","CFP_Neck_Wrap3",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_DSHKM : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_DSHKM.JPG;

        displayName = "Asst. Gunner [DSHKM]";

        linkedItems[] = {"CFP_UtilityJacket_ChocChip","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_ChocChip","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_DShkM_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_M81Des",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_UtilityJacket_ChocChip",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_DShkM_Gun_Bag",{}},"H_Bandanna_gry","CFP_Scarfbeardshades_green",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_Podnos : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_Podnos.JPG;

        displayName = "Asst. Gunner [Podnos]";

        linkedItems[] = {"CFP_AK_VEST_EDRL","SP_BeanieHat_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_EDRL","SP_BeanieHat_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Podnos_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_WorkUniform_BlackGrey",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_EDRL",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Podnos_Gun_Bag",{}},"SP_BeanieHat_Tan","CFP_Shemagh_Neck_Gold",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_AGS30 : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_AGS30.JPG;

        displayName = "Asst. Gunner [AGS30]";

        linkedItems[] = {"CFP_TakJacket_Woodland","H_Bandanna_mcamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_TakJacket_Woodland","H_Bandanna_mcamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_AGS30_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_TakJacket_Woodland",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_AGS30_Gun_Bag",{}},"H_Bandanna_mcamo","CFP_Shemagh_Face_Atacsau",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_METIS : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_METIS.JPG;

        displayName = "Asst. Gunner [METIS]";

        linkedItems[] = {"V_TacVest_blk","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_blk","IS_bandanna_black_logo1","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Metis_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_FieldUniform_tanatacs_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_blk",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_Metis_Gun_Bag",{}},"IS_bandanna_black_logo1","CFP_Shemagh_Neck_Red",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_is_Asst_Gunner_SPG : cfp_i_is_team_leader {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Asst_Gunner_SPG.JPG;

        displayName = "Asst. Gunner [SPG-9]";

        linkedItems[] = {"V_I_G_resistanceLeader_F","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","H_Bandanna_cbr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_SPG9_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_GUER_M81Tee",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_I_G_resistanceLeader_F",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_B_SPG9_Gun_Bag",{}},"H_Bandanna_cbr","CFP_Scarfbeard_white",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_IS : FlagCarrier_OCimport_01
    {
        author = "AccuracythruVolume";
        displayName = "Flag (Islamic State)";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture '\x\cfp\addons\flags\IslamicState\ISC_flag_IS.paa'";
            };
        };
    };
    class FlagChecked_F;
    class FlagChecked_F_OCimport_01 : FlagChecked_F { scope = 0; class Eventhandlers; };
    class IS_Flag_1 : FlagChecked_F_OCimport_01
    {
        _generalMacro = "FlagCarrier";
        faction = "CFP_I_IS";
        vehicleClass = "IS_Flags";
        scope = 2;
        side = 4;
        accuracy = 1000;
        displayName = "Flag IS 1";
        armor = 1;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_1.paa""";
            };
        };
    };

    class IS_Flag_2 : FlagChecked_F_OCimport_01
    {
        _generalMacro = "FlagCarrier";
        faction = "CFP_I_IS";
        vehicleClass = "IS_Flags";
        scope = 2;
        side = 4;
        accuracy = 1000;
        displayName = "Flag IS 2";
        armor = 1;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_2.paa""";
            };
        };
    };

    class IS_Flag_3 : FlagChecked_F_OCimport_01
    {
        _generalMacro = "FlagCarrier";
        faction = "CFP_I_IS";
        vehicleClass = "IS_Flags";
        scope = 2;
        side = 4;
        accuracy = 1000;
        displayName = "Flag IS 3";
        armor = 1;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\IslamicState\ISC_flag_IS_3.paa""";
            };
        };
    };

    class CFP_I_IS_Hilux_01 : CUP_I_Hilux_unarmed_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_DShKM_01 : CUP_I_Hilux_DSHKM_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [DShKM]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_SPG_01 : CUP_I_Hilux_SPG9_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [SPG-9]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

    randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_Igla_01 : CUP_I_Hilux_igla_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Igla]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_Metis_01 : CUP_I_Hilux_metis_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Metis]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_Podnos_01 : CUP_I_Hilux_podnos_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [Podnos]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_MLRS_01 : CUP_I_Hilux_MLRS_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [MLRS]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_ZU_23_01 : CUP_I_Hilux_zu23_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [ZU-23-2]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_AGS_30_01 : CUP_I_Hilux_AGS30_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [AGS-30]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_IS_Hilux_UB_32_01 : CUP_I_Hilux_UB32_TK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Hilux [UB-32]";
        side = 2;
        faction = "CFP_I_IS";
        crew = "cfp_i_is_crewman";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "cfp_i_is_crewman"; };
        };

        randomTextureProbability = 100;

        // Hilux Skins
        textureList[] = {
            {"\x\cfp\addons\vehicles\Hilux\body_white_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_white_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_blue_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_black_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_red_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_tan_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_armygreen_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer1_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer3_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer4_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer5_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer6_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer7_is_co.paa"}, 0.3,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_guer9_is_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_co.paa"}, 0.2,
            {"\x\cfp\addons\vehicles\Hilux\body_creme_is_co.paa"}, 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn; (_this select 0) call CFP_main_fnc_randomizeVehicle; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_Hilux_armored_unarmed_Base;
    class CFP_I_IS_Hilux_Armored_01: CUP_Hilux_armored_unarmed_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_DSHKM_Base;
    class CFP_I_IS_Hilux_DSHKM_Armored_01: CUP_Hilux_armored_DSHKM_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [DSHKM]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_SPG9_Base;
    class CFP_I_IS_Hilux_SPG_Armored_01: CUP_Hilux_armored_SPG9_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [SPG-9]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_igla_Base;
    class CFP_I_IS_Hilux_Igla_Armored_01: CUP_Hilux_armored_igla_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [Igla]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_metis_Base;
    class CFP_I_IS_Hilux_Metis_Armored_01: CUP_Hilux_armored_metis_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [Metis]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_podnos_Base;
    class CFP_I_IS_Hilux_Podnos_Armored_01: CUP_Hilux_armored_podnos_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [Podnos]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_MLRS_Base;
    class CFP_I_IS_Hilux_MLRS_Armored_01: CUP_Hilux_armored_MLRS_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [MLRS]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_zu23_Base;
    class CFP_I_IS_Hilux_ZU_23_Armored_01: CUP_Hilux_armored_zu23_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [ZU-23-2]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_BMP1_Base;
    class CFP_I_IS_Hilux_BMP1_Armored_01: CUP_Hilux_armored_BMP1_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [BMP-1 Turret]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_BTR60_Base;
    class CFP_I_IS_Hilux_BTR60_Armored_01: CUP_Hilux_armored_BTR60_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [BTR-60 Turret]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_AGS30_Base;
    class CFP_I_IS_Hilux_AGS_30_Armored_01: CUP_Hilux_armored_AGS30_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [AGS-30]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class CUP_Hilux_armored_UB32_Base;
    class CFP_I_IS_Hilux_UB_32_Armored_01: CUP_Hilux_armored_UB32_Base {
      scope = 2;
      side = 2;
      displayname = "Hilux Armored [UB-32]";
      faction = "CFP_I_IS";
      crew = "cfp_i_is_crewman";
      TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };

    class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad : Offroad_01_base_F_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_offroad.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Offroad";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_offroad_flag : cfp_i_is_offroad {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_offroad_flag.JPG;
        displayName = "IS Offroad (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
            };
        };

    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_offroad_M2.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Offroad MG";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_offroad_M2_flag : cfp_i_is_offroad_M2 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_offroad_M2_flag.JPG;
        displayName = "IS Offroad MG (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
            };
        };

    };

    class B_G_Offroad_01_AT_F;
    class B_G_Offroad_01_AT_F_OCimport_01 : B_G_Offroad_01_AT_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_offroad_AT : B_G_Offroad_01_AT_F_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_offroad_AT.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Offroad AT";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa","\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class I_C_Offroad_02_LMG_F;
    class I_C_Offroad_02_LMG_F_OCimport_01 : I_C_Offroad_02_LMG_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_jeep_lmg : I_C_Offroad_02_LMG_F_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_jeep_lmg.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Jeep (LMG)";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        hiddenSelections[] = {"camo","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa","\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa","\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa","\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class I_C_Offroad_02_AT_F;
    class I_C_Offroad_02_AT_F_OCimport_01 : I_C_Offroad_02_AT_F { scope = 0; class Eventhandlers; };
    class cfp_i_is_jeep_at : I_C_Offroad_02_AT_F_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_jeep_at.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Jeep (AT)";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        hiddenSelections[] = {"camo","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };


    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_pickup_PK : CUP_I_Datsun_PK_TK_Random_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_pickup_PK.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Pickup PK";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };
    };

    class cfp_i_is_pickup_PK_OCimport_01 : cfp_i_is_pickup_PK { scope = 0; class Eventhandlers; };
    class cfp_i_is_pickup_PK_flag : cfp_i_is_pickup_PK_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_pickup_PK_flag.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Pickup PK (Flag)";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };

    class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_LR_M2 : CUP_O_LR_MG_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_LR_M2.JPG;
        scope = 2;
        side = 2;
        displayName = "IS L.R. M2";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_LR_SPG9 : CUP_O_LR_SPG9_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_LR_SPG9.JPG;
        scope = 2;
        side = 2;
        displayName = "IS L.R. SPG9";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_LR_Unarmed : CUP_O_LR_Transport_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_LR_Unarmed.JPG;
        scope = 2;
        side = 2;
        displayName = "IS L.R.";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_MG_RU;
    class CUP_O_UAZ_MG_RU_OCimport_01 : CUP_O_UAZ_MG_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_MG : CUP_O_UAZ_MG_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_MG.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ MG";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_AGS30_RU;
    class CUP_O_UAZ_AGS30_RU_OCimport_01 : CUP_O_UAZ_AGS30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_AGS30 : CUP_O_UAZ_AGS30_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_AGS30.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ AGS30";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_SPG9_RU;
    class CUP_O_UAZ_SPG9_RU_OCimport_01 : CUP_O_UAZ_SPG9_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_SPG9.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ SPG9";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_METIS_RU;
    class CUP_O_UAZ_METIS_RU_OCimport_01 : CUP_O_UAZ_METIS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_METIS : CUP_O_UAZ_METIS_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_METIS.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ METIS";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_Unarmed_RU;
    class CUP_O_UAZ_Unarmed_RU_OCimport_01 : CUP_O_UAZ_Unarmed_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_Unarmed.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_UAZ_Open_RU;
    class CUP_O_UAZ_Open_RU_OCimport_01 : CUP_O_UAZ_Open_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_UAZ_Open : CUP_O_UAZ_Open_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_UAZ_Open.JPG;
        scope = 2;
        side = 2;
        displayName = "IS UAZ Open";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 : CUP_B_HMMWV_DSHKM_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_hmmwv_dshkm.JPG;
        scope = 2;
        side = 2;
        displayName = "IS HMMWV DShKM";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_B_HMMWV_AGS_GPK_ACR;
    class CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01 : CUP_B_HMMWV_AGS_GPK_ACR { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_hmmwv_ags : CUP_B_HMMWV_AGS_GPK_ACR_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_hmmwv_ags.JPG;
        scope = 2;
        side = 2;
        displayName = "IS HMMWV AGS";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_Ural : CUP_O_Ural_CHDKZ_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Ural.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Ural";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Ural_ZU23.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Ural ZU23";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BTR40_MG : CUP_O_BTR40_MG_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BTR40_MG.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BTR40 MG";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_BTR40_MG_flag : cfp_i_is_BTR40_MG {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BTR40_MG_flag.JPG;
        displayName = "IS BTR40 MG (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON : ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };

    class CUP_O_M113_TKA;
    class CUP_O_M113_TKA_OCimport_01 : CUP_O_M113_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_M113 : CUP_O_M113_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M113.JPG;
        scope = 2;
        side = 2;
        displayName = "IS M113";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };


    class cfp_i_is_M113_flag : cfp_i_is_M113 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M113_flag.JPG;
        displayName = "IS M113 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON : ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };

    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BMP1 : CUP_O_BMP1_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP1.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BMP-1";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_BMP1_OCimport_01 : cfp_i_is_BMP1 { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1_flag : cfp_i_is_BMP1_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP1_flag.JPG;
        displayName = "IS BMP-1 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BMP1P : CUP_O_BMP1P_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP1P.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BMP-1P";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_BMP1P_OCimport_01 : cfp_i_is_BMP1P { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP1P_flag : cfp_i_is_BMP1P_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP1P_flag.JPG;
        displayName = "IS BMP-1P (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_B_BMP_HQ_CZ_Des;
    class CUP_B_BMP_HQ_CZ_Des_OCimport_01 : CUP_B_BMP_HQ_CZ_Des { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BMP2_PKM : CUP_B_BMP_HQ_CZ_Des_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP2_PKM.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BMP-2 PKM";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_BMP2_PKM_OCimport_01 : cfp_i_is_BMP2_PKM { scope = 0; class Eventhandlers; };
    class cfp_i_is_BMP2_PKM_flag : cfp_i_is_BMP2_PKM_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP2_PKM_flag.JPG;
        displayName = "IS BMP-2 PKM (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_B_BMP2_CZ_DES;
    class CUP_B_BMP2_CZ_DES_OCimport_01 : CUP_B_BMP2_CZ_DES { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BMP2 : CUP_B_BMP2_CZ_DES_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP2.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BMP-2";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BMP2_ZU_TKA;
    class CUP_O_BMP2_ZU_TKA_OCimport_01 : CUP_O_BMP2_ZU_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_BMP2_ZU : CUP_O_BMP2_ZU_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_BMP2_ZU.JPG;
        scope = 2;
        side = 2;
        displayName = "IS BMP-2 ZSU";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_T34 : CUP_O_T34_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T34.JPG;
        scope = 2;
        side = 2;
        displayName = "IS T34";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_ARMORED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_T34_OCimport_01 : cfp_i_is_T34 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T34_flag : cfp_i_is_T34_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T34_flag.JPG;
        displayName = "IS T34 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_T55 : CUP_O_T55_CSAT_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T55.JPG;
        scope = 2;
        side = 2;
        displayName = "IS T55";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_ARMORED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_T55_OCimport_01 : cfp_i_is_T55 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T55_flag : cfp_i_is_T55_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T55_flag.JPG;
        displayName = "IS T55 (Flag)";
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_O_T72_TKA;
    class CUP_O_T72_TKA_OCimport_01 : CUP_O_T72_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_T72 : CUP_O_T72_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T72.JPG;
        scope = 2;
        side = 2;
        displayName = "IS T72";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_ARMORED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class cfp_i_is_T72_OCimport_01 : cfp_i_is_T72 { scope = 0; class Eventhandlers; };
    class cfp_i_is_T72_flag : cfp_i_is_T72_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_T72_flag.JPG;
        scope = 2;
        side = 2;
        displayName = "IS T72 (Flag)";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_ARMORED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\AttachFlag.sqf""";
                killed = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\onkilled.sqf""";
            };
        };

    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_ZSU : CUP_O_ZSU23_SLA_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_ZSU.JPG;
        scope = 2;
        side = 2;
        displayName = "IS ZSU";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_ARMORED";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman","cfp_i_is_crewman","cfp_i_is_crewman"};
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_AKM,CUP_launch_RPG7V)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_762x39_AK47_M,CUP_PG7V_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(B_AssaultPack_rgr)
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_is\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_ZU23 : CUP_O_ZU23_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_ZU23.JPG;
        scope = 2;
        side = 2;
        displayName = "IS ZU23";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_DSHKM.JPG;
        scope = 2;
        side = 2;
        displayName = "IS DSHKM";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_is_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_DSHkM_Mini_TriPod.JPG;
        scope = 2;
        side = 2;
        displayName = "IS DSHkM Mini TriPod";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_KORD : CUP_O_KORD_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_KORD.JPG;
        scope = 2;
        side = 2;
        displayName = "IS KORD";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_KORD_high : CUP_O_KORD_high_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_KORD_high.JPG;
        scope = 2;
        side = 2;
        displayName = "IS KORD High";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_AGS : CUP_O_AGS_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_AGS.JPG;
        scope = 2;
        side = 2;
        displayName = "IS AGS";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_M2Static : CUP_B_M2StaticMG_US_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M2Static.JPG;
        scope = 2;
        side = 2;
        displayName = "IS M2";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_B_M2StaticMG_MiniTripod_US;
    class CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_M2Static_MiniTripod : CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M2Static_MiniTripod.JPG;
        scope = 2;
        side = 2;
        displayName = "IS M2 Mini Tripod";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_Metis : CUP_O_Metis_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_Metis.JPG;
        scope = 2;
        side = 2;
        displayName = "IS Metis";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_is_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_SPG9.JPG;
        scope = 2;
        side = 2;
        displayName = "IS SPG9";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_B_TOW_TriPod_USMC;
    class CUP_B_TOW_TriPod_USMC_OCimport_01 : CUP_B_TOW_TriPod_USMC { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_is_TOW : CUP_B_TOW_TriPod_USMC_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_TOW.JPG;
        scope = 2;
        side = 2;
        displayName = "IS TOW";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_2b14_82mm.JPG;
        scope = 2;
        side = 2;
        displayName = "IS 2b14 82mm";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_B_M252_US;
    class CUP_B_M252_US_OCimport_01 : CUP_B_M252_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_M252 : CUP_B_M252_US_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M252.JPG;
        scope = 2;
        side = 2;
        displayName = "IS M252";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_D30_RU;
    class CUP_O_D30_RU_OCimport_01 : CUP_O_D30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_D30 : CUP_O_D30_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_D30.JPG;
        scope = 2;
        side = 2;
        displayName = "IS D30";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_O_D30_AT_RU;
    class CUP_O_D30_AT_RU_OCimport_01 : CUP_O_D30_AT_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_D30_AT : CUP_O_D30_AT_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_D30_AT.JPG;
        scope = 2;
        side = 2;
        displayName = "IS D30 AT";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };
    class CUP_B_M119_US;
    class CUP_B_M119_US_OCimport_01 : CUP_B_M119_US { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_is_M119 : CUP_B_M119_US_OCimport_01 {
        editorPreview = \x\cfp\addons\i_is\data\preview\cfp_i_is_M119.JPG;
        scope = 2;
        side = 2;
        displayName = "IS M119";
        faction = "CFP_I_IS";
        vehicleClass = "CFP_i_is_STATIC";
        camouflage = 4;
        crew = "cfp_i_is_crewman";
        typicalCargo[] = {"cfp_i_is_crewman"};
    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox

    class CFP_I_IS_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(IEDUrbanSmall_Remote_Mag,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_I_IS_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_M16A4_Base,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_lmg_m249_pip1,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_Sa58P,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_I_IS_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Launchers Box;
        class TransportMagazines {
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG18,5);
        };
        class TransportItems {
        };
    };
    class CFP_I_IS_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_U_o_is_uniform,15);
            item_xx(U_I_C_Soldier_Para_5_F,15);
        };
    };
    class CFP_I_IS_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(H_Bandanna_mcamo,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_khk,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(V_HarnessO_gry,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(V_TacVest_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(V_TacVest_camo,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(H_Bandanna_cbr,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(IS_shemag_black,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
        };
    };
    class CFP_I_IS_SupplyBox : O_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Islamic State Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(IEDUrbanSmall_Remote_Mag,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_Sa58_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK74M,10);
            weap_xx(CUP_arifle_M16A4_Base,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_lmg_m249_pip1,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_Sa58P,10);
            weap_xx(CUP_launch_RPG18,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(Binocular,10);
            item_xx(SP_OpforRig1_Tan,10);
            item_xx(H_Bandanna_mcamo,10);
            item_xx(G_Bandanna_tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_khk,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(V_HarnessO_gry,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(G_Bandanna_oli,10);
            item_xx(V_TacVest_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(IS_Balaclava_logo1,10);
            item_xx(V_TacVest_camo,10);
            item_xx(G_Bandanna_khk,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig_Light,10);
            item_xx(H_Bandanna_cbr,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(H_Bandanna_khk,10);
            item_xx(G_Bandanna_blk,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(IS_shemag_black,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_V_I_Carrier_Belt,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CFP_U_o_is_uniform,10);
            item_xx(U_I_C_Soldier_Para_5_F,10);
        };
    };
};