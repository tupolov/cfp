#include "script_component.hpp"

class CfgPatches
{
	class CFP_Glasses
    {
        units[] = {};
		weapons[] = {};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main","CFP_Models"};
        VERSION_CONFIG;
    };
};		

#include "CfgGlasses.hpp"