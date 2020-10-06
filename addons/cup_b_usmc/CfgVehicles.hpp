class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_MARPAT_W { displayName = "Men (MARPAT - Woodland)";  };
};

class CfgVehicles {

    // Gunners
    	class CUP_B_USMC_Soldier;
        class CUP_B_USMC_Gunner_M2_High_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Gunner [MG High]";
            backpack = "CUP_B_M2_Gun_Bag";
        };

        class CUP_B_USMC_Gunner_M2_Low_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Gunner [MG Low]";
            backpack = "CUP_B_M2_Gun_Bag";
        };

        class CUP_B_USMC_Asst_Gunner_M2_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Asst. Gunner [MG]";
            backpack = "CUP_B_M2_Tripod_Bag";
        };

        class CUP_B_USMC_Asst_Gunner_M2Low_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Asst. Gunner [MG Low]";
            backpack = "CUP_B_M2_Minitripod_Bag";
        };

        class CUP_B_USMC_Gunner_TOW_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Gunner [AT]";
            backpack = "CUP_B_Tow_Gun_Bag";
        };

        class CUP_B_USMC_Asst_Gunner_TOW_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Asst. Gunner [AT]";
            backpack = "CUP_B_TOW_Tripod_Bag";
        };

        class CUP_B_USMC_Gunner_Mortar_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Gunner [Mortar]";
            backpack = "CUP_B_M252_Gun_Bag";
        };

        class CUP_B_USMC_Asst_Gunner_Mortar_WDL_01 : CUP_B_USMC_Soldier {
            displayName = "Asst. Gunner [Mortar]";
            backpack = "CUP_B_M252_Bipod_Bag";
        };
};