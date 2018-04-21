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

                // Add random insignias for Units that have it enabled and the model supports it
                randomGearProbability = 80;
                insigniaList[] = {
                    "MORALE", 0.3,
                    "BLOOD", 0.5,
                    "USP_PATCH_UKF_MORALE_PUNISHER_FLAG", 0.4,
                    "USP_PATCH_FLAG_UNITED_KINGDOM", 0.8,
                    "USP_PATCH_FLAG_UNITED_KINGDOM_NAME", 0.6,
                    "USP_PATCH_FLAG_UNITED_KINGDOM_SHIELD", 0.6
                };
            };

            class CUP_B_BAF_Soldier_01_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_02_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_03_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_04_DPM : CUP_Creatures_Military_BAF_Soldier_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };

            class CUP_B_BAF_Soldier_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_GL_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Night_WDL : CUP_B_BAF_Soldier_01_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Light_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Backpack_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAR_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AMG_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAT_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AHAT_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AAA_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Officer_WDL : CUP_B_BAF_Soldier_01_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_SL_WDL : CUP_B_BAF_Soldier_01_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_TL_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AR_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_MG_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AT_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_HAT_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_AA_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_Marksman_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_scout_WDL : CUP_B_BAF_Soldier_03_DPM
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
            class CUP_B_BAF_Pilot_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Crew_WDL : CUP_B_BAF_Soldier_02_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Medic_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Soldier_JTAC_WDL : CUP_B_BAF_Soldier_03_DPM
            {
                editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DPM";
            };
            class CUP_B_BAF_Engineer_WDL : CUP_B_BAF_Soldier_01_DPM
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
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_L111A1_MiniTripod_BAF_WDL : CUP_L111A1_MiniTripod_base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_L16A2_BAF_WDL : CUP_L16A2_base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_LR_Transport_Base;
            class CUP_B_LR_Transport_GB_W: CUP_LR_Transport_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_LR_MG_Base;
            class CUP_B_LR_MG_GB_W: CUP_LR_MG_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_LR_Ambulance_Base;
            class CUP_B_LR_Ambulance_GB_W: CUP_LR_Ambulance_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_LR_Special_Base;
            class CUP_B_LR_Special_M2_GB_W: CUP_LR_Special_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_LR_Special_GMG_GB_W: CUP_B_LR_Special_M2_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_BAF_Coyote_GMG_D;
            class CUP_B_BAF_Coyote_GMG_W : CUP_B_BAF_Coyote_GMG_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[]={"CFP_B_GBARMY_Rifleman_WDL_01","CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_BAF_Coyote_L2A1_D;
            class CUP_B_BAF_Coyote_L2A1_W : CUP_B_BAF_Coyote_L2A1_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[]={"CFP_B_GBARMY_Rifleman_WDL_01","CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_BAF_Jackal2_GMG_W;
            class CUP_B_Jackal2_GMG_GB_W: CUP_BAF_Jackal2_GMG_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
            };
            class CUP_BAF_Jackal2_L2A1_W;
            class CUP_B_Jackal2_L2A1_GB_W: CUP_BAF_Jackal2_L2A1_W
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
            };

            class CUP_Mastiff_Base;
            class CUP_B_Mastiff_HMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_Mastiff_GMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_Mastiff_LMG_GB_W: CUP_Mastiff_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_Ridgback_Base;
            class CUP_B_Ridgback_HMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_Ridgback_GMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_Ridgback_LMG_GB_W: CUP_Ridgback_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_Wolfhound_Base;
            class CUP_B_Wolfhound_HMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_Wolfhound_GMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_Wolfhound_LMG_GB_W: CUP_Wolfhound_Base
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_MCV80_GB_D_SLAT;
            class CUP_B_MCV80_GB_W_SLAT: CUP_B_MCV80_GB_D_SLAT
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_MCV80_GB_D;
            class CUP_B_MCV80_GB_W: CUP_B_MCV80_GB_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_FV510_GB_D_SLAT;
            class CUP_B_FV510_GB_W_SLAT: CUP_B_FV510_GB_D_SLAT
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_FV510_GB_D : CUP_B_FV510_GB_W_SLAT {
                faction = "CUP_B_GB";
                crew = "CUP_B_BAF_Crew_DDPM";
                typicalCargo[] = {"CUP_B_BAF_Crew_DDPM"};
            };
            class CUP_B_FV510_GB_W: CUP_B_FV510_GB_D
            {
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Rifleman_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_B_FV432_Bulldog_GB_D;
            class CUP_B_FV432_Bulldog_GB_W: CUP_B_FV432_Bulldog_GB_D
            {
                crew = "CFP_B_GBARMY_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[]={"CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01"};
            };
            class CUP_B_FV432_Bulldog_GB_D_RWS;
            class CUP_B_FV432_Bulldog_GB_W_RWS: CUP_B_FV432_Bulldog_GB_D_RWS
            {
                crew = "CFP_B_GBARMY_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[]={"CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01", "CFP_B_GBARMY_Rifleman_WDL_01"};
            };

            class CUP_Challenger2_base;
            class CUP_B_Challenger2_Woodland_BAF: CUP_Challenger2_base
            {
                crew = "CFP_B_GBARMY_Crewman_WDL_01";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[] = {"CFP_B_GBARMY_Crewman_WDL_01", "CFP_B_GBARMY_Crewman_WDL_01", "CFP_B_GBARMY_Crewman_WDL_01", "CFP_B_GBARMY_Crewman_WDL_01"};
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
            class CUP_B_AW159_GB;
            class CUP_B_AW159_GB_OCimport_01 : CUP_B_AW159_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_AW159_GB_OCimport_02 : CUP_B_AW159_GB_OCimport_01 {
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

            class CUP_B_AH1_DL_BAF;
            class CUP_B_AH1_DL_BAF_OCimport_01 : CUP_B_AH1_DL_BAF { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_AH1_DL_BAF_OCimport_02 : CUP_B_AH1_DL_BAF_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_GR9_DYN_Base;
            class CUP_GR9_DYN_Base_OCimport_01 : CUP_GR9_DYN_Base { scope = 0; class EventHandlers; };
            class CUP_GR9_DYN_Base_OCimport_02 : CUP_GR9_DYN_Base_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_B_AW159_Unarmed_GB;
            class CUP_B_AW159_Unarmed_GB_OCimport_01 : CUP_B_AW159_Unarmed_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_AW159_Unarmed_GB_OCimport_02 : CUP_B_AW159_Unarmed_GB_OCimport_01 {
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

            class CUP_B_SA330_Puma_HC2_BAF;
            class CUP_B_SA330_Puma_HC2_BAF_OCimport_01 : CUP_B_SA330_Puma_HC2_BAF { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_SA330_Puma_HC2_BAF_OCimport_02 : CUP_B_SA330_Puma_HC2_BAF_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_B_Merlin_HC3A_Armed_GB;
            class CUP_B_Merlin_HC3A_Armed_GB_OCimport_01 : CUP_B_Merlin_HC3A_Armed_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_Merlin_HC3A_Armed_GB_OCimport_02 :CUP_B_Merlin_HC3A_Armed_GB_OCimport_01 {
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

            class CUP_B_Merlin_HC3_Armed_GB;
            class CUP_B_Merlin_HC3_Armed_GB_OCimport_01 : CUP_B_Merlin_HC3_Armed_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_Merlin_HC3_Armed_GB_OCimport_02 : CUP_B_Merlin_HC3_Armed_GB_OCimport_01 {
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

            class CUP_B_Merlin_HC3A_GB;
            class CUP_B_Merlin_HC3A_GB_OCimport_01 : CUP_B_Merlin_HC3A_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_Merlin_HC3A_GB_OCimport_02 : CUP_B_Merlin_HC3A_GB_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_B_Merlin_HC3_VIV_GB;
            class CUP_B_Merlin_HC3_VIV_GB_OCimport_01 : CUP_B_Merlin_HC3_VIV_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_Merlin_HC3_VIV_GB_OCimport_02 : CUP_B_Merlin_HC3_VIV_GB_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                };
            };

            class CUP_B_Merlin_HC3_GB;
            class CUP_B_Merlin_HC3_GB_OCimport_01 : CUP_B_Merlin_HC3_GB { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_Merlin_HC3_GB_OCimport_02 : CUP_B_Merlin_HC3_GB_OCimport_01 {
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

            class CFP_B_GBARMY_F35B_Lightning_II_WDL_01 : CUP_B_F35B_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
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

            class CFP_B_GBARMY_F35B_Lightning_II_Stealth_WDL_01 : CUP_B_F35B_Stealth_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II (Stealth)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                ALiVE_orbatCreator_texture = "BAFGrey";

            };

            class CFP_B_GBARMY_AH_1_WDL_01 : CUP_B_AH1_DL_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Pilot_WDL_01"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Harrier_GR_9_WDL_01 : CUP_GR9_DYN_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_AW159_Wildcat_Green_WDL_01 : CUP_B_AW159_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Pilot_WDL_01"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };
                  // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_AW159_Wildcat_Green_Unarmed_WDL_01 : CUP_B_AW159_Unarmed_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[] = {"CFP_B_GBARMY_Pilot_WDL_01"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };
                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_SA_330_Puma_HC2_WDL_01 : CUP_B_SA330_Puma_HC2_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_SA_330_Puma_HC1_WDL_01 : CUP_B_SA330_Puma_HC1_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Merlin_HC3A_Armed_WDL_01 : CUP_B_Merlin_HC3A_Armed_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Merlin_HC3_Armed_WDL_01 : CUP_B_Merlin_HC3_Armed_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Merlin_HC3A_WDL_01 : CUP_B_Merlin_HC3A_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Merlin_HC3_VIV_WDL_01 : CUP_B_Merlin_HC3_VIV_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Merlin_HC3_WDL_01 : CUP_B_Merlin_HC3_GB_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Chinook_HC_4VIV_WDL_01 : CUP_CH47F_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "CH-47F (VIV)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa'];_unit setObjectTextureGlobal [1,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa'];_unit setObjectTextureGlobal [2,''];_unit setObjectTextureGlobal [3,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                ALiVE_orbatCreator_texture = "BAF";

            };

            class CFP_B_GBARMY_Chinook_HC_4_WDL_01 : CUP_CH47F_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "CH-47F";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CFP_B_GBARMY_Pilot_WDL_01";


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa'];_unit setObjectTextureGlobal [1,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa'];_unit setObjectTextureGlobal [2,''];_unit setObjectTextureGlobal [3,'cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                ALiVE_orbatCreator_texture = "BAF";

            };

            class CFP_B_GBARMY_C130J_VIV_WDL_01 : CUP_C130J_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                ALiVE_orbatCreator_texture = "RAFGrey";

            };

            class CFP_B_GBARMY_C130J_WDL_01 : CUP_C130J_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                ALiVE_orbatCreator_texture = "RAFGrey";

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

            class CFP_B_GBARMY_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier);

            };

            class CFP_B_GBARMY_Grenadier_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Grenadier";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_GL_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_GL_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_GL_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_1Rnd_HEDP_M203",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",6,1},{"CUP_HandGrenade_L109A1_HE",2,1},{"SmokeShell",2,1}}},{},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_GL);
            };

            class CFP_B_GBARMY_Rifleman_night_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (night)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";


        weapons[] = {"CUP_arifle_L85A2_CWS_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_CWS_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_CWS_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CWS",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S3_RolledUp",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{},"CUP_H_BAF_Helmet_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Night);

            };

            class CFP_B_GBARMY_Rifleman_light_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (light)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Light);

            };

            class CFP_B_GBARMY_Rifleman_backpack_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (backpack)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                backpack = "CUP_B_AssaultPack_RifleAmmo";
        weapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_RifleAmmo",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_Net_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Backpack);

            };

            class CFP_B_GBARMY_Asst_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_ARAmmo";
        weapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_3_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_3_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_ARAmmo",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",4,200},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_3_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAR);

            };

            class CFP_B_GBARMY_Asst_Machineguner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Machineguner";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_MGAmmo";
        weapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_MGAmmo",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AMG);

            };

            class CFP_B_GBARMY_Asst_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_ATAmmo";
        weapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_ATAmmo",{{"CUP_NLAW_M",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAT);

            };

            class CFP_B_GBARMY_Asst_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_HATAmmo";
        weapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_HATAmmo",{{"CUP_Javelin_M",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AHAT);

            };

            class CFP_B_GBARMY_Asst_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AA Specialist";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_HAAAmmo";
        weapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_3_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_3_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_HAAAmmo",{{"CUP_Stinger_M",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_BAF_Helmet_3_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AAA);

            };

            class CFP_B_GBARMY_Officer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Officer";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";


        weapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader","CUP_H_BAF_Officer_Beret_PRR_U","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader","CUP_H_BAF_Officer_Beret_PRR_U","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_MTP_S3_RolledUp",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30}}},{"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",{{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShellYellow",1,1},{"SmokeShellPurple",1,1},{"SmokeShellGreen",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"CUP_HandGrenade_L109A1_HE",2,1}}},{},"CUP_H_BAF_Officer_Beret_PRR_U","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Officer);

            };

            class CFP_B_GBARMY_Section_Leader_WDL_01 : CUP_B_BAF_Soldier_08_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Section Leader";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S6_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader","CUP_H_BAF_Helmet_2_MTP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader","CUP_H_BAF_Helmet_2_MTP","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S6_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",2,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_HandGrenade_L109A1_HE",2,1}}},{},"CUP_H_BAF_Helmet_2_MTP","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_SL);

            };

            class CFP_B_GBARMY_Team_Leader_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Team Leader";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_GL_Holo_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_GL_Holo_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_GL_Holo_Laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_1Rnd_Smoke_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1}}},{},"CUP_H_BAF_Helmet_Net_2_MTP","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_TL);

            };

            class CFP_B_GBARMY_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                backpack = "CUP_B_AssaultPack_AR";
        weapons[] = {"CUP_lmg_L110A1_Aim_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_L110A1_Aim_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1","CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_L110A1_Aim_Laser","","CUP_acc_ANPEQ_15","CUP_optic_CompM4",{"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",200},{},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_HandGrenade_L109A1_HE",2,1},{"SmokeShell",2,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",1,200}}},{"CUP_B_AssaultPack_AR",{{"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",2,200}}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AR);

            };

            class CFP_B_GBARMY_Machinegunner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Machinegunner";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_MG";
        weapons[] = {"CUP_lmg_L7A2","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_L7A2","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_L7A2","","","",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_HandGrenade_L109A1_HE",2,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100}}},{"CUP_B_AssaultPack_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2,100}}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_MG);

            };

            class CFP_B_GBARMY_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                backpack = "CUP_B_AssaultPack_LAT";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","CUP_launch_NLAW","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","CUP_launch_NLAW","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_NLAW_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_NLAW_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_NLAW","","","",{"CUP_NLAW_M",1},{},""},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{"CUP_B_AssaultPack_LAT",{{"CUP_NLAW_M",1,1}}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AT);

            };

            class CFP_B_GBARMY_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_launch_Javelin","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_launch_Javelin","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Javelin","","","",{"CUP_Javelin_M",1},{},""},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{},"CUP_H_BAF_Helmet_Net_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_HAT);

            };

            class CFP_B_GBARMY_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AA Specialist";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_launch_FIM92Stinger","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","CUP_launch_FIM92Stinger","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_AA);

            };

            class CFP_B_GBARMY_Marksman_LSW_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LSW)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";


        weapons[] = {"CUP_arifle_L86A2_ACOG","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L86A2_ACOG","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L86A2_ACOG","","","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",5,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},{},"CUP_H_BAF_Helmet_Net_2_MTP","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_Marksman);

            };

            class CFP_B_GBARMY_Marksman_LRR_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LRR)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                backpack = "CUP_B_AssaultPack_LRRAmmo";
        weapons[] = {"CUP_srifle_AWM_des_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_AWM_des_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_4_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_4_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_AWM_des_SBPMII","","","CUP_optic_SB_3_12x50_PMII",{"CUP_5Rnd_86x70_L115A1",5},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_5Rnd_86x70_L115A1",2,5},{"SmokeShell",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_5Rnd_86x70_L115A1",5,5},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_B_AssaultPack_LRRAmmo",{{"CUP_5Rnd_86x70_L115A1",4,5},{"CUP_HandGrenade_L109A1_HE",2,1},{"SmokeShellYellow",1,1},{"SmokeShellPurple",1,1},{"B_IR_Grenade",2,1}}},"CUP_H_BAF_Helmet_4_MTP","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_scout);

            };

            class CFP_B_GBARMY_Sniper_LRR_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (LRR)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";


        weapons[] = {"CUP_srifle_AWM_des_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_AWM_des_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_5Rnd_86x70_L115A1","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_AWM_des_SBPMII","","","CUP_optic_SB_3_12x50_PMII",{"CUP_5Rnd_86x70_L115A1",5},{},"CUP_bipod_Harris_1A2_L"},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_MTP_Ghillie",{{"FirstAidKit",1},{"CUP_5Rnd_86x70_L115A1",2,5},{"SmokeShell",1,1}}},{"CUP_V_B_GER_Carrier_Vest",{{"CUP_5Rnd_86x70_L115A1",5,5},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper);

            };

            class CFP_B_GBARMY_Sniper_AS50_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";


        weapons[] = {"CUP_srifle_AS50_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_AS50_SBPMII","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_AS50_SBPMII","","","CUP_optic_SB_3_12x50_PMII",{"CUP_5Rnd_127x99_as50_M",5},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_MTP_Ghillie",{{"FirstAidKit",1},{"CUP_5Rnd_127x99_as50_M",1,5}}},{"CUP_V_B_GER_Carrier_Vest",{{"CUP_5Rnd_127x99_as50_M",6,5},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper_AS50);

            };

            class CFP_B_GBARMY_Sniper_AS50_TWS_WDL_01 : CUP_B_BAF_Sniper_AS50_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50 TWS)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";


        weapons[] = {"CUP_srifle_AS50_AMPAS13c2","CUP_hgun_Colt1911","Throw","Put"};
        respawnWeapons[] = {"CUP_srifle_AS50_AMPAS13c2","CUP_hgun_Colt1911","Throw","Put"};
        linkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_B_GER_Carrier_Vest","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        respawnMagazines[] = {"CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_5Rnd_127x99_as50_M","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_AS50_AMPAS13c2","","","CUP_optic_AN_PAS_13c2",{"CUP_5Rnd_127x99_as50_M",5},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_MTP_Ghillie",{{"FirstAidKit",1},{"CUP_5Rnd_127x99_as50_M",1,5}}},{"CUP_V_B_GER_Carrier_Vest",{{"CUP_5Rnd_127x99_as50_M",6,5},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Sniper_AS50_TWS);

            };

            class CFP_B_GBARMY_Spotter_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";


        weapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_ACOG_Laser","Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_Ghillie",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Spotter);

            };

            class CFP_B_GBARMY_Spotter_night_WDL_01 : CUP_B_BAF_Spotter_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter (night)";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";


        weapons[] = {"CUP_arifle_L85A2_CWS_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_CWS_Laser","Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_CWS_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CWS",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_Ghillie",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",2,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Spotter_L85TWS);

            };

            class CFP_B_GBARMY_Pilot_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Pilot";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_Holo_laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Pilot","CUP_H_BAF_Helmet_Pilot","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DPM_Pilot","CUP_H_BAF_Helmet_Pilot","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_Holo_laser","","CUP_acc_ANPEQ_2","CUP_optic_HoloWdl",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk2_DPM_Pilot",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{},"CUP_H_BAF_Helmet_Pilot","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Pilot);

            };

            class CFP_B_GBARMY_Crewman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Crewman";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";


        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Crew_Helmet_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Crew_Helmet_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{},"CUP_H_BAF_Crew_Helmet_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Crew);

            };

            class CFP_B_GBARMY_Medic_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Medic";
                attendant = 1;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                backpack = "CUP_B_AssaultPack_Medic";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_Net_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_BAF_Helmet_Net_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Medic);

            };

            class CFP_B_GBARMY_Joint_Terminal_Attack_Controller_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Joint Terminal Attack Controller";
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                backpack = "CUP_B_AssaultPack_FAC";
        weapons[] = {"CUP_arifle_L85A2_GL_Holo_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_GL_Holo_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_4_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier","CUP_H_BAF_Helmet_4_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","Laserbatteries"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","Laserbatteries"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_GL_Holo_Laser","","CUP_acc_ANPEQ_2","CUP_optic_Eotech533",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_BAF_MTP_S5_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShell",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Grenadier",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"CUP_1Rnd_HEDP_M203",3,1},{"CUP_1Rnd_Smoke_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",1,1},{"CUP_1Rnd_SmokeGreen_M203",1,1},{"Laserbatteries",1,1}}},{"CUP_B_AssaultPack_FAC",{{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"SmokeShellYellow",1,1},{"SmokeShellPurple",1,1},{"SmokeShell",2,1},{"Laserbatteries",3,1},{{"CUP_Vector21Nite","","","",{},{},""},1}}},"CUP_H_BAF_Helmet_4_MTP","",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Soldier_JTAC);

            };

            class CFP_B_GBARMY_Engineer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Engineer";
                engineer = 1;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";

                identityTypes[] = {"Head_NATO","LanguageENGB_F","G_GUERIL_default"};
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";

                backpack = "CUP_B_AssaultPack_Engineer";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_2_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S3_RolledUp",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_Engineer",{{"ToolKit",1},{"MineDetector",1},{"CUP_PipeBomb_M",1,1}}},"CUP_H_BAF_Helmet_2_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
                PREVIEW(CUP_B_BAF_Engineer);

            };

        // Gunners

            class CFP_B_GBARMY_Gunner_M2_High_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Gunner [MG High]";

                backpack = "CUP_B_M2_Gun_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};


                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Gunner_M2_Low_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Gunner [MG Low]";

                backpack = "CUP_B_M2_Gun_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Asst_Gunner_M2_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Asst. Gunner [MG]";

                backpack = "CUP_B_M2_Tripod_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M2_Tripod_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Asst_Gunner_M2Low_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Asst. Gunner [MG Low]";

                backpack = "CUP_B_M2_Minitripod_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M2_Minitripod_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Gunner_TOW_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Gunner [AT]";

                backpack = "CUP_B_Tow_Gun_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_Tow_Gun_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Asst_Gunner_TOW_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Asst. Gunner [AT]";

                backpack = "CUP_B_TOW_Tripod_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_TOW_Tripod_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;
            };

            class CFP_B_GBARMY_Gunner_Mortar_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {

                displayName = "Gunner [Mortar]";

                backpack = "CUP_B_M252_Gun_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M252_Gun_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBARMY_Asst_Gunner_Mortar_WDL_01 : CFP_B_GBARMY_Rifleman_WDL_01 {
                displayName = "Asst. Gunner [Mortar]";

                backpack = "CUP_B_M252_Bipod_Bag";
        weapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_L85A2_SUSAT_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman","CUP_H_BAF_Helmet_1_MTP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_L85A2_SUSAT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_SUSAT",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_BAF_MTP_S4_UnRolled",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_L109A1_HE",1,1}}},{"CUP_V_BAF_Osprey_Mk4_MTP_Rifleman",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_HandGrenade_L109A1_HE",1,1},{"SmokeShell",1,1}}},{"CUP_B_M252_Bipod_Bag",{}},"CUP_H_BAF_Helmet_1_MTP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_HMNVS"}};

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };
};


