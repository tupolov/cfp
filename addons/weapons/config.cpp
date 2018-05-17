#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        units[] = {};
		weapons[] = {
			"CFP_Tavor_Black",
            		"CFP_Tavor_Black_Long",
           		"CFP_Tavor_Black_GL",
			"CFP_M4A3_Black",
			"CFP_AK12_Woodland",
			"CFP_AK12_GL_Woodland",
			"CFP_AK12_Desert",
			"CFP_AK12_GL_Desert",
			"CFP_PKP_Woodland",
			"CFP_PKP_Desert"
		};
        author = MODULE_AUTHOR;
        authors[] = {"AccuracyThruVolume", "Tupolov", "AuburnAlumni"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

