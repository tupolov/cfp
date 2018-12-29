class DefaultEventhandlers;

class CfgPatches {
    class CFP_B_IQPOLICE {
        units[] = {
            "cfp_b_iqpolice_officer",
            "cfp_b_iqpolice_policeman",
            "cfp_b_iqpolice_offroad",
            "cfp_b_iqpolice_offroad_M2",
            "cfp_b_iqpolice_HMMWV_M2",
            "cfp_b_iqpolice_hmmwv_dshkm",
            "cfp_b_iqpolice_Ural"
        };
		weapons[] = {"IP_uniform_officer_b","IP_uniform_policeman_b"};

        requiredAddons[] = {
        	"A3_Dubbing_Radio_F","A3_Characters_F","A3_Characters_F_Common","A3_Characters_F_Civil","A3_Characters_F_Gamma","A3_Characters_F_Bootcamp","A3_Characters_F_BLUFOR",
            "cfp_main",
            "CUP_WheeledVehicles_T810",
            "A3_Soft_F",
            "A3_Soft_F_Exp_Offroad_02",
            "A3_Soft_F_Offroad_01",
            "CUP_WheeledVehicles_HMMWV",
            "cfp_vehicles",
            "CUP_WheeledVehicles_Ural"
        };
        author = MODULE_AUTHOR;
        authors[] = {"AccuracyThruVolume"};
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};
