#include "script_component.hpp"

class CfgPatches
{
   class ADDON
   {
    units[] = {};
    weapons[] = {};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig","AccuracyThruVolume","Tupolov","AuburnAlumni"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main"};
        VERSION_CONFIG;
  };
};

#include "CfgVehicles.hpp"