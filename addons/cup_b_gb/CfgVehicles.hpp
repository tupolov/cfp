class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_Camo_MTP { displayName = "Men (MTP)";  };
    class CFP_EdSubcat_Personnel_Camo_DDPM  { displayName = "Men (DDPM)"; };
};

class CfgVehicles
{

    // Override CUP faction editor category

    class SoldierWB;
    class CUP_BAF_Soldier_MTP_Base: SoldierWB
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_BAF_Soldier_DDPM_Base: SoldierWB
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    // Gunners
    class CUP_B_BAF_Soldier_MTP;
    class CUP_B_GB_Gunner_M2_High_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Gunner [MG High]";
        backpack = "CUP_B_M2_Gun_Bag";
    };

    class CUP_B_GB_Gunner_M2_Low_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Gunner [MG Low]";
        backpack = "CUP_B_M2_Gun_Bag";
    };

    class CUP_B_GB_Asst_Gunner_M2_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Asst. Gunner [MG]";
        backpack = "CUP_B_M2_Tripod_Bag";
    };

    class CUP_B_GB_Asst_Gunner_M2Low_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Asst. Gunner [MG Low]";
        backpack = "CUP_B_M2_Minitripod_Bag";
    };

    class CUP_B_GB_Gunner_TOW_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Gunner [AT]";
        backpack = "CUP_B_Tow_Gun_Bag";
    };

    class CUP_B_GB_Asst_Gunner_TOW_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Asst. Gunner [AT]";
        backpack = "CUP_B_TOW_Tripod_Bag";
    };

    class CUP_B_GB_Gunner_Mortar_DES_01 : CUP_B_BAF_Soldier_MTP {

        displayName = "Gunner [Mortar]";
        backpack = "CUP_B_M252_Gun_Bag";
    };

    class CUP_B_GB_Asst_Gunner_Mortar_DES_01 : CUP_B_BAF_Soldier_MTP {
        displayName = "Asst. Gunner [Mortar]";
        backpack = "CUP_B_M252_Bipod_Bag";
    };
};

