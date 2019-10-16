#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_Camo_Tropen { displayName = "Men (Tropentarn)";  };
    class CFP_EdSubcat_Personnel_Camo_KTropen { displayName = "KSK (Tropentarn)";  };
};

class CfgVehicles {

    class CUP_B_GER_Soldier_02;
    class CUP_B_GER_Soldier_02_OCimport_01 : CUP_B_GER_Soldier_02 { scope = 0; class EventHandlers; };
    class CUP_B_GER_Soldier_02_OCimport_02 : CUP_B_GER_Soldier_02_OCimport_01 { class EventHandlers; };

    class CUP_B_GER_Soldier_01;
    class CUP_B_GER_Soldier_01_OCimport_01 : CUP_B_GER_Soldier_01 { scope = 0; class EventHandlers; };
    class CUP_B_GER_Soldier_01_OCimport_02 : CUP_B_GER_Soldier_01_OCimport_01 { class EventHandlers; };

    class CUP_M2StaticMG_base;
    class CUP_M2StaticMG_base_OCimport_01 : CUP_M2StaticMG_base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_M2StaticMG_base_OCimport_02 : CUP_M2StaticMG_base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_M2StaticMG_MiniTripod_base;
    class CUP_M2StaticMG_MiniTripod_base_OCimport_01 : CUP_M2StaticMG_MiniTripod_base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_M2StaticMG_MiniTripod_base_OCimport_02 : CUP_M2StaticMG_MiniTripod_base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_Dingo_CZ_Des;
    class CUP_B_Dingo_CZ_Des_OCimport_01 : CUP_B_Dingo_CZ_Des { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Dingo_CZ_Des_OCimport_02 : CUP_B_Dingo_CZ_Des_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_Dingo_GL_CZ_Des;
    class CUP_B_Dingo_GL_CZ_Des_OCimport_01 : CUP_B_Dingo_GL_CZ_Des { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_Dingo_GL_CZ_Des_OCimport_02 : CUP_B_Dingo_GL_CZ_Des_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_CH53E_Base;
    class CUP_CH53E_Base_OCimport_01 : CUP_CH53E_Base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_CH53E_Base_OCimport_02 : CUP_CH53E_Base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_CH53E_VIV_Base;
    class CUP_CH53E_VIV_Base_OCimport_01 : CUP_CH53E_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_CH53E_VIV_Base_OCimport_02 : CUP_CH53E_VIV_Base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_UH1H_base;
    class CUP_UH1H_base_OCimport_01 : CUP_UH1H_base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_UH1H_base_OCimport_02 : CUP_UH1H_base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_UH1H_slick_base;
    class CUP_UH1H_slick_base_OCimport_01 : CUP_UH1H_slick_base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_UH1H_slick_base_OCimport_02 : CUP_UH1H_slick_base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class RightDoorGun;
            class LeftDoorGun;
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_B_US_Pilot;
    class CUP_B_US_Pilot_OCimport_01 : CUP_B_US_Pilot { scope = 0; class EventHandlers; };
    class CUP_B_US_Pilot_OCimport_02 : CUP_B_US_Pilot_OCimport_01 { class EventHandlers; };

    class I_MRAP_03_F;
    class I_MRAP_03_F_OCimport_01 : I_MRAP_03_F { scope = 0; class EventHandlers; class Turrets; };
    class I_MRAP_03_F_OCimport_02 : I_MRAP_03_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CommanderTurret;
        };
    };

    class B_recon_F;
    class B_recon_F_OCimport_01 : B_recon_F { scope = 0; class EventHandlers; };
    class B_recon_F_OCimport_02 : B_recon_F_OCimport_01 { class EventHandlers; };

//Men
/*
    class CUP_B_GER_Soldier : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        randomGearProbability = 100;

        // KSK Vests
        vestList[] = {
            "CFP_PlateCarrier2_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Flecktarn", 0.2,
            "CFP_CarrierRig_Operator_OGA_OD", 0.2,
            "CFP_LBT6094_operator_OGA_OD", 0.2,
            "CFP_FAPC_Operator_OGA_OD", 0.2,
            "CFP_CarrierRig_Operator_OGA", 0.2,
            "CFP_LBT6094_operator_OGA", 0.2,
            "CFP_FAPC_Operator_OGA", 0.2
        };
        // KSK Facewear
        facewearList[] = {
            "CUP_TK_NeckScarf", 0.3,
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "G_Bandanna_tan",0.3,
            "G_Bandanna_shades",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.2,
            "CUP_FR_Neckscarf",0.3
        };
        // KSK Headwear
        headgearList[] = {
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "SP_BeanieHat_Green", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "H_BoonieHat_khk",0.25,
            "CFP_BoonieHat_Tropentarn", 0.4,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "H_Cap_oli",0.3,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Cap_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Cap_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_PlateCarrier1_Tropentarn",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Tropentarn",{{"CUP_30Rnd_556x45_G36",8,30},{"CUP_PipeBomb_M",2,1},{"Laserbatteries",1,1},{"B_IR_Grenade",1,1}}},"H_Cap_blk","G_Bandanna_shades",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Medic : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramedic";
        genericNames = "CUP_Names_GermanMen";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        randomGearProbability = 100;

        // KSK Vests
        vestList[] = {
            "CFP_PlateCarrier2_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Flecktarn", 0.2,
            "CFP_CarrierRig_Operator_OGA_OD", 0.2,
            "CFP_LBT6094_operator_OGA_OD", 0.2,
            "CFP_FAPC_Operator_OGA_OD", 0.2,
            "CFP_CarrierRig_Operator_OGA", 0.2,
            "CFP_LBT6094_operator_OGA", 0.2,
            "CFP_FAPC_Operator_OGA", 0.2
        };
        // KSK Facewear
        facewearList[] = {
            "CUP_TK_NeckScarf", 0.3,
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "G_Bandanna_tan",0.3,
            "G_Bandanna_shades",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.2,
            "CUP_FR_Neckscarf",0.3
        };
        // KSK Headwear
        headgearList[] = {
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "SP_BeanieHat_Green", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BoonieHat_Tan", 0.25,
            "CFP_BoonieHat_Tropentarn", 0.4,
            "H_BoonieHat_tan",0.25,
            "H_BoonieHat_khk",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "H_Cap_oli",0.3,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36c_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36c_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Flecktarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36c_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_PlateCarrier1_Flecktarn",{{"CUP_30Rnd_556x45_G36",2,30},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Flecktarn",{{"Medikit",1},{"FirstAidKit",10}}},"CFP_BoonieHat_Tropentarn","G_Aviator",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_TL : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        randomGearProbability = 100;

        // KSK Vests
        vestList[] = {
            "CFP_PlateCarrier2_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Flecktarn", 0.2,
            "CFP_CarrierRig_Operator_OGA_OD", 0.2,
            "CFP_LBT6094_operator_OGA_OD", 0.2,
            "CFP_FAPC_Operator_OGA_OD", 0.2,
            "CFP_CarrierRig_Operator_OGA", 0.2,
            "CFP_LBT6094_operator_OGA", 0.2,
            "CFP_FAPC_Operator_OGA", 0.2
        };
        // KSK Facewear
        facewearList[] = {
            "CUP_TK_NeckScarf", 0.3,
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "G_Bandanna_tan",0.3,
            "G_Bandanna_shades",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.2,
            "CUP_FR_Neckscarf",0.3
        };
        // KSK Headwear
        headgearList[] = {
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "SP_BeanieHat_Green", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "CFP_BoonieHat_Tropentarn", 0.4,
            "H_BoonieHat_khk",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "H_Cap_oli",0.3,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        linkedItems[] = {"CFP_CarrierRig_Operator_OGA_OD","H_Cap_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_CarrierRig_Operator_OGA_OD","H_Cap_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36K_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36K_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_AssaultPack_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36K_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_CarrierRig_Operator_OGA_OD",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"SmokeShellGreen",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_AssaultPack_Tropentarn",{{"CUP_30Rnd_556x45_G36",8,30},{"CUP_PipeBomb_M",1,1},{"Laserbatteries",1,1},{"B_IR_Grenade",1,1}}},"H_Cap_tan","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_Scout : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        linkedItems[] = {"CFP_PlateCarrier2_Tropentarn","SP_Shemagh_CheckTan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier2_Tropentarn","SP_Shemagh_CheckTan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36c_camo_holo_snds","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36c_camo_holo_snds","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_AssaultPack_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36c_camo_holo_snds","CUP_muzzle_snds_G36_desert","","CUP_optic_HoloDesert",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_PlateCarrier2_Tropentarn",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_AssaultPack_Tropentarn",{{"CUP_30Rnd_556x45_G36",8,30},{"CUP_PipeBomb_M",1,1},{"Laserbatteries",1,1},{"B_IR_Grenade",1,1}}},"SP_Shemagh_CheckTan","SP_Goggles_Black",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_MG : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        randomGearProbability = 100;

        // KSK Facewear
        facewearList[] = {
            "CUP_TK_NeckScarf", 0.3,
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "G_Bandanna_tan",0.3,
            "G_Bandanna_shades",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.2,
            "CUP_FR_Neckscarf",0.3
        };
        // KSK Headwear
        headgearList[] = {
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "SP_BeanieHat_Green", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "CFP_BoonieHat_Tropentarn", 0.4,
            "H_BoonieHat_khk",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "H_Cap_oli",0.3,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        linkedItems[] = {"CFP_RAV_MG_OGA_OD","SP_BeanieHat_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_MG_OGA_OD","SP_BeanieHat_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_MG36_camo_holo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_MG36_camo_holo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_MG36_camo_holo","","","CUP_optic_HoloDesert",{"CUP_100Rnd_556x45_BetaCMag",100},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_100Rnd_556x45_BetaCMag",1,100}}},{"CFP_RAV_MG_OGA_OD",{{"CUP_100Rnd_556x45_BetaCMag",2,100},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1}}},{"CFP_Kitbag_Tropentarn",{{"CUP_30Rnd_556x45_G36",8,30},{"CUP_PipeBomb_M",2,1},{"Laserbatteries",1,1},{"B_IR_Grenade",1,1}}},"SP_BeanieHat_Tan","G_Bandanna_khk",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_MG3 : CUP_B_GER_Soldier_MG {

        displayName = "Machinegunner (MG3)";

        linkedItems[] = {"CFP_RAV_MG_OGA_OD","SP_BeanieHat_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_MG_OGA_OD","SP_BeanieHat_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_lmg_MG3_rail","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_lmg_MG3_rail","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_MG3_rail","","","optic_MRCO",{"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",120},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1}}},{"CFP_RAV_MG_OGA_OD",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,120}}},{"CFP_Kitbag_Tropentarn",{{"Laserbatteries",1,1},{"B_IR_Grenade",1,1},{"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2,120}}},"SP_BeanieHat_Tan","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_Engineer : CUP_B_GER_Soldier {

        displayName = "Combat Engineer";
        genericNames = "CUP_Names_GermanMen";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"CFP_RAV_operator_OGA_OD","H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_operator_OGA_OD","H_Cap_oli","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_RAV_operator_OGA_OD",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Tropentarn",{{"ToolKit",1},{"MineDetector",1},{"CUP_30Rnd_556x45_G36",8,30},{"CUP_PipeBomb_M",2,1}}},"H_Cap_oli","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_AA : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "AA Specialist (Fliegerfaust)";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        randomGearProbability = 100;

        // KSK Vests
        vestList[] = {
            "CFP_PlateCarrier2_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Flecktarn", 0.2,
            "CFP_CarrierRig_Operator_OGA_OD", 0.2,
            "CFP_LBT6094_operator_OGA_OD", 0.2,
            "CFP_FAPC_Operator_OGA_OD", 0.2,
            "CFP_CarrierRig_Operator_OGA", 0.2,
            "CFP_LBT6094_operator_OGA", 0.2,
            "CFP_FAPC_Operator_OGA", 0.2
        };
        // KSK Facewear
        facewearList[] = {
            "CUP_TK_NeckScarf", 0.3,
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "G_Bandanna_tan",0.3,
            "G_Bandanna_shades",0.3,
            "CUP_FR_Neckscarf2",0.3,
            "CFP_Beard",0.2,
            "CUP_FR_Neckscarf",0.3
        };
        // KSK Headwear
        headgearList[] = {
            "SP_BaseballCap_Tan", 0.3,
            "SP_BaseballCap_Black", 0.3,
            "SP_BeanieHat_Green", 0.2,
            "SP_BeanieHat_Tan", 0.2,
            "SP_BeanieHat_Black", 0.2,
            "SP_BoonieHat_Tan", 0.25,
            "H_BoonieHat_tan",0.25,
            "CFP_BoonieHat_Tropentarn", 0.4,
            "H_BoonieHat_khk",0.25,
            "H_Cap_blk",0.3,
            "H_Cap_tan",0.3,
            "H_Cap_oli",0.3,
            "SP_Headset_Tan",0.35,
            "SP_Headset_Black",0.35
        };

        linkedItems[] = {"CFP_MBSS_PACA_TAN","SP_BeanieHat_Green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_MBSS_PACA_TAN","SP_BeanieHat_Green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36K_camo","CUP_launch_FIM92Stinger","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36K_camo","CUP_launch_FIM92Stinger","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_Stinger_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_Stinger_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_AssaultPack_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36K_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30}}},{"CFP_MBSS_PACA_TAN",{{"CUP_30Rnd_556x45_G36",3,30},{"CUP_HandGrenade_M67",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CFP_AssaultPack_Tropentarn",{}},"SP_BeanieHat_Green","CUP_FR_NeckScarf2",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_GL : CUP_B_GER_Soldier {

        displayName = "Grenadier";

        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Cap_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Cap_blk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AG36_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_AG36_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36_camo","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36_camo","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36_camo","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36_camo","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AG36_camo","","","",{"CUP_30Rnd_556x45_G36_camo",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"SmokeShellRed",1,1},{"CUP_30Rnd_556x45_G36_camo",2,30},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CFP_PlateCarrier1_Tropentarn",{{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_30Rnd_556x45_G36_camo",6,30},{"CUP_1Rnd_HEDP_M203",6,1}}},{"CFP_Kitbag_Tropentarn",{{"CUP_PipeBomb_M",2,1},{"Laserbatteries",1,1},{"B_IR_Grenade",1,1},{"CUP_1Rnd_HEDP_M203",6,1},{"CUP_1Rnd_Smoke_M203",8,1}}},"H_Cap_blk","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_AAA : CUP_B_GER_Soldier {

        displayName = "AA Assistant";

        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Flecktarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_PlateCarrier1_Flecktarn",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Flecktarn",{{"CUP_Stinger_M",1,1}}},"CFP_BoonieHat_Tropentarn","G_Squares_Tinted",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_AT : CUP_B_GER_Soldier {

        displayName = "AT Specialist (Carl Gustav)";

        linkedItems[] = {"CFP_CarrierRig_Operator_OGA","H_Booniehat_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_CarrierRig_Operator_OGA","H_Booniehat_khk","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_launch_MAAWS_Scope","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_launch_MAAWS_Scope","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_MAAWS_HEAT_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_MAAWS_HEAT_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{"CUP_launch_MAAWS_Scope","","","CUP_optic_MAAWS_Scope",{"CUP_MAAWS_HEAT_M",1},{},""},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_CarrierRig_Operator_OGA",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Tropentarn",{{"CUP_MAAWS_HEAT_M",1,1},{"CUP_MAAWS_HEDP_M",1,1}}},"H_Booniehat_khk","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_AAT : CUP_B_GER_Soldier {

        displayName = "AT Assistant";

        linkedItems[] = {"CFP_CarrierRig_Operator_OGA_OD","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_CarrierRig_Operator_OGA_OD","CFP_BoonieHat_Tropentarn","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CUP_B_GER_Backpack_ATAssist";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_CarrierRig_Operator_OGA_OD",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CUP_B_GER_Backpack_ATAssist",{{"CUP_MAAWS_HEAT_M",3,1},{"CUP_MAAWS_HEDP_M",1,1}}},"CFP_BoonieHat_Tropentarn","G_Squares_Tinted",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CUP_B_GER_Soldier_Sniper : CUP_B_GER_Soldier_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper (G22)";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_Euro","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "CFP_U_WorkUniform_Tropentarn";

        linkedItems[] = {"CFP_LBT6094_operator_OGA_OD","SP_BaseballCap_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_LBT6094_operator_OGA_OD","SP_BaseballCap_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_G22_des_SBPMII","","","CUP_optic_SB_3_12x50_PMII",{"CUP_5Rnd_762x67_G22",5},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_muzzle_snds_AWM",1},{"SmokeShellRed",1,1},{"CUP_17Rnd_9x19_glock17",1,17}}},{"CFP_LBT6094_operator_OGA_OD",{{"CUP_5Rnd_762x67_G22",7,5},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",2,17}}},{},"SP_BaseballCap_Black","G_Bandanna_beast",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Soldier_Ammo : CUP_B_GER_Soldier {

        displayName = "Ammo Bearer";

        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Booniehat_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Tropentarn","H_Booniehat_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        respawnWeapons[] = {"CUP_arifle_G36A_camo","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36A_camo","","","",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_glock17_flashlight","","CUP_acc_Glock17_Flashlight","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_WorkUniform_Tropentarn",{{"FirstAidKit",1},{"CUP_NVG_PVS15_black",1},{"CUP_30Rnd_556x45_G36",3,30},{"SmokeShellRed",1,1}}},{"CFP_PlateCarrier1_Tropentarn",{{"CUP_30Rnd_556x45_G36",4,30},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"CUP_17Rnd_9x19_glock17",3,17}}},{"CFP_Kitbag_Tropentarn",{{"Medikit",2},{"CUP_30Rnd_556x45_G36",10,30},{"CUP_5Rnd_762x67_G22",1,5}}},"H_Booniehat_tan","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };
*/
// Statics
    class CUP_B_M2StaticMG_GER : CUP_M2StaticMG_base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Machine Gun";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CUP_B_GER_Soldier";

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

    class CUP_B_M2StaticMG_MiniTripod_GER : CUP_M2StaticMG_MiniTripod_base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Minitripod";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CUP_B_GER_Soldier";

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
// Vehicles
    class CUP_B_Dingo_GER_Des : CUP_B_Dingo_CZ_Des_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dingo 2 (MG) (Desert)";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CUP_B_GER_Soldier";

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

    class CUP_B_Dingo_GL_GER_Des : CUP_B_Dingo_GL_CZ_Des_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dingo 2 (GL) (Desert)";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CUP_B_GER_Soldier";

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

    class CUP_B_CH53E_GER : CUP_CH53E_Base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-53G Super Stallion";
        side = 1;
        faction = "CUP_B_GER";
        crew = "B_Helipilot_F";

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

    class CUP_B_CH53E_VIV_GER : CUP_CH53E_VIV_Base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-53G Super Stallion (VIV)";
        side = 1;
        faction = "CUP_B_GER";
        crew = "B_Helipilot_F";

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

    class CUP_B_UH1D_GER_KSK_Des : CUP_UH1H_base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1D (Desert)";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CFP_B_DEArmy_Pilot_DES_01";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_UH1D_slick_GER_KSK_Des : CUP_UH1H_slick_base_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-1D Slick (Desert)";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CFP_B_DEARMY_Pilot_DES_01";

        class Turrets : Turrets {
            class RightDoorGun : RightDoorGun { gunnerType = ""; };
            class LeftDoorGun : LeftDoorGun { gunnerType = ""; };
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
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

    class CFP_B_DEARMY_Pilot_DES_01 : CUP_B_US_Pilot_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_Tropen";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};

        uniformClass = "SP_0000_Standard_FieldUniform_Tan";

        linkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot","CUP_H_BAF_Helmet_Pilot","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot","CUP_H_BAF_Helmet_Pilot","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_smg_MP5A5","CUP_hgun_Glock17_tan"};
        respawnWeapons[] = {"CUP_smg_MP5A5","CUP_hgun_Glock17_tan"};

        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_MP5A5","","","",{"CUP_30Rnd_9x19_MP5",30},{},""},{},{"CUP_hgun_Glock17_tan","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"SP_0000_Standard_FieldUniform_Tan",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"CUP_30Rnd_9x19_MP5",3,30},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot",{{"SmokeShell",2,1},{"SmokeShellRed",2,1},{"CUP_17Rnd_9x19_glock17",4,17},{"CUP_HandGrenade_M67",1,1},{"CUP_30Rnd_9x19_MP5",3,30}}},{},"CUP_H_BAF_Helmet_Pilot","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_DEARMY_Fennek_01 : I_MRAP_03_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fennek";
        side = 1;
        faction = "CUP_B_GER";
        crew = "CUP_B_GER_Soldier";

        class Turrets : Turrets {
            class CommanderTurret : CommanderTurret { gunnerType = "CUP_B_GER_Soldier"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Fennek\mrap_03_germandesert'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "GermanDesert";

    };
// Men
    class SoldierWB;
    class CUP_Creatures_Military_GER_Soldier_Base : SoldierWB
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_Tropen";
    };
/*
    class CUP_B_GER_Team_Leader_Assault_01 : B_recon_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader [Assault]";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CFP_U_Crye_Tropentarn";

        randomGearProbability = 100;
        // KSK Vests
        vestList[] = {
            "CFP_PlateCarrier2_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Tropentarn", 0.2,
            "CFP_PlateCarrier1_Flecktarn", 0.2,
            "CFP_CarrierRig_Operator_OGA_OD", 0.2,
            "CFP_LBT6094_operator_OGA_OD", 0.2,
            "CFP_FAPC_Operator_OGA_OD", 0.2
        };
        // KSK Facewear
        facewearList[] = {
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "IS_Balaclava",0.3,
            "G_Balaclava_oli", 0.3,
            "SP_Balaclava_Black", 0.3,
            "SP_Balaclava_Skull", 0.3,
            "SP_Balaclava_Skull2", 0.3,
            "SP_Balaclava_Venom", 0.3,
            "CFP_Face_Wear_Blk", 0.5
        };
        // KSK Headwear
        headgearList[] = {
            "CFP_OpsC_Covered_KSK", 0.2,
            "CFP_OpsC_Covered2_KSK", 0.2,
            "CFP_OpsC_Med_KSK", 0.2,
            "CFP_OpsC_Cov_Goggles_Off_KSK", 0.2
        };
        // KSK Uniforms
        uniformList[] = {
            "CFP_U_Crye_Tropentarn", 0.5,
            "CFP_U_Crye_Tropentarn_SS", 0.5
        };

        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_OpsC_Covered_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_PlateCarrier1_Flecktarn","CFP_OpsC_Covered_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};
        respawnWeapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36C_VFG_camo","CUP_muzzle_snds_G36_desert","CUP_acc_ANPEQ_15_Flashlight_Tan_L","CUP_optic_MicroT1_coyote",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tropentarn",{{"FirstAidKit",1},{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_30Rnd_556x45_G36",3,30}}},{"CFP_PlateCarrier1_Flecktarn",{{"SmokeShell",1,1},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_556x45_G36",4,30}}},{},"CFP_OpsC_Covered_KSK","SP_Balaclava_Skull",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_Rifleman_Assault_01 : CUP_B_GER_Team_Leader_Assault_01 {

        displayName = "Rifleman [Assault]";

        linkedItems[] = {"CFP_LBT6094_operator_OGA_OD","CFP_OpsC_Med_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_LBT6094_operator_OGA_OD","CFP_OpsC_Med_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};
        respawnWeapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36C_VFG_camo","CUP_muzzle_snds_G36_desert","CUP_acc_ANPEQ_15_Flashlight_Tan_L","CUP_optic_MicroT1_coyote",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tropentarn_SS",{{"FirstAidKit",1},{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_30Rnd_556x45_G36",3,30}}},{"CFP_LBT6094_operator_OGA_OD",{{"SmokeShell",1,1},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_556x45_G36",4,30}}},{},"CFP_OpsC_Med_KSK","SP_Balaclava_Venom",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    class CUP_B_GER_Machine_Gunner_Assault_01 : B_recon_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner [Assault]";
        genericNames = "CUP_Names_GermanMen";
        side = 1;
        faction = "CUP_B_GER";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "CFP_U_Crye_Tropentarn_SS";

        randomGearProbability = 100;

        // KSK Facewear
        facewearList[] = {
            "G_Bandanna_beast",0.3,
            "G_Bandanna_khk",0.3,
            "G_Bandanna_oli",0.3,
            "IS_Balaclava",0.3,
            "G_Balaclava_oli", 0.3,
            "SP_Balaclava_Black", 0.3,
            "SP_Balaclava_Skull", 0.3,
            "SP_Balaclava_Skull2", 0.3,
            "SP_Balaclava_Venom", 0.3,
            "CFP_Face_Wear_Blk", 0.5
        };
        // KSK Headwear
        headgearList[] = {
            "CFP_OpsC_Covered_KSK", 0.2,
            "CFP_OpsC_Covered2_KSK", 0.2,
            "CFP_OpsC_Med_KSK", 0.2,
            "CFP_OpsC_Cov_Goggles_Off_KSK", 0.2
        };
        // KSK Uniforms
        uniformList[] = {
            "CFP_U_Crye_Tropentarn", 0.5,
            "CFP_U_Crye_Tropentarn_SS", 0.5
        };

        linkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Covered2_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Covered2_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_MG36_camo","CUP_hgun_Glock17_blk","Binocular"};
        respawnWeapons[] = {"CUP_arifle_MG36_camo","CUP_hgun_Glock17_blk","Binocular"};

        magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_MG36_camo","CUP_muzzle_snds_G36_desert","","CUP_optic_HoloDesert",{"CUP_100Rnd_556x45_BetaCMag",100},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tropentarn_SS",{{"FirstAidKit",1},{"CUP_17Rnd_9x19_glock17",2,17}}},{"CFP_LBT6094_MG_OGA_OD",{{"SmokeShell",1,1},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_100Rnd_556x45_BetaCMag",3,100}}},{},"CFP_OpsC_Covered2_KSK","SP_Balaclava_Venom",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_B_GER_AT_Specialist_Assault_01 : CUP_B_GER_Team_Leader_Assault_01 {

        displayName = "AT Specialist [Assault]";

        linkedItems[] = {"CFP_LBT6094_operator_OGA_OD","CFP_OpsC_Covered2_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_LBT6094_operator_OGA_OD","CFP_OpsC_Covered2_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_launch_MAAWS","CUP_hgun_Glock17_blk","Binocular"};
        respawnWeapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_launch_MAAWS","CUP_hgun_Glock17_blk","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_MAAWS_HEAT_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_MAAWS_HEAT_M","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_Kitbag_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36C_VFG_camo","CUP_muzzle_snds_G36_desert","","CUP_optic_MicroT1_coyote",{"CUP_30Rnd_556x45_G36",30},{},""},{"CUP_launch_MAAWS","","","CUP_optic_MAAWS_Scope",{"CUP_MAAWS_HEAT_M",1},{},""},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tropentarn_SS",{{"FirstAidKit",1},{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_30Rnd_556x45_G36",3,30}}},{"CFP_LBT6094_operator_OGA_OD",{{"SmokeShell",1,1},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_556x45_G36",4,30}}},{"CFP_Kitbag_Tropentarn",{{"CUP_MAAWS_HEDP_M",2,1}}},"CFP_OpsC_Covered2_KSK","SP_Balaclava_Skull2",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };

    class CUP_B_GER_Paramedic_Assault_01 : CUP_B_GER_Team_Leader_Assault_01 {

        displayName = "Paramedic [Assault]";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_PlateCarrier2_Tropentarn","CFP_OpsC_Covered_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};
        respawnlinkedItems[] = {"CFP_PlateCarrier2_Tropentarn","CFP_OpsC_Covered_KSK","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"};

        weapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};
        respawnWeapons[] = {"CUP_arifle_G36C_VFG_camo","CUP_hgun_Glock17_blk","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17"};

        backpack = "CFP_AssaultPack_Tropentarn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_G36C_VFG_camo","CUP_muzzle_snds_G36_desert","CUP_acc_ANPEQ_15_Flashlight_Tan_L","CUP_optic_MicroT1_coyote",{"CUP_30Rnd_556x45_G36",30},{},""},{},{"CUP_hgun_Glock17_blk","","","",{"CUP_17Rnd_9x19_glock17",17},{},""},{"CFP_U_Crye_Tropentarn_SS",{{"FirstAidKit",1},{"CUP_17Rnd_9x19_glock17",2,17},{"CUP_30Rnd_556x45_G36",3,30}}},{"CFP_PlateCarrier2_Tropentarn",{{"SmokeShell",1,1},{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_30Rnd_556x45_G36",4,30}}},{"CFP_AssaultPack_Tropentarn",{{"FirstAidKit",10},{"Medikit",1}}},"CFP_OpsC_Covered_KSK","IS_Balaclava",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};
    };
*/
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class CUP_B_GER_AmmoBox : Box_NATO_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_556x45_G36,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_HandGrenade_M67,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_30Rnd_556x45_G36_camo,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_1Rnd_SmokeRed_M203,50);
            mag_xx(Laserbatteries,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_MAAWS_HEAT_M,50);
            mag_xx(CUP_MAAWS_HEDP_M,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_camo,50);
            mag_xx(CUP_20Rnd_762x51_HK417,50);
            mag_xx(CUP_Stinger_M,50);
            mag_xx(CUP_40Rnd_46x30_MP7,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_green,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_556x45_PMAG_QP_Tan,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CUP_B_GER_WeaponsBox : Box_NATO_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_556x45_G36,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_20Rnd_762x51_HK417,50);
            mag_xx(CUP_30Rnd_556x45_G36_camo,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_camo,50);
            mag_xx(CUP_40Rnd_46x30_MP7,50);
            mag_xx(CUP_30Rnd_556x45_PMAG_QP_Tan,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_G36A,10);
            weap_xx(CUP_hgun_glock17_flashlight,10);
            weap_xx(CUP_arifle_AG36,10);
            weap_xx(CUP_arifle_MG36_holo,10);
            weap_xx(CUP_lmg_MG3,10);
            weap_xx(CUP_srifle_G22_wdl_SBPMII,10);
            weap_xx(CUP_arifle_HK417_20_Scope,10);
            weap_xx(CUP_arifle_G36K_KSK_des_ZO_las,10);
            weap_xx(CUP_arifle_AG36_camo,10);
            weap_xx(CUP_arifle_MG36_camo_holo,10);
            weap_xx(CUP_srifle_G22_des_SBPMII,10);
            weap_xx(CUP_smg_MP7_zeiss,10);
            weap_xx(CUP_arifle_HK416_CQB_Desert_G33_snds_las,10);
            weap_xx(CUP_arifle_HK416_CQB_AG36_Desert_G33_snds_las,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_hgun_Glock17_tan,10);
        };
        class TransportItems {
            item_xx(CUP_acc_Glock17_Flashlight,10);
            item_xx(CUP_optic_HoloBlack,10);
            item_xx(CUP_optic_SB_3_12x50_PMII,10);
            item_xx(CUP_bipod_Harris_1A2_L,10);
            item_xx(CUP_optic_SB_11_4x20_PM,10);
            item_xx(CUP_acc_LLM01_desert_L,10);
            item_xx(CUP_optic_HensoldtZO_low_RDS_desert,10);
            item_xx(CUP_optic_HoloDesert,10);
            item_xx(CUP_optic_ZeissZPoint,10);
            item_xx(CUP_muzzle_snds_M16_coyote,10);
            item_xx(CUP_acc_LLM01_coyote_F,10);
            item_xx(CUP_optic_G33_HWS_TAN,10);
        };
    };
    class CUP_B_GER_LaunchersBox : Box_NATO_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_Stinger_M,5);
            mag_xx(CUP_MAAWS_HEAT_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_FIM92Stinger_Loaded,5);
            weap_xx(CUP_launch_MAAWS_Scope,5);
        };
        class TransportItems {
            item_xx(CUP_optic_MAAWS_Scope,5);
        };
    };
    class CUP_B_GER_UniformBox : Box_NATO_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_U_B_GER_Tropentarn_2,15);
            item_xx(CUP_U_B_GER_Tropentarn_6,15);
            item_xx(CUP_U_B_GER_Tropentarn_1,15);
            item_xx(CUP_U_B_GER_Ghillie,15);
            item_xx(CUP_U_B_GER_Tropentarn_3,15);
            item_xx(CUP_U_B_GER_Overalls_Tank,15);
            item_xx(CUP_U_B_GER_Fleck_Overalls_Pilot,15);
            item_xx(CUP_U_B_GER_Crye,15);
            item_xx(CUP_U_B_GER_Crye2,15);
            item_xx(SP_0000_Standard_FieldUniform_Tan,15);
        };
    };
    class CUP_B_GER_SupportBox : Box_NATO_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_Vector21Nite,10);
            item_xx(CUP_V_B_GER_PVest_Trop_RFL,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop,10);
            item_xx(CUP_G_PMC_Facewrap_Black_Glasses_Dark,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_V_B_GER_PVest_Trop_Gren,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG_CF,10);
            item_xx(CUP_G_PMC_Facewrap_Tan_Glasses_Dark,10);
            item_xx(CUP_B_GER_Backpack_GL,10);
            item_xx(CUP_V_B_GER_PVest_Trop_Med_LT,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG,10);
            item_xx(CUP_G_Oakleys_Drk,10);
            item_xx(CUP_B_GER_Backpack_Medic,10);
            item_xx(CUP_V_B_GER_PVest_Trop_TL,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG_CB,10);
            item_xx(CUP_G_PMC_Facewrap_Black_Glasses_Ember,10);
            item_xx(CUP_PMC_Facewrap_Black,10);
            item_xx(CUP_V_B_GER_PVest_Trop_MG_LT,10);
            item_xx(CUP_PMC_Facewrap_Tan,10);
            item_xx(CUP_B_GER_Backpack_MG3,10);
            item_xx(CUP_V_B_GER_PVest_Trop_RFL_LT,10);
            item_xx(CUP_B_GER_Backpack_Engineer,10);
            item_xx(CUP_B_GER_Backpack_AAAssist,10);
            item_xx(CUP_B_GER_Backpack_AT,10);
            item_xx(CUP_B_GER_Backpack_ATAssist,10);
            item_xx(CUP_H_Ger_Boonie_desert,10);
            item_xx(CUP_G_Oakleys_Embr,10);
            item_xx(CUP_B_GER_Backpack_AmmoBearer,10);
            item_xx(CUP_V_B_GER_Carrier_Vest_2,10);
            item_xx(CUP_H_Ger_Cap_EP_Tan2,10);
            item_xx(CUP_B_Backpack_SpecOps,10);
            item_xx(CUP_V_B_GER_Armatus_Trop,10);
            item_xx(CUP_H_Ger_Cap_EP_Tan1,10);
            item_xx(CUP_H_Ger_Cap_EP_Grn2,10);
            item_xx(CUP_H_Ger_Cap_Tan1,10);
            item_xx(CUP_H_Ger_Cap_Tan2,10);
            item_xx(CUP_G_PMC_Facewrap_Tan_Glasses_Ember,10);
            item_xx(Binocular,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CUP_NVG_HMNVS,10);
            item_xx(CUP_H_Ger_Beret_TankCommander_Grn,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_V_B_GER_Armatus_BB_Trop,10);
            item_xx(CUP_H_OpsCore_Covered_Tropen_SF,10);
            item_xx(CUP_G_ESS_BLK_Facewrap_Black,10);
            item_xx(CUP_B_GER_Backpack_Operator,10);
            item_xx(CUP_H_OpsCore_Tan_SF,10);
            item_xx(CUP_G_ESS_BLK_Scarf_Face_White,10);
            item_xx(CUP_B_GER_Backpack_Operator_GL,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(CUP_B_GER_Backpack_Breacher_Trop,10);
            item_xx(CUP_H_OpsCore_Grey_SF,10);
            item_xx(CUP_G_ESS_KHK_Scarf_Face_Tan,10);
            item_xx(CUP_V_BAF_Osprey_Mk2_DDPM_Pilot,10);
            item_xx(CUP_H_BAF_Helmet_Pilot,10);
        };
    };
    class CUP_B_GER_SupplyBox : B_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = Bundeswehr (Arid / Desert) Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_556x45_G36,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_HandGrenade_M67,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(CUP_17Rnd_9x19_glock17,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_30Rnd_556x45_G36_camo,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_1Rnd_SmokeRed_M203,50);
            mag_xx(Laserbatteries,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag,50);
            mag_xx(CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(CUP_MAAWS_HEAT_M,50);
            mag_xx(CUP_MAAWS_HEDP_M,50);
            mag_xx(CUP_5Rnd_762x67_G22,50);
            mag_xx(CUP_100Rnd_556x45_BetaCMag_camo,50);
            mag_xx(CUP_20Rnd_762x51_HK417,50);
            mag_xx(CUP_Stinger_M,50);
            mag_xx(CUP_40Rnd_46x30_MP7,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_green,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_556x45_PMAG_QP_Tan,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_30Rnd_9x19_MP5,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_G36A,10);
            weap_xx(CUP_hgun_glock17_flashlight,10);
            weap_xx(CUP_arifle_AG36,10);
            weap_xx(CUP_arifle_MG36_holo,10);
            weap_xx(CUP_lmg_MG3,10);
            weap_xx(CUP_srifle_G22_wdl_SBPMII,10);
            weap_xx(CUP_arifle_HK417_20_Scope,10);
            weap_xx(CUP_arifle_G36K_KSK_des_ZO_las,10);
            weap_xx(CUP_arifle_AG36_camo,10);
            weap_xx(CUP_arifle_MG36_camo_holo,10);
            weap_xx(CUP_srifle_G22_des_SBPMII,10);
            weap_xx(CUP_smg_MP7_zeiss,10);
            weap_xx(CUP_arifle_HK416_CQB_Desert_G33_snds_las,10);
            weap_xx(CUP_arifle_HK416_CQB_AG36_Desert_G33_snds_las,10);
            weap_xx(CUP_smg_MP5A5,10);
            weap_xx(CUP_hgun_Glock17_tan,10);
            weap_xx(CUP_launch_FIM92Stinger_Loaded,10);
            weap_xx(CUP_launch_MAAWS_Scope,10);
        };
        class TransportItems {
            item_xx(CUP_acc_Glock17_Flashlight,10);
            item_xx(CUP_optic_HoloBlack,10);
            item_xx(CUP_optic_SB_3_12x50_PMII,10);
            item_xx(CUP_bipod_Harris_1A2_L,10);
            item_xx(CUP_optic_SB_11_4x20_PM,10);
            item_xx(CUP_acc_LLM01_desert_L,10);
            item_xx(CUP_optic_HensoldtZO_low_RDS_desert,10);
            item_xx(CUP_optic_HoloDesert,10);
            item_xx(CUP_optic_ZeissZPoint,10);
            item_xx(CUP_muzzle_snds_M16_coyote,10);
            item_xx(CUP_acc_LLM01_coyote_F,10);
            item_xx(CUP_optic_G33_HWS_TAN,10);
            item_xx(CUP_Vector21Nite,10);
            item_xx(CUP_V_B_GER_PVest_Trop_RFL,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop,10);
            item_xx(CUP_G_PMC_Facewrap_Black_Glasses_Dark,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(ItemGPS,10);
            item_xx(CUP_V_B_GER_PVest_Trop_Gren,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG_CF,10);
            item_xx(CUP_G_PMC_Facewrap_Tan_Glasses_Dark,10);
            item_xx(CUP_B_GER_Backpack_GL,10);
            item_xx(CUP_V_B_GER_PVest_Trop_Med_LT,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG,10);
            item_xx(CUP_G_Oakleys_Drk,10);
            item_xx(CUP_B_GER_Backpack_Medic,10);
            item_xx(CUP_V_B_GER_PVest_Trop_TL,10);
            item_xx(CUP_H_Ger_M92_Cover_Trop_GG_CB,10);
            item_xx(CUP_G_PMC_Facewrap_Black_Glasses_Ember,10);
            item_xx(CUP_PMC_Facewrap_Black,10);
            item_xx(CUP_V_B_GER_PVest_Trop_MG_LT,10);
            item_xx(CUP_PMC_Facewrap_Tan,10);
            item_xx(CUP_B_GER_Backpack_MG3,10);
            item_xx(CUP_V_B_GER_PVest_Trop_RFL_LT,10);
            item_xx(CUP_B_GER_Backpack_Engineer,10);
            item_xx(CUP_B_GER_Backpack_AAAssist,10);
            item_xx(CUP_B_GER_Backpack_AT,10);
            item_xx(CUP_B_GER_Backpack_ATAssist,10);
            item_xx(CUP_H_Ger_Boonie_desert,10);
            item_xx(CUP_G_Oakleys_Embr,10);
            item_xx(CUP_B_GER_Backpack_AmmoBearer,10);
            item_xx(CUP_V_B_GER_Carrier_Vest_2,10);
            item_xx(CUP_H_Ger_Cap_EP_Tan2,10);
            item_xx(CUP_B_Backpack_SpecOps,10);
            item_xx(CUP_V_B_GER_Armatus_Trop,10);
            item_xx(CUP_H_Ger_Cap_EP_Tan1,10);
            item_xx(CUP_H_Ger_Cap_EP_Grn2,10);
            item_xx(CUP_H_Ger_Cap_Tan1,10);
            item_xx(CUP_H_Ger_Cap_Tan2,10);
            item_xx(CUP_G_PMC_Facewrap_Tan_Glasses_Ember,10);
            item_xx(Binocular,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CUP_NVG_HMNVS,10);
            item_xx(CUP_H_Ger_Beret_TankCommander_Grn,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_V_B_GER_Armatus_BB_Trop,10);
            item_xx(CUP_H_OpsCore_Covered_Tropen_SF,10);
            item_xx(CUP_G_ESS_BLK_Facewrap_Black,10);
            item_xx(CUP_B_GER_Backpack_Operator,10);
            item_xx(CUP_H_OpsCore_Tan_SF,10);
            item_xx(CUP_G_ESS_BLK_Scarf_Face_White,10);
            item_xx(CUP_B_GER_Backpack_Operator_GL,10);
            item_xx(CUP_NVG_PVS15_black,10);
            item_xx(CUP_B_GER_Backpack_Breacher_Trop,10);
            item_xx(CUP_H_OpsCore_Grey_SF,10);
            item_xx(CUP_G_ESS_KHK_Scarf_Face_Tan,10);
            item_xx(CUP_V_BAF_Osprey_Mk2_DDPM_Pilot,10);
            item_xx(CUP_H_BAF_Helmet_Pilot,10);
            item_xx(CUP_U_B_GER_Tropentarn_2,10);
            item_xx(CUP_U_B_GER_Tropentarn_6,10);
            item_xx(CUP_U_B_GER_Tropentarn_1,10);
            item_xx(CUP_U_B_GER_Ghillie,10);
            item_xx(CUP_U_B_GER_Tropentarn_3,10);
            item_xx(CUP_U_B_GER_Overalls_Tank,10);
            item_xx(CUP_U_B_GER_Fleck_Overalls_Pilot,10);
            item_xx(CUP_U_B_GER_Crye,10);
            item_xx(CUP_U_B_GER_Crye2,10);
            item_xx(SP_0000_Standard_FieldUniform_Tan,10);
            item_xx(CUP_optic_MAAWS_Scope,5);
        };
    };

};

