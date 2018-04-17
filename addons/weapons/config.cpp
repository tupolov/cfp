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
			"CFP_M4A3_Black"
		};
        author = MODULE_AUTHOR;
        authors[] = {"AccuracyThruVolume", "Tupolov", "AuburnAlumni"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"

