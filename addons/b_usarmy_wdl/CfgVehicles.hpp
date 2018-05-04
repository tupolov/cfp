#define WOODLAND_CAMO \
        hiddenSelections[] = {"Camo", "Camo1", "Camo2", "Camo3", "Camo4", "proxycamo5", "proxycamo6", "camo5", "camo6", "screen"}; \
        hiddenSelectionsTextures[] = { \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\Data\hmmwv_body_canvas_1_wl_co.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_hood_canvas_wl_co.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_regular_wl_1_co.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_parts_wl_1_ca.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gpk_tower_wl_co.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_wl_01_co.paa", \
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_wl_co.paa", \
            \CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_co.paa,  \
            \CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_wl_co.paa, \
            \CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa \
        };


class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_DeltaForce { displayName = "Men (Delta Force)";  };
    class CFP_EdSubcat_Personnel_Camo_UCP  { displayName = "Men (UCP)"; };
};

class CfgVehicles {

    // Vehicle Overrides

        class CUP_B_M2Bradley_USA_D;
        class CUP_B_M2Bradley_USA_W : CUP_B_M2Bradley_USA_D {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2A2 Bradley IFV (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_wdl_co.paa"};
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bradley\Data\preview\CUP_B_M2Bradley_USA_W.jpg";
        };

        class CUP_B_M6LineBacker_USA_D;
        class CUP_B_M6LineBacker_USA_W : CUP_B_M6LineBacker_USA_D {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M6 Linebacker (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_wdl_co.paa"};
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bradley\Data\preview\CUP_B_M6LineBacker_USA_W.jpg";
        };

        class CUP_B_M2A3Bradley_USA_D;
        class CUP_B_M2A3Bradley_USA_W : CUP_B_M2A3Bradley_USA_D {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2A3 ERA Bradley IFV (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\ultralp_wdl_co.paa"};
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bradley\Data\preview\CUP_B_M2A3Bradley_USA_W.jpg";
        };

        class CUP_B_M7Bradley_USA_D;
        class CUP_B_M7Bradley_USA_W : CUP_B_M7Bradley_USA_D {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M7 Bradley (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            hiddenSelectionsTextures[] = {"cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\base_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\a3_wdl_co.paa", "cup\TrackedVehicles\CUP_TrackedVehicles_Bradley\data\m7\bfist_wdl_co.paa"};
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bradley\Data\preview\CUP_B_M7Bradley_USA_D.jpg";
        };

        class CUP_M1_Abrams_base;
        class CUP_B_M1A1_Woodland_US_Army : CUP_M1_Abrams_base {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1A1 Abrams (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            typicalCargo[] = {"CFP_B_USARMY_US_Crew", "CFP_B_USARMY_US_Crew", "CFP_B_USARMY_US_Crew"};
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\preview\CUP_B_M1A1_Woodland_US_Army.jpg";

        };

        class CUP_M1A2_TUSK_base;
        class CUP_B_M1A2_TUSK_MG_US_Army: CUP_M1A2_TUSK_base {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1A2 Abrams TUSK (Woodland)";
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_m1_abrams\Data\preview\CUP_B_M1A2_TUSK_MG_US_Army.jpg";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            typicalCargo[] = {"CFP_B_USARMY_US_Crew", "CFP_B_USARMY_US_Crew", "CFP_B_USARMY_US_Crew"};
        };

        class CUP_B_M1126_ICV_M2_Desert;
        class CUP_B_M1126_ICV_M2_Woodland : CUP_B_M1126_ICV_M2_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1126 ICV M2 CROWS (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo6", "camo8", "camo7", "camo9", "camo10","camo11", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1126_ICV_M2_Woodland.jpg";
            class AnimationSources;
        };

        class CUP_B_M1126_ICV_M2_Woodland_Slat : CUP_B_M1126_ICV_M2_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1126 ICV M2 CROWS (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources : AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1126_ICV_M2_Woodland_Slat.jpg";
        };

        class CUP_B_M1126_ICV_MK19_Desert;
        class CUP_B_M1126_ICV_MK19_Woodland : CUP_B_M1126_ICV_MK19_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1126 ICV MK19 CROWS (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo6", "camo8", "camo7", "camo9", "camo10","camo11", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1126_ICV_MK19_Woodland.jpg";
            class AnimationSources;
        };

        class CUP_B_M1126_ICV_MK19_Woodland_Slat : CUP_B_M1126_ICV_M2_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1126 ICV MK19 CROWS (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1126_ICV_MK19_Woodland_Slat.jpg";
        };

        class CUP_B_M1130_CV_M2_Desert;
        class CUP_B_M1130_CV_M2_Woodland : CUP_B_M1130_CV_M2_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1130 CV M2 CROWS (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo2", "camo10", "camo8", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_command_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1130_CV_M2_Woodland.jpg";
            class AnimationSources;
        };

        class CUP_B_M1130_CV_M2_Woodland_Slat : CUP_B_M1130_CV_M2_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1130 CV M2 CROWS (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";

            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1130_CV_M2_Woodland_Slat.jpg";
        };

        class CUP_B_M1129_MC_MK19_Desert;
        class CUP_B_M1129_MC_MK19_Woodland : CUP_B_M1129_MC_MK19_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1129 MC MK19 CROWS (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";

            HiddenSelections[] = {"camo", "camo1", "camo10", "camo8", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_mortar_des_co.paa",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1129_MC_MK19_Woodland.jpg";
            class AnimationSources;
        };
        class CUP_B_M1129_MC_MK19_Woodland_Slat : CUP_B_M1129_MC_MK19_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1129 MC MK19 CROWS (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1129_MC_MK19_Woodland_Slat.jpg";
        };

        class CUP_M113_Base;
        class CUP_B_M113_USA: CUP_M113_Base {
            scope = 2;
            side = 1;
            accuracy = 0.30;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            typicalCargo[] = {"CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew"}; //Placeholder
            hiddenSelectionsTextures[] =
            {
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"
            };
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_USA.jpg";
        };

        class CUP_M113_Med_Base;
        class CUP_B_M113_Med_USA: CUP_M113_Med_Base
        {
            scope = 2;
            side = 1;
            accuracy = 0.30;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            typicalCargo[] = {"CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew"}; //Placeholder
            hiddenSelectionsTextures[] =
            {
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"
            };
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M113_Med_USA.jpg";
        };

        class CUP_M163_Base;
        class CUP_B_M163_USA : CUP_M163_Base {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M163A1 VADS";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            typicalCargo[] = {"CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew","CFP_B_USARMY_US_Crew"}; //Placeholder
            hiddenSelectionsTextures[] =
            {
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_01_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcan_02_co.paa"
            };
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M163_USA.jpg";
        };

        class CUP_B_M1135_ATGMV_Desert;
        class CUP_B_M1135_ATGMV_Woodland : CUP_B_M1135_ATGMV_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1135 ATGMV (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo7", "camo10", "camo2", "camo11", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
                "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_tow_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_command_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1135_ATGMV_Woodland.jpg";
            class AnimationSources;
        };
        class CUP_B_M1135_ATGMV_Woodland_Slat : CUP_B_M1135_ATGMV_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1135 ATGMV (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1135_ATGMV_Woodland_Slat.jpg";
        };

        class CUP_B_M1128_MGS_Desert;
        class CUP_B_M1128_MGS_Woodland : CUP_B_M1128_MGS_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1128 MGS (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo2", "camo6", "camo7", "camo10", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_mgs_body1_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_mgs_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1128_MGS_Woodland.jpg";
            class AnimationSources;
        };
        class CUP_B_M1128_MGS_Woodland_Slat : CUP_B_M1128_MGS_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1128 MGS (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1128_MGS_Woodland_Slat.jpg";
        };

        class CUP_B_M1133_MEV_Desert;
        class CUP_B_M1133_MEV_Woodland : CUP_B_M1133_MEV_Desert {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1133 MEV (Woodland)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            HiddenSelections[] = {"camo", "camo1", "camo13", "camo10", "camoDefault"};
            HiddenSelectionsTextures[] =
            {
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body1_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_medevac_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
                "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1133_MEV_Woodland.jpg";
            class AnimationSources;
        };
        class CUP_B_M1133_MEV_Woodland_Slat : CUP_B_M1133_MEV_Woodland {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M1133 MEV (Woodland - Slat)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";
            armor = 335; // slat armor
            class AnimationSources:AnimationSources
            {
                class HideSlat_Woodland
                {
                    source="user";
                    animPeriod = 0;
                    initPhase = 1;
                };
            };
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\preview\CUP_B_M1133_MEV_Woodland_Slat.jpg";
        };

        class CUP_M1165_GMV_BASE;
        class CUP_B_M1165_GMV_WDL_USA : CUP_M1165_GMV_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1165 GMV (M134)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1151_M2_BASE;
        class CUP_B_M1151_M2_WDL_USA : CUP_M1151_M2_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1151 (M2)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1151_Deploy_BASE;
        class CUP_B_M1151_Deploy_WDL_USA : CUP_M1151_Deploy_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1151 (M2) Deployment";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1151_Mk19_BASE;
        class CUP_B_M1151_Mk19_WDL_USA : CUP_M1151_Mk19_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1151 (Mk19)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1151_Unarmed_BASE;
        class CUP_B_M1151_WDL_USA : CUP_M1151_Unarmed_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1151 (Unarmed)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1152_BASE;
        class CUP_B_M1152_WDL_USA : CUP_M1152_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1152 ECV";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

        class CUP_M1167_BASE;
        class CUP_B_M1167_WDL_USA : CUP_M1167_BASE {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            editorSubCategory = "EdSubcat_Cars";
            displayName = "M1167 (TOW-2)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";
            WOODLAND_CAMO
            typicalCargo[] = {"CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier","CFP_B_USARMY_US_Soldier"};
        };

    // New Vehicles
        class CUP_B_M2StaticMG_US;
        class CUP_B_M2StaticMG_US_OCimport_01 : CUP_B_M2StaticMG_US { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M2StaticMG_US_OCimport_02 : CUP_B_M2StaticMG_US_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M2StaticMG_MiniTripod_US;
        class CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 : CUP_B_M2StaticMG_MiniTripod_US { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M2StaticMG_MiniTripod_US_OCimport_02 : CUP_B_M2StaticMG_MiniTripod_US_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_TOW_TriPod_US;
        class CUP_B_TOW_TriPod_US_OCimport_01 : CUP_B_TOW_TriPod_US { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_TOW_TriPod_US_OCimport_02 : CUP_B_TOW_TriPod_US_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M252_US;
        class CUP_B_M252_US_OCimport_01 : CUP_B_M252_US { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M252_US_OCimport_02 : CUP_B_M252_US_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M119_US;
        class CUP_B_M119_US_OCimport_01 : CUP_B_M119_US { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M119_US_OCimport_02 : CUP_B_M119_US_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M2Bradley_USA_D_OCimport_01 : CUP_B_M2Bradley_USA_D { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M2Bradley_USA_D_OCimport_02 : CUP_B_M2Bradley_USA_D_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_M6LineBacker_USA_D_OCimport_01 : CUP_B_M6LineBacker_USA_D { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M6LineBacker_USA_D_OCimport_02 : CUP_B_M6LineBacker_USA_D_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class Mainturret;
            };
        };

        class CUP_M113_Base_OCimport_01 : CUP_M113_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M113_Base_OCimport_02 : CUP_M113_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M113_Med_Base_OCimport_01 : CUP_M113_Med_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M113_Med_Base_OCimport_02 : CUP_M113_Med_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

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

        class CUP_HMMWV_Unarmed_Base;
        class CUP_HMMWV_Unarmed_Base_OCimport_01 : CUP_HMMWV_Unarmed_Base { scope = 0; class EventHandlers; };
        class CUP_HMMWV_Unarmed_Base_OCimport_02 : CUP_HMMWV_Unarmed_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_HMMWV_M2_Base;
        class CUP_HMMWV_M2_Base_OCimport_01 : CUP_HMMWV_M2_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_M2_Base_OCimport_02 : CUP_HMMWV_M2_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_MK19_Base;
        class CUP_HMMWV_MK19_Base_OCimport_01 : CUP_HMMWV_MK19_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_MK19_Base_OCimport_02 : CUP_HMMWV_MK19_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_TOW_Base;
        class CUP_HMMWV_TOW_Base_OCimport_01 : CUP_HMMWV_TOW_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_TOW_Base_OCimport_02 : CUP_HMMWV_TOW_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_Avenger_Base;
        class CUP_HMMWV_Avenger_Base_OCimport_01 : CUP_HMMWV_Avenger_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_Avenger_Base_OCimport_02 : CUP_HMMWV_Avenger_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_Ambulance_Base;
        class CUP_HMMWV_Ambulance_Base_OCimport_01 : CUP_HMMWV_Ambulance_Base { scope = 0; class EventHandlers; };
        class CUP_HMMWV_Ambulance_Base_OCimport_02 : CUP_HMMWV_Ambulance_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_HMMWV_Transport_Base;
        class CUP_HMMWV_Transport_Base_OCimport_01 : CUP_HMMWV_Transport_Base { scope = 0; class EventHandlers; };
        class CUP_HMMWV_Transport_Base_OCimport_02 : CUP_HMMWV_Transport_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_HMMWV_M2_GPK_Base;
        class CUP_HMMWV_M2_GPK_Base_OCimport_01 : CUP_HMMWV_M2_GPK_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_M2_GPK_Base_OCimport_02 : CUP_HMMWV_M2_GPK_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_Terminal_Base;
        class CUP_HMMWV_Terminal_Base_OCimport_01 : CUP_HMMWV_Terminal_Base { scope = 0; class EventHandlers; };
        class CUP_HMMWV_Terminal_Base_OCimport_02 : CUP_HMMWV_Terminal_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_HMMWV_SOV_Base;
        class CUP_HMMWV_SOV_Base_OCimport_01 : CUP_HMMWV_SOV_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_SOV_Base_OCimport_02 : CUP_HMMWV_SOV_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class SideTurret;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
            };
        };

        class CUP_HMMWV_SOV_M2_Base;
        class CUP_HMMWV_SOV_M2_Base_OCimport_01 : CUP_HMMWV_SOV_M2_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_SOV_M2_Base_OCimport_02 : CUP_HMMWV_SOV_M2_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class SideTurret;
                class CargoTurret_01;
                class CargoTurret_02;
                class CargoTurret_03;
                class CargoTurret_04;
            };
        };

        class CUP_HMMWV_Crows_M2_Base;
        class CUP_HMMWV_Crows_M2_Base_OCimport_01 : CUP_HMMWV_Crows_M2_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_Crows_M2_Base_OCimport_02 : CUP_HMMWV_Crows_M2_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_HMMWV_crows_MK19_Base;
        class CUP_HMMWV_crows_MK19_Base_OCimport_01 : CUP_HMMWV_crows_MK19_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_HMMWV_crows_MK19_Base_OCimport_02 : CUP_HMMWV_crows_MK19_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_MTVR_Base;
        class CUP_MTVR_Base_OCimport_01 : CUP_MTVR_Base { scope = 0; class EventHandlers; };
        class CUP_MTVR_Base_OCimport_02 : CUP_MTVR_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_MTVR_Reammo_Base;
        class CUP_MTVR_Reammo_Base_OCimport_01 : CUP_MTVR_Reammo_Base { scope = 0; class EventHandlers; };
        class CUP_MTVR_Reammo_Base_OCimport_02 : CUP_MTVR_Reammo_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_MTVR_Refuel_Base;
        class CUP_MTVR_Refuel_Base_OCimport_01 : CUP_MTVR_Refuel_Base { scope = 0; class EventHandlers; };
        class CUP_MTVR_Refuel_Base_OCimport_02 : CUP_MTVR_Refuel_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_MTVR_Repair_Base;
        class CUP_MTVR_Repair_Base_OCimport_01 : CUP_MTVR_Repair_Base { scope = 0; class EventHandlers; };
        class CUP_MTVR_Repair_Base_OCimport_02 : CUP_MTVR_Repair_Base_OCimport_01 { scope = 0; class EventHandlers; };

        class CUP_B_M1130_CV_M2_Desert_OCimport_01 : CUP_B_M1130_CV_M2_Desert { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M1130_CV_M2_Desert_OCimport_02 : CUP_B_M1130_CV_M2_Desert_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class ObsTurret;
                class CommanderTurret;
            };
        };

        class CUP_B_M1129_MC_MK19_Desert_OCimport_01 : CUP_B_M1129_MC_MK19_Desert { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M1129_MC_MK19_Desert_OCimport_02 : CUP_B_M1129_MC_MK19_Desert_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class ObsTurret;
            };
        };

        class CUP_B_M1135_ATGMV_Desert_OCimport_01 : CUP_B_M1135_ATGMV_Desert { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M1135_ATGMV_Desert_OCimport_02 : CUP_B_M1135_ATGMV_Desert_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CommanderTurret;
            };
        };

        class CUP_B_M1128_MGS_Desert_OCimport_01 : CUP_B_M1128_MGS_Desert { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M1128_MGS_Desert_OCimport_02 : CUP_B_M1128_MGS_Desert_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
                class CommanderOptics;
            };
        };

        class CUP_B_M1133_MEV_Desert_OCimport_01 : CUP_B_M1133_MEV_Desert { scope = 0; class EventHandlers; class Turrets; };
        class CUP_B_M1133_MEV_Desert_OCimport_02 : CUP_B_M1133_MEV_Desert_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class ObsTurret;
                class CommanderTurret;
            };
        };

        class CUP_M270_HE_Base;
        class CUP_M270_HE_Base_OCimport_01 : CUP_M270_HE_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M270_HE_Base_OCimport_02 : CUP_M270_HE_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_M270_DPICM_Base;
        class CUP_M270_DPICM_Base_OCimport_01 : CUP_M270_DPICM_Base { scope = 0; class EventHandlers; class Turrets; };
        class CUP_M270_DPICM_Base_OCimport_02 : CUP_M270_DPICM_Base_OCimport_01 {
            class EventHandlers;
            class Turrets : Turrets {
                class MainTurret;
            };
        };

        class CUP_B_A10_DYN_USA;
        class CUP_B_A10_DYN_USA_OCimport_01 : CUP_B_A10_DYN_USA { class EventHandlers; };
        class CUP_B_A10_DYN_USA_OCimport_02 : CUP_B_A10_DYN_USA_OCimport_01 {
            class EventHandlers;
        };

        class CUP_B_CH47F_USA;
        class CFP_B_USARMY_CH47F_USA : CUP_B_CH47F_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "CH-47F";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
            typicalCargo[] = {"CFP_B_USARMY_US_Pilot","CFP_B_USARMY_US_Pilot", "CFP_B_USARMY_US_Pilot"};
        };

        class CUP_B_CH47F_VIV_USA;
        class CFP_B_USARMY_CH47F_VIV_USA : CUP_B_CH47F_VIV_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "CH-47F (VIV)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
            typicalCargo[] = {"CFP_B_USARMY_US_Pilot","CFP_B_USARMY_US_Pilot", "CFP_B_USARMY_US_Pilot"};
        };

        class CFP_B_USARMY_M2StaticMG_US : CUP_B_M2StaticMG_US_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Machine Gun";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

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

        class CFP_B_USARMY_M2StaticMG_MiniTripod_US : CUP_B_M2StaticMG_MiniTripod_US_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Minitripod";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

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

        class CFP_B_USARMY_TOW_TriPod_US : CUP_B_TOW_TriPod_US_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "TOW Tripod";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

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

        class CFP_B_USARMY_M252_US : CUP_B_M252_US_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M252 81mm Mortar";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

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

        class CFP_B_USARMY_M119_US : CUP_B_M119_US_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M119";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

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

        #define PREVIEW(x) editorPreview = CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_##x##_USMC.jpg
        class CFP_B_USARMY_HMMWV_Unarmed_USA : CUP_HMMWV_Unarmed_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV (Unarmed)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_Unarmed);
        };

        class CFP_B_USARMY_HMMWV_M2_USA : CUP_HMMWV_M2_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV M2";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_M2);
        };

        class CFP_B_USARMY_HMMWV_MK19_USA : CUP_HMMWV_MK19_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV MK19";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_MK19);
        };

        class CFP_B_USARMY_HMMWV_TOW_USA : CUP_HMMWV_TOW_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV TOW";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\tow_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_TOW);
        };

        class CFP_B_USARMY_HMMWV_Avenger_USA : CUP_HMMWV_Avenger_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV Avenger";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_co.paa'];_unit setObjectTextureGlobal [1,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_1_co.paa'];_unit setObjectTextureGlobal [2,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\m998a2_avenger_3_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_Avenger);
        };

        class CFP_B_USARMY_HMMWV_Ambulance_USA : CUP_HMMWV_Ambulance_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV Ambulance";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_body_co.paa'];_unit setObjectTextureGlobal [1,'\cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            PREVIEW(HMMWV_Ambulance);

        };

        class CFP_B_USARMY_HMMWV_Transport_USA : CUP_HMMWV_Transport_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV Transport";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_canvas_1_co.paa'];_unit setObjectTextureGlobal [3,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_canvas_1_co.paa'];_unit setObjectTextureGlobal [4,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Transport_NATO_T.jpg";

        };

        class CFP_B_USARMY_HMMWV_M2_GPK_USA : CUP_HMMWV_M2_GPK_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV M1151 M2";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_gpk_tower_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_M2_GPK_NATO_T.jpg";
        };

        class CFP_B_USARMY_HMMWV_Terminal_USA : CUP_HMMWV_Terminal_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV UAV Terminal";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Terminal_NATO_T.jpg";
        };

        class CFP_B_USARMY_HMMWV_SOV_USA : CUP_HMMWV_SOV_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV SOV (Mk19)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_SpecOps";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class SideTurret : SideTurret { gunnerType = ""; };
                class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            };

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";

        };

        class CFP_B_USARMY_HMMWV_SOV_M2_USA : CUP_HMMWV_SOV_M2_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV SOV (M2)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_SpecOps";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
                class SideTurret : SideTurret { gunnerType = ""; };
                class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            };

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";

        };

        class CFP_B_USARMY_HMMWV_Crows_M2_USA : CUP_HMMWV_Crows_M2_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV CROWS M2";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Crows_M2_NATO_T.jpg";
        };

        class CFP_B_USARMY_HMMWV_Crows_MK19_USA : CUP_HMMWV_crows_MK19_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "HMMWV CROWS MK19";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Green";
            editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\Data\preview\CUP_B_HMMWV_Crows_MK19_NATO_T.jpg";
        };

        #undef PREVIEW
        #define PREVIEW(x) editorPreview = CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\preview\CUP_B_##x##_USMC.jpg
        class CFP_B_USARMY_MTVR_USA : CUP_MTVR_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body2_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_tarp_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "USMC";
            PREVIEW(MTVR);
        };

        class CFP_B_USARMY_MTVR_Ammo_USA : CUP_MTVR_Reammo_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Ammo)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body2_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_tarp_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "USMC";
            PREVIEW(MTVR_Ammo);

        };

        class CFP_B_USARMY_MTVR_Refuel_USA : CUP_MTVR_Refuel_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Refuel)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body2_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_fuel_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "USMC";
            PREVIEW(MTVR_Refuel);

        };

        class CFP_B_USARMY_MTVR_Repair_USA : CUP_MTVR_Repair_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MTVR (Repair)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Soldier";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_body2_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\ural_repair_usmc_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "USMC";
            PREVIEW(MTVR_Repair);
        };

        class CFP_B_USARMY_A10_DYN_USA : CUP_B_A10_DYN_USA_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "A-10C Thunderbolt II";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_hog.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "GreenHog";

        };

        class CFP_B_USARMY_M270_HE_USA : CUP_M270_HE_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M270 MLRS (HE)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_woodland_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M270\Data\preview\CUP_B_M270_HE_USMC.jpg";
        };

        class CFP_B_USARMY_M270_DPICM_USA : CUP_M270_DPICM_Base_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M270 MLRS (DPICM)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Crew";

            class Turrets : Turrets {
                class MainTurret : MainTurret { gunnerType = ""; };
            };



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\trackedvehicles\cup_trackedvehicles_m270\data\mlrs_hull_woodland_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            ALiVE_orbatCreator_texture = "Woodland";
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M270\Data\preview\CUP_B_M270_DPICM_USMC.jpg";
        };

        class CUP_B_MH6M_USA;
        class CFP_B_USARMY_MH6M_USA : CUP_B_MH6M_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-6M MELB";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_MH6J_USA;
        class CFP_B_USARMY_MH6J_USA : CUP_B_MH6J_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-6J Little Bird";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_MH6M_OBS_USA;
        class CFP_B_USARMY_MH6M_OBS_USA : CUP_B_MH6M_OBS_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-6M Recon";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";

        };

        class CUP_B_MH6J_OBS_USA;
        class CFP_B_USARMY_MH6J_OBS_USA : CUP_B_MH6J_OBS_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-6J Recon";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_AH6X_USA;
        class CFP_B_USARMY_AH6X_USA : CUP_B_AH6X_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AH6X Littlebird ULB";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_AH6M_USA;
        class CFP_B_USARMY_AH6M_USA : CUP_B_AH6M_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AH-6M";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_AH6J_USA;
        class CFP_B_USARMY_AH6J_USA : CUP_B_AH6J_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AH-6J";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_UH60M_US;
        class CFP_B_USARMY_UH60M_US : CUP_B_UH60M_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_MH60L_DAP_4x_US;
        class CFP_B_USARMY_MH60L_DAP_4x_US : CUP_B_MH60L_DAP_4x_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60L DAP (4 Pylons)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";

        };

        class CUP_B_MH60L_DAP_2x_US;
        class CFP_B_USARMY_MH60L_DAP_2x_US : CUP_B_MH60L_DAP_2x_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "MH-60L DAP (2 Pylons)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";

        };

        class CUP_B_UH60M_FFV_US;
        class CFP_B_USARMY_UH60M_FFV_US : CUP_B_UH60M_FFV_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M (FFV)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";

        };

        class CUP_B_UH60M_Unarmed_US;
        class CFP_B_USARMY_UH60M_Unarmed_US : CUP_B_UH60M_Unarmed_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M (Unarmed)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_UH60M_Unarmed_FFV_US;
        class CFP_B_USARMY_UH60M_Unarmed_FFV_US : CUP_B_UH60M_Unarmed_FFV_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M (Unarmed/FFV)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_UH60M_Unarmed_FFV_MEV_US;
        class CFP_B_USARMY_UH60M_Unarmed_FFV_MEV_US : CUP_B_UH60M_Unarmed_FFV_MEV_US {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M MEV (Unarmed/FFV)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
        };

        class CUP_B_AH64D_DL_USA;
        class CFP_B_USARMY_AH64D_DL_USA : CUP_B_AH64D_DL_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AH-64D";
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            crew = "CFP_B_USARMY_US_Pilot";
            typicalCargo[] = {"CFP_B_USARMY_US_Pilot"};
        };

    // New People
        class CUP_B_USArmy_Soldier_01;
        class CUP_B_USArmy_Soldier_01_OCimport_01 : CUP_B_USArmy_Soldier_01 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_01_OCimport_02 : CUP_B_USArmy_Soldier_01_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        class CUP_B_USArmy_Soldier_03;
        class CUP_B_USArmy_Soldier_03_OCimport_01 : CUP_B_USArmy_Soldier_03 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_03_OCimport_02 : CUP_B_USArmy_Soldier_03_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        class CUP_B_USArmy_Soldier_02;
        class CUP_B_USArmy_Soldier_02_OCimport_01 : CUP_B_USArmy_Soldier_02 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_02_OCimport_02 : CUP_B_USArmy_Soldier_02_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        class CUP_B_USArmy_Soldier_04;
        class CUP_B_USArmy_Soldier_04_OCimport_01 : CUP_B_USArmy_Soldier_04 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_04_OCimport_02 : CUP_B_USArmy_Soldier_04_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        class CUP_B_USArmy_Soldier_05;
        class CUP_B_USArmy_Soldier_05_OCimport_01 : CUP_B_USArmy_Soldier_05 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_05_OCimport_02 : CUP_B_USArmy_Soldier_05_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        class CUP_B_USArmy_Soldier_06;
        class CUP_B_USArmy_Soldier_06_OCimport_01 : CUP_B_USArmy_Soldier_06 { scope = 0; class EventHandlers; };
        class CUP_B_USArmy_Soldier_06_OCimport_02 : CUP_B_USArmy_Soldier_06_OCimport_01 { class EventHandlers; editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP"; };

        #undef PREVIEW
        #define PREVIEW(x) editorPreview = CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\Data\preview\##x##.jpg

        class CFP_B_USARMY_US_Soldier : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};

            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier);

        };

        class CFP_B_USARMY_US_Soldier_ACOG : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (ACOG)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            weapons[] = {"CUP_arifle_M4A1_ACOG_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_ACOG_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier);

        };

        class CFP_B_USARMY_US_Soldier_UAV : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "UAV Operator";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","B_UavTerminal","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_UAV);

        };

        class CFP_B_USARMY_US_Soldier_Backpack : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman(Backpack)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_Ammo";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_ACU_Ammo",{{"CUP_30Rnd_556x45_Stanag",4,30},{"CUP_1Rnd_HEDP_M203",2,1},{"SmokeShell",1,1},{"SmokeShellRed",1,1}}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_Backpack);

        };

        class CFP_B_USARMY_US_Soldier_AMG : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Asst. Machinegunner";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USPack_Coyote_AmmoMG";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_USPack_Coyote_AmmoMG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3,100}}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AMG);

        };

        class CFP_B_USARMY_US_Soldier_AAR : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Asst. Auto Rifleman";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_AmmoSAW";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_ACU_AmmoSAW",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AAR);

        };

        class CFP_B_USARMY_US_Soldier_AHAT : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Asst. AT Specialist (Javelin)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USPack_Coyote_AT";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",5,30}}},{"CUP_B_USPack_Coyote_AT",{{"CUP_Javelin_M",1,1}}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AHAT);

        };

        class CFP_B_USARMY_US_Soldier_AAT : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Asst. AT Specialist";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_AT";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",5,30}}},{"CUP_B_AssaultPack_ACU_AT",{{"CUP_MAAWS_HEAT_M",1,1},{"CUP_MAAWS_HEDP_M",1,1}}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AAT);

        };

        class CFP_B_USARMY_US_Soldier_Light : CUP_B_USArmy_Soldier_03_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (Light)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_Cap","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_Cap","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"V_Rangemaster_belt",{{"CUP_30Rnd_556x45_Stanag",2,30}}},{},"CUP_H_USA_Cap","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_Light);

        };

        class CFP_B_USARMY_US_Soldier_GL : CUP_B_USArmy_Soldier_03_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_M203_Holo_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_M203_Holo_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_gl","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_gl","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_M203_Holo_Laser","","CUP_acc_ANPEQ_2","CUP_optic_HoloBlack",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_gl",{{"CUP_30Rnd_556x45_Stanag",5,30},{"CUP_1Rnd_HEDP_M203",10,1}}},{},"CUP_H_USArmy_HelmetMICH_ESS","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_GL);

        };

        class CFP_B_USARMY_US_Officer : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Officer";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_Cap","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"V_Rangemaster_belt","CUP_H_USA_Cap","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"B_IR_Grenade",1,1}}},{"V_Rangemaster_belt",{{"CUP_30Rnd_556x45_Stanag",1,30},{"SmokeShellRed",1,1},{"CUP_7Rnd_45ACP_1911",2,7}}},{},"CUP_H_USA_Cap","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Officer);

        };

        class CFP_B_USARMY_US_Soldier_SL : CUP_B_USArmy_Soldier_02_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Squad Leader";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USPack_Coyote_SL";
            weapons[] = {"CUP_arifle_M4A1_ACOG_Laser","CUP_hgun_M9","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_ACOG_Laser","CUP_hgun_M9","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_SL",{{"CUP_30Rnd_556x45_Stanag",5,30},{"B_IR_Grenade",1,1},{"SmokeShellGreen",3,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_B_USPack_Coyote_SL",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShellGreen",2,1},{"SmokeShellPurple",2,1},{"SmokeShellRed",2,1},{"SmokeShellBlue",2,1},{"B_IR_Grenade",2,1}}},"CUP_H_USArmy_HelmetMICH_headset_ess","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_SL);

        };

        class CFP_B_USARMY_US_Soldier_TL : CUP_B_USArmy_Soldier_02_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Team Leader";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USPack_Coyote_TL";
            weapons[] = {"CUP_arifle_M4A1_M203_ACOG_Laser","CUP_hgun_M9","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_M203_ACOG_Laser","CUP_hgun_M9","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_tl","CUP_H_USArmy_HelmetMICH_headset","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_tl","CUP_H_USArmy_HelmetMICH_headset","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_M203_ACOG_Laser","","CUP_acc_ANPEQ_2","CUP_optic_ACOG",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_tl",{{"CUP_30Rnd_556x45_Stanag",5,30},{"CUP_1Rnd_HEDP_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",3,1},{"SmokeShellGreen",2,1}}},{"CUP_B_USPack_Coyote_TL",{{"CUP_1Rnd_StarFlare_White_M203",3,1},{"CUP_1Rnd_StarFlare_Red_M203",1,1},{"CUP_1Rnd_StarFlare_Green_M203",1,1},{"CUP_1Rnd_Smoke_M203",2,1},{"CUP_1Rnd_SmokeRed_M203",2,1},{"CUP_1Rnd_SmokeGreen_M203",2,1},{"CUP_1Rnd_HEDP_M203",2,1}}},"CUP_H_USArmy_HelmetMICH_headset","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_TL);

        };

        class CFP_B_USARMY_US_Soldier_LAT : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (AT)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_M136","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_M136","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_M136_M"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_flashlight","","CUP_acc_Flashlight","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_M136","","","",{"CUP_M136_M",1},{},""},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_AT",{{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{},"CUP_H_USArmy_HelmetMICH_earpro","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_LAT);

        };

        class CFP_B_USARMY_US_Soldier_AT : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_AT_1";
            weapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_MAAWS_Scope","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_MAAWS_Scope","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_MAAWS_HEAT_M"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_MAAWS_HEAT_M"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_flashlight","","CUP_acc_Flashlight","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_MAAWS_Scope","","","CUP_optic_MAAWS_Scope",{"CUP_MAAWS_HEAT_M",1},{},""},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_AT",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1}}},{"CUP_B_AssaultPack_ACU_AT_1",{{"CUP_MAAWS_HEDP_M",1,1}}},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AT);

        };

        class CFP_B_USARMY_US_Soldier_HAT : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AT Specialist (Javelin)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_Javelin","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_flashlight","CUP_launch_Javelin","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_AT","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Javelin_M"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_flashlight","","CUP_acc_Flashlight","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_Javelin","","","",{"CUP_Javelin_M",1},{},""},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_AT",{{"CUP_30Rnd_556x45_Stanag",4,30},{"SmokeShell",1,1}}},{},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_HAT);

        };

        class CFP_B_USARMY_US_Soldier_AA : CUP_B_USArmy_Soldier_04_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "AA Specialist";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","CUP_launch_FIM92Stinger","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_Stinger_M"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",3,30}}},{},"CUP_H_USArmy_HelmetMICH_ESS","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AA);

        };

        class CFP_B_USARMY_US_Medic : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Medic";
            attendant = 1;
            icon = "iconManMedic";
            picture = "pictureHeal";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USArmy_Medic";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Medic","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Medic","CUP_H_USArmy_HelmetMICH_ESS","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Medic",{{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{"CUP_B_USArmy_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"CUP_H_USArmy_HelmetMICH_ESS","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Medic);

        };

        class CFP_B_USARMY_US_Soldier_AR : CUP_B_USArmy_Soldier_04_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Automatic Rifleman";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_AmmoSAW";
            weapons[] = {"CUP_lmg_M249","Throw","Put"};
            respawnWeapons[] = {"CUP_lmg_M249","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_saw","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_saw","CUP_H_USArmy_HelmetMICH_headset_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
            respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249","","","",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1}}},{"CUP_V_B_IOTV_saw",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1,200}}},{"CUP_B_AssaultPack_ACU_AmmoSAW",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2,200}}},"CUP_H_USArmy_HelmetMICH_headset_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_AR);

        };

        class CFP_B_USARMY_US_Soldier_MG : CUP_B_USArmy_Soldier_04_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_AssaultPack_ACU_MG";
            weapons[] = {"CUP_lmg_M240_ElcanM143","Throw","Put"};
            respawnWeapons[] = {"CUP_lmg_M240_ElcanM143","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_MG","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_MG","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
            respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240_ElcanM143","","","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1}}},{"CUP_V_B_IOTV_MG",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1,100}}},{"CUP_B_AssaultPack_ACU_MG",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_MG);

        };

        class CFP_B_USARMY_US_Spotter : CUP_B_USArmy_Soldier_05_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Spotter";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DPM_Ghillie";


            weapons[] = {"CUP_arifle_M4A1_M203_ANPAS13c1_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_M203_ANPAS13c1_Laser","Throw","Put"};
            linkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203","CUP_1Rnd_HEDP_M203"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_M203_ANPAS13c1_Laser","","CUP_acc_ANPEQ_2","CUP_optic_AN_PAS_13c1",{"CUP_30Rnd_556x45_Stanag",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{},{"CUP_U_B_BAF_DPM_Ghillie",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"V_HarnessO_gry",{{"CUP_30Rnd_556x45_Stanag",6,30},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"SmokeShellYellow",1,1},{"CUP_1Rnd_HEDP_M203",5,1},{"CUP_1Rnd_SmokeYellow_M203",2,1}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Spotter);

        };

        class CFP_B_USARMY_US_Sniper : CUP_B_USArmy_Soldier_05_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sniper";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DPM_Ghillie";


            weapons[] = {"CUP_srifle_M110_ANPVS10","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_srifle_M110_ANPVS10","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M110_ANPVS10","","","CUP_optic_AN_PVS_10",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod"},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_DPM_Ghillie",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_M110",1,20},{"SmokeShell",1,1}}},{"V_HarnessO_gry",{{"CUP_20Rnd_762x51_B_M110",6,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1},{"B_IR_Grenade",1,1},{"CUP_7Rnd_45ACP_1911",3,7},{"SmokeShellRed",1,1}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Sniper);

        };

        class CFP_B_USARMY_US_Sniper_M110_TWS : CUP_B_USArmy_Soldier_05_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sniper (TWS)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DPM_Ghillie";


            weapons[] = {"CUP_srifle_M110_ANPAS13c2","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_srifle_M110_ANPAS13c2","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"V_HarnessO_gry","","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M110_ANPAS13c2","","","CUP_optic_AN_PAS_13c2",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod"},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_DPM_Ghillie",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_M110",1,20},{"SmokeShell",1,1}}},{"V_HarnessO_gry",{{"CUP_20Rnd_762x51_B_M110",6,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Sniper_M110_TWS);

        };

        class CFP_B_USARMY_US_Sniper_M107 : CUP_B_USArmy_Soldier_05_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sniper (M107)";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_BAF_DPM_Ghillie";


            weapons[] = {"CUP_srifle_M107_LeupoldVX3","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_srifle_M107_LeupoldVX3","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"V_HarnessO_gry","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"V_HarnessO_gry","","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_10Rnd_127x99_M107","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M107_LeupoldVX3","","","CUP_optic_Leupold_VX3",{"CUP_10Rnd_127x99_M107",10},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_BAF_DPM_Ghillie",{{"FirstAidKit",1},{"CUP_10Rnd_127x99_M107",1,10}}},{"V_HarnessO_gry",{{"CUP_10Rnd_127x99_M107",6,10},{"CUP_HandGrenade_M67",1,1},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_7Rnd_45ACP_1911",3,7}}},{},"","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Sniper_M107);

        };

        class CFP_B_USARMY_US_Soldier_Marksman : CUP_B_USArmy_Soldier_03_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Marksman";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_srifle_M110_ANPVS10","Throw","Put"};
            respawnWeapons[] = {"CUP_srifle_M110_ANPVS10","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110","CUP_20Rnd_762x51_B_M110"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M110_ANPVS10","","","CUP_optic_AN_PVS_10",{"CUP_20Rnd_762x51_B_M110",20},{},"CUP_bipod_VLTOR_Modpod"},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_M110",1,20},{"SmokeShellRed",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_20Rnd_762x51_B_M110",6,20},{"B_IR_Grenade",1,1}}},{},"CUP_H_USArmy_HelmetMICH","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_Marksman);

        };

        class CFP_B_USARMY_US_Soldier_Engineer_Sapper : CUP_B_USArmy_Soldier_02_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Sapper";
            engineer = 1;
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USArmy_MinePack";
            weapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_LeupoldMk4_CQ_T",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_SL",{{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{"CUP_B_USArmy_MinePack",{{"CUP_Mine_M",2,1},{"CUP_PipeBomb_M",1,1}}},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_Engineer_Sapper);

        };

        class CFP_B_USARMY_US_Soldier_Engineer_EOD : CUP_B_USArmy_Soldier_02_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "EOD Engineer";
            engineer =1;
            canDeactivateMines = 1;
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USArmy_EOD";
            weapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_LeupoldMk4_CQ_T",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_SL",{{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{"CUP_B_USArmy_EOD",{{"ToolKit",1},{"MineDetector",1}}},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Soldier_Engineer_EOD);

        };

        class CFP_B_USARMY_US_Engineer : CUP_B_USArmy_Soldier_02_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Engineer";
            engineer = 1;
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";

            backpack = "CUP_B_USArmy_Engineer";
            weapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_SL","CUP_H_USArmy_HelmetMICH_earpro_ess","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_LeupoldMk4CQT_Laser","","CUP_acc_ANPEQ_2","CUP_optic_LeupoldMk4_CQ_T",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_SL",{{"CUP_30Rnd_556x45_Stanag",5,30},{"SmokeShell",1,1}}},{"CUP_B_USArmy_Engineer",{{"ToolKit",1},{"CUP_Mine_M",1,1},{"CUP_PipeBomb_M",1,1}}},"CUP_H_USArmy_HelmetMICH_earpro_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Engineer);

        };

        class CFP_B_USARMY_US_Crew : CUP_B_USArmy_Soldier_01_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Crewman";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CFP_U_VDVBDU_ACU";


            weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USMC_Crew_Helmet","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USMC_Crew_Helmet","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",3,30},{"SmokeShell",1,1},{"CUP_7Rnd_45ACP_1911",1,7}}},{},"CUP_H_USMC_Crew_Helmet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Crew);

        };

        class CFP_B_USARMY_US_Pilot : CUP_B_USArmy_Soldier_06_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Pilot";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USArmy_PilotOverall";


            weapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_Colt1911","Throw","Put"};
            linkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            respawnLinkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911","CUP_7Rnd_45ACP_1911"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{"CUP_hgun_Colt1911","","","",{"CUP_7Rnd_45ACP_1911",7},{},""},{"CUP_U_B_USArmy_PilotOverall",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_USArmy_PilotVest",{{"CUP_30Rnd_556x45_Stanag",3,30},{"SmokeShell",1,1},{"CUP_7Rnd_45ACP_1911",1,7},{"SmokeShellRed",1,1}}},{},"CUP_H_USMC_Helmet_Pilot","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Pilot);

        };

        class CFP_B_USARMY_US_Pilot_Light : CUP_B_USArmy_Soldier_06_OCimport_02 {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "Pilot (Unarmed";
            side = 1;
            faction = "CFP_B_USARMY_WDL";

            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};
            uniformClass = "CUP_U_B_USArmy_PilotOverall";


            weapons[] = {"Throw","Put"};
            respawnWeapons[] = {"Throw","Put"};
            linkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","","","","","",""};
            respawnLinkedItems[] = {"CUP_V_B_USArmy_PilotVest","CUP_H_USMC_Helmet_Pilot","","","","","",""};
            magazines[] = {};
            respawnMagazines[] = {};
            ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_B_USArmy_PilotOverall",{{"FirstAidKit",1}}},{"CUP_V_B_USArmy_PilotVest",{}},{},"CUP_H_USMC_Helmet_Pilot","",{},{"","","","","",""}};



            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
            PREVIEW(CUP_B_US_Pilot_Light);

        };

        // DELTA FORCE

        class CFP_B_USARMY_US_SpecOps_Base : CUP_B_USArmy_Soldier_01_OCimport_02 {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_Base.JPG;
            author = "Drew";
            scope = 1;
            scopeCurator = 1;
            side = 1;
            faction = "CFP_B_USARMY_WDL";
            editorSubCategory = "CFP_EdSubcat_Personnel_DeltaForce";
            identityTypes[] = {"Head_NATO","LanguageENG_F","G_GUERIL_default"};

            uniformClass = "CFP_U_Crye_Multicam";

            randomGearProbability = 100;
            randomWeaponProbability = 0;

            // HEADGEAR
            headgearList[] = {
                "VSM_MICH2017_Helmet_Tan", 0.2,
                "VSM_OPS2017_Helmet_Tan", 0.2,
                "CFP_OPS2017_Helmet_Multicam", 0.2,
                "CFP_OPS2017_Helmet_OliveFabric", 0.2,
                "CFP_OPS2017_Helmet_Multicam2", 0.2,
                "CFP_OPS2017_Helmet_Grey", 0.2
            };

            // FACEWEAR
            facewearList[] = {
                "CFP_Beard", 0.3,
                "SP_Shades_Black", 0.2,
                "G_Bandanna_aviator", 0.15,
                "G_Bandanna_beast", 0.15,
                "G_Bandanna_blk", 0.15,
                "G_Bandanna_oli", 0.15,
                "G_Bandanna_khk", 0.15,
                "CUP_TK_NeckScarf", 0.15,
                "CUP_FR_NeckScarf", 0.15,
                "CUP_FR_NeckScarf2", 0.15
            };

            // INSIGNIA
            insigniaList[] = {
                "USP_PATCH_USA_ARMY_SF_ODA944", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA966", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA976", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA1223", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA1313", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA3221", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA2081", 0.2,
                "USP_PATCH_USA_ARMY_SF_ODA3113", 0.2
            };

            // UNIFORMS
            uniformList[] = {
                "CFP_U_Crye_Multicam", 0.25,
                "CFP_U_Crye_Multicam2", 0.25,
                "CFP_U_Crye_Multicam_SS", 0.25,
                "CFP_U_Crye_Multicam2_SS", 0.25
            };

            linkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

            weapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};

            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",3,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{},"CFP_OPS2017_Helmet_Multicam","G_Bandanna_khk",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_US_SpecOps : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Operator";

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",4,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{},"CFP_OPS2017_Helmet_Multicam","G_Bandanna_khk",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_UAV : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_UAV.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "UAV Controller";
            uavHacker = 1;
            linkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            backpack = "B_UAV_01_backpack_F";

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{"B_UAV_01_backpack_F",{}},"CFP_OPS2017_Helmet_Multicam","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_TL : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_TL.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Team Leader";

            linkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{},"CFP_OPS2017_Helmet_Multicam","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_Medic : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_Medic.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Medic";
            attendant = 1;
            icon = "iconManMedic";
            picture = "pictureHeal";
            linkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            backpack = "B_TacticalPack_mcamo";
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{"B_TacticalPack_mcamo",{{"Medikit",1},{"FirstAidKit",10}}},"CFP_OPS2017_Helmet_Multicam","",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_Assault : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_Assault.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Operator (Assault)";

            linkedItems[] = {"CFP_FAPC_Breacher_Multicam","VSM_OPS2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_FAPC_Breacher_Multicam","VSM_OPS2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_20Rnd_762x51_B_SCAR","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_20Rnd_762x51_B_SCAR","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            backpack = "B_AssaultPack_mcamo";

           ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_EGL_ElcanSpecter_Laser","","CUP_acc_ANPEQ_15","CUP_optic_ELCAN_SpecterDR",{"CUP_20Rnd_762x51_B_SCAR",20},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam_SS",{{"CUP_20Rnd_762x51_B_SCAR",2,20},{"SmokeShellRed",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_FAPC_Breacher_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",5,20},{"CUP_1Rnd_HEDP_M203",6,1},{"B_IR_Grenade",2,1},{"CUP_HandGrenade_M67",2,1},{"CUP_15Rnd_9x19_M9",1,15}}},{"B_AssaultPack_mcamo",{{"CUP_20Rnd_762x51_B_SCAR",5,20},{"CUP_1Rnd_HEDP_M203",10,1},{"CUP_1Rnd_SmokeRed_M203",4,1},{"CUP_1Rnd_SmokeGreen_M203",3,1},{"CUP_HandGrenade_M67",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},"VSM_MICH2017_Helmet_Tan","CUP_FR_NeckScarf",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_SD : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_SD.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Operator (Silenced)";

            linkedItems[] = {"CFP_FAPC_Operator_Multicam","VSM_MICH2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_FAPC_Operator_Multicam","VSM_MICH2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

           ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_muzzle_snds_SCAR_H","CUP_acc_ANPEQ_15","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam2",{{"SmokeShellRed",1,1},{"CUP_HandGrenade_M67",1,1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_FAPC_Operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20}}},{},"CFP_OPS2017_Helmet_OliveFabric","CFP_Beard",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_MG : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_MG.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";

            linkedItems[] = {"CFP_LBT6094_MG_Multicam","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_MG_Multicam","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_lmg_Mk48_des_Aim_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            backpack = "B_TacticalPack_mcamo";

            ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_des_Aim_Laser","","CUP_acc_ANPEQ_2_desert","CUP_optic_CompM2_Desert",{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam2_SS",{{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_MG_Multicam",{{"CUP_15Rnd_9x19_M9",3,15},{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},{"B_TacticalPack_mcamo",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",2,100}}},"CFP_OPS2017_Helmet_OliveFabric","CUP_FR_NeckScarf2",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_AR : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_AR.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Automatic Rifleman";

            linkedItems[] = {"CFP_RAV_MG_Multicam","VSM_MICH2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_RAV_MG_Multicam","VSM_MICH2017_Helmet_Tan","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_lmg_M249_ElcanM145_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_lmg_M249_ElcanM145_Laser","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_100Rnd_TE4_Green_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            backpack = "B_TacticalPack_mcamo";

            ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M249_ElcanM145_Laser","","CUP_acc_ANPEQ_15","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",100},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam2",{{"CUP_HandGrenade_M67",2,1},{"B_IR_Grenade",1,1},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_RAV_MG_Multicam",{{"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",2,100},{"CUP_15Rnd_9x19_M9",3,15},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200}}},{"B_TacticalPack_mcamo",{{"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",4,100},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1,200}}},"CFP_OPS2017_Helmet_Multicam2","CUP_FR_NeckScarf",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_Night : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_Night.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Operator (Night Assault)";

            linkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            respawnlinkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_Black","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
            weapons[] = {"CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_FG_ANPAS13c1_Laser_Snds","CUP_muzzle_snds_SCAR_H","CUP_acc_ANPEQ_15","CUP_optic_AN_PAS_13c1",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"SmokeShellRed",1,1},{"CUP_HandGrenade_M67",2,1},{"CUP_15Rnd_9x19_M9",2,15},{"CUP_20Rnd_762x51_B_SCAR",1,20}}},{"CFP_CarrierRig_Operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"CUP_HandGrenade_M67",1,1},{"CUP_15Rnd_9x19_M9",1,15}}},{},"VSM_MICH2017_Helmet_Tan","CUP_FR_NeckScarf2",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

        };

        class CFP_B_USARMY_US_SpecOps_M : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_M.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Marksman";

            linkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk20_LeupoldMk4MRT","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk20_LeupoldMk4MRT","CUP_hgun_M9_snds","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk20_LeupoldMk4MRT","","","CUP_optic_LeupoldMk4_MRT_tan",{"CUP_20Rnd_762x51_B_SCAR",20},{},"CUP_bipod_VLTOR_Modpod"},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam",{{"SmokeShellGreen",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15},{"CUP_20Rnd_762x51_B_SCAR",2,20}}},{"CFP_CarrierRig_Operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellRed",1,1}}},{},"CFP_OPS2017_Helmet_Grey","G_Bandanna_beast",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_M14 : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_M14.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Operator (M14)";

            linkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_CarrierRig_Operator_Multicam","CFP_OPS2017_Helmet_OliveFabric","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_srifle_M14_CCO","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_srifle_M14_CCO","CUP_hgun_M9","CUP_Vector21Nite"};
            magazines[] = {"CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_DMR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M14_CCO","","","CUP_optic_CompM2_Black",{"CUP_20Rnd_762x51_DMR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam2_SS",{{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_20Rnd_762x51_DMR",1,20},{"SmokeShellGreen",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_CarrierRig_Operator_Multicam",{{"CUP_20Rnd_762x51_DMR",10,20},{"CUP_HandGrenade_M67",2,1},{"SmokeShellGreen",1,1}}},{},"CFP_OPS2017_Helmet_Multicam2","CUP_FR_NeckScarf2",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        class CFP_B_USARMY_US_SpecOps_JTAC : CFP_B_USARMY_US_SpecOps_Base {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_JTAC.JPG;
            scope = 2;
            scopeCurator = 2;
            displayName = "Forward Air Controller";

            linkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            respawnlinkedItems[] = {"CFP_LBT6094_operator_Multicam","CFP_OPS2017_Helmet_Multicam","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
            weapons[] = {"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_hgun_M9_snds","CUP_SOFLAM"};
            respawnWeapons[] = {"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_hgun_M9_snds","CUP_SOFLAM"};
            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","Laserbatteries"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","Laserbatteries"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_STD_FG_Aim_Laser_snds","CUP_muzzle_snds_SCAR_H","CUP_acc_ANPEQ_15","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9_snds","CUP_muzzle_snds_M9","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_U_Crye_Multicam2",{{"SmokeShellGreen",1,1},{"SmokeShellRed",1,1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"Laserbatteries",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_operator_Multicam",{{"CUP_20Rnd_762x51_B_SCAR",6,20},{"B_IR_Grenade",2,1},{"CUP_15Rnd_9x19_M9",4,15}}},{},"CFP_OPS2017_Helmet_Multicam2","CUP_TK_NeckScarf",{"CUP_SOFLAM","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        };

        // Gunners
        class CFP_B_USARMY_Gunner_M2_High_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [MG High]";

            backpack = "CUP_B_M2_Gun_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Gunner_M2_Low_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [MG Low]";
            backpack = "CUP_B_M2_Gun_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_M2_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [MG]";
            backpack = "CUP_B_M2_Tripod_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Tripod_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_M2Low_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [MG Low]";
            backpack = "CUP_B_M2_Minitripod_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Minitripod_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};


            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Gunner_TOW_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [AT]";
            backpack = "CUP_B_Tow_Gun_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_Tow_Gun_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_TOW_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [AT]";
            backpack = "CUP_B_TOW_Tripod_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_TOW_Tripod_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
        };

        class CFP_B_USARMY_Gunner_Mortar_WDL_01 : CFP_B_USARMY_US_Soldier {

            displayName = "Gunner [Mortar]";
            backpack = "CUP_B_M252_Gun_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M252_Gun_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_Mortar_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [Mortar]";
            backpack = "CUP_B_M252_Bipod_Bag";
        weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
        linkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        respawnLinkedItems[] = {"CUP_V_B_IOTV_Rifleman","CUP_H_USArmy_HelmetMICH","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"};
        magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CFP_U_VDVBDU_ACU",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_Rifleman",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M252_Bipod_Bag",{}},"CUP_H_USArmy_HelmetMICH","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };
};