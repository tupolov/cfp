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
    class CFP_EdSubcat_Personnel_Camo_OCP  { displayName = "Men (OCP)"; };
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

        class CUP_RG31_M2;
        class CUP_B_RG31_M2_OD_USA : CUP_RG31_M2 {
            faction = "CFP_B_USARMY_WDL";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CFP_B_USARMY_US_Soldier";
        };
        class CUP_RG31E_M2;
        class CUP_B_RG31E_M2_OD_USA : CUP_RG31E_M2 {
            faction = "CFP_B_USARMY_WDL";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CFP_B_USARMY_US_Soldier";
        };
        class CUP_RG31_M2_GC;
        class CUP_B_RG31_M2_OD_GC_USA : CUP_RG31_M2_GC {
            faction = "CFP_B_USARMY_WDL";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CFP_B_USARMY_US_Soldier";
        };
        class CUP_RG31_Mk19;
        class CUP_B_RG31_Mk19_OD_USA : CUP_RG31_Mk19 {
            faction = "CFP_B_USARMY_WDL";
            editorSubCategory = "EdSubcat_Cars";
            crew = "CFP_B_USARMY_US_Soldier";
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

        //UCP

        class CUP_B_US_Soldier_UCP;
        class CFP_B_USARMY_US_Soldier : CUP_B_US_Soldier_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_ACOG_UCP;
        class CFP_B_USARMY_US_Soldier_ACOG : CUP_B_US_Soldier_ACOG_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_UAV_UCP;
        class CFP_B_USARMY_US_Soldier_UAV_UCP : CUP_B_US_Soldier_UAV_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Backpack_UCP;
        class CFP_B_USARMY_US_Soldier_Backpack : CUP_B_US_Soldier_Backpack_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AMG_UCP;
        class CFP_B_USARMY_US_Soldier_AMG : CUP_B_US_Soldier_AMG_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AAR_UCP;
        class CFP_B_USARMY_US_Soldier_AAR : CUP_B_US_Soldier_AAR_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AHAT_UCP;
        class CFP_B_USARMY_US_Soldier_AHAT : CUP_B_US_Soldier_AHAT_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AAT_UCP;
        class CFP_B_USARMY_US_Soldier_AAT : CUP_B_US_Soldier_AAT_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Light_UCP;
        class CFP_B_USARMY_US_Soldier_Light : CUP_B_US_Soldier_Light_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_GL_UCP;
        class CFP_B_USARMY_US_Soldier_GL : CUP_B_US_Soldier_GL_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Officer_UCP;
        class CFP_B_USARMY_US_Officer : CUP_B_US_Officer_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_SL_UCP;
        class CFP_B_USARMY_US_Soldier_SL : CUP_B_US_Soldier_SL_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_TL_UCP;
        class CFP_B_USARMY_US_Soldier_TL : CUP_B_US_Soldier_TL_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_LAT_UCP;
        class CFP_B_USARMY_US_Soldier_LAT : CUP_B_US_Soldier_LAT_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AT_UCP;
        class CFP_B_USARMY_US_Soldier_AT : CUP_B_US_Soldier_AT_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_HAT_UCP;
        class CFP_B_USARMY_US_Soldier_HAT : CUP_B_US_Soldier_HAT_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AA_UCP;
        class CFP_B_USARMY_US_Soldier_AA : CUP_B_US_Soldier_AA_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Medic_UCP;
        class CFP_B_USARMY_US_Medic : CUP_B_US_Medic_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AR_UCP;
        class CFP_B_USARMY_US_Soldier_AR : CUP_B_US_Soldier_AR_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_MG_UCP;
        class CFP_B_USARMY_US_Soldier_MG : CUP_B_US_Soldier_MG_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Spotter_UCP;
        class CFP_B_USARMY_US_Spotter : CUP_B_US_Spotter_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_UCP;
        class CFP_B_USARMY_US_Sniper : CUP_B_US_Sniper_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_M110_TWS_UCP;
        class CFP_B_USARMY_US_Sniper_M110_TWS : CUP_B_US_Sniper_M110_TWS_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_M107_UCP;
        class CFP_B_USARMY_US_Sniper_M107 : CUP_B_US_Sniper_M107_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Marksman_UCP;
        class CFP_B_USARMY_US_Soldier_Marksman : CUP_B_US_Soldier_Marksman_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Marksman_EBR_UCP;
        class CFP_B_USARMY_US_Soldier_Marksman_EBR : CUP_B_US_Soldier_Marksman_EBR_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_Sapper_UCP;
        class CFP_B_USARMY_US_Soldier_Engineer_Sapper : CUP_B_US_Soldier_Engineer_Sapper_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_EOD_UCP;
        class CFP_B_USARMY_US_Soldier_Engineer_EOD : CUP_B_US_Soldier_Engineer_EOD_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_UCP;
        class CFP_B_USARMY_US_Engineer : CUP_B_US_Soldier_Engineer_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Crew_UCP;
        class CFP_B_USARMY_US_Crew : CUP_B_US_Crew_UCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Pilot;
        class CFP_B_USARMY_US_Pilot : CUP_B_US_Pilot {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Pilot_Light;
        class CFP_B_USARMY_US_Pilot_Light : CUP_B_US_Pilot_Light {

            faction = "CFP_B_USARMY_WDL";

        };

        // OCP

        class CUP_B_US_Soldier_OCP;
        class CFP_B_USARMY_US_Soldier_OCP : CUP_B_US_Soldier_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_ACOG_OCP;
        class CFP_B_USARMY_US_Soldier_ACOG_OCP : CUP_B_US_Soldier_ACOG_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_UAV_OCP;
        class CFP_B_USARMY_US_Soldier_UAV_OCP : CUP_B_US_Soldier_UAV_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Backpack_OCP;
        class CFP_B_USARMY_US_Soldier_Backpack_OCP : CUP_B_US_Soldier_Backpack_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AMG_OCP;
        class CFP_B_USARMY_US_Soldier_AMG_OCP : CUP_B_US_Soldier_AMG_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AAR_OCP;
        class CFP_B_USARMY_US_Soldier_AAR_OCP : CUP_B_US_Soldier_AAR_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AHAT_OCP;
        class CFP_B_USARMY_US_Soldier_AHAT_OCP : CUP_B_US_Soldier_AHAT_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AAT_OCP;
        class CFP_B_USARMY_US_Soldier_AAT_OCP : CUP_B_US_Soldier_AAT_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Light_OCP;
        class CFP_B_USARMY_US_Soldier_Light_OCP : CUP_B_US_Soldier_Light_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_GL_OCP;
        class CFP_B_USARMY_US_Soldier_GL_OCP : CUP_B_US_Soldier_GL_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Officer_OCP;
        class CFP_B_USARMY_US_Officer_OCP : CUP_B_US_Officer_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_SL_OCP;
        class CFP_B_USARMY_US_Soldier_SL_OCP : CUP_B_US_Soldier_SL_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_TL_OCP;
        class CFP_B_USARMY_US_Soldier_TL_OCP : CUP_B_US_Soldier_TL_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_LAT_OCP;
        class CFP_B_USARMY_US_Soldier_LAT_OCP : CUP_B_US_Soldier_LAT_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AT_OCP;
        class CFP_B_USARMY_US_Soldier_AT_OCP : CUP_B_US_Soldier_AT_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_HAT_OCP;
        class CFP_B_USARMY_US_Soldier_HAT_OCP : CUP_B_US_Soldier_HAT_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AA_OCP;
        class CFP_B_USARMY_US_Soldier_AA_OCP : CUP_B_US_Soldier_AA_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Medic_OCP;
        class CFP_B_USARMY_US_Medic_OCP : CUP_B_US_Medic_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_AR_OCP;
        class CFP_B_USARMY_US_Soldier_AR_OCP : CUP_B_US_Soldier_AR_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_MG_OCP;
        class CFP_B_USARMY_US_Soldier_MG_OCP : CUP_B_US_Soldier_MG_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Spotter_OCP;
        class CFP_B_USARMY_US_Spotter_OCP : CUP_B_US_Spotter_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_OCP;
        class CFP_B_USARMY_US_Sniper_OCP : CUP_B_US_Sniper_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_M110_TWS_OCP;
        class CFP_B_USARMY_US_Sniper_M110_TWS_OCP : CUP_B_US_Sniper_M110_TWS_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Sniper_M107_OCP;
        class CFP_B_USARMY_US_Sniper_M107_OCP : CUP_B_US_Sniper_M107_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Marksman_OCP;
        class CFP_B_USARMY_US_Soldier_Marksman_OCP : CUP_B_US_Soldier_Marksman_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Marksman_EBR_OCP;
        class CFP_B_USARMY_US_Soldier_Marksman_EBR_OCP : CUP_B_US_Soldier_Marksman_EBR_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_Sapper_OCP;
        class CFP_B_USARMY_US_Soldier_Engineer_Sapper_OCP : CUP_B_US_Soldier_Engineer_Sapper_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_EOD_OCP;
        class CFP_B_USARMY_US_Soldier_Engineer_EOD_OCP : CUP_B_US_Soldier_Engineer_EOD_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Soldier_Engineer_OCP;
        class CFP_B_USARMY_US_Engineer_OCP : CUP_B_US_Soldier_Engineer_OCP {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_Crew_OCP;
        class CFP_B_USARMY_US_Crew_OCP : CUP_B_US_Crew_OCP {

            faction = "CFP_B_USARMY_WDL";

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

            uniformClass = "CFP_75th_CRYE_V1b_Sleeved";

            randomGearProbability = 100;
            randomWeaponProbability = 0;

            // FACEWEAR
            facewearList[] = {
                "CFP_Beard", 0.3,
                "CUP_G_Oakleys_Clr", 0.4,
                "CUP_G_Oakleys_Drk", 0.4,
                "CUP_G_Oakleys_Embr", 0.4,
                "G_Bandanna_blk", 0.15,
                "G_Bandanna_oli", 0.15,
                "G_Bandanna_khk", 0.15,
                "CUP_TK_NeckScarf", 0.15,
                "CUP_FR_NeckScarf", 0.15,
                "CUP_FR_NeckScarf2", 0.15
            };

            // UNIFORMS
            uniformList[] = {
                "CFP_75th_CRYE_V1b_Full", 0.2,
                "CFP_75th_CRYE_V2b_Full", 0.2,
                "CFP_75th_CRYE_V3b_Full", 0.2,
                "CFP_75th_CRYE_V4b_Full", 0.2,
                "CFP_75th_CRYE_V1b_Sleeved", 0.2,
                "CFP_75th_CRYE_V2b_Sleeved", 0.2,
                "CFP_75th_CRYE_V3b_Sleeved", 0.2,
                "CFP_75th_CRYE_V4b_Sleeved", 0.2,
                "CFP_75th_CRYEG3_V4", 0.2
            };

            linkedItems[] = {"CUP_V_B_Ciras_MCam","CUP_H_OpsCore_Covered_MCAM_US_SF","ItemGPS", "ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS15_black"};
            respawnLinkedItems[] = {"CUP_V_B_Ciras_MCam","CUP_H_OpsCore_Covered_MCAM_US_SF","ItemGPS", "ItemMap","ItemCompass","ItemWatch","ItemRadio","CUP_NVG_PVS15_black"};

            weapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};
            respawnWeapons[] = {"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_hgun_M9","CUP_Vector21Nite"};

            magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};
            respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9"};

            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk17_CQC_SFG_Aim_mfsup","CUP_muzzle_mfsup_SCAR_H","","CUP_optic_CompM4",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CFP_75th_CRYE_V1b_Sleeved",{{"FirstAidKit",1},{"CUP_20Rnd_762x51_B_SCAR",1,20},{"SmokeShellRed",1,1},{"B_IR_Grenade",1,1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_B_Ciras_MCam",{{"CUP_20Rnd_762x51_B_SCAR",3,20},{"CUP_HandGrenade_M67",1,1},{"SmokeShellGreen",1,1}}},{},"CUP_H_OpsCore_Covered_MCAM_US_SF","G_Bandanna_khk",{"CUP_Vector21Nite","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS15_black"}};

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };

            };

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CUP_B_US_SpecOps;
        class CFP_B_USARMY_US_SpecOps : CUP_B_US_SpecOps {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_UAV;
        class CFP_B_USARMY_US_SpecOps_UAV : CUP_B_US_SpecOps_UAV {
            editorPreview = \x\cfp\addons\b_usarmy_wdl\data\preview\CFP_B_USARMY_US_SpecOps_UAV.JPG;

            uavHacker = 1;
            faction = "CFP_B_USARMY_WDL";

            backpack = "B_UAV_01_backpack_F";

        };

        class CUP_B_US_SpecOps_TL;
        class CFP_B_USARMY_US_SpecOps_TL : CUP_B_US_SpecOps_TL {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_Medic;
        class CFP_B_USARMY_US_SpecOps_Medic : CUP_B_US_SpecOps_Medic {

            attendant = 1;
            icon = "iconManMedic";
            picture = "pictureHeal";
            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_Assault;
        class CFP_B_USARMY_US_SpecOps_Assault : CUP_B_US_SpecOps_Assault {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_SD;
        class CFP_B_USARMY_US_SpecOps_SD : CUP_B_US_SpecOps_SD {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_MG;
        class CFP_B_USARMY_US_SpecOps_MG : CUP_B_US_SpecOps_MG {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_AR;
        class CFP_B_USARMY_US_SpecOps_AR : CUP_B_US_SpecOps_AR {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_Night;
        class CFP_B_USARMY_US_SpecOps_Night : CUP_B_US_SpecOps_Night {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_M;
        class CFP_B_USARMY_US_SpecOps_M : CUP_B_US_SpecOps_M {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_M14;
        class CFP_B_USARMY_US_SpecOps_M14 : CUP_B_US_SpecOps_M14 {

            faction = "CFP_B_USARMY_WDL";

        };

        class CUP_B_US_SpecOps_JTAC;
        class CFP_B_USARMY_US_SpecOps_JTAC : CUP_B_US_SpecOps_JTAC {

            faction = "CFP_B_USARMY_WDL";

        };

        // Gunners
        class CFP_B_USARMY_Gunner_M2_High_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [MG High]";

            backpack = "CUP_B_M2_Gun_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Gunner_M2_Low_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [MG Low]";
            backpack = "CUP_B_M2_Gun_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Gun_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_M2_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [MG]";
            backpack = "CUP_B_M2_Tripod_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Tripod_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_M2Low_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [MG Low]";
            backpack = "CUP_B_M2_Minitripod_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M2_Minitripod_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};


            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Gunner_TOW_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Gunner [AT]";
            backpack = "CUP_B_Tow_Gun_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_Tow_Gun_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_TOW_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [AT]";
            backpack = "CUP_B_TOW_Tripod_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_TOW_Tripod_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;
        };

        class CFP_B_USARMY_Gunner_Mortar_WDL_01 : CFP_B_USARMY_US_Soldier {

            displayName = "Gunner [Mortar]";
            backpack = "CUP_B_M252_Gun_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M252_Gun_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        class CFP_B_USARMY_Asst_Gunner_Mortar_WDL_01 : CFP_B_USARMY_US_Soldier {
            displayName = "Asst. Gunner [Mortar]";
            backpack = "CUP_B_M252_Bipod_Bag";
            weapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            respawnWeapons[] = {"CUP_arifle_M4A1_CCO_Laser","Throw","Put"};
            linkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            respawnLinkedItems[] = {"CUP_V_B_IOTV_UCP_Rifleman_USArmy","CUP_H_USArmy_HelmetACH_Headset_UCP","ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"};
            magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"};
            ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_CCO_Laser","","CUP_acc_ANPEQ_2","CUP_optic_CompM2_Black",{"CUP_30Rnd_556x45_Stanag",30},{},""},{},{},{"CUP_U_B_USArmy_ACU_Gloves_UCP",{{"FirstAidKit",1},{"CUP_30Rnd_556x45_Stanag",1,30},{"CUP_HandGrenade_M67",1,1}}},{"CUP_V_B_IOTV_UCP_Rifleman_USArmy",{{"CUP_30Rnd_556x45_Stanag",6,30},{"SmokeShell",1,1}}},{"CUP_B_M252_Bipod_Bag",{}},"CUP_H_USArmy_HelmetACH_Headset_UCP","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS14_Hide"}};

            // custom attributes (do not delete)
            ALiVE_orbatCreator_owned = 1;

        };

        // OCP Gunners

        class CFP_B_USARMY_Gunner_M2_High_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Gunner [MG High]";
            backpack = "CUP_B_M2_Gun_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Gunner_M2_Low_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Gunner [MG Low]";
            backpack = "CUP_B_M2_Gun_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Asst_Gunner_M2_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Asst. Gunner [MG]";
            backpack = "CUP_B_M2_Tripod_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Asst_Gunner_M2Low_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Asst. Gunner [MG Low]";
            backpack = "CUP_B_M2_Minitripod_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Gunner_TOW_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Gunner [AT]";
            backpack = "CUP_B_Tow_Gun_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Asst_Gunner_TOW_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Asst. Gunner [AT]";
            backpack = "CUP_B_TOW_Tripod_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Gunner_Mortar_WDL_OCP : CUP_B_US_Soldier_OCP {

            displayName = "Gunner [Mortar]";
            backpack = "CUP_B_M252_Gun_Bag";
            faction = "CFP_B_USARMY_WDL";

        };

        class CFP_B_USARMY_Asst_Gunner_Mortar_WDL_OCP : CUP_B_US_Soldier_OCP {
            displayName = "Asst. Gunner [Mortar]";
            backpack = "CUP_B_M252_Bipod_Bag";
            faction = "CFP_B_USARMY_WDL";

        };
};