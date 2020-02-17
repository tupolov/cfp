#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ALiVE_main"};
        VERSION_CONFIG;
        author = MODULE_AUTHOR;
        authors[] = {"Tupolov"};
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "if (isServer) then {waitUntil {!isNil 'ALiVE_STATIC_DATA_LOADED'}; call compile (preprocessFileLineNumbers 'x\cfp\addons\alive_logistics\CFP.sqf');};";
    };
};