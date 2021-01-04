//////////////////////////////////////////////////////////////////////////////////


#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

#include "\x\cfp\addons\vehicles\inventory_macro\main.hpp"

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_Soldier_F;
    class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
    class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_B_MH47E_USA;
    class CUP_B_MH47E_USA_OCimport_01 : CUP_B_MH47E_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH47E_USA_OCimport_02 : CUP_B_MH47E_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class RightDoorGun;
            class CoPilotObs;
        };
    };

    class CUP_B_MH6M_USA;
    class CUP_B_MH6M_USA_OCimport_01 : CUP_B_MH6M_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH6M_USA_OCimport_02 : CUP_B_MH6M_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_B_MH6J_USA;
    class CUP_B_MH6J_USA_OCimport_01 : CUP_B_MH6J_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH6J_USA_OCimport_02 : CUP_B_MH6J_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_B_MH6M_OBS_USA;
    class CUP_B_MH6M_OBS_USA_OCimport_01 : CUP_B_MH6M_OBS_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH6M_OBS_USA_OCimport_02 : CUP_B_MH6M_OBS_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_B_MH6J_OBS_USA;
    class CUP_B_MH6J_OBS_USA_OCimport_01 : CUP_B_MH6J_OBS_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH6J_OBS_USA_OCimport_02 : CUP_B_MH6J_OBS_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
        };
    };

    class CUP_B_AH6M_USA;
    class CUP_B_AH6M_USA_OCimport_01 : CUP_B_AH6M_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_AH6M_USA_OCimport_02 : CUP_B_AH6M_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class CUP_B_AH6J_USA;
    class CUP_B_AH6J_USA_OCimport_01 : CUP_B_AH6J_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_AH6J_USA_OCimport_02 : CUP_B_AH6J_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class CUP_B_UH60M_US;
    class CUP_B_UH60M_US_OCimport_01 : CUP_B_UH60M_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_UH60M_US_OCimport_02 : CUP_B_UH60M_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class CUP_B_UH60M_FFV_US;
    class CUP_B_UH60M_FFV_US_OCimport_01 : CUP_B_UH60M_FFV_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_UH60M_FFV_US_OCimport_02 : CUP_B_UH60M_FFV_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_B_UH60M_Unarmed_US;
    class CUP_B_UH60M_Unarmed_US_OCimport_01 : CUP_B_UH60M_Unarmed_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_UH60M_Unarmed_US_OCimport_02 : CUP_B_UH60M_Unarmed_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class CUP_B_UH60M_Unarmed_FFV_US;
    class CUP_B_UH60M_Unarmed_FFV_US_OCimport_01 : CUP_B_UH60M_Unarmed_FFV_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_UH60M_Unarmed_FFV_US_OCimport_02 : CUP_B_UH60M_Unarmed_FFV_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_B_UH60M_Unarmed_FFV_MEV_US;
    class CUP_B_UH60M_Unarmed_FFV_MEV_US_OCimport_01 : CUP_B_UH60M_Unarmed_FFV_MEV_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_UH60M_Unarmed_FFV_MEV_US_OCimport_02 : CUP_B_UH60M_Unarmed_FFV_MEV_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_B_AH64D_DL_USA;
    class CUP_B_AH64D_DL_USA_OCimport_01 : CUP_B_AH64D_DL_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_AH64D_DL_USA_OCimport_02 : CUP_B_AH64D_DL_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_CH47F_USA;
    class CUP_B_CH47F_USA_OCimport_01 : CUP_B_CH47F_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_CH47F_USA_OCimport_02 : CUP_B_CH47F_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class RightDoorGun;
            class BackDoorGun;
            class CopilotTurret;
        };
    };

    class CUP_B_CH47F_VIV_USA;
    class CUP_B_CH47F_VIV_USA_OCimport_01 : CUP_B_CH47F_VIV_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_CH47F_VIV_USA_OCimport_02 : CUP_B_CH47F_VIV_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class RightDoorGun;
            class CopilotTurret;
        };
    };

    class CUP_B_MH60L_DAP_4x_US;
    class CUP_B_MH60L_DAP_4x_US_OCimport_01 : CUP_B_MH60L_DAP_4x_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH60L_DAP_4x_US_OCimport_02 : CUP_B_MH60L_DAP_4x_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class CUP_B_MH60L_DAP_2x_US;
    class CUP_B_MH60L_DAP_2x_US_OCimport_01 : CUP_B_MH60L_DAP_2x_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_MH60L_DAP_2x_US_OCimport_02 : CUP_B_MH60L_DAP_2x_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
            class MainTurret;
            class RightDoorGun;
        };
    };

    class CUP_B_M1126_ICV_M2_Desert;
    class CUP_B_M1126_ICV_M2_Desert_OCimport_01 : CUP_B_M1126_ICV_M2_Desert { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1126_ICV_M2_Desert_OCimport_02 : CUP_B_M1126_ICV_M2_Desert_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1126_ICV_M2_Woodland_Slat;
    class CUP_B_M1126_ICV_M2_Woodland_Slat_OCimport_01 : CUP_B_M1126_ICV_M2_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1126_ICV_M2_Woodland_Slat_OCimport_02 : CUP_B_M1126_ICV_M2_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1126_ICV_MK19_Desert;
    class CUP_B_M1126_ICV_MK19_Desert_OCimport_01 : CUP_B_M1126_ICV_MK19_Desert { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1126_ICV_MK19_Desert_OCimport_02 : CUP_B_M1126_ICV_MK19_Desert_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1126_ICV_MK19_Woodland_Slat;
    class CUP_B_M1126_ICV_MK19_Woodland_Slat_OCimport_01 : CUP_B_M1126_ICV_MK19_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1126_ICV_MK19_Woodland_Slat_OCimport_02 : CUP_B_M1126_ICV_MK19_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1130_CV_M2_Desert;
    class CUP_B_M1130_CV_M2_Desert_OCimport_01 : CUP_B_M1130_CV_M2_Desert { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1130_CV_M2_Desert_OCimport_02 : CUP_B_M1130_CV_M2_Desert_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1130_CV_M2_Woodland_Slat;
    class CUP_B_M1130_CV_M2_Woodland_Slat_OCimport_01 : CUP_B_M1130_CV_M2_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1130_CV_M2_Woodland_Slat_OCimport_02 : CUP_B_M1130_CV_M2_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1135_ATGMV_Desert;
    class CUP_B_M1135_ATGMV_Desert_OCimport_01 : CUP_B_M1135_ATGMV_Desert { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1135_ATGMV_Desert_OCimport_02 : CUP_B_M1135_ATGMV_Desert_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1135_ATGMV_Woodland_Slat;
    class CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_01 : CUP_B_M1135_ATGMV_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_02 : CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1128_MGS_Woodland;
    class CUP_B_M1128_MGS_Woodland_OCimport_01 : CUP_B_M1128_MGS_Woodland { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1128_MGS_Woodland_OCimport_02 : CUP_B_M1128_MGS_Woodland_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics;
        };
    };

    class CUP_B_M1128_MGS_Woodland_Slat;
    class CUP_B_M1128_MGS_Woodland_Slat_OCimport_01 : CUP_B_M1128_MGS_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1128_MGS_Woodland_Slat_OCimport_02 : CUP_B_M1128_MGS_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderOptics;
        };
    };

    class CUP_B_M1133_MEV_Woodland;
    class CUP_B_M1133_MEV_Woodland_OCimport_01 : CUP_B_M1133_MEV_Woodland { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1133_MEV_Woodland_OCimport_02 : CUP_B_M1133_MEV_Woodland_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_B_M1133_MEV_Woodland_Slat;
    class CUP_B_M1133_MEV_Woodland_Slat_OCimport_01 : CUP_B_M1133_MEV_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1133_MEV_Woodland_Slat_OCimport_02 : CUP_B_M1133_MEV_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class ObsTurret;
            class CommanderTurret;
        };
    };

    class CUP_HMMWV_SOV_Base;
    class CUP_HMMWV_SOV_Base_OCimport_01 : CUP_HMMWV_SOV_Base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_HMMWV_SOV_Base_OCimport_02 : CUP_HMMWV_SOV_Base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class SideTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_HMMWV_SOV_M2_Base;
    class CUP_HMMWV_SOV_M2_Base_OCimport_01 : CUP_HMMWV_SOV_M2_Base { scope = 0; class EventHandlers; class Turrets; };
    class CUP_HMMWV_SOV_M2_Base_OCimport_02 : CUP_HMMWV_SOV_M2_Base_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class SideTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_B_M1165_GMV_WDL_USA;
    class CUP_B_M1165_GMV_WDL_USA_OCimport_01 : CUP_B_M1165_GMV_WDL_USA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1165_GMV_WDL_USA_OCimport_02 : CUP_B_M1165_GMV_WDL_USA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_LSV_01_unarmed_F;
    class B_LSV_01_unarmed_F_OCimport_01 : B_LSV_01_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class B_LSV_01_unarmed_F_OCimport_02 : B_LSV_01_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class B_Quadbike_01_F;
    class B_Quadbike_01_F_OCimport_01 : B_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_Quadbike_01_F_OCimport_02 : B_Quadbike_01_F_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_B_M1129_MC_MK19_Woodland;
    class CUP_B_M1129_MC_MK19_Woodland_OCimport_01 : CUP_B_M1129_MC_MK19_Woodland { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1129_MC_MK19_Woodland_OCimport_02 : CUP_B_M1129_MC_MK19_Woodland_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class ObsTurret;
        };
    };

    class CUP_B_M1129_MC_MK19_Woodland_Slat;
    class CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_01 : CUP_B_M1129_MC_MK19_Woodland_Slat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_02 : CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class ObsTurret;
        };
    };

    class CUP_B_A10_DYN_USA;
    class CUP_B_A10_DYN_USA_OCimport_01 : CUP_B_A10_DYN_USA { class EventHandlers; };
    class CUP_B_A10_DYN_USA_OCimport_02 : CUP_B_A10_DYN_USA_OCimport_01 {
        class EventHandlers;
        };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_Truck_01_Repair_F;
    class B_Truck_01_Repair_F_OCimport_01 : B_Truck_01_Repair_F { scope = 0; class EventHandlers; };
    class B_Truck_01_Repair_F_OCimport_02 : B_Truck_01_Repair_F_OCimport_01 { scope = 0; class EventHandlers; };

    class B_Truck_01_ammo_F;
    class B_Truck_01_ammo_F_OCimport_01 : B_Truck_01_ammo_F { scope = 0; class EventHandlers; };
    class B_Truck_01_ammo_F_OCimport_02 : B_Truck_01_ammo_F_OCimport_01 { scope = 0; class EventHandlers; };

    class B_Truck_01_fuel_F;
    class B_Truck_01_fuel_F_OCimport_01 : B_Truck_01_fuel_F { scope = 0; class EventHandlers; };
    class B_Truck_01_fuel_F_OCimport_02 : B_Truck_01_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_B_USMC_DYN_MQ9;
    class CUP_B_USMC_DYN_MQ9_OCimport_01 : CUP_B_USMC_DYN_MQ9 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_USMC_DYN_MQ9_OCimport_02 : CUP_B_USMC_DYN_MQ9_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class CUP_B_M2StaticMG_USMC;
    class CUP_B_M2StaticMG_MiniTripod_USMC;
    class CUP_B_M252_USMC;

    class CFP_B_USRANGERS_Rifleman_WDL_01 : B_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Rifleman_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";

        identityTypes[] = {"Head_NATO","LanguageENG_F","CFP_G_USRANGERS"};

        uniformClass = "CUP_U_CRYE_G3C_MC_US_V2";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

        randomGearProbability = 100;

        //Ranger Uniforms
            uniformList[] = {
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_RGR_MC_US", 0.2,
                "CUP_U_CRYE_G3C_Tan_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2
            };

        //Rangers Vests
            vestList[] = {
                "CUP_V_CPC_Fast_mc", 0.2,
                "CUP_V_CPC_Fastbelt_mc", 0.2,
                "CUP_V_CPC_tl_mc", 0.2,
                "CUP_V_CPC_tlbelt_mc", 0.2,
                "CUP_V_CPC_light_mc", 0.3,
                "CUP_V_CPC_lightbelt_mc", 0.3
            };

        //Rangers Helmets
            headgearList[] = {
                "CFP_OpsC_Covered", 0.2,
                "CFP_OpsC_Covered2", 0.2,
                "CFP_OpsC_Painted", 0.2,
                "CFP_OpsC_Uncovered", 0.2,
                "CFP_OpsC_Med", 0.2,
                "CFP_OpsC_Cov_Goggles_Off", 0.2,
                "CUP_H_OpsCore_Covered_MCAM_US_SF", 0.5,
                "CUP_H_OpsCore_Spray_US_SF", 0.3,
                "CUP_H_OpsCore_Tan_SF", 0.3,
                "CFP_OpsC_Uncov_Goggle_Off", 0.2
            };

        //Rangers FaceWear
            facewearList[] = {
                "CFP_Tac_Goggles_Blk_Drk", 0.2,
                "CFP_Tac_Goggles_Blk_Ylw", 0.2,
                "CFP_Tac_Goggles_Blk_Clr", 0.2,
                "CFP_Tac_Goggles_Blk_Drk", 0.2,
                "CFP_Oakleys_Clr", 0.2,
                "CFP_Oakleys_Drk", 0.2,
                "CFP_Oakleys_Embr", 0.2,
                "CFP_Oakley_Goggles_Blk", 0.2,
                "CFP_Oakley_Goggles_MCam", 0.2,
                "CFP_Face_Wear_Blk", 0.2,
                "CFP_Face_Wear_Spook", 0.2,
                "CFP_UA_Thermals_Grn", 0.2,
                "CFP_UA_Thermals_Grn_GPS", 0.2,
                "CFP_UA_Thermals_Blk", 0.2,
                "CFP_UA_Thermals_Blk_GPS", 0.2,
                "CFP_Oakley_Thermals_Gry", 0.2,
                "CFP_Oakley_Thermals_Blk", 0.2,
                "CFP_Foretex", 0.2
            };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_TAB_ARC_RANGER_OCP'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_TAB_ARC_RANGER_OCP";

    };

    class CFP_B_USRANGERS_AA_Specialist_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_AA_Specialist_WDL_01.JPG;

        displayName = "AA Specialist";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Painted","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Painted","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_FIM92Stinger","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_FIM92Stinger","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_MCam_Grn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{"CUP_launch_FIM92Stinger","","","",{"CUP_Stinger_M",1},{},""},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"CUP_15Rnd_9x19_M9",2,15},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1}}},{"CUP_V_CPC_communicationsbelt_mc",{{"FirstAidKit",1},{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"CUP_30Rnd_556x45_PMAG_QP",1,30},{"CUP_Stinger_M",1,1}}},"CFP_OpsC_Painted","CFP_Foretex",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Squad_Leader_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Squad_Leader_WDL_01.JPG;

        displayName = "Squad Leader";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Grenadier_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Grenadier_WDL_01.JPG;

        displayName = "Grenadier";

        linkedItems[] = {"CUP_V_CPC_communications_mc","CFP_OpsC_Covered2","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"};
        respawnlinkedItems[] = {"CUP_V_CPC_communications_mc","CFP_OpsC_Covered2","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"};

        weapons[] = {"CUP_arifle_mk18_m203_black","CUP_hgun_M9"};
        respawnWeapons[] = {"CUP_arifle_mk18_m203_black","CUP_hgun_M9"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_1Rnd_HEDP_M203","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_mk18_m203_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{"CUP_1Rnd_HEDP_M203",1},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communications_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_1Rnd_HEDP_M203",8,1},{"CUP_1Rnd_Smoke_M203",8,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Covered2","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"}};

    };

    class CFP_B_USRANGERS_Automatic_Rifleman_WDL_01 : B_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Automatic_Rifleman_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";

        identityTypes[] = {"Head_NATO","LanguageENG_F","CFP_G_USRANGERS"};

        uniformClass = "CUP_U_CRYE_G3C_MC_US";

        linkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Cov_Goggles_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Cov_Goggles_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_lmg_m249_pip4","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_lmg_m249_pip4","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9","CUP_200Rnd_TE4_Red_Tracer_556x45_M249","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_m249_pip4","","CUP_acc_ANPEQ_15_Black","CUP_optic_Elcan_SpecterDR_black",{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",200},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_MG_OGA_OD",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",3,200}}},{"CFP_Camelbak_Mule_RngrGrn",{{"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1,200}}},"CFP_OpsC_Cov_Goggles_Off","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

        randomGearProbability = 100;

        //Ranger Uniforms
            uniformList[] = {
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_RGR_MC_US", 0.2,
                "CUP_U_CRYE_G3C_Tan_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2,
                "CUP_U_CRYE_G3C_MC_US_V2", 0.2,
                "CUP_U_CRYE_G3C_MC_US", 0.2
            };

        //Rangers Helmets
                headgearList[] = {
                    "CFP_OpsC_Uncov_Full", 0.33,
                    "CFP_OpsC_Cov_Full", 0.33,
                    "CFP_OpsC_Uncov_Shemagh", 0.33
                };

        //Rangers FaceWear
                facewearList[] = {
                    "CFP_UA_Thermals_Blk", 0.33,
                    "CFP_UA_Thermals_Blk_GPS", 0.33,
                    "CFP_Foretex", 0.33
                };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_TAB_ARC_RANGER_OCP'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_TAB_ARC_RANGER_OCP";

    };

    class CFP_B_USRANGERS_Rifleman_AT_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Rifleman_AT_WDL_01.JPG;

        displayName = "Rifleman AT (Carl Gustav)";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V4"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V4"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_MAAWS","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_MAAWS","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_MCam_Grn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{"CUP_launch_MAAWS","","","CUP_optic_MAAWS_Scope",{},{},""},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"CUP_MAAWS_HEDP_M",2,1},{"CUP_MAAWS_HEAT_M",2,1}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V4"}};

    };

    class CFP_B_USRANGERS_Medic_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Medic_WDL_01.JPG;

        displayName = "Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_MCam_Grn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_RGR_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"Medikit",1},{"FirstAidKit",10}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Machine_Gunner_M240_WDL_01 : CFP_B_USRANGERS_Automatic_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Machine_Gunner_M240_WDL_01.JPG;

        displayName = "Machine Gunner [M240]";

        linkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Cov_Goggles_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CFP_LBT6094_MG_OGA_OD","CFP_OpsC_Cov_Goggles_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_lmg_M240","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_lmg_M240","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_M240","","","CUP_optic_ElcanM145",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_LBT6094_MG_OGA_OD",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},{"CFP_Camelbak_Mule_RngrGrn",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100}}},"CFP_OpsC_Cov_Goggles_Off","G_Tactical_Clear",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Machine_Gunner_Mk_48_WDL_01 : CFP_B_USRANGERS_Automatic_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Machine_Gunner_Mk_48_WDL_01.JPG;

        displayName = "Machine Gunner [Mk 48]";

        linkedItems[] = {"CFP_RAV_MG_OGA_OD","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CFP_RAV_MG_OGA_OD","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_lmg_Mk48_wdl","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_lmg_Mk48_wdl","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Mk48_wdl","","CUP_acc_ANPEQ_15_OD","CUP_optic_Elcan_SpecterDR_od",{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",100},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CFP_RAV_MG_OGA_OD",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3,100}}},{"CFP_Camelbak_Mule_RngrGrn",{{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1,100}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Asst_Machine_Gunner_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Asst_Machine_Gunner_WDL_01.JPG;

        displayName = "Asst. Machine Gunner";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_Drab";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_Drab",{{"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4,100}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Sniper_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Sniper_WDL_01.JPG;

        displayName = "Sniper (SCAR Mk17)";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Painted","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Painted","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_Mk20","CUP_hgun_M9","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_Mk20","CUP_hgun_M9","Rangefinder"};

        magazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_SCAR","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_Mk20","CUP_muzzle_snds_SCAR_H","","optic_DMS",{"CUP_20Rnd_762x51_B_SCAR",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_20Rnd_762x51_B_SCAR",7,20}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Painted","G_Tactical_Clear",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Spotter_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Spotter_WDL_01.JPG;

        displayName = "Spotter";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Rangefinder"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Rangefinder"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Covered","G_Combat",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Gunner_Mortar_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Gunner_Mortar_WDL_01.JPG;

        displayName = "Gunner (Mortar)";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CUP_B_M252_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CUP_B_M252_Bipod_Bag",{}},"CFP_OpsC_Covered","G_Tactical_Black",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Asst_Gunner_Mortar_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Asst_Gunner_Mortar_WDL_01.JPG;

        displayName = "Asst. Gunner [Mortar]";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Uncov_Goggle_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Uncov_Goggle_Off","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CUP_B_M252_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CUP_B_M252_Gun_Bag",{}},"CFP_OpsC_Uncov_Goggle_Off","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Sniper_M110_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Sniper_M110_WDL_01.JPG;

        displayName = "Sniper [M110]";

        linkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_srifle_M110_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_srifle_M110_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9","CUP_20Rnd_762x51_B_M110","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M110_black","CUP_muzzle_snds_M110_black","CUP_acc_ANPEQ_15_Black","CUP_optic_LeupoldM3LR",{"CUP_20Rnd_762x51_B_M110",20},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_weaponsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_20Rnd_762x51_B_M110",7,20}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Covered","G_Tactical_Clear",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Sniper_M107_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Sniper_M107_WDL_01.JPG;

        displayName = "Sniper [M107]";

        linkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","CFP_OpsC_Uncovered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"};
        respawnlinkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","CFP_OpsC_Uncovered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"};

        weapons[] = {"CUP_srifle_M107_Base","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_srifle_M107_Base","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_10Rnd_127x99_M107","CUP_15Rnd_9x19_M9","CUP_10Rnd_127x99_M107","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_10Rnd_127x99_M107","CUP_15Rnd_9x19_M9","CUP_10Rnd_127x99_M107","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_M107_Base","","","CUP_optic_LeupoldMk4_25x50_LRT",{"CUP_10Rnd_127x99_M107",10},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_weaponsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_10Rnd_127x99_M107",7,10}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Uncovered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V1"}};

    };

    class CFP_B_USRANGERS_Rifleman_AT_Javelin_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Rifleman_AT_Javelin_WDL_01.JPG;

        displayName = "Rifleman AT [Javelin]";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_Javelin","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_launch_Javelin","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_MCam_Grn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{"CUP_launch_Javelin","","","",{},{},""},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"CUP_Javelin_M",1,1}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Gunner_Mk19_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Gunner_Mk19_WDL_01.JPG;

        displayName = "Gunner [Mk19]";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CUP_B_Mk19_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CUP_B_Mk19_Tripod_Bag",{}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Asst_Gunner_Mk19_WDL_01 : CFP_B_USRANGERS_Automatic_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Asst_Gunner_Mk19_WDL_01.JPG;

        displayName = "Asst. Gunner [Mk19]";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CUP_B_Mk19_Gun_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CUP_B_Mk19_Gun_Bag",{}},"CFP_OpsC_Covered","G_Combat",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Team_Leader_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Team_Leader_WDL_01.JPG;

        displayName = "Team Leader";

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Med","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Med","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{}},"CFP_OpsC_Med","G_Combat",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Engineer_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Engineer_WDL_01.JPG;

        displayName = "Engineer";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Camelbak_Mule_RngrGrn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Camelbak_Mule_RngrGrn",{{"ToolKit",1},{"MineDetector",1}}},"CFP_OpsC_Covered","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_Explosive_Specialist_WDL_01 : CFP_B_USRANGERS_Rifleman_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Explosive_Specialist_WDL_01.JPG;

        displayName = "Explosive Specialist";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_communicationsbelt_mc","CFP_OpsC_Covered","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        backpack = "CFP_Kitbag_MCam_Grn";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_coyote",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_communicationsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CUP_muzzle_snds_M16",1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{"CFP_Kitbag_MCam_Grn",{{"MineDetector",1},{"CUP_PipeBomb_M",2,1},{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",4,1}}},"CFP_OpsC_Covered","G_Tactical_Black",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};

    };

    class CFP_B_USRANGERS_MH_47E_WDL_01 : CUP_B_MH47E_USA_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-47E";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CoPilotObs : CoPilotObs { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_6M_MELB_WDL_01 : CUP_B_MH6M_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_6M_MELB_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6M MELB";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_6J_Little_Bird_WDL_01 : CUP_B_MH6J_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_6J_Little_Bird_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6J Little Bird";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_6M_Recon_WDL_01 : CUP_B_MH6M_OBS_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_6M_Recon_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6M Recon";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_6J_Recon_WDL_01 : CUP_B_MH6J_OBS_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_6J_Recon_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6J Recon";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_AH_6M_WDL_01 : CUP_B_AH6M_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_AH_6M_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6M";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_AH_6J_WDL_01 : CUP_B_AH6J_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_AH_6J_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6J";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_UH_60M_WDL_01 : CUP_B_UH60M_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_UH_60M_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_UH_60M_FFV_WDL_01 : CUP_B_UH60M_FFV_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_UH_60M_FFV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M [FFV]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_UH_60M_Unarmed_WDL_01 : CUP_B_UH60M_Unarmed_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_UH_60M_Unarmed_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M [Unarmed]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_UH_60M_Unarmed_FFV_WDL_01 : CUP_B_UH60M_Unarmed_FFV_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_UH_60M_Unarmed_FFV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M [Unarmed/FFV]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_UH_60M_MEV_WDL_01 : CUP_B_UH60M_Unarmed_FFV_MEV_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_UH_60M_MEV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UH-60M MEV";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_AH_64D_WDL_01 : CUP_B_AH64D_DL_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_AH_64D_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-64D";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_CH_47F_WDL_01 : CUP_B_CH47F_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_CH_47F_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class BackDoorGun : BackDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_CH_47F_VIV_WDL_01 : CUP_B_CH47F_VIV_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_CH_47F_VIV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "CH-47F [VIV]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_60L_DAP_4Pylons_WDL_01 : CUP_B_MH60L_DAP_4x_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_60L_DAP_4Pylons_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-60L DAP [4 Pylons]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MH_60L_DAP_2Pylons_WDL_01 : CUP_B_MH60L_DAP_2x_US_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MH_60L_DAP_2Pylons_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-60L DAP [2 Pylons]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Pilot_WDL_01"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
            class RightDoorGun : RightDoorGun { gunnerType = "CFP_B_USRANGERS_Helicopter_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1126_ICV_M2_CROWS_WDL_01 : CUP_B_M1126_ICV_M2_Desert_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1126_ICV_M2_CROWS_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1126 ICV M2 CROWS";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01 : CUP_B_M1126_ICV_M2_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1126_ICV_M2_CROWS_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1126 ICV M2 CROWS [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1126_ICV_MK19_CROWS_WDL_01 : CUP_B_M1126_ICV_MK19_Desert_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1126_ICV_MK19_CROWS_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1126 ICV MK19 CROWS";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1126_ICV_MK19_CROWS_Slat_WDL_01 : CUP_B_M1126_ICV_MK19_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1126_ICV_MK19_CROWS_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1126 ICV MK19 CROWS [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1130_CV_M2_CROWS_WDL_01 : CUP_B_M1130_CV_M2_Desert_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1130_CV_M2_CROWS_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1130 CV M2 CROWS";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_command_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\icv_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1130_CV_M2_CROWS_Slat_WDL_01 : CUP_B_M1130_CV_M2_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1130_CV_M2_CROWS_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1130 CV M2 CROWS [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1135_ATGMV_WDL_01 : CUP_B_M1135_ATGMV_Desert_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1135_ATGMV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1135 ATGMV";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        hiddenSelectionsTextures[] = {
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body1_des_co.paa",
            "CUP\WheeledVehicles\CUP_WheeledVehicles_Stryker\Data\Woodland\stryker_body2_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_alfa_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\slat_armor_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_tow_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\stryker_command_des_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_stryker\data\Woodland\default_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1135_ATGMV_Slat_WDL_01 : CUP_B_M1135_ATGMV_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1135_ATGMV_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1135 ATGMV [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1128_MGS_WDL_01 : CUP_B_M1128_MGS_Woodland_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1128_MGS_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1128 MGS";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1128_MGS_Slat_WDL_01 : CUP_B_M1128_MGS_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1128_MGS_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1128 MGS [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1133_MEV_WDL_01 : CUP_B_M1133_MEV_Woodland_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1133_MEV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1133 MEV";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Medic_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1133_MEV_Slat_WDL_01 : CUP_B_M1133_MEV_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1133_MEV_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1133 MEV [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Medic_WDL_01"; };
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_HMMWV_SOV_Mk19_WDL_01 : CUP_HMMWV_SOV_Base_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_HMMWV_SOV_Mk19_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV SOV [Mk19]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        hiddenSelectionsTextures[] = {
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Rifleman_WDL_01"; };
            class SideTurret : SideTurret { gunnerType = "CFP_B_USRANGERS_Rifleman_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_HMMWV_SOV_M2_WDL_01 : CUP_HMMWV_SOV_M2_Base_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_HMMWV_SOV_M2_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV SOV [M2]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        hiddenSelectionsTextures[] = {
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_body_canvas_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_hood_canvas_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\textures\nato_t_hmmwv_regular_1_co.paa",
            "cup\wheeledvehicles\cup_wheeledvehicles_hmmwv\data\hmmwv_parts_1_ca.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Rifleman_WDL_01"; };
            class SideTurret : SideTurret { gunnerType = "CFP_B_USRANGERS_Rifleman_WDL_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1165_GMV_WDL_01 : CUP_B_M1165_GMV_WDL_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1165_GMV_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1165 GMV";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        hiddenSelectionsTextures[] = {
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_body_canvas_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_hood_canvas_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_regular_1_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_parts_1_ca.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\textures\nato_t_hmmwv_gpk_tower_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_wl_01_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_wl_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_wl_co.paa",
            "\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Rifleman_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_Polaris_DAGOR_WDL_01 : B_LSV_01_unarmed_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Polaris_DAGOR_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Polaris DAGOR";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_Quad_Bike_WDL_01 : B_Quadbike_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Quad_Bike_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1129_MC_MK19_CROWS_WDL_01 : CUP_B_M1129_MC_MK19_Woodland_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1129_MC_MK19_CROWS_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1129 MC MK19 CROWS";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_M1129_MC_MK19_CROWS_Slat_WDL_01 : CUP_B_M1129_MC_MK19_Woodland_Slat_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M1129_MC_MK19_CROWS_Slat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1129 MC MK19 CROWS [Slat]";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Crew_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
            class ObsTurret : ObsTurret { gunnerType = "CFP_B_USRANGERS_Crew_WDL_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_A10C_Thunderbolt_II_WDL_01 : CUP_B_A10_DYN_USA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_A10C_Thunderbolt_II_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "A-10C Thunderbolt II";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USARMY_US_Pilot";
        hiddenSelectionsTextures[] = {
            "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_01_co_green_hog.paa",
            "\CUP\AirVehicles\CUP_AirVehicles_A10\data\sti_skins\a10_02_co_green.paa"
        };
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_Assault_Boat_WDL_01 : B_Boat_Transport_01_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Assault_Boat_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_HEMTT_Repair_WDL_01 : B_Truck_01_Repair_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_HEMTT_Repair_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Repair";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_HEMTT_Ammo_WDL_01 : B_Truck_01_ammo_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_HEMTT_Ammo_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Ammo";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_HEMTT_Fuel_WDL_01 : B_Truck_01_fuel_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_HEMTT_Fuel_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "HEMTT Fuel";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
        TRANSPORTWEAPONSMEDIUM(CUP_arifle_M4A1_SOMMOD_black,CUP_launch_M136_Loaded)
        TRANSPORTMAGAZINESMEDIUM(CUP_30Rnd_556x45_Stanag,CUP_M136_M,SmokeShell,SmokeShellOrange)
        TRANSPORTITEMSMEDIUM
        TRANSPORTBACKPACKSMEDIUM(CFP_Kitbag_MCam_Grn)

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_MQ_9Reaper_WDL_01 : CUP_B_USMC_DYN_MQ9_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_MQ_9Reaper_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MQ-9 Reaper";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "B_UAV_AI";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_Crew_WDL_01 : B_Helipilot_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Crew_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crew";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";

        identityTypes[] = {"Head_NATO","LanguageENG_F","CFP_G_USRANGERS"};

        uniformClass = "CUP_U_CRYE_G3C_MC_US_V2";

        linkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};
        respawnlinkedItems[] = {"CUP_V_CPC_weaponsbelt_mc","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"};

        weapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};
        respawnWeapons[] = {"CUP_arifle_M4A1_SOMMOD_black","CUP_hgun_M9","Binocular"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1_SOMMOD_black","","CUP_acc_ANPEQ_15_Top_Flashlight_Black_L","CUP_optic_Elcan_SpecterDR_black",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_CRYE_G3C_MC_US_V2",{{"FirstAidKit",1},{"CUP_15Rnd_9x19_M9",2,15}}},{"CUP_V_CPC_weaponsbelt_mc",{{"CUP_HandGrenade_M67",1,1},{"B_IR_Grenade",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"SmokeShell",1,1},{"CUP_30Rnd_556x45_PMAG_QP",7,30}}},{},"H_HelmetCrew_I","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Camo_V3"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_B_USRANGERS_Helicopter_Pilot_WDL_01 : B_Helipilot_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Helicopter_Pilot_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_pilot"};

        uniformClass = "CUP_U_B_USArmy_ACU_Gloves_OCP";

        linkedItems[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy","H_PilotHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};
        respawnlinkedItems[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy","H_PilotHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","CUP_NVG_PVS7"};

        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","CUP_optic_CompM4",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USArmy_ACU_Gloves_OCP",{{"FirstAidKit",1},{"Chemlight_green",1,1},{"CUP_15Rnd_9x19_M9",3,15},{"CUP_30Rnd_556x45_PMAG_QP",1,30}}},{"CUP_V_B_IOTV_OCP_Rifleman_USArmy",{{"FirstAidKit",1},{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1},{"CUP_30Rnd_556x45_PMAG_QP",3,30}}},{},"H_PilotHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Black"}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_USA_ARMY_160SOAR_OCP'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_USA_ARMY_160SOAR_OCP";

    };

    class CFP_B_USRANGERS_Helicopter_Crew_WDL_01 : CFP_B_USRANGERS_Helicopter_Pilot_WDL_01 {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_Helicopter_Crew_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_pilot"};

        uniformClass = "CUP_U_B_USArmy_ACU_Gloves_OCP";

        linkedItems[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Black"};
        respawnlinkedItems[] = {"CUP_V_B_IOTV_OCP_Rifleman_USArmy","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Black"};

        weapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9"};
        respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9"};

        magazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9","CUP_30Rnd_556x45_PMAG_QP","CUP_15Rnd_9x19_M9"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_M4A1","","","CUP_optic_CompM4",{"CUP_30Rnd_556x45_PMAG_QP",30},{},""},{},{"CUP_hgun_M9","","","",{"CUP_15Rnd_9x19_M9",15},{},""},{"CUP_U_B_USArmy_ACU_Gloves_OCP",{{"FirstAidKit",1},{"Chemlight_green",1,1},{"CUP_15Rnd_9x19_M9",3,15},{"CUP_30Rnd_556x45_PMAG_QP",1,30}}},{"CUP_V_B_IOTV_OCP_Rifleman_USArmy",{{"SmokeShellGreen",1,1},{"SmokeShellBlue",1,1},{"SmokeShellOrange",1,1},{"Chemlight_green",1,1},{"CUP_30Rnd_556x45_PMAG_QP",3,30}}},{},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","CFP_ANPVS15_Black"}};

        randomGearProbability = 100;

        //SOAR Helmets
            headgearList[] = {
                "H_CrewHelmetHeli_B", 0.5,
                "CFP_SOARCREW_SKULL", 0.3,
                "CFP_SOARCREW_RED", 0.3,
                "CFP_SOARCREW_BLUE", 0.3
            };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'USP_PATCH_USA_ARMY_160SOAR_OCP'] call BIS_fnc_setUnitInsignia;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "USP_PATCH_USA_ARMY_160SOAR_OCP";

    };

    class CFP_B_USRANGERS_M2_Minitripod_WDL_01 : CUP_B_M2StaticMG_MiniTripod_USMC {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M2_Minitripod_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Minitripod";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
    };

    class CFP_B_USRANGERS_M2_Machine_Gun_WDL_01 : CUP_B_M2StaticMG_USMC {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M2_Machine_Gun_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Machine Gun";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
    };

    class CFP_B_USRANGERS_M252_81mm_Mortar_WDL_01 : CUP_B_M252_USMC {
        editorPreview = \x\cfp\addons\b_usrangers_wdl\data\preview\CFP_B_USRANGERS_M252_81mm_Mortar_WDL_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "M252 81mm Mortar";
        side = 1;
        faction = "CFP_B_USRANGERS_WDL";
        crew = "CFP_B_USRANGERS_Rifleman_WDL_01";
    };

    class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
    class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
    class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
    class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
    class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
    class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
    class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
    class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
    class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
    class O_SupplyCrate_F; // CUP_RUVehicleBox
    class B_SupplyCrate_F; // CUP_USVehicleBox

    class CFP_B_USRANGERS_WDL_AmmoBox : Box_NATO_Ammo_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_HandGrenade_M67,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(Chemlight_green,50);
            mag_xx(Chemlight_red,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_20Rnd_762x51_B_SCAR,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_1Rnd_Smoke_M203,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_MAAWS_HEDP_M,50);
            mag_xx(CUP_MAAWS_HEAT_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_762x51_B_M110,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(SmokeShellOrange,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_USRANGERS_WDL_WeaponsBox : Box_NATO_Wps_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_20Rnd_762x51_B_SCAR,50);
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_762x51_B_M110,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_M4A1_SOMMOD_black,10);
            weap_xx(CUP_hgun_M9,10);
            weap_xx(CUP_arifle_mk18_m203_black,10);
            weap_xx(CUP_lmg_m249_pip4,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_lmg_Mk48_wdl,10);
            weap_xx(CUP_arifle_Mk20,10);
            weap_xx(CUP_arifle_Mk17_CQC_SFG,10);
            weap_xx(CUP_srifle_M110_black,10);
            weap_xx(CUP_srifle_M107_Base,10);
            weap_xx(CUP_arifle_M4A1,10);
        };
        class TransportItems {
            item_xx(CFP_acc_ANPEQ15_Black,10);
            item_xx(CUP_optic_Elcan_SpecterDR_black,10);
            item_xx(CUP_optic_Elcan_SpecterDR_od,10);
            item_xx(CUP_optic_Elcan_SpecterDR_coyote,10);
            item_xx(CUP_muzzle_snds_SCAR_H,10);
            item_xx(CUP_muzzle_snds_M16,10);
            item_xx(CUP_muzzle_snds_M16_coyote,10);
            item_xx(optic_DMS,10);
            item_xx(CUP_muzzle_snds_M110_black,10);
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(CUP_optic_LeupoldMk4_25x50_LRT,10);
            item_xx(CUP_optic_CompM4,10);
        };
    };
    class CFP_B_USRANGERS_WDL_LaunchersBox : Box_NATO_WpsLaunch_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_MAAWS_HEAT_M,5);
            mag_xx(CUP_Javelin_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_MAAWS,5);
            weap_xx(CUP_launch_Javelin,5);
        };
        class TransportItems {
            item_xx(CUP_optic_MAAWS_Scope,5);
        };
    };
    class CFP_B_USRANGERS_WDL_UniformBox : Box_NATO_Uniforms_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_75th_CRYE_V4b_Sleeved,15);
            item_xx(CFP_75th_CRYE_V3b_Sleeved,15);
            item_xx(CFP_75th_CRYE_V4b_Full,15);
            item_xx(CFP_75th_CRYEG3_V4,15);
            item_xx(CFP_75th_CRYE_V1b_Full,15);
            item_xx(CFP_75th_CRYE_V2b_Full,15);
            item_xx(CFP_75th_CRYE_V3b_Full,15);
            item_xx(CFP_U_FieldUniform_acu,15);
        };
    };
    class CFP_B_USRANGERS_WDL_SupportBox : Box_NATO_Support_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(CFP_HV5_Ciras_Olive,10);
            item_xx(CFP_OpsC_Painted,10);
            item_xx(CFP_Face_Wear_Blk,10);
            item_xx(CFP_Camelbak_Mule_RngrGrn,10);
            item_xx(CFP_ANPVS15_Camo_V3,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_OpsC_Uncovered,10);
            item_xx(CFP_Oakley_Thermals_Blk,10);
            item_xx(CFP_HV4_Ciras_Olive,10);
            item_xx(CFP_Tac_Goggles_Blk_Clr,10);
            item_xx(CFP_ANPVS15_Camo_V1,10);
            item_xx(CFP_LBT6094_MG_OGA_OD,10);
            item_xx(CFP_OpsC_Uncov_Full,10);
            item_xx(CFP_UA_Thermals_Blk_GPS,10);
            item_xx(CFP_OpsC_Covered,10);
            item_xx(CFP_Tac_Goggles_Blk_Drk,10);
            item_xx(CFP_Kitbag_MCam_Grn,10);
            item_xx(CFP_ANPVS15_Camo_V4,10);
            item_xx(CFP_OpsC_Uncov_Goggle_Off,10);
            item_xx(CFP_OpsC_Uncov_Shemagh,10);
            item_xx(CFP_RAV_MG_OGA_OD,10);
            item_xx(CFP_UA_Thermals_Blk,10);
            item_xx(CFP_OpsC_Cov_Goggles_Off,10);
            item_xx(CFP_Kitbag_Drab,10);
            item_xx(Rangefinder,10);
            item_xx(CFP_Oakleys_Drk,10);
            item_xx(CUP_B_M252_Bipod_Bag,10);
            item_xx(CFP_OpsC_Med,10);
            item_xx(CUP_B_M252_Gun_Bag,10);
            item_xx(CFP_HV1_Ciras_Olive,10);
            item_xx(CFP_OpsC_Covered2,10);
            item_xx(CFP_Oakley_Goggles_MCam,10);
            item_xx(CFP_UA_Thermals_Grn_GPS,10);
            item_xx(CFP_Oakleys_Clr,10);
            item_xx(CFP_UA_Thermals_Grn,10);
            item_xx(CUP_B_Mk19_Tripod_Bag,10);
            item_xx(CUP_B_Mk19_Gun_Bag,10);
            item_xx(CFP_Oakley_Thermals_Gry,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CFP_IOTV_Patrol,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(CFP_SOARCREW_RED,10);
            item_xx(CFP_ANPVS15_Black,10);
        };
    };
    class CFP_B_USRANGERS_WDL_SupplyBox : B_SupplyCrate_F {
        author = ALiVE ORBAT CREATOR;
        displayName = US 75th Rangers (Jungle/Woodland) Supply Box;
        class TransportMagazines {
            mag_xx(CUP_15Rnd_9x19_M9,50);
            mag_xx(CUP_HandGrenade_M67,50);
            mag_xx(B_IR_Grenade,50);
            mag_xx(Chemlight_green,50);
            mag_xx(Chemlight_red,50);
            mag_xx(SmokeShell,50);
            mag_xx(CUP_20Rnd_762x51_B_SCAR,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_1Rnd_Smoke_M203,50);
            mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,50);
            mag_xx(CUP_MAAWS_HEDP_M,50);
            mag_xx(CUP_MAAWS_HEAT_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,50);
            mag_xx(CUP_20Rnd_762x51_B_M110,50);
            mag_xx(CUP_10Rnd_127x99_M107,50);
            mag_xx(CUP_PipeBomb_M,50);
            mag_xx(ATMine_Range_Mag,50);
            mag_xx(DemoCharge_Remote_Mag,50);
            mag_xx(CUP_30Rnd_556x45_Stanag,50);
            mag_xx(SmokeShellGreen,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(SmokeShellOrange,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_M4A1_SOMMOD_black,10);
            weap_xx(CUP_hgun_M9,10);
            weap_xx(CUP_arifle_mk18_m203_black,10);
            weap_xx(CUP_lmg_m249_pip4,10);
            weap_xx(CUP_lmg_M240,10);
            weap_xx(CUP_lmg_Mk48_wdl,10);
            weap_xx(CUP_arifle_Mk20,10);
            weap_xx(CUP_arifle_Mk17_CQC_SFG,10);
            weap_xx(CUP_srifle_M110_black,10);
            weap_xx(CUP_srifle_M107_Base,10);
            weap_xx(CUP_arifle_M4A1,10);
            weap_xx(CUP_launch_MAAWS,10);
            weap_xx(CUP_launch_Javelin,10);
        };
        class TransportItems {
            item_xx(CFP_acc_ANPEQ15_Black,10);
            item_xx(CUP_optic_Elcan_SpecterDR_black,10);
            item_xx(CUP_muzzle_snds_SCAR_H,10);
            item_xx(optic_DMS,10);
            item_xx(CUP_muzzle_snds_M110_black,10);
            item_xx(CUP_muzzle_snds_M16,10);
            item_xx(CUP_muzzle_snds_M16_coyote,10);
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(CUP_optic_Leupold_VX3,10);
            item_xx(CUP_optic_CompM4,10);
            item_xx(Binocular,10);
            item_xx(CFP_HV5_Ciras_Olive,10);
            item_xx(CFP_OpsC_Painted,10);
            item_xx(CFP_Face_Wear_Blk,10);
            item_xx(CFP_Camelbak_Mule_RngrGrn,10);
            item_xx(CFP_ANPVS15_Camo_V3,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CFP_OpsC_Uncovered,10);
            item_xx(CFP_Oakley_Thermals_Blk,10);
            item_xx(CFP_HV4_Ciras_Olive,10);
            item_xx(CFP_Tac_Goggles_Blk_Clr,10);
            item_xx(CFP_ANPVS15_Camo_V1,10);
            item_xx(CFP_LBT6094_MG_OGA_OD,10);
            item_xx(CFP_OpsC_Uncov_Full,10);
            item_xx(CFP_UA_Thermals_Blk_GPS,10);
            item_xx(CFP_OpsC_Covered,10);
            item_xx(CFP_Tac_Goggles_Blk_Drk,10);
            item_xx(CFP_Kitbag_MCam_Grn,10);
            item_xx(CFP_ANPVS15_Camo_V4,10);
            item_xx(CFP_OpsC_Uncov_Goggle_Off,10);
            item_xx(CFP_OpsC_Uncov_Shemagh,10);
            item_xx(CFP_RAV_MG_OGA_OD,10);
            item_xx(CFP_UA_Thermals_Blk,10);
            item_xx(CFP_OpsC_Cov_Goggles_Off,10);
            item_xx(CFP_Kitbag_Drab,10);
            item_xx(Rangefinder,10);
            item_xx(CFP_Oakleys_Drk,10);
            item_xx(CUP_B_M252_Bipod_Bag,10);
            item_xx(CFP_OpsC_Med,10);
            item_xx(CUP_B_M252_Gun_Bag,10);
            item_xx(CFP_HV1_Ciras_Olive,10);
            item_xx(CFP_OpsC_Covered2,10);
            item_xx(CFP_Oakley_Goggles_MCam,10);
            item_xx(CFP_UA_Thermals_Grn_GPS,10);
            item_xx(CFP_Oakleys_Clr,10);
            item_xx(CFP_UA_Thermals_Grn,10);
            item_xx(CUP_B_Mk19_Tripod_Bag,10);
            item_xx(CUP_B_Mk19_Gun_Bag,10);
            item_xx(CFP_Oakley_Thermals_Gry,10);
            item_xx(H_HelmetCrew_I,10);
            item_xx(CFP_IOTV_Patrol,10);
            item_xx(H_PilotHelmetHeli_B,10);
            item_xx(CUP_NVG_PVS7,10);
            item_xx(CFP_SOARCREW_RED,10);
            item_xx(CFP_ANPVS15_Black,10);
            item_xx(CFP_75th_CRYE_V4b_Sleeved,10);
            item_xx(CFP_75th_CRYE_V3b_Sleeved,10);
            item_xx(CFP_75th_CRYE_V4b_Full,10);
            item_xx(CFP_75th_CRYEG3_V4,10);
            item_xx(CFP_75th_CRYE_V1b_Full,10);
            item_xx(CFP_75th_CRYE_V2b_Full,10);
            item_xx(CFP_75th_CRYE_V3b_Full,10);
            item_xx(CFP_U_FieldUniform_acu,10);
            item_xx(CUP_optic_MAAWS_Scope,5);
        };
    };
};