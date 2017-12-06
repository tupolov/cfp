class CfgEditorSubCategories
{

};

class CfgVehicles {
// Gunners
		class CUP_O_RU_Soldier_EMR;
        class CUP_O_RU_Gunner_KORD_01 : CUP_O_RU_Soldier_EMR {
            displayName = "Gunner [KORD]";

            backpack = "CUP_B_KORD_Gun_Bag";
        };

        class CUP_O_RU_Asst_Gunner_KORD_01 : CUP_O_RU_Soldier_EMR {
            displayName = "Asst. Gunner [KORD]";

            backpack = "CUP_B_KORD_Tripod_Bag";
        };

        class CUP_O_RU_Gunner_METIS_01 : CUP_O_RU_Soldier_EMR {
            displayName = "Gunner [AT]";

            backpack = "CUP_B_METIS_Gun_Bag";

        };

        class CUP_O_RU_Asst_Gunner_METIS_01 : CUP_O_RU_Soldier_EMR {
            displayName = "Asst. Gunner [AT]";

            backpack = "CUP_B_METIS_Tripod_Bag";
        };

        class CUP_O_RU_Gunner_Mortar_01 : CUP_O_RU_Soldier_EMR {

            backpack = "CUP_B_Podnos_Gun_Bag";
            displayName = "Gunner [Mortar]";
        };

        class CUP_O_RU_Asst_Gunner_Mortar_01 : CUP_O_RU_Soldier_EMR {
            displayName = "Asst. Gunner [Mortar]";

            backpack = "CUP_B_Podnos_Bipod_Bag";
        };
};