class CBA_Extended_EventHandlers_base;
class EventHandlers_base;
class Extended_Init_Eventhandlers;
class EventHandlers
{
    class CFP_B_soldier_base
    {
        CFP_B_soldier_base_init="if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
};
class CfgVehicles
    {

    class CUP_O_Ural_ZU23_SLA;
    class CUP_O_Ural_ZU23_SLA_OCimport_01 : CUP_O_Ural_ZU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_ZU23_SLA_OCimport_02 : CUP_O_Ural_ZU23_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BRDM2_SLA;
    class CUP_O_BRDM2_SLA_OCimport_01 : CUP_O_BRDM2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BRDM2_SLA_OCimport_02 : CUP_O_BRDM2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BTR60_SLA;
    class CUP_O_BTR60_SLA_OCimport_01 : CUP_O_BTR60_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR60_SLA_OCimport_02 : CUP_O_BTR60_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CommanderTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoGunner_1;
            class CargoGunner_2;
        };
    };

    class CUP_O_BTR90_RU;
    class CUP_O_BTR90_RU_OCimport_01 : CUP_O_BTR90_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR90_RU_OCimport_02 : CUP_O_BTR90_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP1_TKA_OCimport_02 : CUP_O_BMP1_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CommanderOptics;
            class MainTurret;
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

    class CUP_O_BMP2_SLA;
    class CUP_O_BMP2_SLA_OCimport_01 : CUP_O_BMP2_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_SLA_OCimport_02 : CUP_O_BMP2_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_07;
        };
    };

    class CUP_O_BM21_SLA;
    class CUP_O_BM21_SLA_OCimport_01 : CUP_O_BM21_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BM21_SLA_OCimport_02 : CUP_O_BM21_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_UAZ_Unarmed_SLA;
    class CUP_O_UAZ_Unarmed_SLA_OCimport_01 : CUP_O_UAZ_Unarmed_SLA { scope = 0; class EventHandlers; };
    class CUP_O_UAZ_Unarmed_SLA_OCimport_02 : CUP_O_UAZ_Unarmed_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_UAZ_Open_SLA;
    class CUP_O_UAZ_Open_SLA_OCimport_01 : CUP_O_UAZ_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_Open_SLA_OCimport_02 : CUP_O_UAZ_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class CUP_O_UAZ_MG_SLA;
    class CUP_O_UAZ_MG_SLA_OCimport_01 : CUP_O_UAZ_MG_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_MG_SLA_OCimport_02 : CUP_O_UAZ_MG_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_UAZ_SPG9_SLA;
    class CUP_O_UAZ_SPG9_SLA_OCimport_01 : CUP_O_UAZ_SPG9_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_SPG9_SLA_OCimport_02 : CUP_O_UAZ_SPG9_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_UAZ_AGS30_SLA;
    class CUP_O_UAZ_AGS30_SLA_OCimport_01 : CUP_O_UAZ_AGS30_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_UAZ_AGS30_SLA_OCimport_02 : CUP_O_UAZ_AGS30_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_O_Ural_SLA;
    class CUP_O_Ural_SLA_OCimport_01 : CUP_O_Ural_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_SLA_OCimport_02 : CUP_O_Ural_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Mi24_P_Dynamic_RU;
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_01 : CUP_O_Mi24_P_Dynamic_RU { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi24_P_Dynamic_RU_OCimport_02 : CUP_O_Mi24_P_Dynamic_RU_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_Mi8_SLA_1;
    class CUP_O_Mi8_SLA_1_OCimport_01 : CUP_O_Mi8_SLA_1 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Mi8_SLA_1_OCimport_02 : CUP_O_Mi8_SLA_1_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };

    class CUP_O_Su25_Dyn_SLA;
    class CUP_O_Su25_Dyn_SLA_OCimport_01 : CUP_O_Su25_Dyn_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Su25_Dyn_SLA_OCimport_02 : CUP_O_Su25_Dyn_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_C130J_TKA;
    class CUP_O_C130J_TKA_OCimport_01 : CUP_O_C130J_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_C130J_TKA_OCimport_02 : CUP_O_C130J_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_T72_SLA;
    class CUP_O_T72_SLA_OCimport_01 : CUP_O_T72_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T72_SLA_OCimport_02 : CUP_O_T72_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_T55_SLA;
    class CUP_O_T55_SLA_OCimport_01 : CUP_O_T55_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_T55_SLA_OCimport_02 : CUP_O_T55_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_DSHKM_SLA;
    class CUP_O_DSHKM_SLA_OCimport_01 : CUP_O_DSHKM_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_SLA_OCimport_02 : CUP_O_DSHKM_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_DSHKM_MiniTripod_SLA;
    class CUP_O_DSHKM_MiniTripod_SLA_OCimport_01 : CUP_O_DSHKM_MiniTripod_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_MiniTripod_SLA_OCimport_02 : CUP_O_DSHKM_MiniTripod_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_SPG9_SLA;
    class CUP_O_SPG9_SLA_OCimport_01 : CUP_O_SPG9_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_SPG9_SLA_OCimport_02 : CUP_O_SPG9_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_2b14_82mm_SLA;
    class CUP_O_2b14_82mm_SLA_OCimport_01 : CUP_O_2b14_82mm_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_2b14_82mm_SLA_OCimport_02 : CUP_O_2b14_82mm_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_D30_SLA;
    class CUP_O_D30_SLA_OCimport_01 : CUP_O_D30_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_D30_SLA_OCimport_02 : CUP_O_D30_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_D30_AT_SLA;
    class CUP_O_D30_AT_SLA_OCimport_01 : CUP_O_D30_AT_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_D30_AT_SLA_OCimport_02 : CUP_O_D30_AT_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_M113_TKA;
    class CUP_O_M113_TKA_OCimport_01 : CUP_O_M113_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_M113_TKA_OCimport_02 : CUP_O_M113_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_BMP2_ZU_TKA;
    class CUP_O_BMP2_ZU_TKA_OCimport_01 : CUP_O_BMP2_ZU_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_ZU_TKA_OCimport_02 : CUP_O_BMP2_ZU_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class CUP_O_LR_Ambulance_TKA;
    class CUP_O_LR_Ambulance_TKA_OCimport_01 : CUP_O_LR_Ambulance_TKA { scope = 0; class EventHandlers; };
    class CUP_O_LR_Ambulance_TKA_OCimport_02 : CUP_O_LR_Ambulance_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Datsun_PK;
    class CUP_O_Datsun_PK_OCimport_01 : CUP_O_Datsun_PK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Datsun_PK_OCimport_02 : CUP_O_Datsun_PK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_O_Datsun_4seat;
    class CUP_O_Datsun_4seat_OCimport_01 : CUP_O_Datsun_4seat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Datsun_4seat_OCimport_02 : CUP_O_Datsun_4seat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_O_BMP2_AMB_TKA;
    class CUP_O_BMP2_AMB_TKA_OCimport_01 : CUP_O_BMP2_AMB_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BMP2_AMB_TKA_OCimport_02 : CUP_O_BMP2_AMB_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_B_AFARMY_HMMWV_01;
    class CFP_B_AFARMY_HMMWV_01_OCimport_01 : CFP_B_AFARMY_HMMWV_01 { scope = 0; class EventHandlers; };
    class CFP_B_AFARMY_HMMWV_01_OCimport_02 : CFP_B_AFARMY_HMMWV_01_OCimport_01 { scope = 0; class EventHandlers; };

    class CFP_B_AFARMY_HMMWV_DShKM_01;
    class CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_01 : CFP_B_AFARMY_HMMWV_DShKM_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_02 : CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_M60A3_USMC;
    class CUP_B_M60A3_USMC_OCimport_01 : CUP_B_M60A3_USMC { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_M60A3_USMC_OCimport_02 : CUP_B_M60A3_USMC_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class CUP_O_BTR40_TKA;
    class CUP_O_BTR40_TKA_OCimport_01 : CUP_O_BTR40_TKA { scope = 0; class EventHandlers; };
    class CUP_O_BTR40_TKA_OCimport_02 : CUP_O_BTR40_TKA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BTR40_MG_TKA_OCimport_02 : CUP_O_BTR40_MG_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class C_Van_01_transport_F;
    class C_Van_01_transport_F_OCimport_01 : C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_01_transport_F_OCimport_02 : C_Van_01_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };

    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CFP_B_AFGPolice_Offroad_ANCOP_01;
    class CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_01 : CFP_B_AFGPolice_Offroad_ANCOP_01 { scope = 0; class EventHandlers; class Turrets; };
    class CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_02 : CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };
    class CUP_B_RPGPack_Khaki;
    class CUP_B_AT_Backpack: CUP_B_RPGPack_Khaki
    {
        author="Archduke";
        scope=1;
        class TransportMagazines
        {
            class _xx_CUP_PG7VL_M
            {
                magazine="CUP_PG7VL_M";
                count=2;
            };
        };
    };
    class CUP_B_AA_Backpack: CUP_B_RPGPack_Khaki
    {
        author="Archduke";
        scope=1;
        class TransportMagazines
        {
            class _xx_CUP_Strela_2_M
            {
                magazine="CUP_Strela_2_M";
                count=2;
            };
        };
    };
    class B_TacticalPack_oli;
    class CUP_B_MG_Ammo: B_TacticalPack_oli
    {
        author="Archduke";
        scope=1;
        class TransportMagazines
        {
            class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
            {
                magazine="CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                count=2;
            };
        };
    };
    class CUP_B_AlicePack_Khaki;
    class CUP_B_Medic: CUP_B_AlicePack_Khaki
    {
        scope=1;
        displayName="ALICE Pack (Medic)";
        class TransportItems
        {
            class _xx_Medikit
            {
                name="Medikit";
                count=1;
            };
            class _xx_FirstAidKit
            {
                name="FirstAidKit";
                count=10;
            };
        };
    };
    class CUP_B_AlicePack_Egineer: CUP_B_AlicePack_Khaki
    {
        author="Archduke";
        scope=1;
        class TransportMagazines
        {
            class _xx_APERSMine_Range_Mag
            {
                magazine="APERSMine_Range_Mag";
                count=3;
            };
            class _xx_CUP_PipeBomb_M
            {
                magazine="CUP_PipeBomb_M";
                count=3;
            };
        };
        class TransportItems
        {
            class _xx_ToolKit
            {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector
            {
                name="MineDetector";
                count=1;
            };
        };
    };
    class B_Soldier_base_F;
    class CFP_B_soldier_base_Sudan_00: B_Soldier_base_F
    {
        scope=0;
        class EventHandlers;
    };
    class CFP_B_soldier_base_Sudan_01: B_Soldier_base_F
    {
        side=1;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_Sudan";
        author="Archduke";
        faction="CFP_B_SDARMY";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
        uniformClass="CFP_Uniform_Sudan_01";
        Items[]=
        {
            "FirstAidKit"
        };
        RespawnItems[]=
        {
            "FirstAidKit"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sudan.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Red",
        };
        class HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.079999998;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitNeck: HitFace
            {
                armor=1;
                material=-1;
                name="neck";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
            };
            class HitHead: HitNeck
            {
                armor=1;
                material=-1;
                name="head";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
                depends="HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor=1;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=1;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitAbdomen: HitPelvis
            {
                armor=1;
                material=-1;
                name="spine1";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=1;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor=1;
                material=-1;
                name="spine2";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitChest: HitDiaphragm
            {
                armor=1;
                material=-1;
                name="spine3";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitBody: HitChest
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=0.1;
                radius=0.16;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor=1;
                material=-1;
                name="arms";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
            };
            class HitHands: HitArms
            {
                armor=1;
                material=-1;
                name="hands";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="HitArms";
            };
            class HitLegs
            {
                armor=1;
                material=-1;
                name="legs";
                passThrough=1;
                radius=0.12;
                explosionShielding=1;
                visual="injury_legs";
                minimalHit=0.0099999998;
            };
        };
    };
    class CFP_B_soldier_base_Sudan_BDU: B_Soldier_base_F
    {
        side=1;
        scope=1;
        faction="CFP_B_SDARMY";
        modelSides[]={6};
        vehicleClass="CFP_ShirtUniform";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1;
        attendant="true";
        uniformAccessories[]={};
        nakedUniform="U_BasicBody";
        model="\A3\Characters_F_beta\INDEP\ia_officer.p3d";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        Items[]={};
        weapons[]=
        {
            "Throw",
            "Put"
        };
        magazines[]={};
        linkedItems[]=
        {
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        respawnLinkedItems[]=
        {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "insignia"
        };
        class Wounds
        {
            tex[]={};
            mat[]=
            {
                "A3\Characters_F_Beta\INDEP\Data\officer.rvmat",
                "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat",
                "A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"
            };
        };
    };
    class CFP_B_soldier_base_Sudan_02: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan Arid Digital BDU";
        uniformClass="CFP_Uniform_Sudan_02";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Sudan.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sudan.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_03: B_Soldier_base_F
    {
        side=1;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_Sudan";
        author="Archduke";
        faction="CFP_B_SDARMY";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_TK",
            ""
        };
        model="A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
        uniformClass="CFP_Uniform_Sudan_03";
        Items[]=
        {
            "FirstAidKit"
        };
        RespawnItems[]=
        {
            "FirstAidKit"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Brown.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Red",
        };
        class HitPoints
        {
            class HitFace
            {
                armor=1;
                material=-1;
                name="face_hub";
                passThrough=0.1;
                radius=0.079999998;
                explosionShielding=0.1;
                minimalHit=0.0099999998;
            };
            class HitNeck: HitFace
            {
                armor=1;
                material=-1;
                name="neck";
                passThrough=0.1;
                radius=0.1;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
            };
            class HitHead: HitNeck
            {
                armor=1;
                material=-1;
                name="head";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=0.5;
                minimalHit=0.0099999998;
                depends="HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor=1;
                material=-1;
                name="pelvis";
                passThrough=0.1;
                radius=0.2;
                explosionShielding=1;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitAbdomen: HitPelvis
            {
                armor=1;
                material=-1;
                name="spine1";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=1;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor=1;
                material=-1;
                name="spine2";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitChest: HitDiaphragm
            {
                armor=1;
                material=-1;
                name="spine3";
                passThrough=0.1;
                radius=0.15000001;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
            };
            class HitBody: HitChest
            {
                armor=1000;
                material=-1;
                name="body";
                passThrough=0.1;
                radius=0.16;
                explosionShielding=6;
                visual="injury_body";
                minimalHit=0.0099999998;
                depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms
            {
                armor=1;
                material=-1;
                name="arms";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
            };
            class HitHands: HitArms
            {
                armor=1;
                material=-1;
                name="hands";
                passThrough=1;
                radius=0.1;
                explosionShielding=1;
                visual="injury_hands";
                minimalHit=0.0099999998;
                depends="HitArms";
            };
            class HitLegs
            {
                armor=1;
                material=-1;
                name="legs";
                passThrough=1;
                radius=0.12;
                explosionShielding=1;
                visual="injury_legs";
                minimalHit=0.0099999998;
            };
        };
    };
    class CFP_B_soldier_base_Sudan_04: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_04";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Brown.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Brown.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_05: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_05";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Green.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_06: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_06";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Green.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Green.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_07: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_07";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Pixel.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_08: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_08";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Pixel.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Pixel.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_09: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_09";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Leaf.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_10: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_10";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Leaf.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Leaf.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_11: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_11";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Police.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_12: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_12";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Police.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Police.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_13: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_13";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sword.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_14: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_14";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Sword.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sword.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_15: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_15";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sword2.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_16: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_16";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Sword2.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Sword2.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_17: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_17";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_Police2.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_Police2.paa"
        };
    };
    class CFP_B_soldier_base_Sudan_18: CFP_B_soldier_base_Sudan_BDU
    {
        displayName="Sudan BDU";
        uniformClass="CFP_Uniform_Sudan_18";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\b_sdarmy\Data\BDU_SF.paa",
            "\x\cfp\addons\b_sdarmy\Data\Uniform_SF.paa"
        };
    };
    class CFP_B_SDARMY_Soldier_01: CFP_B_soldier_base_Sudan_01
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_B_SDARMY_Soldier_02: CFP_B_soldier_base_Sudan_03
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_B_SDARMY_Soldier_03: CFP_B_soldier_base_Sudan_01
    {
        displayName="Rifleman AT";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AT_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "CUP_launch_RPG7V",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "CUP_launch_RPG7V",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_PG7V_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_PG7V_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\AT.jpg";
    };
    class CFP_B_SDARMY_Soldier_04: CFP_B_soldier_base_Sudan_01
    {
        displayName="Rifleman AA";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AA_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "CUP_launch_9K32Strela",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "CUP_launch_9K32Strela",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_Strela_2_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_Strela_2_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\AA.jpg";
    };
    class CFP_B_SDARMY_Soldier_05: CFP_B_soldier_base_Sudan_01
    {
        displayName="Machinegunner";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_MG_Ammo";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_lmg_PKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_lmg_PKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnMagazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\MG.jpg";
    };
    class CFP_B_SDARMY_Soldier_06: CFP_B_soldier_base_Sudan_01
    {
        displayName="Automatic Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_RPK74",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_RPK74",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
        };
        respawnMagazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Auto.jpg";
    };
    class CFP_B_SDARMY_Soldier_07: CFP_B_soldier_base_Sudan_01
    {
        displayName="Crewman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "CUP_H_TK_TankerHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "CUP_H_TK_TankerHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CUP_H_TK_TankerHelmet",
            0.50,
            "CUP_H_SLA_TankerHelmet",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_B_SDARMY_Soldier_08: CFP_B_soldier_base_Sudan_01
    {
        displayName="Medic";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Medic";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Medikit"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Medikit"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Medic.jpg";
    };
    class CFP_B_SDARMY_Soldier_09: CFP_B_soldier_base_Sudan_03
    {
        displayName="Engineer";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Egineer";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Medic.jpg";
    };
    class CFP_B_SDARMY_Soldier_10: CFP_B_soldier_base_Sudan_03
    {
        displayName="Helicopter Pilot";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_B_PilotVest",
            "CUP_H_TK_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_NVG_PVS7"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_B_PilotVest",
            "CUP_H_TK_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_NVG_PVS7"
        };
        weapons[]=
        {
            "CUP_smg_MP5A5",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_smg_MP5A5",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\HeliPilot.jpg";
    };
    class CFP_B_SDARMY_Soldier_11: CFP_B_soldier_base_Sudan_03
    {
        displayName="Pilot";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_B_PilotVest",
            "CUP_H_RUS_ZSH_Shield_Up",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_NVG_PVS7"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_B_PilotVest",
            "CUP_H_RUS_ZSH_Shield_Up",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_NVG_PVS7"
        };
        weapons[]=
        {
            "CUP_smg_MP5A5",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_smg_MP5A5",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5",
            "CUP_30Rnd_9x19_MP5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "SP_0000_Standard_Coverall_Green",
            1
        };
        headgearList[]=
        {
            "CUP_H_RUS_ZSH_Shield_Up",
            0.50,
            "CUP_H_RUS_ZSH_Shield_Down",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Pilot.jpg";
    };
    class CFP_B_SDARMY_Soldier_12: CFP_B_soldier_base_Sudan_01
    {
        displayName="Paratrooper";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_13: CFP_B_soldier_base_Sudan_03
    {
        displayName="Paratrooper";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_14: CFP_B_soldier_base_Sudan_01
    {
        displayName="Paratrooper Medic";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Medic";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Medikit"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "Medikit"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_15: CFP_B_soldier_base_Sudan_03
    {
        displayName="Paratrooper Engineer";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Egineer";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_16: CFP_B_soldier_base_Sudan_01
    {
        displayName="Paratrooper AT";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AT_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "CUP_launch_RPG7V_PGO7V3",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "CUP_launch_RPG7V_PGO7V3",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_PG7V_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_PG7V_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_17: CFP_B_soldier_base_Sudan_03
    {
        displayName="Paratrooper AA";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AA_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "CUP_launch_9K32Strela",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "CUP_launch_9K32Strela",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_Strela_2_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_Strela_2_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_18: CFP_B_soldier_base_Sudan_01
    {
        displayName="Paratrooper Machinegunner";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_MG_Ammo";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_lmg_PKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_lmg_PKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnMagazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_19: CFP_B_soldier_base_Sudan_01
    {
        displayName="Automatic Paratrooper";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_RPK74",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_RPK74",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
        };
        respawnMagazines[]=
        {
            "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
            "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_18",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Paratrooper.jpg";
    };
    class CFP_B_SDARMY_Soldier_20: CFP_B_soldier_base_Sudan_03
    {
        displayName="Officer";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "SP_Holster1_Brown",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "SP_Holster1_Brown",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_hgun_M9",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_hgun_M9",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9"
        };
        respawnMagazines[]=
        {
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9",
            "CUP_15Rnd_9x19_M9"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Green",
            0.50,
            "SP_Beret_Red",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Officer.jpg";
    };
    class CFP_B_SDARMY_Soldier_21: CFP_B_soldier_base_Sudan_01
    {
        displayName="Squad Leader";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_B_SDARMY_Soldier_22: CFP_B_soldier_base_Sudan_01
    {
        displayName="Sniper";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_optic_PSO_1",
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "CUP_optic_PSO_1",
        };
        weapons[]=
        {
            "CUP_srifle_SVD_pso",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_srifle_SVD_pso",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M"
        };
        respawnMagazines[]=
        {
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M",
            "CUP_10Rnd_762x54_SVD_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_01",
            0.25,
            "CFP_Uniform_Sudan_02",
            0.25,
            "CFP_Uniform_Sudan_03",
            0.25,
            "CFP_Uniform_Sudan_04",
            0.25,
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001,
            "V_TacVest_brn",
            0.33000001,
            "V_TacVest_khk",
            0.33000001,
            "V_TacVest_camo",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_01",
            0.50,
            "CFP_Cap_Sudan_02",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_01",
            0.50,
            "CFP_PASGTHelmet_Sudan_02",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Sniper.jpg";
    };
    class CFP_B_SDARMY_Soldier_23: CFP_B_soldier_base_Sudan_01
    {
        displayName="Assistant Gunner (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Assist.jpg";
    };
    class CFP_B_SDARMY_Soldier_24: CFP_B_soldier_base_Sudan_01
    {
        displayName="Gunner (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodHigh_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_B_SDARMY_Soldier_25: CFP_B_soldier_base_Sudan_01
    {
        displayName="Gunner (DShKM Low)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodLow_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_B_SDARMY_Soldier_26: CFP_B_soldier_base_Sudan_01
    {
        displayName="Assistant Gunner (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Assist.jpg";
    };
    class CFP_B_SDARMY_Soldier_27: CFP_B_soldier_base_Sudan_03
    {
        displayName="Gunner (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Bipod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_B_SDARMY_Soldier_28: CFP_B_soldier_base_Sudan_01
    {
        displayName="Assistant Gunner (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Assist.jpg";
    };
    class CFP_B_SDARMY_Soldier_29: CFP_B_soldier_base_Sudan_03
    {
        displayName="Gunner (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Tripod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_05",
            0.25,
            "CFP_Uniform_Sudan_06",
            0.25,
            "CFP_Uniform_Sudan_07",
            0.25,
            "CFP_Uniform_Sudan_08",
            0.25,
            "CFP_Uniform_Sudan_09",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25,
            "CFP_Uniform_Sudan_13",
            0.25,
            "CFP_Uniform_Sudan_14",
            0.25,
            "CFP_Uniform_Sudan_15",
            0.25,
            "CFP_Uniform_Sudan_16",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25
        };
        vestList[]=
        {
            "CFP_AK_VEST_LOlive",
            0.33000001,
            "CFP_AK_VEST_Tan",
            0.33000001,
            "SP_Harness1_Tan",
            0.33000001,
            "SP_Harness1_Green",
            0.33000001,
            "CUP_V_I_Carrier_Belt",
            0.33000001
        };
        headgearList[]=
        {
            "CFP_Beret_Brown_Sudan",
            0.50,
            "SP_Beret2_Red",
            0.50,
            "SP_Beret_Red",
            0.50,
            "CFP_Cap_Sudan_03",
            0.50,
            "CFP_Cap_Sudan_04",
            0.50,
            "CFP_Cap_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_03",
            0.50,
            "CFP_PASGTHelmet_Sudan_04",
            0.50,
            "SP_Shemagh_Tan",
            0.50,
            "SP_SSh68NetHelmet_Green1",
            0.50,
            "SP_SSh68NetHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Tan1",
            0.50,
            "SP_PASGTHelmet_Woodland1",
            0.50,
            "SP_M1Helmet_GrayDim",
            0.50,
            "SP_M1Helmet_Green",
            0.50,
            "SP_M1Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Tan",
            0.50,
            "CFP_Basic_Helmet_Gray_Green",
            0.50,
            "SP_PatrolCap_Green",
            0.50,
            "CFP_PatrolCap_Woodland",
            0.50,
            "CFP_Cap_Sudan_07",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50,
            "CFP_PASGTHelmet_Sudan_05",
            0.50,
            "CFP_PASGTHelmet_Sudan_06",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_B_SDARMY_Soldier_30: CFP_B_soldier_base_Sudan_01
    {
        displayName="Policeman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_11",
            0.25,
            "CFP_Uniform_Sudan_12",
            0.25,
            "CFP_Uniform_Sudan_17",
            0.25
        };
        vestList[]=
        {
            "V_TacVest_blk",
            0.33000001,
            "V_BandollierB_blk",
            0.33000001,
            "CFP_AK_Vest_Black",
            0.33000001
        };
        headgearList[]=
        {
            "SP_Beret_Black",
            0.50,
            "SP_Beret_Blue",
            0.50,
            "SP_Beret2_Black",
            0.50,
            "SP_Beret2_Blue",
            0.50,
            "CFP_Cap_Sudan_06",
            0.50,
            "CFP_Basic_Helmet_Black",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Police.jpg";
    };
    class CFP_B_SDARMY_Soldier_31: CFP_B_soldier_base_Sudan_01
    {
        displayName="Policeman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_11",
            0.25,
            "CFP_Uniform_Sudan_12",
            0.25,
            "CFP_Uniform_Sudan_17",
            0.25
        };
        vestList[]=
        {
            "V_TacVest_blk",
            0.33000001,
            "V_BandollierB_blk",
            0.33000001,
            "CFP_AK_Vest_Black",
            0.33000001
        };
        headgearList[]=
        {
            "SP_Beret_Black",
            0.50,
            "SP_Beret_Blue",
            0.50,
            "SP_Beret2_Black",
            0.50,
            "SP_Beret2_Blue",
            0.50,
            "CFP_Cap_Sudan_06",
            0.50,
            "CFP_Basic_Helmet_Black",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Police.jpg";
    };
    class CFP_B_SDARMY_Soldier_32: CFP_B_soldier_base_Sudan_01
    {
        displayName="Policeman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKM",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
        respawnMagazines[]=
        {
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M",
            "CUP_30Rnd_762x39_AK47_M"
        };
                ALiVE_orbatCreator_loadout[]=
        {};
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_Sudan_11",
            0.25,
            "CFP_Uniform_Sudan_12",
            0.25,
            "CFP_Uniform_Sudan_17",
            0.25
        };
        vestList[]=
        {
            "V_TacVest_blk",
            0.33000001,
            "V_BandollierB_blk",
            0.33000001,
            "CFP_AK_Vest_Black",
            0.33000001
        };
        headgearList[]=
        {
            "SP_Beret_Black",
            0.50,
            "SP_Beret_Blue",
            0.50,
            "SP_Beret2_Black",
            0.50,
            "SP_Beret2_Blue",
            0.50,
            "CFP_Cap_Sudan_06",
            0.50,
            "CFP_Basic_Helmet_Black",
            0.50,
            "CFP_Cap_Sudan_08",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SUDAN";
        editorPreview="\x\cfp\addons\b_sdarmy\Data\Preview\Police.jpg";
    };
    class CFP_B_SDARMY_Ural_ZU_23_01 : CUP_O_Ural_ZU23_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (ZU-23)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_BRDM_2_01 : CUP_O_BRDM2_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BRDM-2";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\rus_brdm2_01_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_BTR_60_01 : CUP_O_BTR60_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CommanderTurret : CommanderTurret { gunnerType = "CFP_O_soldier_Sudan_20"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoGunner_1 : CargoGunner_1 { gunnerType = ""; };
            class CargoGunner_2 : CargoGunner_2 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_body_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_BTR60\data\textures\russia\russia_detail_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU_WDL";

    };

    class CFP_B_SDARMY_BTR_90_01 : CUP_O_BTR90_RU_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-90";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_soldier_Sudan_07"; };
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

    class CFP_B_SDARMY_BMP_1_01 : CUP_O_BMP1_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-1";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class CommanderOptics : CommanderOptics { gunnerType = "CFP_B_SDARMY_Soldier_20"; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\cup\trackedvehicles\cup_trackedvehicles_bmp\BMP\Data\trup_ext0_CO'];_unit setObjectTextureGlobal [1,'\cup\trackedvehicles\cup_trackedvehicles_bmp\BMP\Data\veza0_CO'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_BMP_2_01 : CUP_O_BMP2_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_ru_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_ru_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_rus_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_01 : CUP_O_UAZ_Unarmed_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKC";

    };

    class CFP_B_SDARMY_UAZ_Open_01 : CUP_O_UAZ_Open_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (Open)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKC";

    };

    class CFP_B_SDARMY_UAZ_DShKM_01 : CUP_O_UAZ_MG_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_civil_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_001_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKC";

    };

    class CFP_B_SDARMY_UAZ_SPG_01 : CUP_O_UAZ_SPG9_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (SPG-9)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_UAZ_GL_01 : CUP_O_UAZ_AGS30_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (GL)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_Ural_01 : CUP_O_Ural_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Open)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Refuel)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Repair)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_09";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Ural_Ammunition_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Ammunition)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_rus_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RUD";

    };

    class CFP_B_SDARMY_Mi_24P_01 : CUP_O_Mi24_P_Dynamic_RU_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24P";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_10";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_10"; };
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

    class CFP_B_SDARMY_Mi_8MT_01 : CUP_O_Mi8_SLA_1_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_10";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_10"; };
            class BackTurret : BackTurret { gunnerType = "CFP_B_SDARMY_Soldier_10"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_B_SDARMY_Soldier_10"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_body_g_vsr_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa'];_unit setObjectTextureGlobal [2,'a3\data_f\clear_empty.paa'];_unit setObjectTextureGlobal [3,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Russia";

    };

    class CFP_B_SDARMY_SU_25_01 : CUP_O_Su25_Dyn_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SU-25";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_11";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body1_rus_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Su25\data\su25_body2_rus_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Russia1";

    };

    class CFP_B_SDARMY_C130_01 : CUP_O_C130J_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "C-130";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_11";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_11"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_TKA_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_TKA_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Taki";

    };

    class CFP_B_SDARMY_T72_01 : CUP_O_T72_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\RU_T72_1_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\RU_T72_2_co.paa'];_unit setObjectTextureGlobal [2,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\RU_T72_3_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_T55_01 : CUP_O_T55_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_TKG_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_TKG_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_DShKM_01 : CUP_O_DSHKM_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_DShKM_Low_01 : CUP_O_DSHKM_MiniTripod_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_SPG_9_01 : CUP_O_SPG9_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_Podnos_2B14_01 : CUP_O_2b14_82mm_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Podnos 2B14";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_D30_01 : CUP_O_D30_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D-30";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

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

    class CFP_B_SDARMY_D30_AT_01 : CUP_O_D30_AT_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "D30 AT";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

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

    class CFP_B_SDARMY_M113A3_01 : CUP_O_M113_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "M113A3";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_desert_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_desert_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_B_SDARMY_BMP_2AA_01 : CUP_O_BMP2_ZU_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2 (AA)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_ru_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_ru_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_Land_Rover_Ambulance_01 : CUP_O_LR_Ambulance_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (Ambulance)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_08";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_base_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_desert_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_d_lr_special_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "GBD";

    };

    class CFP_B_SDARMY_Pickup_PK_01 : CUP_O_Datsun_PK_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

    class CFP_B_SDARMY_Pickup_01 : CUP_O_Datsun_4seat_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class CFP_B_SDARMY_BMP_2Ambulance_01 : CUP_O_BMP2_AMB_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BMP-2 (Ambulance)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_01_ru_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_02_ru_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RU";

    };

    class CFP_B_SDARMY_HMMWV_01 : CFP_B_AFARMY_HMMWV_01_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\Data\hmmwv_body_canvas_1_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_parts_1_ca.paa'];_unit setObjectTextureGlobal [4,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gpk_tower_co.paa'];_unit setObjectTextureGlobal [5,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_gmv_01_co.paa'];_unit setObjectTextureGlobal [6,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_details_2_co.paa'];_unit setObjectTextureGlobal [7,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\stryker_net_Des_co.paa'];_unit setObjectTextureGlobal [8,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\hmmwv_m1167turret_co.paa'];_unit setObjectTextureGlobal [9,'\CUP\WheeledVehicles\CUP_WheeledVehicles_UpHMMWV\data\fbcb2_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_B_SDARMY_HMMWV_DShKM_01 : CFP_B_AFARMY_HMMWV_DShKM_01_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "HMMWV (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_02"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_body_canvas_1_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_hood_canvas_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_regular_1_co.paa'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_HMMWV\data\hmmwv_gpk_tower_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Desert";

    };

    class CFP_B_SDARMY_M60_01 : CUP_B_M60A3_USMC_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "M60";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_07";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_07"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo1_co.paa'];_unit setObjectTextureGlobal [1,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo2_co.paa'];_unit setObjectTextureGlobal [2,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo3_co.paa'];_unit setObjectTextureGlobal [3,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo4_co.paa'];_unit setObjectTextureGlobal [4,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo5_co.paa'];_unit setObjectTextureGlobal [5,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo6_co.paa'];_unit setObjectTextureGlobal [6,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo7_co.paa'];_unit setObjectTextureGlobal [7,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo8_co.paa'];_unit setObjectTextureGlobal [8,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo9_co.paa'];_unit setObjectTextureGlobal [9,'CUP\TrackedVehicles\CUP_TrackedVehicles_M60\data\textures\racs_m60_camo10_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "RACS";

    };

    class CFP_B_SDARMY_Walid_01 : CUP_O_BTR40_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_Walid_DShKM_01 : CUP_O_BTR40_MG_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Walid (DShKM)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_B_SDARMY_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_BTR40\data\btr40ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_B_SDARMY_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_04";

    };

    class CFP_B_SDARMY_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_12";

    };
    class CFP_B_SDARMY_Offroad_Police_01 : CFP_B_AFGPolice_Offroad_ANCOP_01_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Police)";
        side = 1;
        faction = "CFP_B_SDARMY";
        crew = "CFP_B_SDARMY_Soldier_30";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Blue";

    };
};