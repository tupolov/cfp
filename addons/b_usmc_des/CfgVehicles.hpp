
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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
        class CUP_B_USMC_Soldier_MG_FROG_DES : CUP_B_USMC_Soldier_15 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AR_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_Light_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AA_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_HAT_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AT_FROG_DES : CUP_B_USMC_Soldier_17 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_LAT_FROG_DES : CUP_B_USMC_Soldier_15 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Crewman_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_SL_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_TL_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Medic_FROG_DES : CUP_B_USMC_Soldier_17 {
            attendant = 1;
            icon = "iconManMedic";
            picture = "pictureHeal";
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_RTO_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_SpecOps_FROG_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_GL_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Engineer_FROG_DES : CUP_B_USMC_Soldier_13 {
            engineer = 1;
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_Marksman_FROG_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Officer_FROG_DES : CUP_B_USMC_Soldier_11 {
           faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_UAV_FROG_DES : CUP_B_USMC_Soldier_17 {
            uavHacker = 1;
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_FROG_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

    // Force Recon
        class CUP_B_FR_Soldier_AR_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Medic_DES : CUP_B_USMC_Soldier_11 {
            attendant = 1;
            icon = "iconManMedic";
            picture = "pictureHeal";
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Light_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Assault_GL_DES : CUP_B_USMC_Soldier_17 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Assault_DES : CUP_B_USMC_Soldier_17 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_UAV_DES : CUP_B_USMC_Soldier_13 {
            uavHacker = 1;
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Operator_DES : CUP_B_USMC_Soldier_17 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Exp_DES : CUP_B_USMC_Soldier_13 {
            canDeactivateMines = 1;
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_GL_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_Marksman_DES : CUP_B_USMC_Soldier_17 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Saboteur_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Commander_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Soldier_TL_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Story_Rodriguez_DES : CUP_B_USMC_Soldier_17 {
           faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Story_OHara_DES : CUP_B_USMC_Soldier_11 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Story_Sykes_DES : CUP_B_USMC_Soldier_15 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Story_Cooper_DES : CUP_B_USMC_Soldier_15 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_FR_Story_Miles_DES : CUP_B_USMC_Soldier_13 {
            faction = "CFP_B_USMC_DES";
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
        class CUP_B_M2StaticMG_MiniTripod_USMC;
        class CUP_B_M252_USMC;
        class CUP_B_M119_USMC;

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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
            crew = "CUP_B_USMC_Pilot_des";

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

        class CFP_B_USMC_M2_Machine_Gun_DES_01 : CUP_B_M2StaticMG_USMC {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Machine Gun";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_USMC_Soldier_des";
        };

        class CFP_B_USMC_M2_Minitripod_DES_01 : CUP_B_M2StaticMG_MiniTripod_USMC {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Minitripod";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_USMC_Soldier_des";
        };

        class CFP_B_USMC_M252_81mm_Mortar_DES_01 : CUP_B_M252_USMC {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M252 81mm Mortar";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_USMC_Soldier_des";
        };

        class CFP_B_USMC_M119_DES_01 : CUP_B_M119_USMC {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M119";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_USMC_Soldier_des";
        };

        class CFP_B_USMC_AAVP7_A1_DES_01 : CUP_B_AAV_USMC_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AAVP7/A1";
            side = 1;
            faction = "CFP_B_USMC_DES";
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Crew_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";


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
            crew = "CUP_B_USMC_Soldier_des";

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
            crew = "CUP_B_USMC_Soldier_des";

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

        class CUP_B_USMC_Soldier_03;
        class CUP_B_USMC_Soldier_des : CUP_B_USMC_Soldier_03 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_UAV_des : CUP_B_USMC_Soldier_03 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_02;
        class CUP_B_USMC_Soldier_Light_des: CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_07;
        class CUP_B_USMC_Soldier_GL_des : CUP_B_USMC_Soldier_07 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_01;
        class CUP_B_USMC_Officer_des: CUP_B_USMC_Soldier_01 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_SL_des : CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_TL_des : CUP_B_USMC_Soldier_07 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AT_Base_des : CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_LAT_des : CUP_B_USMC_Soldier_AT_Base_des {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AT_des : CUP_B_USMC_Soldier_AT_Base_des {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_HAT_des : CUP_B_USMC_Soldier_AT_Base_des {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_AA_des : CUP_B_USMC_Soldier_AT_Base_des {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Medic_des : CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_05;
        class CUP_B_USMC_Soldier_AR_des : CUP_B_USMC_Soldier_05 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_MG_des : CUP_B_USMC_Soldier_05 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_08;
        class CUP_B_USMC_Spotter_des : CUP_B_USMC_Soldier_05 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Sniper_M40A3_des : CUP_B_USMC_Soldier_05 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Sniper_M107_des: CUP_B_USMC_Sniper_M40A3_des {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_Marksman_des : CUP_B_USMC_Soldier_03 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Engineer_des : CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Soldier_06;
        class CUP_B_USMC_Pilot_des : CUP_B_USMC_Soldier_06 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_Crew_des : CUP_B_USMC_Soldier_02 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_SpecOps_des : CUP_B_USMC_Soldier_07 {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_SpecOps_SD_des : CUP_B_USMC_Soldier_03 {
            faction = "CFP_B_USMC_DES";
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

        class CFP_B_USMC_Gunner_M2_High_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Gunner [MG High]";
            backpack = "CUP_B_M2_Gun_Bag";
        };

        class CFP_B_USMC_Gunner_M2_Low_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Gunner [MG Low]";
            backpack = "CUP_B_M2_Gun_Bag";
        };

        class CFP_B_USMC_Asst_Gunner_M2_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Asst. Gunner [MG]";
            backpack = "CUP_B_M2_Tripod_Bag";
        };

        class CFP_B_USMC_Asst_Gunner_M2Low_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Asst. Gunner [MG Low]";
            backpack = "CUP_B_M2_Minitripod_Bag";
        };

        class CFP_B_USMC_Gunner_TOW_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Gunner [AT]";
            backpack = "CUP_B_Tow_Gun_Bag";
        };

        class CFP_B_USMC_Asst_Gunner_TOW_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Asst. Gunner [AT]";
            backpack = "CUP_B_TOW_Tripod_Bag";
        };

        class CFP_B_USMC_Gunner_Mortar_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Gunner [Mortar]";
            backpack = "CUP_B_M252_Gun_Bag";
        };

        class CFP_B_USMC_Asst_Gunner_Mortar_DES_01 : CUP_B_USMC_Soldier_des {
            displayName = "Asst. Gunner [Mortar]";
            backpack = "CUP_B_M252_Bipod_Bag";
        };

    // Marine Raiders
        class CUP_B_USMC_MARSOC;
        class CFP_B_USMC_MARSOC_des : CUP_B_USMC_MARSOC {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_TL;
        class CFP_B_USMC_MARSOC_TL_des : CUP_B_USMC_MARSOC_TL {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_TC;
        class CFP_B_USMC_MARSOC_TC_des : CUP_B_USMC_MARSOC_TC {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_OC;
        class CFP_B_USMC_MARSOC_OC_des : CUP_B_USMC_MARSOC_OC {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_CC;
        class CFP_B_USMC_MARSOC_CC_des : CUP_B_USMC_MARSOC_CC {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_EL;
        class CFP_B_USMC_MARSOC_EL_des : CUP_B_USMC_MARSOC_EL {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_AR;
        class CFP_B_USMC_MARSOC_AR_des : CUP_B_USMC_MARSOC_AR {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_Medic;
        class CFP_B_USMC_MARSOC_Medic_des : CUP_B_USMC_MARSOC_Medic {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_Marksman;
        class CFP_B_USMC_MARSOC_Marksman_des : CUP_B_USMC_MARSOC_Marksman {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_DA;
        class CFP_B_USMC_MARSOC_DA_des : CUP_B_USMC_MARSOC_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_TL_DA;
        class CFP_B_USMC_MARSOC_TL_DA_des : CUP_B_USMC_MARSOC_TL_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_TC_DA;
        class CFP_B_USMC_MARSOC_TC_DA_des : CUP_B_USMC_MARSOC_TC_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_OC_DA;
        class CFP_B_USMC_MARSOC_OC_DA_des : CUP_B_USMC_MARSOC_OC_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_CC_DA;
        class CFP_B_USMC_MARSOC_CC_DA_des : CUP_B_USMC_MARSOC_CC_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_EL_DA;
        class CFP_B_USMC_MARSOC_EL_DA_des : CUP_B_USMC_MARSOC_EL_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_AR_DA;
        class CFP_B_USMC_MARSOC_AR_DA_des : CUP_B_USMC_MARSOC_AR_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_Medic_DA;
        class CFP_B_USMC_MARSOC_Medic_DA_des : CUP_B_USMC_MARSOC_Medic_DA {
            faction = "CFP_B_USMC_DES";
        };

        class CUP_B_USMC_MARSOC_Marksman_DA;
        class CFP_B_USMC_MARSOC_Marksman_DA_des : CUP_B_USMC_MARSOC_Marksman_DA {
            faction = "CFP_B_USMC_DES";
        };

};