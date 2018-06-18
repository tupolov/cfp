#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Loadorder",
            "A3_Data_F_Curator_Loadorder",
            "A3_Data_F_Kart_Loadorder",
            "A3_Data_F_Bootcamp_Loadorder",
            "A3_Data_F_Heli_Loadorder",
            "A3_Data_F_Mark_Loadorder",
            "A3_Data_F_Exp_A_Loadorder",
            "A3_Data_F_Exp_B_Loadorder",
            "A3_Data_F_Exp_Loadorder",
            "A3_Data_F_Jets_Loadorder",
            "A3_Data_F_Argo_Loadorder",
            "A3_Data_F_Patrol_Loadorder",
            "A3_Data_F_Orange_Loadorder",
            "A3_Data_F_Tacops_Loadorder",
            "A3_Data_F_Tank_Loadorder",

            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr",

            // CUP
            "CUP_BaseConfigs",
            "CUP_Creatures_People_Core",
            "CUP_Vehicles_Core",
            "CUP_Weapons_WeaponsCore"
        };
        author = CSTRING(CFPTeam);
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        action = "https://github.com/tupolov/cfp";
        actionName = "GitHub";
        author = "CFP Team";
        description = "CFP Issue Tracker: https://github.com/tupolov/cfp/issues";
        dir = "@cfp";
        name = "Community Factions Project";
        overview = "Community Factions Project, also known as CFP, delivers a huge number of real world factions in order to improve the diversity, realism and authenticity of Arma 3.";
        tooltip = "CFP";
        tooltipOwned = "CFP Owned";
        logo = "logo_cfp_ca.paa";
        logoOver = "logo_cfp_over_ca.paa";
        logoSmall = "logo_cfp_ca.paa";
        picture = "\x\cfp\addons\main\data\logos\picture_cfp_ca.paa";
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgSettings.hpp"
#include "Cfg3den.hpp"

