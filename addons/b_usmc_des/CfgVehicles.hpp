
class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_MARPAT_D { displayName = "Men (MARPAT - Desert)";  };
};

class CfgVehicles {
// OVERRIDES

    // BASE Vehicles
        class CUP_RG31_M2;
        class CUP_RG31_M2_OCimport_01 : CUP_RG31_M2 { scope = 0; class EventHandlers; class Turrets; };
        class CUP_RG31_M2_OCimport_02 : CUP_RG31_M2_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M1A2_TUSK_base;
        class CUP_M1A2_TUSK_base_OCimport_01 : CUP_M1A2_TUSK_base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1A2_TUSK_base_OCimport_02 : CUP_M1A2_TUSK_base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
                class CargoTurret_05;
                class CargoTurret_06;
                class CargoTurret_07;
                class CargoTurret_08;
            };
        };

        class CUP_M1_Abrams_base;
        class CUP_M1_Abrams_base_OCimport_01 : CUP_M1_Abrams_base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1_Abrams_base_OCimport_02 : CUP_M1_Abrams_base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
                class CargoTurret_05;
                class CargoTurret_06;
                class CargoTurret_07;
                class CargoTurret_08;
            };
        };

        class CUP_M1167_BASE;
        class CUP_M1167_BASE_OCimport_01 : CUP_M1167_BASE { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1167_BASE_OCimport_02 : CUP_M1167_BASE_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M1152_BASE;
        class CUP_M1152_BASE_OCimport_01 : CUP_M1152_BASE { scope = 0; class EventHandlers; };
        class CUP_M1152_BASE_OCimport_02 : CUP_M1152_BASE_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_M1151_Unarmed_BASE;
        class CUP_M1151_Unarmed_BASE_OCimport_01 : CUP_M1151_Unarmed_BASE { scope = 0; class EventHandlers; };
        class CUP_M1151_Unarmed_BASE_OCimport_02 : CUP_M1151_Unarmed_BASE_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_M1151_Mk19_BASE;
        class CUP_M1151_Mk19_BASE_OCimport_01 : CUP_M1151_Mk19_BASE { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1151_Mk19_BASE_OCimport_02 : CUP_M1151_Mk19_BASE_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M1151_Deploy_BASE;
        class CUP_M1151_Deploy_BASE_OCimport_01 : CUP_M1151_Deploy_BASE { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1151_Deploy_BASE_OCimport_02 : CUP_M1151_Deploy_BASE_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M1151_M2_BASE;
        class CUP_M1151_M2_BASE_OCimport_01 : CUP_M1151_M2_BASE { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1151_M2_BASE_OCimport_02 : CUP_M1151_M2_BASE_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M1165_GMV_BASE;
        class CUP_M1165_GMV_BASE_OCimport_01 : CUP_M1165_GMV_BASE { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M1165_GMV_BASE_OCimport_02 : CUP_M1165_GMV_BASE_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_RG31E_M2;
        class CUP_RG31E_M2_OCimport_01 : CUP_RG31E_M2 { scope = 0; class EventHandlers; class Turrets; };
        class CUP_RG31E_M2_OCimport_02 : CUP_RG31E_M2_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_RG31_Mk19;
        class CUP_RG31_Mk19_OCimport_01 : CUP_RG31_Mk19 { scope = 0; class EventHandlers; class Turrets; };
        class CUP_RG31_Mk19_OCimport_02 : CUP_RG31_Mk19_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_RG31_M2_GC;
        class CUP_RG31_M2_GC_OCimport_01 : CUP_RG31_M2_GC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_RG31_M2_GC_OCimport_02 : CUP_RG31_M2_GC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CommanderObs;
            };
        };

        class CUP_B_LAV25_HQ_USMC;
        class CUP_B_LAV25_HQ_USMC_OCimport_01 : CUP_B_LAV25_HQ_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_LAV25_HQ_USMC_OCimport_02 : CUP_B_LAV25_HQ_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CommanderOptics;
                class CargoGunner_1;
                class CargoGunner_2;
                class CargoGunner_3;
            };
        };

        class CUP_B_LAV25M240_USMC;
        class CUP_B_LAV25M240_USMC_OCimport_01 : CUP_B_LAV25M240_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_LAV25M240_USMC_OCimport_02 : CUP_B_LAV25M240_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CargoGunner_1;
                class CargoGunner_2;
            };
        };

        class CUP_B_LAV25_USMC;
        class CUP_B_LAV25_USMC_OCimport_01 : CUP_B_LAV25_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_LAV25_USMC_OCimport_02 : CUP_B_LAV25_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CargoGunner_1;
                class CargoGunner_2;
            };
        };

    // Vehicles
        class CUP_B_RG31E_M2_USMC : CUP_RG31E_M2_OCimport_02 {

            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 Mk5E M2";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CUP_B_RG31_Mk19_USMC : CUP_RG31_Mk19_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 Mk.19";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CUP_B_RG31_M2_GC_USMC : CUP_RG31_M2_GC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 M2 GC";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CommanderObs : CommanderObs { gunnerType = ""; };
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

        class CUP_B_RG31_M2_USMC : CUP_RG31_M2_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 M2";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CUP_B_M1A2_TUSK_MG_DES_USMC : CUP_M1A2_TUSK_base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1A2 Abrams TUSK (Desert)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
                class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
                class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
                class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
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

        class CUP_B_M1A1_DES_USMC : CUP_M1_Abrams_base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1A1 Abrams (Desert)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
                class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
                class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
                class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
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

        class CUP_B_M1167_DSRT_USMC : CUP_M1167_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1167 (TOW-2)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";

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

        class CUP_B_M1152_DSRT_USMC : CUP_M1152_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1152 ECV";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_M1151_DSRT_USMC : CUP_M1151_Unarmed_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1151 (Unarmed)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_M1151_Mk19_DSRT_USMC : CUP_M1151_Mk19_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1151 (Mk19)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";

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

        class CUP_B_M1151_Deploy_DSRT_USMC : CUP_M1151_Deploy_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1151 (M2) Deployment";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";

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

        class CUP_B_M1151_M2_DSRT_USMC : CUP_M1151_M2_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1151 (M2)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";

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

        class CUP_B_M1165_GMV_DSRT_USMC : CUP_M1165_GMV_BASE_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1165 GMV (M134)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CUP_B_USMC_Soldier_FROG_DES";

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

        class CUP_B_LAV25_HQ_desert_USMC : CUP_B_LAV25_HQ_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LAV-C2 (Desert)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class CommanderOptics : CommanderOptics { gunnerType = ""; };
                class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
                class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
                class CargoGunner_3 : CargoGunner_3 { gunnerType = ""; };
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

        class CUP_B_LAV25M240_desert_USMC : CUP_B_LAV25M240_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LAV-25A1 (M240) (Desert)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
                class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
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

        class CUP_B_LAV25_desert_USMC : CUP_B_LAV25_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LAV-25A1 (Desert)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
                class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
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

    // BASE MEN
        class CUP_B_USMC_Soldier_13;
        class CUP_B_USMC_Soldier_13_OCimport_01 : CUP_B_USMC_Soldier_13 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_13_OCimport_02 : CUP_B_USMC_Soldier_13_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_11;
        class CUP_B_USMC_Soldier_11_OCimport_01 : CUP_B_USMC_Soldier_11 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_11_OCimport_02 : CUP_B_USMC_Soldier_11_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_17;
        class CUP_B_USMC_Soldier_17_OCimport_01 : CUP_B_USMC_Soldier_17 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_17_OCimport_02 : CUP_B_USMC_Soldier_17_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_15;
        class CUP_B_USMC_Soldier_15_OCimport_01 : CUP_B_USMC_Soldier_15 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_15_OCimport_02 : CUP_B_USMC_Soldier_15_OCimport_01 { class EventHandlers; };

    // FROG
        class CUP_B_USMC_Soldier_MG_FROG_DES : CUP_B_USMC_Soldier_15_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            backpack = "CUP_B_USMC_MOLLE_MG";
        weapons[] = {"CUP_lmg_M240","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_M240","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240","","","",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1}}},{"CUP_V_B_Eagle_SPC_MG",{}},{"CUP_B_USMC_MOLLE_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_AR_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Automatic Rifleman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
           backpack = "CUP_B_USMC_MOLLE_AR";
        weapons[] = {"CUP_lmg_M249","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_M249","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_AR","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_AR","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249","","","",{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",200},{},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1}}},{"CUP_V_B_Eagle_SPC_AR",{}},{"CUP_B_USMC_MOLLE_AR",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",3,200}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_Light_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (unarmed) ";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1}}},{"CUP_V_B_Eagle_SPC_Empty",{}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_AA_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AA Specialist (Stinger)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_B_Eagle_SPC_Patrol",{{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",2,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_HAT_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist (Javelin)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Javelin","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Javelin","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Javelin","","","",{"CUP_Javelin_M",1},{},""},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_B_Eagle_SPC_AT",{{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",2,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_AT_FROG_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist (SMAW)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
           backpack = "CUP_B_USMC_AssaultPack_SMAW";
        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Mk153Mod0_SMAWOptics","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Mk153Mod0_SMAWOptics","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_SMAW_HEAA_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_SMAW_HEAA_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Mk153Mod0_SMAWOptics","","","CUP_optic_SMAW_Scope",{"CUP_SMAW_HEAA_M",1},{"CUP_SMAW_Spotting",5},""},{},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_B_Eagle_SPC_AT",{{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",2,1},{"CUP_SMAW_Spotting",1,5}}},{"CUP_B_USMC_AssaultPack_SMAW",{{"CUP_SMAW_HEDP_M",1,1},{"CUP_SMAW_HEAA_M",1,1}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_LAT_FROG_DES : CUP_B_USMC_Soldier_15_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (M136)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_M136","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_M136","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_AT","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_M136","","","",{"CUP_M136_M",1},{},""},{},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{"CUP_V_B_Eagle_SPC_AT",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_M67",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Crewman_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Crewman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_B_Eagle_SPC_Empty",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_7Rnd_45ACP_1911",2,7},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_SL_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Squad Leader";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_hgun_M9","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_hgun_M9","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_SL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_SL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_SL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",2,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };


        class CUP_B_USMC_Soldier_TL_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Fire Team Leader";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_GL_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_TL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_1Rnd_Smoke_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Medic_FROG_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Corpsman";
            attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
           backpack = "CUP_B_USMC_AssaultPack_Medic";
        weapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_B_Eagle_SPC_Corpsman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_B_USMC_AssaultPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_RTO_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Radio Operator";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_RTO","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_RTO","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_RTO",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_SpecOps_FROG_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scout";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","Laserbatteries"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_B_Eagle_SPC_Scout",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_15Rnd_9x19_M9",3,15},{"SmokeShellPurple",1,1},{"SmokeShellYellow",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_GL_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_GL_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_1Rnd_HEDP_M203",1,1}}},{"CUP_V_B_Eagle_SPC_GL",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_1Rnd_HEDP_M203",6,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Engineer_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Engineer";
            engineer = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
           backpack = "CUP_B_USMC_MOLLE_Exp";
        weapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Corpsman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1}}},{"CUP_B_USMC_MOLLE_Exp",{{"ToolKit",1},{"MineDetector",1},{"CUP_Mine_M",2,1}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_Marksman_FROG_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Designated Marksman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_srifle_DMR_LeupoldMk4","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_DMR_LeupoldMk4","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_DMR_LeupoldMk4","","","CUP_optic_LeupoldMk4",{"CUP_20Rnd_762x51_DMR",20},{},"CUP_bipod_Harris_1A2_L"},{},{},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_DMR",1,20},{"SmokeShell",1,1}}},{"CUP_V_B_Eagle_SPC_DMR",{{"CUP_20Rnd_762x51_DMR",6,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellRed",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Officer_FROG_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Officer";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_B_Eagle_SPC_Officer",{{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_UAV_FROG_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UAV Controller";
            uavHacker = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Officer",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_USMC_Soldier_FROG_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };
            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };

        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

    // Force Recon
        class CUP_B_FR_Soldier_AR_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Heavy Gunner";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_FR_MOLLE_MG";
        weapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_des_Aim_Laser","","CUP_acc_ANPEQ_2_desert","CUP_optic_CompM2_Desert",{},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1}}},{"CUP_V_B_Eagle_SPC_MG",{{"CUP_15Rnd_9x19_M9",3,15}}},{"CUP_B_FR_MOLLE_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Medic_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Corpsman";
            attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_USMC_AssaultPack_Medic";
        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{"CUP_V_B_Eagle_SPC_Corpsman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"CUP_B_USMC_AssaultPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Light_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Force Recon Unarmed";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Empty","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1}}},{"CUP_V_B_Eagle_SPC_Empty",{}},{},"H_Bandanna_sand","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Assault_GL_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Assault Grenadier";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_GL_Holo_Flashlight","","CUP_acc_Flashlight","CUP_optic_HoloBlack",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_GL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"SmokeShellPurple",1,1},{"CUP_1Rnd_HEDP_M203",4,1},{"CUP_1Rnd_Smoke_M203",1,1},{"CUP_7Rnd_45ACP_1911",1,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Assault_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Assault Rifleman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_SL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_SL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_SL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"SmokeShellPurple",1,1},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_UAV_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UAV Operator";
            uavHacker = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","Laserbatteries"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_muzzle_snds_M16_camo","CUP_acc_Flashlight_wdl","CUP_optic_HoloWdl",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",2,1}}},{"CUP_V_B_Eagle_SPC_Patrol",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_FlareRed_M203",1,1},{"CUP_FlareGreen_M203",1,1},{"CUP_7Rnd_45ACP_1911",1,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Operator_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "FAC Operator";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_RTO","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_RTO","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","Laserbatteries"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_camo_GL_Holo_Flashlight_Snds","CUP_muzzle_snds_M16_camo","CUP_acc_Flashlight_wdl","CUP_optic_HoloWdl",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",2,1}}},{"CUP_V_B_Eagle_SPC_RTO",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_FlareRed_M203",1,1},{"CUP_FlareGreen_M203",1,1},{"CUP_7Rnd_45ACP_1911",1,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Exp_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Demolitions Specialist";
            canDeactivateMines = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_FR_MOLLE_Sab";
        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Rifleman","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_B_Eagle_SPC_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_PipeBomb_M",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"CUP_B_FR_MOLLE_Sab",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",2,1}}},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_GL_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_GL_Holo_Flashlight","","CUP_acc_Flashlight","CUP_optic_HoloBlack",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_1Rnd_HEDP_M203",1,1}}},{"CUP_V_B_Eagle_SPC_GL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",6,1},{"CUP_15Rnd_9x19_M9",1,15}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_Marksman_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Marksman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_srifle_DMR_LeupoldMk4","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_DMR_LeupoldMk4","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_DMR_LeupoldMk4","","","CUP_optic_LeupoldMk4",{"CUP_20Rnd_762x51_DMR",20},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_DMR",1,20},{"SmokeShell",1,1}}},{"CUP_V_B_Eagle_SPC_DMR",{{"CUP_20Rnd_762x51_DMR",4,20},{"CUP_15Rnd_9x19_M9",3,15},{"CUP_HandGrenade_M67",1,1},{"SmokeShellYellow",1,1},{"SmokeShellPurple",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Saboteur_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Saboteur";
            canDeactivateMines = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_FR_MOLLE_Sab";
        weapons[] = {"CUP_arifle_M4A1_camo_AIM_snds","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_camo_AIM_snds","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_camo_AIM_snds","CUP_muzzle_snds_M16_camo","","CUP_optic_CompM2_Woodland",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Patrol",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1},{"CUP_7Rnd_45ACP_1911",3,7}}},{"CUP_B_FR_MOLLE_Sab",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",2,1}}},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Commander_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Commander";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Officer","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{"CUP_V_B_Eagle_SPC_Officer",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShellPurple",1,1},{"SmokeShellYellow",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Soldier_TL_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Team Leader";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","NoGlasses"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };



            headgearList[] = {
                "CUP_H_USMC_MICH2000_DES",0.5,
                "CUP_H_USMC_MICH2000_COMM_DES",0.5,
                "CUP_H_USMC_MICH2000_DEF_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A3_desert_GL_ACOG_Laser","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_desert_GL_ACOG_Laser","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Scout","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_FlareWhite_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A3_desert_GL_ACOG_Laser","","CUP_acc_ANPEQ_2_desert","CUP_optic_RCO_desert",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_FlareWhite_M203",1},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Scout",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1},{"CUP_FlareGreen_M203",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Story_Rodriguez_DES : CUP_B_USMC_Soldier_17_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rodriguez";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"CUP_Rodriguez"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_FR_MOLLE_MG";
        weapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_PMC_Cap_Back_PRR_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_MG","CUP_H_PMC_Cap_Back_PRR_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_des_Aim_Laser","","CUP_acc_ANPEQ_2_desert","CUP_optic_CompM2_Desert",{},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",3,15}}},{"CUP_V_B_Eagle_SPC_MG",{}},{"CUP_B_FR_MOLLE_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_PMC_Cap_Back_PRR_Tan","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Story_OHara_DES : CUP_B_USMC_Soldier_11_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "O'Hara";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"CUP_Ohara"};
            uniformClass = "CUP_U_B_USMC_FROG1_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };

            backpack = "CUP_B_USMC_AssaultPack_Medic";
        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_FR_Headband_Headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_Corpsman","CUP_H_FR_Headband_Headset","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG1_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_Corpsman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{"CUP_B_USMC_AssaultPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_FR_Headband_Headset","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Story_Sykes_DES : CUP_B_USMC_Soldier_15_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sykes";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"CUP_Sykes"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_srifle_DMR_LeupoldMk4","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_DMR_LeupoldMk4","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_DMR","H_Bandanna_sand","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_DMR_LeupoldMk4","","","CUP_optic_LeupoldMk4",{"CUP_20Rnd_762x51_DMR",20},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_DMR",1,20},{"SmokeShell",1,1}}},{"CUP_V_B_Eagle_SPC_DMR",{{"CUP_20Rnd_762x51_DMR",4,20},{"CUP_15Rnd_9x19_M9",3,15},{"CUP_HandGrenade_M67",1,1},{"SmokeShellYellow",1,1},{"SmokeShellPurple",1,1}}},{},"H_Bandanna_sand","CUP_FR_NeckScarf2",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Story_Cooper_DES : CUP_B_USMC_Soldier_15_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Cooper";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"CUP_Cooper"};
            uniformClass = "CUP_U_B_USMC_FROG3_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_TL","H_Cap_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_TL","H_Cap_tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_GL_Holo_Flashlight","","CUP_acc_Flashlight","CUP_optic_HoloBlack",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG3_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{"CUP_V_B_Eagle_SPC_TL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",5,1},{"CUP_15Rnd_9x19_M9",1,15}}},{},"H_Cap_tan","CUP_FR_NeckScarf2",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_FR_Story_Miles_DES : CUP_B_USMC_Soldier_13_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Miles";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"CUP_Miles"};
            uniformClass = "CUP_U_B_USMC_FROG2_DMARPAT";

            randomGearProbability = 100;
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            facewearList[] = {
                "", 0.3,
                "SP_Goggles_Tan", 0.5,
                "SP_Goggles_Black", 0.3,
                "CUP_FR_NeckScarf2", 0.4,
                "G_Bandanna_Tan", 0.2
            };


        weapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_GL_Holo_Flashlight","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_Eagle_SPC_GL","CUP_H_USMC_LWH_ESS_DES","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_FlareGreen_M203","CUP_FlareGreen_M203","CUP_FlareGreen_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_FlareGreen_M203","CUP_FlareGreen_M203","CUP_FlareGreen_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_GL_Holo_Flashlight","","CUP_acc_Flashlight","CUP_optic_HoloBlack",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_FlareGreen_M203",1},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USMC_FROG2_DMARPAT",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_Eagle_SPC_GL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1},{"CUP_FlareRed_M203",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{},"CUP_H_USMC_LWH_ESS_DES","CUP_FR_NeckScarf2",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

// NEW

    // BASE VEHICLES
        class CUP_B_MV22_VIV_USMC;
        class CUP_B_MV22_VIV_USMC_OCimport_01 : CUP_B_MV22_VIV_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MV22_VIV_USMC_OCimport_02 : CUP_B_MV22_VIV_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
            };
        };

        class CUP_B_MV22_USMC_RAMPGUN;
        class CUP_B_MV22_USMC_RAMPGUN_OCimport_01 : CUP_B_MV22_USMC_RAMPGUN { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MV22_USMC_RAMPGUN_OCimport_02 : CUP_B_MV22_USMC_RAMPGUN_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class RightDoorGun;
                class CopilotTurret;
                class CargoTurret_01;
                class CargoTurret_02;
            };
        };

        class CUP_B_TOW_TriPod_USMC;
        class CUP_B_TOW_TriPod_USMC_OCimport_01 : CUP_B_TOW_TriPod_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_TOW_TriPod_USMC_OCimport_02 : CUP_B_TOW_TriPod_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_USMC_DYN_MQ9;
        class CUP_B_USMC_DYN_MQ9_OCimport_01 : CUP_B_USMC_DYN_MQ9 { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_USMC_DYN_MQ9_OCimport_02 : CUP_B_USMC_DYN_MQ9_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_MV22_USMC;
        class CUP_B_MV22_USMC_OCimport_01 : CUP_B_MV22_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MV22_USMC_OCimport_02 : CUP_B_MV22_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class CargoTurret_01;
                class CargoTurret_02;
            };
        };

        class CUP_B_C130J_Cargo_USMC;
        class CUP_B_C130J_Cargo_USMC_OCimport_01 : CUP_B_C130J_Cargo_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_C130J_Cargo_USMC_OCimport_02 : CUP_B_C130J_Cargo_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_C130J_USMC;
        class CUP_B_C130J_USMC_OCimport_01 : CUP_B_C130J_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_C130J_USMC_OCimport_02 : CUP_B_C130J_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_AV8B_DYN_USMC;
        class CUP_B_AV8B_DYN_USMC_OCimport_01 : CUP_B_AV8B_DYN_USMC { scope = 0; class EventHandlers; };
        class CUP_B_AV8B_DYN_USMC_OCimport_02 : CUP_B_AV8B_DYN_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_M270_DPICM_USA;
        class CUP_B_M270_DPICM_USA_OCimport_01 : CUP_B_M270_DPICM_USA { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M270_DPICM_USA_OCimport_02 : CUP_B_M270_DPICM_USA_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M270_HE_USA;
        class CUP_B_M270_HE_USA_OCimport_01 : CUP_B_M270_HE_USA { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M270_HE_USA_OCimport_02 : CUP_B_M270_HE_USA_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_UH60S_USN;
        class CUP_B_UH60S_USN_OCimport_01 : CUP_B_UH60S_USN { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_UH60S_USN_OCimport_02 : CUP_B_UH60S_USN_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class MainTurret;
                class RightDoorGun;
            };
        };

        class CUP_B_MH60L_DAP_2x_USN;
        class CUP_B_MH60L_DAP_2x_USN_OCimport_01 : CUP_B_MH60L_DAP_2x_USN { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MH60L_DAP_2x_USN_OCimport_02 : CUP_B_MH60L_DAP_2x_USN_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class MainTurret;
                class RightDoorGun;
            };
        };

        class CUP_B_MH60L_DAP_4x_USN;
        class CUP_B_MH60L_DAP_4x_USN_OCimport_01 : CUP_B_MH60L_DAP_4x_USN { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MH60L_DAP_4x_USN_OCimport_02 : CUP_B_MH60L_DAP_4x_USN_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class MainTurret;
                class RightDoorGun;
            };
        };

        class CUP_B_UH1Y_Gunship_Dynamic_USMC;
        class CUP_B_UH1Y_Gunship_Dynamic_USMC_OCimport_01 : CUP_B_UH1Y_Gunship_Dynamic_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_UH1Y_Gunship_Dynamic_USMC_OCimport_02 : CUP_B_UH1Y_Gunship_Dynamic_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class RightDoorGun;
                class CoPilotObs;
            };
        };

        class CUP_B_UH1Y_MEV_USMC;
        class CUP_B_UH1Y_MEV_USMC_OCimport_01 : CUP_B_UH1Y_MEV_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_UH1Y_MEV_USMC_OCimport_02 : CUP_B_UH1Y_MEV_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CoPilotObs;
                class CargoTurret_01;
                class CargoTurret_02;
            };
        };

        class CUP_B_UH1Y_UNA_USMC;
        class CUP_B_UH1Y_UNA_USMC_OCimport_01 : CUP_B_UH1Y_UNA_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_UH1Y_UNA_USMC_OCimport_02 : CUP_B_UH1Y_UNA_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CoPilotObs;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
                class CargoTurret_05;
                class CargoTurret_06;
            };
        };

        class CUP_B_MH60S_FFV_USMC;
        class CUP_B_MH60S_FFV_USMC_OCimport_01 : CUP_B_MH60S_FFV_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MH60S_FFV_USMC_OCimport_02 : CUP_B_MH60S_FFV_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class MainTurret;
                class RightDoorGun;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
            };
        };

        class CUP_B_MH60S_USMC;
        class CUP_B_MH60S_USMC_OCimport_01 : CUP_B_MH60S_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_MH60S_USMC_OCimport_02 : CUP_B_MH60S_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CopilotTurret;
                class MainTurret;
                class RightDoorGun;
            };
        };

        class CUP_B_F35B_Stealth_USMC;
        class CUP_B_F35B_Stealth_USMC_OCimport_01 : CUP_B_F35B_Stealth_USMC { scope = 0; class EventHandlers; };
        class CUP_B_F35B_Stealth_USMC_OCimport_02 : CUP_B_F35B_Stealth_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_F35B_USMC;
        class CUP_B_F35B_USMC_OCimport_01 : CUP_B_F35B_USMC { scope = 0; class EventHandlers; };
        class CUP_B_F35B_USMC_OCimport_02 : CUP_B_F35B_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_CH53E_VIV_USMC;
        class CUP_B_CH53E_VIV_USMC_OCimport_01 : CUP_B_CH53E_VIV_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_CH53E_VIV_USMC_OCimport_02 : CUP_B_CH53E_VIV_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_CH53E_USMC;
        class CUP_B_CH53E_USMC_OCimport_01 : CUP_B_CH53E_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_CH53E_USMC_OCimport_02 : CUP_B_CH53E_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_AH1Z_Dynamic_USMC;
        class CUP_B_AH1Z_Dynamic_USMC_OCimport_01 : CUP_B_AH1Z_Dynamic_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_AH1Z_Dynamic_USMC_OCimport_02 : CUP_B_AH1Z_Dynamic_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M2StaticMG_USMC;
        class CUP_B_M2StaticMG_USMC_OCimport_01 : CUP_B_M2StaticMG_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M2StaticMG_USMC_OCimport_02 : CUP_B_M2StaticMG_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M2StaticMG_MiniTripod_USMC;
        class CUP_B_M2StaticMG_MiniTripod_USMC_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M2StaticMG_MiniTripod_USMC_OCimport_02 : CUP_B_M2StaticMG_MiniTripod_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M252_USMC;
        class CUP_B_M252_USMC_OCimport_01 : CUP_B_M252_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M252_USMC_OCimport_02 : CUP_B_M252_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M119_USMC;
        class CUP_B_M119_USMC_OCimport_01 : CUP_B_M119_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M119_USMC_OCimport_02 : CUP_B_M119_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_AAV_USMC;
        class CUP_B_AAV_USMC_OCimport_01 : CUP_B_AAV_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_AAV_USMC_OCimport_02 : CUP_B_AAV_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CommanderTurret;
                class CargoGunner_1;
                class CargoGunner_2;
                class CargoGunner_3;
                class CargoGunner_4;
                class CargoGunner_5;
                class CargoGunner_6;
            };
        };

        class CUP_B_AAV_Unarmed_USMC;
        class CUP_B_AAV_Unarmed_USMC_OCimport_01 : CUP_B_AAV_Unarmed_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_AAV_Unarmed_USMC_OCimport_02 : CUP_B_AAV_Unarmed_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CommanderTurret;
                class CargoGunner_1;
                class CargoGunner_2;
                class CargoGunner_3;
                class CargoGunner_4;
                class CargoGunner_5;
                class CargoGunner_6;
            };
        };

        class CUP_B_Seafox_USV_USMC;
        class CUP_B_Seafox_USV_USMC_OCimport_01 : CUP_B_Seafox_USV_USMC { scope = 0; class EventHandlers; };
        class CUP_B_Seafox_USV_USMC_OCimport_02 : CUP_B_Seafox_USV_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_HMMWV_Ambulance_USMC;
        class CUP_B_HMMWV_Ambulance_USMC_OCimport_01 : CUP_B_HMMWV_Ambulance_USMC { scope = 0; class EventHandlers; };
        class CUP_B_HMMWV_Ambulance_USMC_OCimport_02 : CUP_B_HMMWV_Ambulance_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_Zodiac_USMC;
        class CUP_B_Zodiac_USMC_OCimport_01 : CUP_B_Zodiac_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_Zodiac_USMC_OCimport_02 : CUP_B_Zodiac_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
            };
        };

        class CUP_B_HMMWV_Avenger_USMC;
        class CUP_B_HMMWV_Avenger_USMC_OCimport_01 : CUP_B_HMMWV_Avenger_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_HMMWV_Avenger_USMC_OCimport_02 : CUP_B_HMMWV_Avenger_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M60A3_USMC;
        class CUP_B_M60A3_USMC_OCimport_01 : CUP_B_M60A3_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M60A3_USMC_OCimport_02 : CUP_B_M60A3_USMC_OCimport_01 {
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

        class CUP_B_RHIB_USMC;
        class CUP_B_RHIB_USMC_OCimport_01 : CUP_B_RHIB_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_RHIB_USMC_OCimport_02 : CUP_B_RHIB_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_RHIB2Turret_USMC;
        class CUP_B_RHIB2Turret_USMC_OCimport_01 : CUP_B_RHIB2Turret_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_RHIB2Turret_USMC_OCimport_02 : CUP_B_RHIB2Turret_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class BackTurret;
            };
        };

        class CUP_B_Seafox_USMC;
        class CUP_B_Seafox_USMC_OCimport_01 : CUP_B_Seafox_USMC { scope = 0; class EventHandlers; };
        class CUP_B_Seafox_USMC_OCimport_02 : CUP_B_Seafox_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_TowingTractor_USMC;
        class CUP_B_TowingTractor_USMC_OCimport_01 : CUP_B_TowingTractor_USMC { scope = 0; class EventHandlers; };
        class CUP_B_TowingTractor_USMC_OCimport_02 : CUP_B_TowingTractor_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_HMMWV_M1114_USMC;
        class CUP_B_HMMWV_M1114_USMC_OCimport_01 : CUP_B_HMMWV_M1114_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_HMMWV_M1114_USMC_OCimport_02 : CUP_B_HMMWV_M1114_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_RG31_Mk19_OD_USMC;
        class CUP_B_RG31_Mk19_OD_USMC_OCimport_01 : CUP_B_RG31_Mk19_OD_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_RG31_Mk19_OD_USMC_OCimport_02 : CUP_B_RG31_Mk19_OD_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_HMMWV_Unarmed_USMC;
        class CUP_B_HMMWV_Unarmed_USMC_OCimport_01 : CUP_B_HMMWV_Unarmed_USMC { scope = 0; class EventHandlers; };
        class CUP_B_HMMWV_Unarmed_USMC_OCimport_02 : CUP_B_HMMWV_Unarmed_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_HMMWV_TOW_USMC;
        class CUP_B_HMMWV_TOW_USMC_OCimport_01 : CUP_B_HMMWV_TOW_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_HMMWV_TOW_USMC_OCimport_02 : CUP_B_HMMWV_TOW_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_RG31_M2_OD_USMC;
        class CUP_B_RG31_M2_OD_USMC_OCimport_01 : CUP_B_RG31_M2_OD_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_RG31_M2_OD_USMC_OCimport_02 : CUP_B_RG31_M2_OD_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_MTVR_Repair_USMC;
        class CUP_B_MTVR_Repair_USMC_OCimport_01 : CUP_B_MTVR_Repair_USMC { scope = 0; class EventHandlers; };
        class CUP_B_MTVR_Repair_USMC_OCimport_02 : CUP_B_MTVR_Repair_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_MTVR_Refuel_USMC;
        class CUP_B_MTVR_Refuel_USMC_OCimport_01 : CUP_B_MTVR_Refuel_USMC { scope = 0; class EventHandlers; };
        class CUP_B_MTVR_Refuel_USMC_OCimport_02 : CUP_B_MTVR_Refuel_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_MTVR_Ammo_USMC;
        class CUP_B_MTVR_Ammo_USMC_OCimport_01 : CUP_B_MTVR_Ammo_USMC { scope = 0; class EventHandlers; };
        class CUP_B_MTVR_Ammo_USMC_OCimport_02 : CUP_B_MTVR_Ammo_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_MTVR_USMC;
        class CUP_B_MTVR_USMC_OCimport_01 : CUP_B_MTVR_USMC { scope = 0; class EventHandlers; };
        class CUP_B_MTVR_USMC_OCimport_02 : CUP_B_MTVR_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_M1030_USMC;
        class CUP_B_M1030_USMC_OCimport_01 : CUP_B_M1030_USMC { scope = 0; class EventHandlers; };
        class CUP_B_M1030_USMC_OCimport_02 : CUP_B_M1030_USMC_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_HMMWV_MK19_USMC;
        class CUP_B_HMMWV_MK19_USMC_OCimport_01 : CUP_B_HMMWV_MK19_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_HMMWV_MK19_USMC_OCimport_02 : CUP_B_HMMWV_MK19_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_HMMWV_M2_USMC;
        class CUP_B_HMMWV_M2_USMC_OCimport_01 : CUP_B_HMMWV_M2_USMC { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_HMMWV_M2_USMC_OCimport_02 : CUP_B_HMMWV_M2_USMC_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

    // Vehicles
        class CFP_B_USMC_MV_22B_Osprey_VIV_DES_01 : CUP_B_MV22_VIV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MV-22B Osprey (VIV)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
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

        class CFP_B_USMC_MV_22B_Osprey_Ramp_Gun_DES_01 : CUP_B_MV22_USMC_RAMPGUN_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MV-22B Osprey (Ramp Gun)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_TOW_Tripod_DES_01 : CUP_B_TOW_TriPod_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "TOW Tripod";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_MQ_9Reaper_DES_01 : CUP_B_USMC_DYN_MQ9_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MQ-9 Reaper";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "B_UAV_AI";

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

        class CFP_B_USMC_MV_22B_Osprey_DES_01 : CUP_B_MV22_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MV-22B Osprey";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
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

        class CFP_B_USMC_C130J_VIV_DES_01 : CUP_B_C130J_Cargo_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "C-130J (VIV)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

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

        class CFP_B_USMC_C130J_DES_01 : CUP_B_C130J_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "C-130J";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

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

        class CFP_B_USMC_AV_8B_Harrier_II_DES_01 : CUP_B_AV8B_DYN_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AV-8B Harrier II";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "B_Pilot_F";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_M270_MLRS_DPICM_DES_01 : CUP_B_M270_DPICM_USA_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M270 MLRS (DPICM)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

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

        class CFP_B_USMC_M270_MLRS_HE_DES_01 : CUP_B_M270_HE_USA_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M270 MLRS (HE)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

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

        class CFP_B_USMC_MH_60S_Seahawk_M3M_DES_01 : CUP_B_UH60S_USN_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60S Seahawk (M3M)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_MH_60S_Knighthawk_ESSS_x2_DES_01 : CUP_B_MH60L_DAP_2x_USN_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60S Knighthawk (ESSS x2)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_MH_60S_Knighthawk_ESSS_x4_DES_01 : CUP_B_MH60L_DAP_4x_USN_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60S Knighthawk (ESSS x4)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_UH_1Y_Venom_Gunship_DES_01 : CUP_B_UH1Y_Gunship_Dynamic_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-1Y Venom Gunship";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
                class CoPilotObs : CoPilotObs { gunnerType = ""; };
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

        class CFP_B_USMC_UH_1Y_Venom_MEV_DES_01 : CUP_B_UH1Y_MEV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-1Y Venom MEV";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CoPilotObs : CoPilotObs { gunnerType = ""; };
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

        class CFP_B_USMC_UH_1Y_Venom_Transport_DES_01 : CUP_B_UH1Y_UNA_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-1Y Venom Transport";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CoPilotObs : CoPilotObs { gunnerType = ""; };
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
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_MH_60S_Seahawk_FFV_DES_01 : CUP_B_MH60S_FFV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60S Seahawk (FFV)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_MH_60S_Seahawk_DES_01 : CUP_B_MH60S_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60S Seahawk";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

            class Turrets : Turrets {
                class CopilotTurret : CopilotTurret { gunnerType = ""; };
                class MainTurret : MainTurret { gunnerType = ""; };
                class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

        class CFP_B_USMC_F35B_Lightning_II_Stealth_DES_01 : CUP_B_F35B_Stealth_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "F-35B Lightning II (Stealth)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "B_pilot_F";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_F35B_Lightning_II_DES_01 : CUP_B_F35B_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "F-35B Lightning II";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "B_pilot_F";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_CH_53E_Super_Stallion_VIV_DES_01 : CUP_B_CH53E_VIV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "CH-53E Super Stallion (VIV)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

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

        class CFP_B_USMC_CH_53E_Super_Stallion_DES_01 : CUP_B_CH53E_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "CH-53E Super Stallion";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

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

        class CFP_B_USMC_AH_1Z_DES_01 : CUP_B_AH1Z_Dynamic_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AH-1Z";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Pilot_DES_01";

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

        class CFP_B_USMC_M2_Machine_Gun_DES_01 : CUP_B_M2StaticMG_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Machine Gun";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_M2_Minitripod_DES_01 : CUP_B_M2StaticMG_MiniTripod_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Minitripod";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_M252_81mm_Mortar_DES_01 : CUP_B_M252_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M252 81mm Mortar";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_M119_DES_01 : CUP_B_M119_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M119";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_AAVP7_A1_DES_01 : CUP_B_AAV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AAVP7/A1";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CommanderTurret : CommanderTurret { gunnerType = ""; };
                class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
                class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
                class CargoGunner_3 : CargoGunner_3 { gunnerType = ""; };
                class CargoGunner_4 : CargoGunner_4 { gunnerType = ""; };
                class CargoGunner_5 : CargoGunner_5 { gunnerType = ""; };
                class CargoGunner_6 : CargoGunner_6 { gunnerType = ""; };
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

        class CFP_B_USMC_AAVP7_A1_Unarmed_DES_01 : CUP_B_AAV_Unarmed_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AAVP7/A1 (Unarmed)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class CommanderTurret : CommanderTurret { gunnerType = ""; };
                class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
                class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
                class CargoGunner_3 : CargoGunner_3 { gunnerType = ""; };
                class CargoGunner_4 : CargoGunner_4 { gunnerType = ""; };
                class CargoGunner_5 : CargoGunner_5 { gunnerType = ""; };
                class CargoGunner_6 : CargoGunner_6 { gunnerType = ""; };
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

        class CFP_B_USMC_Seafox_USV_DES_01 : CUP_B_Seafox_USV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Seafox (USV)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "B_UAV_AI";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_HMMWV_Ambulance_DES_01 : CUP_B_HMMWV_Ambulance_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV Ambulance";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Corpsman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_us_co.paa'];_unit setObjectTextureGlobal [1,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_us_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

        class CFP_B_USMC_Zodiac_DES_01 : CUP_B_Zodiac_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Zodiac";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_HMMWV_Avenger_DES_01 : CUP_B_HMMWV_Avenger_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV Avenger";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_us_co.paa'];_unit setObjectTextureGlobal [1,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_1_us_co.paa'];_unit setObjectTextureGlobal [2,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_3_us_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

        class CFP_B_USMC_M60A3_Patton_DES_01 : CUP_B_M60A3_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M60A3 Patton";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Crewman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
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
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_RHIB_DES_01 : CUP_B_RHIB_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RHIB";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_RHIB_Mk19_DES_01 : CUP_B_RHIB2Turret_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RHIB (Mk19)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class BackTurret : BackTurret { gunnerType = ""; };
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

        class CFP_B_USMC_Seafox_Target_DES_01 : CUP_B_Seafox_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Seafox (Target)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Towing_Tractor_DES_01 : CUP_B_TowingTractor_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Towing Tractor";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_LHD_Crew_Yellow_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_HMMWV_M240_DES_01 : CUP_B_HMMWV_M1114_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV M240";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_co.paa'];_unit setObjectTextureGlobal [1,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";

        };

        class CFP_B_USMC_RG_31_Mk_19_OD_DES_01 : CUP_B_RG31_Mk19_OD_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 Mk.19 OD";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_HMMWV_Unarmed_DES_01 : CUP_B_HMMWV_Unarmed_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV (Unarmed)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

        class CFP_B_USMC_HMMWV_TOW_DES_01 : CUP_B_HMMWV_TOW_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV TOW";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\tow_us_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

        class CFP_B_USMC_RG_31_M2_OD_DES_01 : CUP_B_RG31_M2_OD_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "RG-31 M2 OD";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

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

        class CFP_B_USMC_MTVR_Repair_DES_01 : CUP_B_MTVR_Repair_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Repair)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_MTVR_Refuel_DES_01 : CUP_B_MTVR_Refuel_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Refuel)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_MTVR_Ammo_DES_01 : CUP_B_MTVR_Ammo_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Ammo)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_MTVR_DES_01 : CUP_B_MTVR_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_M1030_DES_01 : CUP_B_M1030_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1030";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_FR_Commander_DES";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_HMMWV_MK19_DES_01 : CUP_B_HMMWV_MK19_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV MK19";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

        class CFP_B_USMC_HMMWV_M2_DES_01 : CUP_B_HMMWV_M2_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV M2";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CFP_B_USMC_Rifleman_DES_01";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_us_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Desert";

        };

    // BASE MEN
        class CUP_B_USMC_Soldier;
        class CUP_B_USMC_Soldier_OCimport_01 : CUP_B_USMC_Soldier { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_OCimport_02 : CUP_B_USMC_Soldier_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_UAV;
        class CUP_B_USMC_Soldier_UAV_OCimport_01 : CUP_B_USMC_Soldier_UAV { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_UAV_OCimport_02 : CUP_B_USMC_Soldier_UAV_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_Light;
        class CUP_B_USMC_Soldier_Light_OCimport_01 : CUP_B_USMC_Soldier_Light { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_Light_OCimport_02 : CUP_B_USMC_Soldier_Light_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_SpecOps_SD;
        class CUP_B_USMC_SpecOps_SD_OCimport_01 : CUP_B_USMC_SpecOps_SD { scope = 0; class EventHandlers; };
        class CUP_B_USMC_SpecOps_SD_OCimport_02 : CUP_B_USMC_SpecOps_SD_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_GL;
        class CUP_B_USMC_Soldier_GL_OCimport_01 : CUP_B_USMC_Soldier_GL { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_GL_OCimport_02 : CUP_B_USMC_Soldier_GL_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Officer;
        class CUP_B_USMC_Officer_OCimport_01 : CUP_B_USMC_Officer { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Officer_OCimport_02 : CUP_B_USMC_Officer_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_SL;
        class CUP_B_USMC_Soldier_SL_OCimport_01 : CUP_B_USMC_Soldier_SL { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_SL_OCimport_02 : CUP_B_USMC_Soldier_SL_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_TL;
        class CUP_B_USMC_Soldier_TL_OCimport_01 : CUP_B_USMC_Soldier_TL { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_TL_OCimport_02 : CUP_B_USMC_Soldier_TL_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_LAT;
        class CUP_B_USMC_Soldier_LAT_OCimport_01 : CUP_B_USMC_Soldier_LAT { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_LAT_OCimport_02 : CUP_B_USMC_Soldier_LAT_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_AT;
        class CUP_B_USMC_Soldier_AT_OCimport_01 : CUP_B_USMC_Soldier_AT { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_AT_OCimport_02 : CUP_B_USMC_Soldier_AT_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_HAT;
        class CUP_B_USMC_Soldier_HAT_OCimport_01 : CUP_B_USMC_Soldier_HAT { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_HAT_OCimport_02 : CUP_B_USMC_Soldier_HAT_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_AA;
        class CUP_B_USMC_Soldier_AA_OCimport_01 : CUP_B_USMC_Soldier_AA { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_AA_OCimport_02 : CUP_B_USMC_Soldier_AA_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Medic;
        class CUP_B_USMC_Medic_OCimport_01 : CUP_B_USMC_Medic { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Medic_OCimport_02 : CUP_B_USMC_Medic_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_AR;
        class CUP_B_USMC_Soldier_AR_OCimport_01 : CUP_B_USMC_Soldier_AR { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_AR_OCimport_02 : CUP_B_USMC_Soldier_AR_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_MG;
        class CUP_B_USMC_Soldier_MG_OCimport_01 : CUP_B_USMC_Soldier_MG { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_MG_OCimport_02 : CUP_B_USMC_Soldier_MG_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Spotter;
        class CUP_B_USMC_Spotter_OCimport_01 : CUP_B_USMC_Spotter { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Spotter_OCimport_02 : CUP_B_USMC_Spotter_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Sniper_M40A3;
        class CUP_B_USMC_Sniper_M40A3_OCimport_01 : CUP_B_USMC_Sniper_M40A3 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Sniper_M40A3_OCimport_02 : CUP_B_USMC_Sniper_M40A3_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Sniper_M107;
        class CUP_B_USMC_Sniper_M107_OCimport_01 : CUP_B_USMC_Sniper_M107 { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Sniper_M107_OCimport_02 : CUP_B_USMC_Sniper_M107_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Soldier_Marksman;
        class CUP_B_USMC_Soldier_Marksman_OCimport_01 : CUP_B_USMC_Soldier_Marksman { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Soldier_Marksman_OCimport_02 : CUP_B_USMC_Soldier_Marksman_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_SpecOps;
        class CUP_B_USMC_SpecOps_OCimport_01 : CUP_B_USMC_SpecOps { scope = 0; class EventHandlers; };
        class CUP_B_USMC_SpecOps_OCimport_02 : CUP_B_USMC_SpecOps_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Engineer;
        class CUP_B_USMC_Engineer_OCimport_01 : CUP_B_USMC_Engineer { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Engineer_OCimport_02 : CUP_B_USMC_Engineer_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Pilot;
        class CUP_B_USMC_Pilot_OCimport_01 : CUP_B_USMC_Pilot { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Pilot_OCimport_02 : CUP_B_USMC_Pilot_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_Crew;
        class CUP_B_USMC_Crew_OCimport_01 : CUP_B_USMC_Crew { scope = 0; class EventHandlers; };
        class CUP_B_USMC_Crew_OCimport_02 : CUP_B_USMC_Crew_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Blue;
        class CUP_B_USMC_LHD_Crew_Blue_OCimport_01 : CUP_B_USMC_LHD_Crew_Blue { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Blue_OCimport_02 : CUP_B_USMC_LHD_Crew_Blue_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Brown;
        class CUP_B_USMC_LHD_Crew_Brown_OCimport_01 : CUP_B_USMC_LHD_Crew_Brown { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Brown_OCimport_02 : CUP_B_USMC_LHD_Crew_Brown_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Green;
        class CUP_B_USMC_LHD_Crew_Green_OCimport_01 : CUP_B_USMC_LHD_Crew_Green { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Green_OCimport_02 : CUP_B_USMC_LHD_Crew_Green_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Red;
        class CUP_B_USMC_LHD_Crew_Red_OCimport_01 : CUP_B_USMC_LHD_Crew_Red { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Red_OCimport_02 : CUP_B_USMC_LHD_Crew_Red_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Violet;
        class CUP_B_USMC_LHD_Crew_Violet_OCimport_01 : CUP_B_USMC_LHD_Crew_Violet { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Violet_OCimport_02 : CUP_B_USMC_LHD_Crew_Violet_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_White;
        class CUP_B_USMC_LHD_Crew_White_OCimport_01 : CUP_B_USMC_LHD_Crew_White { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_White_OCimport_02 : CUP_B_USMC_LHD_Crew_White_OCimport_01 { class EventHandlers; };

        class CUP_B_USMC_LHD_Crew_Yellow;
        class CUP_B_USMC_LHD_Crew_Yellow_OCimport_01 : CUP_B_USMC_LHD_Crew_Yellow { scope = 0; class EventHandlers; };
        class CUP_B_USMC_LHD_Crew_Yellow_OCimport_02 : CUP_B_USMC_LHD_Crew_Yellow_OCimport_01 { class EventHandlers; };

    // Men
        class CFP_B_USMC_Rifleman_DES_01 : CUP_B_USMC_Soldier_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

            randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Patrol",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_UAV_Controller_DES_01 : CUP_B_USMC_Soldier_UAV_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UAV Controller";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Patrol",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Soldier_Unarmed_DES_01 : CUP_B_USMC_Soldier_Light_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Soldier (Unarmed)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV","","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1}}},{"CUP_V_B_MTV",{}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Rifleman_M1014_DES_01 : CUP_B_USMC_SpecOps_SD_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (M1014)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_sgun_M1014","Throw","Put"};
        respawnWeapons[] = {"CUP_sgun_M1014","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Patrol","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug"};
        respawnMagazines[] = {"CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug","CUP_8Rnd_B_Beneli_74Slug"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_sgun_M1014","","","",{"CUP_8Rnd_B_Beneli_74Slug",8},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_8Rnd_B_Beneli_74Slug",4,8}}},{"CUP_V_B_MTV_Patrol",{{"CUP_8Rnd_B_Beneli_74Slug",3,8},{"CUP_HandGrenade_M67",4,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Grenadier_DES_01 : CUP_B_USMC_Soldier_GL_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_GL_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_1Rnd_HEDP_M203",1,1}}},{"CUP_V_B_MTV_TL",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_1Rnd_HEDP_M203",6,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Officer_DES_01 : CUP_B_USMC_Officer_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Officer";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"V_Rangemaster_belt","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"V_Rangemaster_belt","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"V_Rangemaster_belt",{{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Squad_Leader_DES_01 : CUP_B_USMC_Soldier_SL_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Squad Leader";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_hgun_M9","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_hgun_M9","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_noCB","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_noCB","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_noCB",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",2,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",3,15}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Fire_Team_Leader_DES_01 : CUP_B_USMC_Soldier_TL_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Fire Team Leader";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_GL_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_TL","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_GL_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_TL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",3,1},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_1Rnd_Smoke_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Rifleman_M136_DES_01 : CUP_B_USMC_Soldier_LAT_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (M136)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_M136","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_M136","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_M136","","","",{"CUP_M136_M",1},{},""},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Pouches",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_AT_Specialist_SMAW_DES_01 : CUP_B_USMC_Soldier_AT_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist (SMAW)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            backpack = "CUP_B_USMC_AssaultPack_SMAW";
        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Mk153Mod0_SMAWOptics","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Mk153Mod0_SMAWOptics","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_SMAW_HEAA_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_SMAW_HEAA_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Mk153Mod0_SMAWOptics","","","CUP_optic_SMAW_Scope",{"CUP_SMAW_HEAA_M",1},{"CUP_SMAW_Spotting",5},""},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Pouches",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_M67",1,1},{"CUP_SMAW_Spotting",1,5}}},{"CUP_B_USMC_AssaultPack_SMAW",{{"CUP_SMAW_HEDP_M",1,1},{"CUP_SMAW_HEAA_M",1,1}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_AT_Specialist_Javelin_DES_01 : CUP_B_USMC_Soldier_HAT_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist (Javelin)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Javelin","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_Javelin","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Javelin","","","",{"CUP_Javelin_M",1},{},""},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Pouches",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_M67",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_AA_Specialist_DES_01 : CUP_B_USMC_Soldier_AA_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AA Specialist";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Aim_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Pouches","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_Aim_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Pouches",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_M67",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Corpsman_DES_01 : CUP_B_USMC_Medic_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Corpsman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            backpack = "CUP_B_USMC_AssaultPack_Medic";
        weapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_LegPouch","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_LegPouch","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_B_MTV_LegPouch",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_B_USMC_AssaultPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Automatic_Rifleman_DES_01 : CUP_B_USMC_Soldier_AR_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Automatic Rifleman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            backpack = "CUP_B_USMC_MOLLE_AR";
        weapons[] = {"CUP_lmg_M249","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_M249","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249","CUP_200Rnd_TE4_Green_Tracer_556x45_M249"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249","","","",{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",200},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",2,1},{"SmokeShell",2,1}}},{"CUP_V_B_MTV_MG",{}},{"CUP_B_USMC_MOLLE_AR",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",3,200}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Machinegunner_DES_01 : CUP_B_USMC_Soldier_MG_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            backpack = "CUP_B_USMC_MOLLE_MG";
        weapons[] = {"CUP_lmg_M240","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_M240","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_MG","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240","","","",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1}}},{"CUP_V_B_MTV_MG",{}},{"CUP_B_USMC_MOLLE_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Spotter_DES_01 : CUP_B_USMC_Spotter_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Spotter";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DDPM_Ghillie";


        weapons[] = {"CUP_arifle_M16A4_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M16A4_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_DDPM_Ghillie",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{"V_BandollierB_oli",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_M67",2,1},{"SmokeShellYellow",1,1}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Sniper_DES_01 : CUP_B_USMC_Sniper_M40A3_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sniper";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DDPM_Ghillie";


        weapons[] = {"CUP_srifle_M40A3_bipod","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_M40A3_bipod","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_5Rnd_762x51_M24","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M40A3_bipod","","","CUP_optic_LeupoldMk4",{"CUP_5Rnd_762x51_M24",5},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_DDPM_Ghillie",{{"FirstAidKit",1},{"CUP_5Rnd_762x51_M24",7,5},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{"V_BandollierB_oli",{{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Sniper_M107_DES_01 : CUP_B_USMC_Sniper_M107_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sniper (M107)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DDPM_Ghillie";


        weapons[] = {"CUP_srifle_M107_LeupoldVX3","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_M107_LeupoldVX3","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"V_BandollierB_oli","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M107_LeupoldVX3","","","CUP_optic_Leupold_VX3",{"CUP_10Rnd_127x99_M107",10},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_DDPM_Ghillie",{{"FirstAidKit",1},{"CUP_10Rnd_127x99_M107",3,10},{"CUP_HandGrenade_M67",1,1},{"CUP_7Rnd_45ACP_1911",2,7}}},{"V_BandollierB_oli",{{"CUP_10Rnd_127x99_M107",4,10},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_7Rnd_45ACP_1911",1,7}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Designated_Marksman_DES_01 : CUP_B_USMC_Soldier_Marksman_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Designated Marksman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";


        weapons[] = {"CUP_srifle_DMR_LeupoldMk4","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_DMR_LeupoldMk4","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Marksman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Marksman","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR","CUP_20Rnd_762x51_DMR"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_DMR_LeupoldMk4","","","CUP_optic_LeupoldMk4",{"CUP_20Rnd_762x51_DMR",20},{},"CUP_bipod_Harris_1A2_L"},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_DMR",1,20},{"SmokeShell",1,1}}},{"CUP_V_B_MTV_Marksman",{{"CUP_20Rnd_762x51_DMR",6,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellRed",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Scout_DES_01 : CUP_B_USMC_SpecOps_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scout";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","CUP_hgun_M9_snds","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_PistolBlack","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_PistolBlack","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","Laserbatteries"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_B_MTV_PistolBlack",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_15Rnd_9x19_M9",3,15},{"SmokeShellPurple",1,1},{"SmokeShellYellow",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Engineer_DES_01 : CUP_B_USMC_Engineer_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Engineer";
            engineer = 1;
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };

            backpack = "CUP_B_USMC_MOLLE_Exp";
        weapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_Aim","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV_Mine","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV_Mine","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_Aim","","","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_MTV_Mine",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1}}},{"CUP_B_USMC_MOLLE_Exp",{{"ToolKit",1},{"MineDetector",1},{"CUP_Mine_M",2,1}}},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Pilot_DES_01 : CUP_B_USMC_Pilot_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Pilot";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USMC_PilotOverall";


        weapons[] = {"CUP_smg_MP5A5","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_PilotVest","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_PilotVest","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_smg_MP5A5","","","",{"CUP_30Rnd_9x19_MP5",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USMC_PilotOverall",{{"FirstAidKit",1},{"CUP_30Rnd_9x19_MP5",2,30}}},{"CUP_V_B_PilotVest",{{"CUP_30Rnd_9x19_MP5",3,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_7Rnd_45ACP_1911",2,7}}},{},"CUP_H_USMC_LWH_ESS_DES","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_Crewman_DES_01 : CUP_B_USMC_Crew_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Crewman";
            side = 1;
            faction = "CFP_B_USMC_DES";

            editorSubCategory = "CFP_EdSubcat_Personnel_MARPAT_D";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_FieldUniform_marpat_d";

             randomGearProbability = 100;

            insigniaList[] = {
                "", 0.5,
                "USP_PATCH_USA_FLAG_USMC", 0.6,
                "USP_PATCH_USA_FLAG_ABPOS", 0.3,
                "USP_PATCH_USA_FLAG_BLK", 0.5,
                "USP_PATCH_USA_FLAG_OCP", 0.5,
                "USP_PATCH_USA_FLAG_PUNISHER_RED", 0.3,
                "USP_PATCH_USA_FLAG_REBEL_BLK", 0.3,
                "USP_PATCH_USA_FLAG_TAN", 0.6,
                "USP_PATCH_USA_FLAG_TGR", 0.5,
                "MORALE",0.2,
                "BLOOD",0.2
            };

            headgearList[] = {
                "CUP_H_USMC_LWH_NVGMOUNT_DES",0.5,
                "CUP_H_USMC_LWH_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_HS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_DES",0.5,
                "CUP_H_USMC_LWH_ESS_DES",0.5,
                "CUP_H_USMC_LWH_NVGMOUNT_ESS_LR_DES",0.5,
                "CUP_H_USMC_LWH_ESS_LR_DES",0.5,
                "CUP_H_USMC_BOONIE_DES",0.1,
                "CUP_H_USMC_BOONIE_PRR_DES",0.1
            };
            uniformList[] = {
                "CFP_U_FieldUniform_marpat_d", 0.5,
                "CFP_U_FieldUniform_marpat_d_SS", 0.5
            };


        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_MTV","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_MTV","CUP_H_USMC_LWH_ESS_DES","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CFP_U_FieldUniform_marpat_d",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_B_MTV",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_7Rnd_45ACP_1911",2,7},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{},"CUP_H_USMC_LWH_ESS_DES","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Blue_DES_01 : CUP_B_USMC_LHD_Crew_Blue_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Blue)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Blue";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Blue","CUP_H_Navy_CrewHelmet_Blue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Blue","CUP_H_Navy_CrewHelmet_Blue","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Blue",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Blue",{}},{},"CUP_H_Navy_CrewHelmet_Blue","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Brown_DES_01 : CUP_B_USMC_LHD_Crew_Brown_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Brown)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Brown";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Brown","CUP_H_Navy_CrewHelmet_Brown","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Brown","CUP_H_Navy_CrewHelmet_Brown","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Brown",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Brown",{}},{},"CUP_H_Navy_CrewHelmet_Brown","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Green_DES_01 : CUP_B_USMC_LHD_Crew_Green_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Green)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Green";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Green","CUP_H_Navy_CrewHelmet_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Green","CUP_H_Navy_CrewHelmet_Green","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Green",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Green",{}},{},"CUP_H_Navy_CrewHelmet_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Red_DES_01 : CUP_B_USMC_LHD_Crew_Red_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Red)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Red";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Red","CUP_H_Navy_CrewHelmet_Red","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Red","CUP_H_Navy_CrewHelmet_Red","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Red",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Red",{}},{},"CUP_H_Navy_CrewHelmet_Red","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Violet_DES_01 : CUP_B_USMC_LHD_Crew_Violet_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Violet)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Violet";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Violet","CUP_H_Navy_CrewHelmet_Violet","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Violet","CUP_H_Navy_CrewHelmet_Violet","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Violet",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Violet",{}},{},"CUP_H_Navy_CrewHelmet_Violet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_White_DES_01 : CUP_B_USMC_LHD_Crew_White_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (White)";
            side = 1;
            faction = "CFP_B_USMC_DES";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_White";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_White","CUP_H_Navy_CrewHelmet_White","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_White","CUP_H_Navy_CrewHelmet_White","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_White",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_White",{}},{},"CUP_H_Navy_CrewHelmet_White","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USMC_LHD_Crew_Yellow_DES_01 : CUP_B_USMC_LHD_Crew_Yellow_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "LHD Crew (Yellow)";
            side = 1;
            faction = "CFP_B_USMC_DES";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_B_USMC_Navy_Yellow";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_V_B_LHDVest_Yellow","CUP_H_Navy_CrewHelmet_Yellow","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_V_B_LHDVest_Yellow","CUP_H_Navy_CrewHelmet_Yellow","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_B_USMC_Navy_Yellow",{{"FirstAidKit",1}}},{"CUP_V_B_LHDVest_Yellow",{}},{},"CUP_H_Navy_CrewHelmet_Yellow","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

    // Gunners

        class CFP_B_USMC_Gunner_M2_High_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Gunner [MG High]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M2_Gun_Bag", 1
            };
        };

        class CFP_B_USMC_Gunner_M2_Low_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Gunner [MG Low]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M2_Gun_Bag", 1
            };

        };

        class CFP_B_USMC_Asst_Gunner_M2_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Asst. Gunner [MG]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M2_Tripod_Bag", 1
            };

        };

        class CFP_B_USMC_Asst_Gunner_M2Low_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Asst. Gunner [MG Low]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M2_Minitripod_Bag", 1
            };

        };

        class CFP_B_USMC_Gunner_TOW_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Gunner [AT]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_Tow_Gun_Bag", 1
            };

        };

        class CFP_B_USMC_Asst_Gunner_TOW_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Asst. Gunner [AT]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_TOW_Tripod_Bag", 1
            };
        };

        class CFP_B_USMC_Gunner_Mortar_DES_01 : CFP_B_USMC_Rifleman_DES_01 {

            displayName = "Gunner [Mortar]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M252_Gun_Bag", 1
            };

        };

        class CFP_B_USMC_Asst_Gunner_Mortar_DES_01 : CFP_B_USMC_Rifleman_DES_01 {
            displayName = "Asst. Gunner [Mortar]";
            randomGearProbability = 100;
            backpackList[] = {
                "CUP_B_M252_Bipod_Bag", 1
            };

        };

};