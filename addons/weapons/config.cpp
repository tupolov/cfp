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
    		"CFP_Tavor_Black",
    		"CFP_Tavor_Black_Long",
    		"CFP_Tavor_Black_GL",
    		"CFP_optic_ELCAN_SpecterDR_Black"
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

