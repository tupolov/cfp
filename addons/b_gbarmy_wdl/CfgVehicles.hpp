class CBA_Extended_EventHandlers_base;

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_Camo_MTP { displayName = "Men (MTP)";  };
    class CFP_EdSubcat_Personnel_Camo_DPM  { displayName = "Men (DPM)"; };
};

class CfgVehicles
{

    // Override CUP faction allocations
        // People - Override base WDL units

            class SoldierWB;
            class CUP_Creatures_Military_BAF_Soldier_Base: SoldierWB
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
            };

            class CUP_B_BAF_Soldier_04_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_05_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_06_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_07_DPM : CUP_Creatures_Military_BAF_Soldier_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_08_DPM : CUP_Creatures_Military_BAF_Soldier_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_GL_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Night_WDL : CUP_B_BAF_Soldier_05_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Light_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Backpack_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAR_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AMG_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAT_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AHAT_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAA_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Officer_WDL : CUP_B_BAF_Soldier_05_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_SL_WDL : CUP_B_BAF_Soldier_08_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_TL_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AR_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_MG_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AT_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_HAT_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AA_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Marksman_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_scout_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Sniper_WDL : CUP_B_BAF_Soldier_04_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Sniper_AS50_WDL : CUP_B_BAF_Soldier_04_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Sniper_AS50_TWS_WDL : CUP_B_BAF_Sniper_AS50_WDL
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Spotter_WDL : CUP_B_BAF_Soldier_04_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Spotter_L85TWS_WDL : CUP_B_BAF_Spotter_WDL
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Pilot_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Crew_WDL : CUP_B_BAF_Soldier_06_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Medic_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_JTAC_WDL : CUP_B_BAF_Soldier_07_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Engineer_WDL : CUP_B_BAF_Soldier_05_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

        // Vehicles

            class CUP_L111A1_base;
            class CUP_L111A1_MiniTripod_base;
            class CUP_L16A2_base;
            class CUP_B_L111A1_BAF_WDL : CUP_L111A1_base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_L111A1_MiniTripod_BAF_WDL : CUP_L111A1_MiniTripod_base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_L16A2_BAF_WDL : CUP_L16A2_base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_LR_Transport_Base;
            class CUP_B_LR_Transport_GB_W: CUP_LR_Transport_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_LR_MG_Base;
            class CUP_B_LR_MG_GB_W: CUP_LR_MG_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_LR_Ambulance_Base;
            class CUP_B_LR_Ambulance_GB_W: CUP_LR_Ambulance_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_LR_Special_Base;
            class CUP_B_LR_Special_M2_GB_W: CUP_LR_Special_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_LR_Special_GMG_GB_W: CUP_B_LR_Special_M2_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_BAF_Coyote_GMG_D;
            class CUP_B_BAF_Coyote_GMG_W : CUP_B_BAF_Coyote_GMG_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[]={"CFP_B_GBArmy_Rifleman_WDL_01","CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_BAF_Coyote_L2A1_D;
            class CUP_B_BAF_Coyote_L2A1_W : CUP_B_BAF_Coyote_L2A1_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[]={"CFP_B_GBArmy_Rifleman_WDL_01","CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_BAF_Jackal2_GMG_W;
            class CUP_B_Jackal2_GMG_GB_W: CUP_BAF_Jackal2_GMG_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
            };
            class CUP_BAF_Jackal2_L2A1_W;
            class CUP_B_Jackal2_L2A1_GB_W: CUP_BAF_Jackal2_L2A1_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
            };

            class CUP_Mastiff_Base;
            class CUP_B_Mastiff_HMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_Mastiff_GMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_Mastiff_LMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_Ridgback_Base;
            class CUP_B_Ridgback_HMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_Ridgback_GMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_Ridgback_LMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_Wolfhound_Base;
            class CUP_B_Wolfhound_HMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_Wolfhound_GMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_Wolfhound_LMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_MCV80_GB_D_SLAT;
            class CUP_B_MCV80_GB_W_SLAT: CUP_B_MCV80_GB_D_SLAT
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_MCV80_GB_D;
            class CUP_B_MCV80_GB_W: CUP_B_MCV80_GB_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_FV510_GB_D_SLAT;
            class CUP_B_FV510_GB_W_SLAT: CUP_B_FV510_GB_D_SLAT
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_FV510_GB_D;
            class CUP_B_FV510_GB_W: CUP_B_FV510_GB_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_B_FV432_Bulldog_GB_D;
            class CUP_B_FV432_Bulldog_GB_W: CUP_B_FV432_Bulldog_GB_D
            {
                crew = "CFP_B_GBArmy_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[]={"CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01"};
            };
            class CUP_B_FV432_Bulldog_GB_D_RWS;
            class CUP_B_FV432_Bulldog_GB_W_RWS: CUP_B_FV432_Bulldog_GB_D_RWS
            {
                crew = "CFP_B_GBArmy_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[]={"CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01", "CFP_B_GBArmy_Rifleman_WDL_01"};
            };

            class CUP_Challenger2_base;
            class CUP_B_Challenger2_Woodland_BAF: CUP_Challenger2_base
            {
                crew = "CFP_B_GBArmy_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[] = {"CFP_B_GBArmy_Crewman_WDL_01", "CFP_B_GBArmy_Crewman_WDL_01", "CFP_B_GBArmy_Crewman_WDL_01", "CFP_B_GBArmy_Crewman_WDL_01"};
            };
            class CUP_B_Challenger2_2CW_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                faction = "CFP_B_GBARMY_WDL";
            };
            class CUP_B_Challenger2_Desert_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                crew = "CUP_B_BAF_Crew_MTP";
                faction = "CUP_B_GB";
                typicalCargo[] = {"CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP"};
            };
            class CUP_B_Challenger2_2CD_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                crew = "CUP_B_BAF_Crew_MTP";
                faction = "CUP_B_GB";
                typicalCargo[] = {"CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP"};
            };
            class CUP_B_Challenger2_Snow_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                crew = "CUP_B_BAF_Crew_MTP";
                faction = "CUP_B_GB";
                typicalCargo[] = {"CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP"};
            };
            class CUP_B_Challenger2_2CS_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                crew = "CUP_B_BAF_Crew_MTP";
                faction = "CUP_B_GB";
                typicalCargo[] = {"CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP", "CUP_B_BAF_Crew_MTP"};
            };
            class CUP_B_Challenger2_Green_CTRG: CUP_B_Challenger2_Woodland_BAF
            {
                faction = "BLU_CTRG_F";
                crew = "B_T_Crew_F";
                typicalCargo[] = {"B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F"};
            };
            class CUP_B_Challenger2_Sand_CTRG: CUP_B_Challenger2_Woodland_BAF
            {
                faction = "BLU_CTRG_F";
                crew = "B_T_Crew_F";
                typicalCargo[] = {"B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F"};
            };
            class CUP_B_Challenger2_NATO: CUP_B_Challenger2_Woodland_BAF
            {
                faction="BLU_F";
                crew = "B_crew_F";
                typicalCargo[] = {"B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F"};
            };

    // New MTP and Air units for woodland faction
        // Vehicles
            class CUP_AW159_Dynamic_Base;
            class CUP_AW159_Dynamic_Base_OCimport_01 : CUP_AW159_Dynamic_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_AW159_Dynamic_Base_OCimport_02 : CUP_AW159_Dynamic_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_B_F35B_USMC;
            class CUP_B_F35B_USMC_OCimport_01 : CUP_B_F35B_USMC { scope = 0; class EventHandlers; };
            class CUP_B_F35B_USMC_OCimport_02 : CUP_B_F35B_USMC_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_B_F35B_Stealth_USMC;
            class CUP_B_F35B_Stealth_USMC_OCimport_01 : CUP_B_F35B_Stealth_USMC { scope = 0; class EventHandlers; };
            class CUP_B_F35B_Stealth_USMC_OCimport_02 : CUP_B_F35B_Stealth_USMC_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_B_AH64D_DL_USA;
            class CUP_B_AH64D_DL_USA_OCimport_01 : CUP_B_AH64D_DL_USA { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_AH64D_DL_USA_OCimport_02 : CUP_B_AH64D_DL_USA_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_GR9_DYN_Base;
            class CUP_GR9_DYN_Base_OCimport_01 : CUP_GR9_DYN_Base { scope = 0; class EventHandlers; };
            class CUP_GR9_DYN_Base_OCimport_02 : CUP_GR9_DYN_Base_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_AW159_Unarmed_Base;
            class CUP_AW159_Unarmed_Base_OCimport_01 : CUP_AW159_Unarmed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_AW159_Unarmed_Base_OCimport_02 : CUP_AW159_Unarmed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_B_SA330_Puma_HC1_BAF;
            class CUP_B_SA330_Puma_HC1_BAF_OCimport_01 : CUP_B_SA330_Puma_HC1_BAF { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_SA330_Puma_HC1_BAF_OCimport_02 : CUP_B_SA330_Puma_HC1_BAF_OCimport_01 {
                class EventHandlers;
                class CargoTurret;
                class Turrets : Turrets {
                    class MainTurret;
                    class CopilotTurret;
                };
                class ViewPilot;
            };

            class CUP_SA330_Base;
            class CUP_SA330_Base_OCimport_01 : CUP_SA330_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_SA330_Base_OCimport_02 : CUP_SA330_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_Merlin_HM2_Base;
            class CUP_Merlin_HM2_Base_OCimport_01 : CUP_Merlin_HM2_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HM2_Base_OCimport_02 : CUP_Merlin_HM2_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3A_Armed_Base;
            class CUP_Merlin_HC3A_Armed_Base_OCimport_01 : CUP_Merlin_HC3A_Armed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3A_Armed_Base_OCimport_02 : CUP_Merlin_HC3A_Armed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3_Armed_Base;
            class CUP_Merlin_HC3_Armed_Base_OCimport_01 : CUP_Merlin_HC3_Armed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_Armed_Base_OCimport_02 : CUP_Merlin_HC3_Armed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3A_Base;
            class CUP_Merlin_HC3A_Base_OCimport_01 : CUP_Merlin_HC3A_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3A_Base_OCimport_02 : CUP_Merlin_HC3A_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3_VIV_Base;
            class CUP_Merlin_HC3_VIV_Base_OCimport_01 : CUP_Merlin_HC3_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_VIV_Base_OCimport_02 : CUP_Merlin_HC3_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                };
            };

            class CUP_Merlin_HC3_Base;
            class CUP_Merlin_HC3_Base_OCimport_01 : CUP_Merlin_HC3_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_Base_OCimport_02 : CUP_Merlin_HC3_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_CH47F_VIV_Base;
            class CUP_CH47F_VIV_Base_OCimport_01 : CUP_CH47F_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_CH47F_VIV_Base_OCimport_02 : CUP_CH47F_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class RightDoorGun;
                    class CopilotTurret;
                };
            };

            class CUP_CH47F_base;
            class CUP_CH47F_base_OCimport_01 : CUP_CH47F_base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_CH47F_base_OCimport_02 : CUP_CH47F_base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class RightDoorGun;
                    class BackDoorGun;
                    class CopilotTurret;
                };
            };

            class CUP_C130J_VIV_Base;
            class CUP_C130J_VIV_Base_OCimport_01 : CUP_C130J_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_C130J_VIV_Base_OCimport_02 : CUP_C130J_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_C130J_Base;
            class CUP_C130J_Base_OCimport_01 : CUP_C130J_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_C130J_Base_OCimport_02 : CUP_C130J_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CFP_B_GBArmy_F35B_Lightning_II_WDL_01 : CUP_B_F35B_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_F35\Data\preview\CUP_B_F35B_AA_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_F35B_Lightning_II_Stealth_WDL_01 : CUP_B_F35B_Stealth_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II (Stealth)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_F35\Data\preview\CUP_B_F35B_AA_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AH_1_WDL_01 : CUP_B_AH64D_DL_USA_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AH-1";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};
                hiddenSelectionsTextures[] =
                {
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_body_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_details_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\clear_empty.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AH64\Data\preview\CUP_B_AH1_NO_BAF.jpg";
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };

                class TransportPylonsComponent
                {
                    UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_AH64\Data\UI\CUP_AH64_3DEN_CA.paa";
                    class presets
                    {
                        class Empty
                        {
                            displayName = "Empty";
                            attachment[] = {};
                        };
                        class AntiTank
                        {
                            displayName = "Anti-Tank";
                            attachment[] = {
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"
                            };
                        };
                        class MultiRole
                        {
                            displayName = "Multi-Role";
                            attachment[] = {
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M"
                            };
                        };
                        class Escort
                        {
                            displayName = "Escort";
                            attachment[] = {
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M"
                            };
                        };
                    };
                    class pylons
                    {
                        // Outer Left
                        class pylonLeft1
                        {
                            //maxweight = 560;
                            hardpoints[] = {"DAR","DAGR", "B_SHRIEKER", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "CUP_NATO_HELO_AH64"};
                            attachment = "CUP_PylonPod_19Rnd_CRV7_HE_M";
                            priority = 5;
                            UIposition[] = {0.59, 0.35}; // x,y coordinates in 3DEN UI
                            turret[] = {};
                            bay = 1;
                        };
                        // Inner Left
                        class pylonLeft2 : pylonLeft1
                        {
                            UIposition[] = {0.57, 0.4}; // x,y coordinates in 3DEN UI
                            priority = 4;
                        };

                        // Inner Right
                        class pylonRight1 : pylonLeft1
                        {
                            UIposition[] = {0.08, 0.4};
                            mirroredMissilePos = 2;
                        };
                        // Outer Right
                        class pylonRight2: pylonRight1
                        {
                            UIposition[] = {0.06, 0.35};
                            mirroredMissilePos = 1;
                            priority = 4;
                        };

                        // Wing tip Left
                        class pylonWingL : pylonLeft1
                        {
                            hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
                            UIposition[] = {0.62, 0.3}; // x,y coordinates in 3DEN UI
                            attachment = "";
                        };
                        // Wing tip Left
                        class pylonWingR : pylonWingL
                        {
                            mirroredMissilePos = 5;
                            UIposition[] = {0.0.4, 0.3}; // x,y coordinates in 3DEN UI
                            attachment = "";
                        };
                    };
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

            class CFP_B_GBArmy_Harrier_GR_9_WDL_01 : CUP_GR9_DYN_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Harrier GR.9";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
                accuracy = 1000;
                threat[] = {1,0.7,1};
                weapons[] =
                {
                    //"CUP_Laserdesignator_mounted",
                    "CMFlareLauncher"
                };
                magazines[] =
                {
                    //"Laserbatteries",
                    "120Rnd_CMFlare_Chaff_Magazine"
                };
                class Library
                {
                    libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
                };
                hiddenSelections[] = {"Camo1","Camo2","pip0"};
                hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa","cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa","#(argb,512,512,1)r2t(rendertarget0,1.0)"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Av8B\Data\preview\CUP_B_GR9_CAP_GB.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Green_WDL_01 : CUP_AW159_Dynamic_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Green)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 1,
                    "hide_struts", 1
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";
                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Green_Unarmed_WDL_01 : CUP_AW159_Unarmed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Green, Unarmed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";

                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 0,
                    "hide_struts", 0
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
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

            class CFP_B_GBArmy_AW159_Wildcat_Grey_Unarmed_WDL_01 : CUP_AW159_Unarmed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Grey, Unarmed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";

                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 0,
                    "hide_struts", 0
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
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

            class CFP_B_GBArmy_AW159_Wildcat_Grey_WDL_01 : CUP_AW159_Dynamic_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Grey)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 1,
                    "hide_struts", 1
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
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

            class CFP_B_GBArmy_SA_330_Puma_HC2_WDL_01 : CUP_B_SA330_Puma_HC1_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "SA-330 Puma HC2";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";

                model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_VE";
                class Turrets : Turrets
                {
                        class CopilotTurret: MainTurret
                        {
                            primaryGunner = 0;
                            gunnerForceOptics = 0;
                            body = "";
                            gun = "";
                            animationSourceBody = "";
                            animationSourceGun = "";
                            weapons[] = {};
                            magazines[] = {};

                            isCopilot = 1;
                            CanEject = 0;

                            gunnerAction = "pilot_Heli_Transport_01";
                            gunnerInAction = "pilot_Heli_Transport_01";
                            memoryPointsGetInGunner = "pos cargo";
                            memoryPointsGetInGunnerDir = "pos cargo dir";
                            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                            gunnerGetOutAction = "GetOutLow";
                            memoryPointGunnerOptics = "";

                            gunnerName = "Co-Pilot";
                            gunnerLeftHandAnimName = "lever_copilot";
                            gunnerRightHandAnimName = "stick_copilot";
                            gunnerLeftLegAnimName = "PedalL";
                            gunnerRightLegAnimName = "PedalR";
                            priority = 4;

                            proxyIndex = 1;
                            LODTurnedIn = 1100;
                            LODTurnedOut = 1100;
                            gunnerCompartments = "Compartment1";
                            commanding = -3;
                            slingLoadOperator = 1;
                            turretCanSee = "1 + 2 + 4 + 8 + 16";

                            class ViewGunner : ViewPilot {};
                        };
                        class CargoTurret_01: CargoTurret                       /// position for Firing from Vehicles
                        {
                            gunnerAction                = "passenger_inside_4"; /// generic animation for sitting inside with rifle ready
                            gunnerCompartments          = "Compartment1";       /// gunner is not able to switch seats
                            memoryPointsGetInGunner     = "pos cargo right";        /// specific memory points to allow choice of position
                            memoryPointsGetInGunnerDir  = "pos cargo dir right";    /// direction of get in action
                            gunnerName                  = "Passenger (Right Seat)"; /// name of the position in the Action menu
                            proxyIndex                  = 13;                   /// what cargo proxy is used according to index in the model
                            maxElev                     = 15;                   /// what is the highest possible elevation of the turret
                            minElev                     = -60;                  /// what is the lowest possible elevation of the turret
                            maxTurn                     = 70;                   /// what is the left-most possible turn of the turret
                            minTurn                     = -50;                  /// what is the right-most possible turn of the turret
                            isPersonTurret              = 1;                    /// enables firing from vehicle functionality
                            ejectDeadGunner             = 0;                    /// seatbelts included
                            enabledByAnimationSource    = "ofrp_puma_porte_droite";             /// doesn't work unless the said animation source is 1
                            usepip = 0;
                            gunnerOutOpticsModel = "";
                            gunnerOpticsModel = "";
                            startEngine = 0;
                            outGunnerMayFire = 1;
                            inGunnerMayFire = 0;
                            commanding=-2;
                            memoryPointGunnerOptics="";
                        };
                        class CargoTurret_02: CargoTurret                       /// position for Firing from Vehicles
                        {
                            gunnerAction                = "passenger_inside_4"; /// generic animation for sitting inside with rifle ready
                            gunnerCompartments          = "Compartment1";       /// gunner is not able to switch seats
                            memoryPointsGetInGunner     = "pos cargo left";     /// specific memory points to allow choice of position
                            memoryPointsGetInGunnerDir  = "pos cargo dir left"; /// direction of get in action
                            gunnerName                  = "Passenger (Left Seat)";  /// name of the position in the Action menu
                            proxyIndex                  = 14;                   /// what cargo proxy is used according to index in the model
                            maxElev                     = 15;                   /// what is the highest possible elevation of the turret
                            minElev                     = -60;                  /// what is the lowest possible elevation of the turret
                            maxTurn                     = 70;                   /// what is the left-most possible turn of the turret
                            minTurn                     = -50;                  /// what is the right-most possible turn of the turret
                            isPersonTurret              = 1;                    /// enables firing from vehicle functionality
                            ejectDeadGunner             = 0;                    /// seatbelts included
                            enabledByAnimationSource    = "ofrp_puma_porte_gauche";             /// doesn't work unless the said animation source is 1
                            usepip = 0;
                            gunnerOutOpticsModel = "";
                            gunnerOpticsModel = "";
                            startEngine = 0;
                            outGunnerMayFire = 1;
                            inGunnerMayFire = 0;
                            commanding=-2;
                            memoryPointGunnerOptics="";
                        };
                };

                hiddenSelections[] = {"_OFrP_330_skin01"};
                hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_SA330\Data\preview\CUP_B_SA330_Puma_HC2_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_SA_330_Puma_HC1_WDL_01 : CUP_B_SA330_Puma_HC1_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "SA-330 Puma HC1";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_SA330\Data\preview\CUP_B_SA330_Puma_HC1_BAF.jpg";
                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HM2_WDL_01 : CUP_Merlin_HM2_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HM2";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC4_GB.jpg";
                class Turrets : Turrets {
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

            class CFP_B_GBArmy_Merlin_HC3A_Armed_WDL_01 : CUP_Merlin_HC3A_Armed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3A (Armed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3A_GB.jpg";
                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class MainTurret : MainTurret { gunnerType = ""; };
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

            class CFP_B_GBArmy_Merlin_HC3_Armed_WDL_01 : CUP_Merlin_HC3_Armed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3 (Armed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";

                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class MainTurret : MainTurret { gunnerType = ""; };
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

            class CFP_B_GBArmy_Merlin_HC3A_WDL_01 : CUP_Merlin_HC3A_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3A";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3A_GB.jpg";
                class Turrets : Turrets {
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

            class CFP_B_GBArmy_Merlin_HC3_VIV_WDL_01 : CUP_Merlin_HC3_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3 (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
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

            class CFP_B_GBArmy_Merlin_HC3_WDL_01 : CUP_Merlin_HC3_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";

                CUP_Jumping_enabled = 1;
                CUP_JumpPoint[] = {"StaticLine_MemoryPoint"};

                class Turrets : Turrets {
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

            class CFP_B_GBArmy_Chinook_HC_4VIV_WDL_01 : CUP_CH47F_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Chinook HC-4 (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                hiddenSelectionsTextures[] =
                {
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
                    "",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_GB.jpg";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class RightDoorGun : RightDoorGun { gunnerType = ""; };
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

            class CFP_B_GBArmy_Chinook_HC_4_WDL_01 : CUP_CH47F_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Chinook HC-4";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                hiddenSelectionsTextures[] =
                {
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
                    "",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_GB.jpg";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class RightDoorGun : RightDoorGun { gunnerType = ""; };
                    class BackDoorGun : BackDoorGun { gunnerType = ""; };
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

            class CFP_B_GBArmy_C130J_VIV_WDL_01 : CUP_C130J_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "C-130J (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};
                hiddenSelectionsTextures[] = {
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa",
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_Cargo_GB.jpg";
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

            class CFP_B_GBArmy_C130J_WDL_01 : CUP_C130J_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "C-130J";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};
                hiddenSelectionsTextures[] = {
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf1_co.paa",
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf1_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_GB.jpg";
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
        // People
            class CUP_B_BAF_Soldier_06_MTP;
            class CUP_B_BAF_Soldier_06_MTP_OCimport_01 : CUP_B_BAF_Soldier_06_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Soldier_06_MTP_OCimport_02 : CUP_B_BAF_Soldier_06_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_07_MTP;
            class CUP_B_BAF_Soldier_07_MTP_OCimport_01 : CUP_B_BAF_Soldier_07_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Soldier_07_MTP_OCimport_02 : CUP_B_BAF_Soldier_07_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_05_MTP;
            class CUP_B_BAF_Soldier_05_MTP_OCimport_01 : CUP_B_BAF_Soldier_05_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Soldier_05_MTP_OCimport_02 : CUP_B_BAF_Soldier_05_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_08_MTP;
            class CUP_B_BAF_Soldier_08_MTP_OCimport_01 : CUP_B_BAF_Soldier_08_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Soldier_08_MTP_OCimport_02 : CUP_B_BAF_Soldier_08_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_04_MTP;
            class CUP_B_BAF_Soldier_04_MTP_OCimport_01 : CUP_B_BAF_Soldier_04_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Soldier_04_MTP_OCimport_02 : CUP_B_BAF_Soldier_04_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Sniper_AS50_MTP;
            class CUP_B_BAF_Sniper_AS50_MTP_OCimport_01 : CUP_B_BAF_Sniper_AS50_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Sniper_AS50_MTP_OCimport_02 : CUP_B_BAF_Sniper_AS50_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Spotter_MTP;
            class CUP_B_BAF_Spotter_MTP_OCimport_01 : CUP_B_BAF_Spotter_MTP { scope = 0; class EventHandlers; editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";};
            class CUP_B_BAF_Spotter_MTP_OCimport_02 : CUP_B_BAF_Spotter_MTP_OCimport_01 { class EventHandlers; };

            #define PREVIEW(x) editorPreview = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\Data\preview\##x##_MTP.jpg

            class CFP_B_GBArmy_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier);
            };

            class CFP_B_GBArmy_Grenadier_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Grenadier";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_1Rnd_HEDP_M203',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_1Rnd_HEDP_M203',6,1],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShell',2,1]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_GL);
            };

            class CFP_B_GBArmy_Rifleman_night_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (night)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_CWS_Laser','','CUP_acc_ANPEQ_2','CUP_optic_CWS',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Night);
            };

            class CFP_B_GBArmy_Rifleman_light_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (light)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[]],[],'','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Light);
            };

            class CFP_B_GBArmy_Rifleman_backpack_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (backpack)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_RifleAmmo',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_1Rnd_HEDP_M203',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Backpack);

            };

            class CFP_B_GBArmy_Asst_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_ARAmmo',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',4,200],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_3_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAR);

            };

            class CFP_B_GBArmy_Asst_Machineguner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Machineguner";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_MGAmmo',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',4,100],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AMG);

            };

            class CFP_B_GBArmy_Asst_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_ATAmmo',[['CUP_NLAW_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAT);

            };

            class CFP_B_GBArmy_Asst_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_HATAmmo',[['CUP_Javelin_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AHAT);

            };

            class CFP_B_GBArmy_Asst_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AA Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_HAAAmmo',[['CUP_Stinger_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_3_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAA);

            };

            class CFP_B_GBArmy_Officer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Officer";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30]]],['CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader',[['CUP_30Rnd_556x45_Stanag',2,30],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['SmokeShellGreen',1,1],['SmokeShell',1,1],['SmokeShellRed',1,1],['CUP_HandGrenade_L109A1_HE',2,1]]],[],'CUP_H_BAF_Officer_Beret_PRR_U','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Officer);

            };

            class CFP_B_GBArmy_Section_Leader_WDL_01 : CUP_B_BAF_Soldier_08_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Section Leader";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S6_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S6_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader',[['CUP_30Rnd_556x45_Stanag',4,30],['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['CUP_HandGrenade_L109A1_HE',2,1]]],[],'CUP_H_BAF_Helmet_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_SL);

            };

            class CFP_B_GBArmy_Team_Leader_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Team Leader";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_Holo_Laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',6,30],['CUP_HandGrenade_L109A1_HE',1,1],['CUP_1Rnd_HEDP_M203',3,1],['CUP_1Rnd_Smoke_M203',2,1],['CUP_1Rnd_SmokeRed_M203',1,1],['CUP_1Rnd_SmokeGreen_M203',1,1]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_TL);

            };

            class CFP_B_GBArmy_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_L110A1_Aim_Laser','','CUP_acc_ANPEQ_15','CUP_optic_CompM4',['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',200],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShell',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',1,200]]],['CUP_B_AssaultPack_AR',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',2,200]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AR);

            };

            class CFP_B_GBArmy_Machinegunner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Machinegunner";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_L7A2','','','',['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',100],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_HandGrenade_L109A1_HE',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',1,100]]],['CUP_B_AssaultPack_MG',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',2,100]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_MG);

            };

            class CFP_B_GBArmy_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_NLAW','','','',['CUP_NLAW_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],['CUP_B_AssaultPack_LAT',[['CUP_NLAW_M',1,1]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AT);

            };

            class CFP_B_GBArmy_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_Javelin','','','',['CUP_Javelin_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_HAT);

            };

            class CFP_B_GBArmy_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AA Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_FIM92Stinger','','','',['CUP_Stinger_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AA);

            };

            class CFP_B_GBArmy_Marksman_LSW_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LSW)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L86A2_ACOG','','','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',5,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Marksman);

            };

            class CFP_B_GBArmy_Marksman_LRR_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LRR)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AWM_des_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_86x70_L115A1',5],[],'CUP_bipod_Harris_1A2_L'],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_5Rnd_86x70_L115A1',2,5],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_5Rnd_86x70_L115A1',5,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_B_AssaultPack_LRRAmmo',[['CUP_5Rnd_86x70_L115A1',4,5],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['B_IR_Grenade',2,1]]],'CUP_H_BAF_Helmet_4_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_scout);

            };

            class CFP_B_GBArmy_Sniper_LRR_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (LRR)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AWM_des_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_86x70_L115A1',5],[],'CUP_bipod_Harris_1A2_L'],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_86x70_L115A1',2,5],['SmokeShell',1,1]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_86x70_L115A1',5,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper);

            };

            class CFP_B_GBArmy_Sniper_AS50_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AS50_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_127x99_as50_M',5],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_127x99_as50_M',1,5]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_127x99_as50_M',6,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShell',1,1],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper_AS50);

            };

            class CFP_B_GBArmy_Sniper_AS50_TWS_WDL_01 : CUP_B_BAF_Sniper_AS50_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50 TWS)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AS50_AMPAS13c2','','','CUP_optic_AN_PAS_13c2',['CUP_5Rnd_127x99_as50_M',5],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_127x99_as50_M',1,5]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_127x99_as50_M',6,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShell',1,1],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper_AS50_TWS);

            };

            class CFP_B_GBArmy_Spotter_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',2,30],['CUP_HandGrenade_L109A1_HE',1,1]]],[],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_PVS7']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Spotter);

            };

            class CFP_B_GBArmy_Spotter_night_WDL_01 : CUP_B_BAF_Spotter_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter (night)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_CWS_Laser','','CUP_acc_ANPEQ_2','CUP_optic_CWS',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',2,30],['CUP_HandGrenade_L109A1_HE',1,1]]],[],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_PVS7']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Spotter_L85TWS);

            };

            class CFP_B_GBArmy_Pilot_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Pilot";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_HoloWdl',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk2_DPM_Pilot',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_Pilot','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Pilot);

            };

            class CFP_B_GBArmy_Crewman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Crewman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Crew_Helmet_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Crew);

            };

            class CFP_B_GBArmy_Medic_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Medic";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_Medic',[['Medikit',1],['FirstAidKit',10]]],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Medic);

            };

            class CFP_B_GBArmy_Joint_Terminal_Attack_Controller_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Joint Terminal Attack Controller";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_Holo_Laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',6,30],['CUP_HandGrenade_L109A1_HE',1,1],['CUP_1Rnd_HEDP_M203',3,1],['CUP_1Rnd_Smoke_M203',2,1],['CUP_1Rnd_SmokeRed_M203',1,1],['CUP_1Rnd_SmokeGreen_M203',1,1],['Laserbatteries',1,1]]],['CUP_B_AssaultPack_FAC',[['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['SmokeShell',2,1],['Laserbatteries',3,1],[['CUP_Vector21Nite','','','',[],[],''],1]]],'CUP_H_BAF_Helmet_4_MTP','',['CUP_SOFLAM','','','',['Laserbatteries',1],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_JTAC);

            };

            class CFP_B_GBArmy_Engineer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Engineer";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_Engineer',[['ToolKit',1],['MineDetector',1],['CUP_PipeBomb_M',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Engineer);

            };

};


