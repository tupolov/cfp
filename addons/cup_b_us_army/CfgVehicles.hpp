class CfgVehicles {

        class CUP_B_M163_USA;
        class CFP_B_USARMY_M163_DES_01 : CUP_B_M163_USA {
            author = "Tupolov";
            scope = 2;
            scopeCurator = 2;
            displayName = "M163A1 VADS";
            side = 1;
            faction = "CUP_B_US_Army";
            crew = "CUP_B_US_Crew";
            typicalCargo[] = {"CUP_B_US_Crew","CUP_B_US_Crew","CUP_B_US_Crew","CUP_B_US_Crew"}; //Placeholder
            hiddenSelectionsTextures[] =
            {
                "x\cfp\addons\cup_b_us_army\data\m163_vulcan_01_desert_co.paa",
                "cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m163_vulcansp_02_co.paa"
            };
            editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_M113\Data\preview\CUP_B_M163_USA.jpg";
        };

        class CUP_B_USArmy_Soldier_01;
        class CUP_B_US_SpecOps: CUP_B_USArmy_Soldier_01
        {
            displayName = "Delta - Operator";
        };

        class CUP_B_USArmy_Soldier_03;
        class CUP_B_US_SpecOps_UAV: CUP_B_USArmy_Soldier_03
        {
            displayName = "Delta - UAV Controller";
        };

        class CUP_B_USArmy_Soldier_02;
        class CUP_B_US_SpecOps_TL: CUP_B_USArmy_Soldier_02
        {
            displayName = "Delta - Team Leader";
        };

        class CUP_B_US_SpecOps_Medic: CUP_B_USArmy_Soldier_01
        {
            displayName = "Delta - Medic";
        };

        class CUP_B_US_SpecOps_Assault: CUP_B_US_SpecOps
        {
            displayName = "Delta - Operator (Assault)";
        };

        class CUP_B_US_SpecOps_SD: CUP_B_US_SpecOps
        {
            displayName = "Delta - Operator (Silenced)";
        };

        class CUP_B_US_SpecOps_MG: CUP_B_US_SpecOps
        {
            displayName = "Delta - Machinegunner";
        };

        class CUP_B_US_SpecOps_AR: CUP_B_USArmy_Soldier_01
        {
            displayName = "Delta - Automatic Rifleman";
        };

        class CUP_B_US_SpecOps_Night: CUP_B_US_SpecOps
        {
            displayName = "Delta - Operator (Night Assault)";
        };
        class CUP_B_US_SpecOps_M: CUP_B_US_SpecOps
        {
            displayName = "Delta - Marksman";
        };
        class CUP_B_US_SpecOps_M14: CUP_B_US_SpecOps
        {
            displayName = "Delta - Operator (M14)";
        };

        class CUP_B_US_SpecOps_JTAC: CUP_B_USArmy_Soldier_02
        {
            displayName = "Delta - Forward Air Controller";
        };
};