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
    class CUP_Creatures_Military_BAF_Soldier_Base: SoldierWB
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_04_MTP: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_05_MTP: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_06_MTP: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_07_MTP : CUP_Creatures_Military_BAF_Soldier_Base
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_08_MTP : CUP_Creatures_Military_BAF_Soldier_Base
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_04_DDPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    class CUP_B_BAF_Soldier_05_DDPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    class CUP_B_BAF_Soldier_06_DDPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    class CUP_B_BAF_Soldier_07_DDPM : CUP_Creatures_Military_BAF_Soldier_Base
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    class CUP_B_BAF_Soldier_08_DDPM : CUP_Creatures_Military_BAF_Soldier_Base
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };

    class CUP_B_BAF_Soldier_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_GL_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_Night_MTP : CUP_B_BAF_Soldier_05_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_Light_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_Backpack_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AAR_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AMG_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AAT_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AHAT_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AAA_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Officer_MTP : CUP_B_BAF_Soldier_05_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_SL_MTP : CUP_B_BAF_Soldier_08_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_TL_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AR_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_MG_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AT_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_HAT_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_AA_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_Marksman_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_scout_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Sniper_MTP : CUP_B_BAF_Soldier_04_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Sniper_AS50_MTP : CUP_B_BAF_Soldier_04_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Sniper_AS50_TWS_MTP : CUP_B_BAF_Sniper_AS50_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Spotter_MTP : CUP_B_BAF_Soldier_04_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Spotter_L85TWS_MTP : CUP_B_BAF_Spotter_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Pilot_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Crew_MTP : CUP_B_BAF_Soldier_06_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Medic_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Soldier_JTAC_MTP : CUP_B_BAF_Soldier_07_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };
    class CUP_B_BAF_Engineer_MTP : CUP_B_BAF_Soldier_05_MTP
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MTP";
    };

    class CUP_B_BAF_Soldier_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_GL_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_Night_DDPM : CUP_B_BAF_Soldier_05_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_Light_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_Backpack_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AAR_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AMG_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AAT_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AHAT_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AAA_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Officer_DDPM : CUP_B_BAF_Soldier_05_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_SL_DDPM : CUP_B_BAF_Soldier_08_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_TL_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AR_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_MG_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AT_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_HAT_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_AA_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_Marksman_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_scout_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Sniper_DDPM : CUP_B_BAF_Soldier_04_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Sniper_AS50_DDPM : CUP_B_BAF_Soldier_04_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Sniper_AS50_TWS_DDPM : CUP_B_BAF_Sniper_AS50_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Spotter_DDPM : CUP_B_BAF_Soldier_04_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Spotter_L85TWS_DDPM : CUP_B_BAF_Spotter_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Pilot_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Crew_DDPM : CUP_B_BAF_Soldier_06_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Medic_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Soldier_JTAC_DDPM : CUP_B_BAF_Soldier_07_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
    class CUP_B_BAF_Engineer_DDPM : CUP_B_BAF_Soldier_05_DDPM
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_DDPM";
    };
};

