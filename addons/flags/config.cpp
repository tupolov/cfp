#include "script_component.hpp"

class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F"};
        VERSION_CONFIG;
	};
};

#include "CfgVehicles.hpp"

