#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        units[] = {};
		weapons[] = {
			"CFP_AK12_Woodland",
			"CFP_AK12_GL_Woodland",
			"CFP_AK12_Desert",
			"CFP_AK12_GL_Desert",
    			"CFP_PKP_Woodland",
			"CFP_PKP_Desert",
		"CFP_Negev_Black",
		"CFP_EBR_sage_F",
		"CFP_EBR_des_F",
		"CFP_EBR_blk_F",
		"CFP_EBR_wdl_F",
    		"CFP_Tavor_Black",
    		"CFP_Tavor_Black_Long",
    		"CFP_Tavor_Black_GL"
    		};
        author = MODULE_AUTHOR;
        authors[] = {"AccuracyThruVolume", "Tupolov", "AuburnAlumni"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main","CUP_Weapons_M16","asdg_jointrails"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
#include "CfgJointRails.hpp"

