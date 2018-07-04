#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_Soldier_lite_F;
    class cfp_o_is_militaman_OCimport_01 : I_Soldier_lite_F { scope = 0; class EventHandlers; };
    class cfp_o_is_militaman_OCimport_02 : cfp_o_is_militaman_OCimport_01 { class EventHandlers; };

    class I_soldier_F;
    class cfp_o_is_rifleman_OCimport_01 : I_soldier_F { scope = 0; class EventHandlers; };
    class cfp_o_is_rifleman_OCimport_02 : cfp_o_is_rifleman_OCimport_01 { class EventHandlers; };

    class I_Soldier_GL_F;
    class cfp_o_is_grenadier_OCimport_01 : I_Soldier_GL_F { scope = 0; class EventHandlers; };
    class cfp_o_is_grenadier_OCimport_02 : cfp_o_is_grenadier_OCimport_01 { class EventHandlers; };

    class I_Soldier_TL_F;
    class cfp_o_is_team_leader_OCimport_01 : I_Soldier_TL_F { scope = 0; class EventHandlers; };
    class cfp_o_is_team_leader_OCimport_02 : cfp_o_is_team_leader_OCimport_01 { class EventHandlers; };

    class I_Soldier_AR_F;
    class cfp_o_is_autorifleman_OCimport_01 : I_Soldier_AR_F { scope = 0; class EventHandlers; };
    class cfp_o_is_autorifleman_OCimport_02 : cfp_o_is_autorifleman_OCimport_01 { class EventHandlers; };

    class I_Sniper_F;
    class cfp_o_is_sniper_OCimport_01 : I_Sniper_F { scope = 0; class EventHandlers; };
    class cfp_o_is_sniper_OCimport_02 : cfp_o_is_sniper_OCimport_01 { class EventHandlers; };

    class I_medic_F;
    class cfp_o_is_medic_OCimport_01 : I_medic_F { scope = 0; class EventHandlers; };
    class cfp_o_is_medic_OCimport_02 : cfp_o_is_medic_OCimport_01 { class EventHandlers; };

    class I_Soldier_AT_F;
    class cfp_o_is_at_OCimport_01 : I_Soldier_AT_F { scope = 0; class EventHandlers; };
    class cfp_o_is_at_OCimport_02 : cfp_o_is_at_OCimport_01 { class EventHandlers; };

    class I_Soldier_exp_F;
    class cfp_o_is_sapper_OCimport_01 : I_Soldier_exp_F { scope = 0; class EventHandlers; };
    class cfp_o_is_sapper_OCimport_02 : cfp_o_is_sapper_OCimport_01 { class EventHandlers; };

    class I_crew_F;
    class cfp_o_is_crewman_OCimport_01 : I_crew_F { scope = 0; class EventHandlers; };
    class cfp_o_is_crewman_OCimport_02 : cfp_o_is_crewman_OCimport_01 { class EventHandlers; };

    class I_Soldier_SL_F;
    class cfp_o_is_squad_leader_OCimport_01 : I_Soldier_SL_F { scope = 0; class EventHandlers; };
    class cfp_o_is_squad_leader_OCimport_02 : cfp_o_is_squad_leader_OCimport_01 { class EventHandlers; };

    class cfp_o_is_Ural_ZU23;
    class cfp_o_is_Ural_ZU23_OCimport_01 : cfp_o_is_Ural_ZU23 { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_Ural_ZU23_OCimport_02 : cfp_o_is_Ural_ZU23_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_M113;
    class cfp_o_is_M113_OCimport_01 : cfp_o_is_M113 { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M113_OCimport_02 : cfp_o_is_M113_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_M113_flag;
    class cfp_o_is_M113_flag_OCimport_01 : cfp_o_is_M113_flag { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M113_flag_OCimport_02 : cfp_o_is_M113_flag_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class cfp_o_is_offroad_M2;
    class cfp_o_is_offroad_M2_OCimport_01 : cfp_o_is_offroad_M2 { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_offroad_M2_OCimport_02 : cfp_o_is_offroad_M2_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class cfp_o_is_offroad_M2_flag;
    class cfp_o_is_offroad_M2_flag_OCimport_01 : cfp_o_is_offroad_M2_flag { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_offroad_M2_flag_OCimport_02 : cfp_o_is_offroad_M2_flag_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class cfp_o_is_offroad_AT;
    class cfp_o_is_offroad_AT_OCimport_01 : cfp_o_is_offroad_AT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_offroad_AT_OCimport_02 : cfp_o_is_offroad_AT_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class cfp_o_is_jeep_lmg;
    class cfp_o_is_jeep_lmg_OCimport_01 : cfp_o_is_jeep_lmg { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_jeep_lmg_OCimport_02 : cfp_o_is_jeep_lmg_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class LMG_Turret;
            class CargoTurret_01;
        };
    };

    class cfp_o_is_jeep_at;
    class cfp_o_is_jeep_at_OCimport_01 : cfp_o_is_jeep_at { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_jeep_at_OCimport_02 : cfp_o_is_jeep_at_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
            class CargoTurret_01;
        };
    };

    class cfp_o_is_Ural;
    class cfp_o_is_Ural_OCimport_01 : cfp_o_is_Ural { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_Ural_OCimport_02 : cfp_o_is_Ural_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class cfp_o_is_ZU23;
    class cfp_o_is_ZU23_OCimport_01 : cfp_o_is_ZU23 { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_ZU23_OCimport_02 : cfp_o_is_ZU23_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_DSHKM;
    class cfp_o_is_DSHKM_OCimport_01 : cfp_o_is_DSHKM { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_DSHKM_OCimport_02 : cfp_o_is_DSHKM_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_DSHkM_Mini_TriPod;
    class cfp_o_is_DSHkM_Mini_TriPod_OCimport_01 : cfp_o_is_DSHkM_Mini_TriPod { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_DSHkM_Mini_TriPod_OCimport_02 : cfp_o_is_DSHkM_Mini_TriPod_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_M2Static;
    class cfp_o_is_M2Static_OCimport_01 : cfp_o_is_M2Static { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_M2Static_OCimport_02 : cfp_o_is_M2Static_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_SPG9;
    class cfp_o_is_SPG9_OCimport_01 : cfp_o_is_SPG9 { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_SPG9_OCimport_02 : cfp_o_is_SPG9_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class cfp_o_is_2b14_82mm;
    class cfp_o_is_2b14_82mm_OCimport_01 : cfp_o_is_2b14_82mm { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_is_2b14_82mm_OCimport_02 : cfp_o_is_2b14_82mm_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };


    class CFP_O_ABUSAYYAF_Rifleman_Light_01  : cfp_o_is_militaman_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Rifleman_Light_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_BG_Guerilla2_3";

        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_H_SLA_BeanieGreen","ItemRadio"};
        respawnlinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig","CUP_H_SLA_BeanieGreen","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{},{},""},{},{},{"U_BG_Guerilla2_3",{{"FirstAidKit",3},{"SmokeShell",1,1},{"Chemlight_red",1,1}}},{"CUP_V_O_Ins_Carrier_Rig",{{"CUP_30Rnd_762x39_AK47_M",5,30},{"CUP_HandGrenade_RGD5",1,1}}},{},"CUP_H_SLA_BeanieGreen","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Rifleman_01  : cfp_o_is_rifleman_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Rifleman_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CFP_Uniform_SPLM_20";

        linkedItems[] = {"V_HarnessO_brn","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessO_brn","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_Uniform_SPLM_20",{{"FirstAidKit",4},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",2,1}}},{"V_HarnessO_brn",{{"CUP_30Rnd_762x39_AK47_M",8,30}}},{},"","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Grenadier_01  : cfp_o_is_grenadier_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Grenadier_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CUP_I_B_PMC_Unit_20";

        linkedItems[] = {"V_HarnessOGL_brn","CUP_H_TKI_Lungee_06","ItemRadio"};
        respawnlinkedItems[] = {"V_HarnessOGL_brn","CUP_H_TKI_Lungee_06","ItemRadio"};

        weapons[] = {"CUP_arifle_M16A2_GL"};
        respawnWeapons[] = {"CUP_arifle_M16A2_GL"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HE_M203"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2_GL","","","",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HE_M203",1},""},{},{},{"CUP_I_B_PMC_Unit_20",{{"FirstAidKit",4},{"SmokeShell",2,1},{"CUP_HandGrenade_RGD5",2,1}}},{"V_HarnessOGL_brn",{{"CUP_1Rnd_HE_M203",6,1},{"CUP_30Rnd_556x45_Stanag",7,30},{"CUP_FlareWhite_M203",1,1},{"CUP_FlareRed_M203",1,1},{"1Rnd_Smoke_Grenade_shell",2,1}}},{},"CUP_H_TKI_Lungee_06","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Team_Leader_01  : cfp_o_is_team_leader_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Team_Leader_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CUP_U_I_GUE_Anorak_02";

        linkedItems[] = {"V_TacVestIR_blk","H_Bandanna_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVestIR_blk","H_Bandanna_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U","CUP_hgun_Colt1911"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","CUP_hgun_Colt1911"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911","CUP_30Rnd_545x39_AK_M","CUP_7Rnd_45ACP_1911"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_I_GUE_Anorak_02",{{"FirstAidKit",4},{"SmokeShell",2,1}}},{"V_TacVestIR_blk",{{"CUP_30Rnd_545x39_AK_M",8,30},{"CUP_HandGrenade_RGD5",2,1},{"CUP_7Rnd_45ACP_1911",2,7},{"SmokeShellRed",2,1}}},{},"H_Bandanna_camo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Autorifleman_01  : cfp_o_is_autorifleman_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Autorifleman_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"CFP_UtilityJacket_EDRL","IS_bandanna_black_logo2","ItemRadio"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_EDRL","IS_bandanna_black_logo2","ItemRadio"};

        weapons[] = {"CUP_lmg_m249_para"};
        respawnWeapons[] = {"CUP_lmg_m249_para"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_para","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",3},{"SmokeShell",1,1},{"Chemlight_red",1,1}}},{"CFP_UtilityJacket_EDRL",{{"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",2,100}}},{},"IS_bandanna_black_logo2","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Machinegunner_ASG_01  : CFP_O_ABUSAYYAF_Autorifleman_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Machinegunner_ASG_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Bandit_2_F";

        linkedItems[] = {"V_TacChestrig_grn_F","IS_shemag_black","ItemRadio"};
        respawnlinkedItems[] = {"V_TacChestrig_grn_F","IS_shemag_black","ItemRadio"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "CFP_AssaultPack_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"U_I_C_Soldier_Bandit_2_F",{{"FirstAidKit",3},{"SmokeShell",1,1},{"Chemlight_red",1,1}}},{"V_TacChestrig_grn_F",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},{"CFP_AssaultPack_M81",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"IS_shemag_black","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Militia_01  : cfp_o_is_militaman_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Militia_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"V_BandollierB_khk","H_Bandanna_sgg","ItemRadio"};
        respawnlinkedItems[] = {"V_BandollierB_khk","H_Bandanna_sgg","ItemRadio"};

        weapons[] = {"CUP_srifle_LeeEnfield","Binocular"};
        respawnWeapons[] = {"CUP_srifle_LeeEnfield","Binocular"};

        magazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};
        respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_LeeEnfield","","","",{"CUP_10x_303_M",10},{},""},{},{},{"U_I_C_Soldier_Bandit_3_F",{{"CUP_10x_303_M",4,10}}},{"V_BandollierB_khk",{{"FirstAidKit",1},{"CUP_10x_303_M",3,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"H_Bandanna_sgg","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Sniper_01  : cfp_o_is_sniper_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Sniper_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CFP_U_KhetPartug_Short_M81";

        linkedItems[] = {"CFP_Smersh_ArmyGreen","CFP_Lungee_Brown","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Smersh_ArmyGreen","CFP_Lungee_Brown","ItemRadio"};

        weapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_SA61","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","CUP_hgun_SA61","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_B_765x17_Ball_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{"CUP_hgun_SA61","","","",{"CUP_10Rnd_B_765x17_Ball_M",10},{},""},{"CFP_U_KhetPartug_Short_M81",{{"FirstAidKit",4},{"SmokeShell",2,1}}},{"CFP_Smersh_ArmyGreen",{{"CUP_10Rnd_762x54_SVD_M",12,10},{"CUP_HandGrenade_RGD5",2,1},{"CUP_20Rnd_B_765x17_Ball_M",4,20},{"SmokeShell",2,1}}},{},"CFP_Lungee_Brown","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Spotter_ASG_01  : CFP_O_ABUSAYYAF_Sniper_01 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Spotter_ASG_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Spotter";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CUP_U_I_GUE_Woodland1";

        linkedItems[] = {"CFP_Smersh_ArmyGreen","SP_Shemagh_CheckBlack","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Smersh_ArmyGreen","SP_Shemagh_CheckBlack","ItemRadio"};

        weapons[] = {"CUP_srifle_M14","CUP_hgun_Colt1911","Binocular"};
        respawnWeapons[] = {"CUP_srifle_M14","CUP_hgun_Colt1911","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911","CUP_20Rnd_762x51_DMR","CUP_7Rnd_45ACP_1911"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14","","","",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_I_GUE_Woodland1",{{"FirstAidKit",4},{"SmokeShell",2,1}}},{"CFP_Smersh_ArmyGreen",{{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",2,1},{"CUP_20Rnd_762x51_DMR",6,20},{"CUP_7Rnd_45ACP_1911",2,7}}},{},"SP_Shemagh_CheckBlack","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Surgeon_01  : cfp_o_is_medic_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Surgeon_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Surgeon";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_Chestrig_blk","SP_BeanieHat_Black","ItemRadio"};
        respawnlinkedItems[] = {"V_Chestrig_blk","SP_BeanieHat_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_M16A2"};
        respawnWeapons[] = {"CUP_arifle_M16A2"};

        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A2","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",4},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShellRed",2,1}}},{"V_Chestrig_blk",{{"CUP_30Rnd_556x45_Stanag",10,30},{"SmokeShell",2,1}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"SP_BeanieHat_Black","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_RPG_Gunner_01  : cfp_o_is_at_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_RPG_Gunner_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "RPG Gunner";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_BG_Guerilla2_2";

        linkedItems[] = {"V_TacVest_camo","SP_ACHHelmet_Green1","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","SP_ACHHelmet_Green1","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"U_BG_Guerilla2_2",{{"FirstAidKit",3},{"SmokeShell",1,1},{"Chemlight_red",1,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",4,30},{"CUP_HandGrenade_RGD5",2,1}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",2,1},{"CUP_OG7_M",1,1}}},"SP_ACHHelmet_Green1","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_IED_Specialist_01  : cfp_o_is_sapper_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_IED_Specialist_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "IED Specialist";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "CUP_U_I_GUE_Flecktarn2";

        linkedItems[] = {"SP_OpforRig1_Green","H_ShemagOpen_tan","ItemRadio"};
        respawnlinkedItems[] = {"SP_OpforRig1_Green","H_ShemagOpen_tan","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_AssaultPack_khk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CUP_U_I_GUE_Flecktarn2",{{"FirstAidKit",2},{"CUP_HandGrenade_RGD5",2,1},{"SmokeShell",1,1}}},{"SP_OpforRig1_Green",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"B_AssaultPack_khk",{{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",2,1},{"APERSMine_Range_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1}}},"H_ShemagOpen_tan","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Scout_01  : cfp_o_is_crewman_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Scout_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scout";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"CUP_V_RUS_Smersh_2","SP_PASGTHelmet_Black1","ItemRadio","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"CUP_V_RUS_Smersh_2","SP_PASGTHelmet_Black1","ItemRadio","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_FNFAL"};
        respawnWeapons[] = {"CUP_arifle_FNFAL"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{},{"U_I_C_Soldier_Para_1_F",{{"FirstAidKit",4},{"SmokeShell",2,1},{"CUP_HandGrenade_RGD5",2,1}}},{"CUP_V_RUS_Smersh_2",{{"CUP_20Rnd_762x51_FNFAL_M",8,20},{"APERSMine_Range_Mag",1,1}}},{},"SP_PASGTHelmet_Black1","",{},{"","","ItemRadio","","","CUP_NVG_PVS7"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Squad_Leader_01  : cfp_o_is_squad_leader_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Squad_Leader_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";

        identityTypes[] = {"Head_Tanoan","Language_Ackbar"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"V_TacVest_camo","IS_bandanna_black_logo2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","IS_bandanna_black_logo2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_FNFAL","CUP_hgun_Makarov","Binocular"};
        respawnWeapons[] = {"CUP_arifle_FNFAL","CUP_hgun_Makarov","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_8Rnd_9x18_Makarov_M","CUP_20Rnd_762x51_FNFAL_M","CUP_8Rnd_9x18_Makarov_M"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_8Rnd_9x18_Makarov_M","CUP_20Rnd_762x51_FNFAL_M","CUP_8Rnd_9x18_Makarov_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_FNFAL","","","",{"CUP_20Rnd_762x51_FNFAL_M",20},{},""},{},{"CUP_hgun_Makarov","","","",{"CUP_8Rnd_9x18_Makarov_M",8},{},""},{"U_BG_Guerrilla_6_1",{{"FirstAidKit",3},{"SmokeShell",1,1}}},{"V_TacVest_camo",{{"CUP_HandGrenade_RGD5",2,1},{"CUP_20Rnd_762x51_FNFAL_M",5,20},{"CUP_8Rnd_9x18_Makarov_M",1,8}}},{},"IS_bandanna_black_logo2","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_ABUSAYYAF_Ural_ZU_23_01  : cfp_o_is_Ural_ZU23_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Ural_ZU_23_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Ural ZU-23";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_Light_01"; };
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

    class CFP_O_ABUSAYYAF_M113_01  : cfp_o_is_M113_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_M113_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG M113";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
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

    class CFP_O_ABUSAYYAF_113_Flag_01  : cfp_o_is_M113_flag_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_113_Flag_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG 113 (Flag)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
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

    class CFP_O_ABUSAYYAF_Offroad_01  : O_G_Offroad_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";

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

    class CFP_O_ABUSAYYAF_Offroad_50_Cal_01  : cfp_o_is_offroad_M2_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_50_Cal_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad (50 Cal)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
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

    class CFP_O_ABUSAYYAF_Offroad_50_Cal_Flag_01  : cfp_o_is_offroad_M2_flag_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_50_Cal_Flag_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad (50 Cal, Flag)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
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

    class CFP_O_ABUSAYYAF_Offroad_SPG_01  : cfp_o_is_offroad_AT_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Offroad_SPG_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Offroad (SPG)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_ABUSAYYAF_Grenadier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_isis_04.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "ISIS4";

    };

    class CFP_O_ABUSAYYAF_Jeep_SAW_01  : cfp_o_is_jeep_lmg_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Jeep_SAW_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Jeep (SAW)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class LMG_Turret : LMG_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
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

    class CFP_O_ABUSAYYAF_Jeep_SPG_01  : cfp_o_is_jeep_at_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Jeep_SPG_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Jeep (SPG)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_Light_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_ABUSAYYAF_Rifleman_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
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

    class CFP_O_ABUSAYYAF_Ural_01  : cfp_o_is_Ural_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Ural_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Ural";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "CFP_O_ABUSAYYAF_Rifleman_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_is_2.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "URALIS2";

    };

    class CFP_O_ABUSAYYAF_ZU_23_01  : cfp_o_is_ZU23_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_ZU_23_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG ZU-23";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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

    class CFP_O_ABUSAYYAF_DSHKM_01  : cfp_o_is_DSHKM_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_DSHKM_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG DSHKM";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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

    class CFP_O_ABUSAYYAF_DSKHM_Low_01  : cfp_o_is_DSHkM_Mini_TriPod_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_DSKHM_Low_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG DSKHM (Low)";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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

    class CFP_O_ABUSAYYAF_M2_01  : cfp_o_is_M2Static_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_M2_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG M2";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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

    class CFP_O_ABUSAYYAF_SPG_9_01  : cfp_o_is_SPG9_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_SPG_9_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG SPG-9";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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

    class CFP_O_ABUSAYYAF_Mortar_01  : cfp_o_is_2b14_82mm_OCimport_02 {
        editorPreview = \x\cfp\addons\o_abusayyaf\data\preview\CFP_O_ABUSAYYAF_Mortar_01.JPG;
        author = "jarrad96";
        scope = 2;
        scopeCurator = 2;
        displayName = "ASG Mortar";
        side = 0;
        faction = "CFP_O_ABUSAYYAF";
        crew = "cfp_o_is_crewman";

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
    class CUP_RUBasicAmmunitionBox; //

    class CUP_RUBasicWeaponsBox; //

    class CUP_RUSpecialWeaponsBox; //

    class CUP_RULaunchersBox; //

    class CUP_RUVehicleBox; //

    class CFP_O_ABUSAYYAF_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Ammo Box;
        class TransportMagazines {
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_FlareRed_M203,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_100Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_OG7_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_ABUSAYYAF_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_10Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_M16A2_GL,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_lmg_m249_para,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_srifle_M14,10);
            weap_xx(CUP_arifle_M16A2,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_hgun_Makarov,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_ABUSAYYAF_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7V_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_ABUSAYYAF_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(U_BG_Guerilla2_3,15);
            item_xx(CFP_Uniform_SPLM_20,15);
            item_xx(CUP_I_B_PMC_Unit_20,15);
            item_xx(CUP_U_I_GUE_Anorak_02,15);
            item_xx(U_I_C_Soldier_Bandit_3_F,15);
            item_xx(U_I_C_Soldier_Bandit_2_F,15);
            item_xx(CFP_U_KhetPartug_Short_M81,15);
            item_xx(CUP_U_I_GUE_Woodland1,15);
            item_xx(U_I_C_Soldier_Para_1_F,15);
            item_xx(U_BG_Guerilla2_2,15);
            item_xx(CUP_U_I_GUE_Flecktarn2,15);
            item_xx(U_BG_Guerrilla_6_1,15);
        };
    };
    class CFP_O_ABUSAYYAF_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_H_SLA_BeanieGreen,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessO_brn,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(V_TacVestIR_blk,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(IS_bandanna_black_logo2,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(Binocular,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(CFP_Smersh_ArmyGreen,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(V_Chestrig_blk,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_ACHHelmet_Green1,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(CUP_V_RUS_Smersh_2,10);
            item_xx(SP_PASGTHelmet_Black1,10);
            item_xx(CUP_NVG_PVS7,10);
        };
    };
    class CFP_O_ABUSAYYAF_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Abu Sayyaf Group Supply Box;
        class TransportMagazines {
            mag_xx(SmokeShell,50);
            mag_xx(Chemlight_red,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_1Rnd_HE_M203,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(CUP_FlareWhite_M203,50);
            mag_xx(CUP_FlareRed_M203,50);
            mag_xx(1Rnd_Smoke_Grenade_shell,50);
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_7Rnd_45ACP_1911,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_100Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_20Rnd_B_765x17_Ball_M,50);
            mag_xx(CUP_20Rnd_762x51_DMR,50);
            mag_xx(CUP_PG7V_M,50);
            mag_xx(CUP_OG7_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(APERSMine_Range_Mag,50);
            mag_xx(APERSTripMine_Wire_Mag,50);
            mag_xx(CUP_20Rnd_762x51_FNFAL_M,50);
            mag_xx(CUP_8Rnd_9x18_Makarov_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_arifle_M16A2_GL,10);
            weap_xx(CUP_arifle_AKS74U,10);
            weap_xx(CUP_hgun_Colt1911,10);
            weap_xx(CUP_lmg_m249_para,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_hgun_SA61,10);
            weap_xx(CUP_srifle_M14,10);
            weap_xx(CUP_arifle_M16A2,10);
            weap_xx(CUP_arifle_FNFAL,10);
            weap_xx(CUP_hgun_Makarov,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(CUP_V_O_Ins_Carrier_Rig,10);
            item_xx(CUP_H_SLA_BeanieGreen,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessO_brn,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(V_TacVestIR_blk,10);
            item_xx(H_Bandanna_camo,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(CFP_UtilityJacket_EDRL,10);
            item_xx(IS_bandanna_black_logo2,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(IS_shemag_black,10);
            item_xx(CFP_AssaultPack_M81,10);
            item_xx(Binocular,10);
            item_xx(V_BandollierB_khk,10);
            item_xx(H_Bandanna_sgg,10);
            item_xx(CFP_Smersh_ArmyGreen,10);
            item_xx(CFP_Lungee_Brown,10);
            item_xx(SP_Shemagh_CheckBlack,10);
            item_xx(V_Chestrig_blk,10);
            item_xx(SP_BeanieHat_Black,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_ACHHelmet_Green1,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(SP_OpforRig1_Green,10);
            item_xx(H_ShemagOpen_tan,10);
            item_xx(B_AssaultPack_khk,10);
            item_xx(CUP_V_RUS_Smersh_2,10);
            item_xx(SP_PASGTHelmet_Black1,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(U_BG_Guerilla2_3,10);
            item_xx(CFP_Uniform_SPLM_20,10);
            item_xx(CUP_I_B_PMC_Unit_20,10);
            item_xx(CUP_U_I_GUE_Anorak_02,10);
            item_xx(U_I_C_Soldier_Bandit_3_F,10);
            item_xx(U_I_C_Soldier_Bandit_2_F,10);
            item_xx(CFP_U_KhetPartug_Short_M81,10);
            item_xx(CUP_U_I_GUE_Woodland1,10);
            item_xx(U_I_C_Soldier_Para_1_F,10);
            item_xx(U_BG_Guerilla2_2,10);
            item_xx(CUP_U_I_GUE_Flecktarn2,10);
            item_xx(U_BG_Guerrilla_6_1,10);
        };
    };
};