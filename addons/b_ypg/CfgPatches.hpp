class DefaultEventhandlers;

class CfgPatches {
    class ADDON {
        units[] = {
            "cfp_b_ypg_leader",
            "cfp_b_ypg_rifleman",
            "cfp_b_ypg_machinegunner",
            "cfp_b_ypg_sniper",
            "cfp_b_ypg_at",
            "cfp_b_ypg_medic",
            "cfp_b_ypg_crewman",
            "cfp_b_ypg_rifleman_dshkm",
            "cfp_b_ypg_rifleman_kord",
            "cfp_b_ypg_rifleman_podnos",
            "cfp_b_ypg_rifleman_ags30",
            "cfp_b_ypg_rifleman_metis",
            "cfp_b_ypg_rifleman_spg9",
            "cfp_b_ypg_offroad",
            "cfp_b_ypg_offroad_flag",
            "cfp_b_ypg_offroad_M2",
            "cfp_b_ypg_offroad_M2_flag"
        };
		weapons[] = {"YPG_uniform","YPG_shemag"};
        requiredAddons[] = {
            "A3_Dubbing_Radio_F","A3_Characters_F","A3_Characters_F_Common","A3_Characters_F_Civil","A3_Characters_F_Gamma","A3_Characters_F_Bootcamp","A3_Characters_F_BLUFOR",
            "A3_Soft_F_Offroad_01"
        };
        author = MODULE_AUTHOR;
        authors[] = {"AccuracyThruVolume"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};
