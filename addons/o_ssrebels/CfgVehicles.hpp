class CBA_Extended_EventHandlers_base;
class EventHandlers_base;
class Extended_Init_Eventhandlers;
class EventHandlers
{
    class CFP_O_SSREBELS_Soldier_Base
    {
        CFP_O_SSREBELS_Soldier_Base_init="if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
};

class CfgVehicles {

    class CUP_I_T55_TK_GUE;
    class CUP_I_T55_TK_GUE_OCimport_01 : CUP_I_T55_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_T55_TK_GUE_OCimport_02 : CUP_I_T55_TK_GUE_OCimport_01 {
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

    class CUP_I_ZU23_TK_GUE;
    class CUP_I_ZU23_TK_GUE_OCimport_01 : CUP_I_ZU23_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_ZU23_TK_GUE_OCimport_02 : CUP_I_ZU23_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_SPG9_TK_GUE;
    class CUP_I_SPG9_TK_GUE_OCimport_01 : CUP_I_SPG9_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_SPG9_TK_GUE_OCimport_02 : CUP_I_SPG9_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_2b14_82mm_TK_GUE;
    class CUP_I_2b14_82mm_TK_GUE_OCimport_01 : CUP_I_2b14_82mm_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_2b14_82mm_TK_GUE_OCimport_02 : CUP_I_2b14_82mm_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_DSHKM_TK_GUE;
    class CUP_I_DSHKM_TK_GUE_OCimport_01 : CUP_I_DSHKM_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_DSHKM_TK_GUE_OCimport_02 : CUP_I_DSHKM_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_DSHkM_MiniTriPod_TK_GUE;
    class CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_01 : CUP_I_DSHkM_MiniTriPod_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_SPG9_TKA_OCimport_02 : CUP_O_LR_SPG9_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
        };
    };

    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_Transport_TKA_OCimport_02 : CUP_O_LR_Transport_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class O_G_Offroad_01_F;
    class O_G_Offroad_01_F_OCimport_01 : O_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class O_G_Offroad_01_F_OCimport_02 : O_G_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class CUP_I_Datsun_4seat_TK;
    class CUP_I_Datsun_4seat_TK_OCimport_01 : CUP_I_Datsun_4seat_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_TK_OCimport_02 : CUP_I_Datsun_4seat_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_TK_Random_OCimport_02 : CUP_I_Datsun_PK_TK_Random_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
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

    class CUP_O_BM21_SLA;
    class CUP_O_BM21_SLA_OCimport_01 : CUP_O_BM21_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BM21_SLA_OCimport_02 : CUP_O_BM21_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_V3S_Open_TKG;
    class CUP_I_V3S_Open_TKG_OCimport_01 : CUP_I_V3S_Open_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Open_TKG_OCimport_02 : CUP_I_V3S_Open_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Repair_TKG;
    class CUP_I_V3S_Repair_TKG_OCimport_01 : CUP_I_V3S_Repair_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Repair_TKG_OCimport_02 : CUP_I_V3S_Repair_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Refuel_TKG;
    class CUP_I_V3S_Refuel_TKG_OCimport_01 : CUP_I_V3S_Refuel_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Refuel_TKG_OCimport_02 : CUP_I_V3S_Refuel_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_V3S_Rearm_TKG;
    class CUP_I_V3S_Rearm_TKG_OCimport_01 : CUP_I_V3S_Rearm_TKG { scope = 0; class EventHandlers; };
    class CUP_I_V3S_Rearm_TKG_OCimport_02 : CUP_I_V3S_Rearm_TKG_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_B_RPGPack_Khaki;
    class CFP_SPLM_RPG_Backpack: CUP_B_RPGPack_Khaki
    {
        scope=1;
        class TransportMagazines
        {
            class _xx_CUP_PG7VL_M
            {
                magazine="CUP_PG7VL_M";
                count=4;
            };
            class _xx_CUP_PG7V_M
            {
                magazine="CUP_PG7V_M";
                count=4;
            };
        };
    };
    class CUP_B_AlicePack_Khaki;
    class CUP_B_AlicePack_Medic: CUP_B_AlicePack_Khaki
    {
        scope=1;
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_00: B_Soldier_base_F
    {
        scope=0;
        class EventHandlers;
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_PMC: B_Soldier_base_F
    {
        side=0;
        scope=1;
        faction="CFP_O_SSREBELS";
        modelSides[]={6};
        vehicleClass="CFP_ShirtUniform";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1;
        attendant="true";
        uniformAccessories[]={};
        nakedUniform="U_BasicBody";
        model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_pmc_unit_1.p3d";
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_Hunter: B_Soldier_base_F
    {
        side=0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_SPLM-IO";
        author="Archduke";
        faction="CFP_O_SSREBELS";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
        uniformClass="CFP_Uniform_SPLM_03";
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
            "\x\cfp\addons\o_ssrebels\Data\Hunter_Wdl.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Green",
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_Civil: B_Soldier_base_F
    {
        side=0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_SPLM-IO";
        author="Archduke";
        faction="CFP_O_SSREBELS";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\characters_F\Civil\c_poor.p3d";
        uniformClass="CFP_Uniform_SPLM_12";
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
            "\x\cfp\addons\o_ssrebels\Data\Civil_Choc.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Green",
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_01: CFP_O_SSREBELS_Soldier_Base_SPLM_PMC
    {
        displayName="SPLM Militia Uniform";
        uniformClass="CFP_Uniform_SPLM_01";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\PMC_Wdl.paa",
            "\x\cfp\addons\o_ssrebels\Data\Pants_Wdl.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_02: CFP_O_SSREBELS_Soldier_Base_SPLM_PMC
    {
        displayName="SPLM Militia Uniform";
        uniformClass="CFP_Uniform_SPLM_02";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\PMC_Pixel.paa",
            "\x\cfp\addons\o_ssrebels\Data\Pants_Khk.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla: B_Soldier_base_F
    {
        side=0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_SPLM-IO";
        author="Archduke";
        faction="CFP_O_SSREBELS";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
        uniformClass="CFP_Uniform_SPLM_04";
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
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Wdl.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Green",
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_BDU: B_Soldier_base_F
    {
        side=0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_SPLM-IO";
        author="Archduke";
        faction="CFP_O_SSREBELS";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\characters_F\OPFOR\o_officer_noinsignia_f.p3d";
        uniformClass="CFP_Uniform_SPLM_06";
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
            "\x\cfp\addons\o_ssrebels\Data\BDU_SPLA_Wdl.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Green",
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_05: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_05";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Khk_Wdl.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_07: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_07";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_DDPM.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_08: CFP_O_SSREBELS_Soldier_Base_SPLM_BDU
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_08";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\BDU_Pixel.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_09: CFP_O_SSREBELS_Soldier_Base_SPLM_BDU
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_09";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\BDU_Police2.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_10: CFP_O_SSREBELS_Soldier_Base_SPLM_Hunter
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_10";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Hunter_Yellow_Wdl.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_11: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_11";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Police2.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_13: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_13";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Blue_Khk.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_14: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_14";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Green_Blue.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_15: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_15";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Khk_Blue.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_16: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_16";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Olive.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_17: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_17";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Guerrilla_Police.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_18: CFP_O_SSREBELS_Soldier_Base_SPLM_Civil
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_18";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Civil_Wdl.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_19: CFP_O_SSREBELS_Soldier_Base_SPLM_Civil
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_19";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Civil_Wdl_Jeans.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_20: CFP_O_SSREBELS_Soldier_Base_SPLM_Civil
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_20";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Civil_Black_Jeans.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_21: CFP_O_SSREBELS_Soldier_Base_SPLM_Civil
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_21";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Civil_DDPM.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_22: CFP_O_SSREBELS_Soldier_Base_SPLM_Civil
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_22";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Civil_Police.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_Taki: B_Soldier_base_F
    {
        side=0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        dlc="CFP_SPLM-IO";
        author="Archduke";
        faction="CFP_O_SSREBELS";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_officer.p3d";
        uniformClass="CFP_Uniform_SPLM_23";
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
            "\x\cfp\addons\o_ssrebels\Data\Taki_SPLA_Wdl.paa"
        };
        icon="iconMan";
        headgearList[]=
        {
            "",
            1,
            "SP_Beret2_Green",
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
    class CFP_O_SSREBELS_Soldier_Base_SPLM_23: CFP_O_SSREBELS_Soldier_Base_SPLM_Taki
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_24";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Taki_Dark.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_24: CFP_O_SSREBELS_Soldier_Base_SPLM_Taki
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_25";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Taki_DDPM.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_25: CFP_O_SSREBELS_Soldier_Base_SPLM_BDU
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_26";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\BDU_Brown.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_Base_SPLM_26: CFP_O_SSREBELS_Soldier_Base_SPLM_Taki
    {
        displayName="Militia";
        uniformClass="CFP_Uniform_SPLM_27";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_ssrebels\Data\Taki_RSF.paa"
        };
    };
    class CFP_O_SSREBELS_Soldier_01: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Rifleman.jpg";
    };
    class CFP_O_SSREBELS_Soldier_02: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Rifleman.jpg";
    };
    class CFP_O_SSREBELS_Soldier_03: CFP_O_SSREBELS_Soldier_Base_SPLM_Hunter
    {
        displayName="Rifleman AT";
        scope=2;
        scopeCurator=2;
        backpack="CFP_SPLM_RPG_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "CUP_launch_RPG7V",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "CUP_launch_RPG7V",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\RiflemanAT.jpg";
    };
    class CFP_O_SSREBELS_Soldier_04: CFP_O_SSREBELS_Soldier_Base_SPLM_Guerrilla
    {
        displayName="Machinegunner";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CFP_Jacket_SPLM_02",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CFP_Jacket_SPLM_02",
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
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnMagazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CFP_Jacket_SPLM_01",
            0.25,
            "CFP_Jacket_SPLM_02",
            0.25,
            "CFP_Jacket_SPLM_03",
            0.25,
            "CFP_Bandolier_SPLM_01",
            0.50
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\MG.jpg";
    };
    class CFP_O_SSREBELS_Soldier_05: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Marksman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Marksman.jpg";
    };
    class CFP_O_SSREBELS_Soldier_06: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Egineer";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Egineer";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Medic.jpg";
    };
    class CFP_O_SSREBELS_Soldier_07: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Medic";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Medic";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Medic.jpg";
    };
    class CFP_O_SSREBELS_Soldier_08: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Rifleman.jpg";
    };
    class CFP_O_SSREBELS_Soldier_09: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Gunner (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodHigh_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SSREBELS_Soldier_10: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Gunner (DShKM/Low)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodLow_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SSREBELS_Soldier_11: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Assistant (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Assistant.jpg";
    };
    class CFP_O_SSREBELS_Soldier_12: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Gunner (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Bipod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SSREBELS_Soldier_13: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Assistant (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Assistant.jpg";
    };
    class CFP_O_SSREBELS_Soldier_14: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Gunner (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Tripod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SSREBELS_Soldier_15: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Assistant (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_01",
            0.25,
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_03",
            0.25,
            "CFP_Uniform_SPLM_04",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_07",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_09",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_17",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CFP_Uniform_SPLM_23",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_25",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25,
            "CFP_Cap_SPLA_04",
            0.25,
            "CFP_Cap_SPLA_05",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_01",
            0.2,
            "CFP_Chest_Rig_SPLM_02",
            0.2,
            "CFP_Chest_Rig_SPLM_03",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Assistant.jpg";
    };
    class CFP_O_SSREBELS_Soldier_16: CFP_O_SSREBELS_Soldier_Base_SPLM_15
    {
        displayName="Militiaman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CUP_U_C_Villager_01",
            0.25,
            "CUP_U_C_Villager_02",
            0.25,
            "CUP_U_C_Villager_03",
            0.25,
            "CUP_U_C_Villager_04",
            0.25,
            "CUP_U_C_Worker_01",
            0.25,
            "CUP_U_C_Worker_02",
            0.25,
            "CUP_U_C_Worker_03",
            0.25,
            "CUP_U_C_Worker_04",
            0.25,
            "CUP_I_B_PMC_Unit_1",
            0.25,
            "CUP_I_B_PMC_Unit_2",
            0.25,
            "CUP_I_B_PMC_Unit_3",
            0.25,
            "CUP_I_B_PMC_Unit_4",
            0.25,
            "U_C_Poloshirt_blue",
            0.25,
            "U_C_Poloshirt_burgundy",
            0.25,
            "U_BG_Guerilla2_2",
            0.25,
            "U_BG_Guerilla2_1",
            0.25,
            "U_BG_Guerilla2_3",
            0.25,
            "U_BG_Guerilla3_1",
            0.25,
            "U_C_HunterBody_grn",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.50,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Cap_blk",
            0.25,
            "H_Cap_blu",
            0.25,
            "H_Cap_red",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "H_Bandanna_blu",
            0.25,
            "H_Bandanna_cbr",
            0.25,
            "H_Bandanna_surfer_grn",
            0.25,
            "H_Bandanna_surfer_blk",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "CUP_H_C_Beanie_01",
            0.25,
            "CUP_H_PMC_Cap_Back_Burberry",
            0.25,
            "CUP_H_PMC_Cap_Back_Grey",
            0.25,
            "CUP_H_NAPA_Fedora",
            0.25,
        };
        vestList[]=
        {
            "None",
            0.2,
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Militia.jpg";
    };
    class CFP_O_SSREBELS_Soldier_17: CFP_O_SSREBELS_Soldier_Base_SPLM_01
    {
        displayName="Officer";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Red",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLM_06",
            0.25,
            "CFP_Uniform_SPLM_08",
            0.25,
            "CFP_Uniform_SPLM_26",
            0.25,
            "CFP_Uniform_SPLM_27",
            0.25
        };
        headgearList[]=
        {
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
            0.25,
            "CFP_Cap_SPLA_01",
            0.25,
            "CFP_Cap_SPLA_02",
            0.25,
            "CFP_Cap_SPLA_03",
            0.25
        };
        vestList[]=
        {
            "None",
            0.2,
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Officer.jpg";
    };
    class CFP_O_SSREBELS_Soldier_18: CFP_O_SSREBELS_Soldier_Base_SPLM_15
    {
        displayName="Militiaman AT";
        scope=2;
        scopeCurator=2;
        backpack="CFP_SPLM_RPG_Backpack";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "CUP_launch_RPG7V",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AK47",
            "Throw",
            "CUP_launch_RPG7V",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CUP_U_C_Villager_01",
            0.25,
            "CUP_U_C_Villager_02",
            0.25,
            "CUP_U_C_Villager_03",
            0.25,
            "CUP_U_C_Villager_04",
            0.25,
            "CUP_U_C_Worker_01",
            0.25,
            "CUP_U_C_Worker_02",
            0.25,
            "CUP_U_C_Worker_03",
            0.25,
            "CUP_U_C_Worker_04",
            0.25,
            "CUP_I_B_PMC_Unit_1",
            0.25,
            "CUP_I_B_PMC_Unit_2",
            0.25,
            "CUP_I_B_PMC_Unit_3",
            0.25,
            "CUP_I_B_PMC_Unit_4",
            0.25,
            "U_C_Poloshirt_blue",
            0.25,
            "U_C_Poloshirt_burgundy",
            0.25,
            "U_BG_Guerilla2_2",
            0.25,
            "U_BG_Guerilla2_1",
            0.25,
            "U_BG_Guerilla2_3",
            0.25,
            "U_BG_Guerilla3_1",
            0.25,
            "U_C_HunterBody_grn",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.50,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Cap_blk",
            0.25,
            "H_Cap_blu",
            0.25,
            "H_Cap_red",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "H_Bandanna_blu",
            0.25,
            "H_Bandanna_cbr",
            0.25,
            "H_Bandanna_surfer_grn",
            0.25,
            "H_Bandanna_surfer_blk",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "CUP_H_C_Beanie_01",
            0.25,
            "CUP_H_PMC_Cap_Back_Burberry",
            0.25,
            "CUP_H_PMC_Cap_Back_Grey",
            0.25,
            "CUP_H_NAPA_Fedora",
            0.25,
        };
        vestList[]=
        {
            "None",
            0.2,
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\MilitiaAT.jpg";
    };
    class CFP_O_SSREBELS_Soldier_19: CFP_O_SSREBELS_Soldier_Base_SPLM_15
    {
        displayName="Militia Machinegunner";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CFP_Jacket_SPLM_02",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CFP_Jacket_SPLM_02",
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
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnMagazines[]=
        {
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CUP_U_C_Villager_01",
            0.25,
            "CUP_U_C_Villager_02",
            0.25,
            "CUP_U_C_Villager_03",
            0.25,
            "CUP_U_C_Villager_04",
            0.25,
            "CUP_U_C_Worker_01",
            0.25,
            "CUP_U_C_Worker_02",
            0.25,
            "CUP_U_C_Worker_03",
            0.25,
            "CUP_U_C_Worker_04",
            0.25,
            "CUP_I_B_PMC_Unit_1",
            0.25,
            "CUP_I_B_PMC_Unit_2",
            0.25,
            "CUP_I_B_PMC_Unit_3",
            0.25,
            "CUP_I_B_PMC_Unit_4",
            0.25,
            "U_C_Poloshirt_blue",
            0.25,
            "U_C_Poloshirt_burgundy",
            0.25,
            "U_BG_Guerilla2_2",
            0.25,
            "U_BG_Guerilla2_1",
            0.25,
            "U_BG_Guerilla2_3",
            0.25,
            "U_BG_Guerilla3_1",
            0.25,
            "U_C_HunterBody_grn",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.50,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Cap_blk",
            0.25,
            "H_Cap_blu",
            0.25,
            "H_Cap_red",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "H_Bandanna_blu",
            0.25,
            "H_Bandanna_cbr",
            0.25,
            "H_Bandanna_surfer_grn",
            0.25,
            "H_Bandanna_surfer_blk",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "CUP_H_C_Beanie_01",
            0.25,
            "CUP_H_PMC_Cap_Back_Burberry",
            0.25,
            "CUP_H_PMC_Cap_Back_Grey",
            0.25,
            "CUP_H_NAPA_Fedora",
            0.25,
        };
        vestList[]=
        {
            "CFP_Bandolier_SPLM_01",
            0.25,
            "CFP_Jacket_SPLM_01",
            0.25,
            "CFP_Jacket_SPLM_02",
            0.25,
            "CFP_Jacket_SPLM_03",
            0.25
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\MilitiaMG.jpg";
    };
    class CFP_O_SSREBELS_Soldier_20: CFP_O_SSREBELS_Soldier_Base_SPLM_15
    {
        displayName="Militiaman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLM_02",
            0.25,
            "CFP_Uniform_SPLM_05",
            0.25,
            "CFP_Uniform_SPLM_10",
            0.25,
            "CFP_Uniform_SPLM_11",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_SPLM_13",
            0.25,
            "CFP_Uniform_SPLM_14",
            0.25,
            "CFP_Uniform_SPLM_15",
            0.25,
            "CFP_Uniform_SPLM_18",
            0.25,
            "CFP_Uniform_SPLM_19",
            0.25,
            "CFP_Uniform_SPLM_20",
            0.25,
            "CFP_Uniform_SPLM_21",
            0.25,
            "CFP_Uniform_SPLM_22",
            0.25,
            "CUP_U_C_Villager_01",
            0.25,
            "CUP_U_C_Villager_02",
            0.25,
            "CUP_U_C_Villager_03",
            0.25,
            "CUP_U_C_Villager_04",
            0.25,
            "CUP_U_C_Worker_01",
            0.25,
            "CUP_U_C_Worker_02",
            0.25,
            "CUP_U_C_Worker_03",
            0.25,
            "CUP_U_C_Worker_04",
            0.25,
            "CUP_I_B_PMC_Unit_1",
            0.25,
            "CUP_I_B_PMC_Unit_2",
            0.25,
            "CUP_I_B_PMC_Unit_3",
            0.25,
            "CUP_I_B_PMC_Unit_4",
            0.25,
            "U_C_Poloshirt_blue",
            0.25,
            "U_C_Poloshirt_burgundy",
            0.25,
            "U_BG_Guerilla2_2",
            0.25,
            "U_BG_Guerilla2_1",
            0.25,
            "U_BG_Guerilla2_3",
            0.25,
            "U_BG_Guerilla3_1",
            0.25,
            "U_C_HunterBody_grn",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.50,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Cap_blk",
            0.25,
            "H_Cap_blu",
            0.25,
            "H_Cap_red",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "H_Bandanna_blu",
            0.25,
            "H_Bandanna_cbr",
            0.25,
            "H_Bandanna_surfer_grn",
            0.25,
            "H_Bandanna_surfer_blk",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "CUP_H_C_Beanie_01",
            0.25,
            "CUP_H_PMC_Cap_Back_Burberry",
            0.25,
            "CUP_H_PMC_Cap_Back_Grey",
            0.25,
            "CUP_H_NAPA_Fedora",
            0.25,
        };
        vestList[]=
        {
            "None",
            0.2,
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Belt",
            0.2,
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'USP_PATCH_FLAG_SOUTH_SUDAN'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FLAG_SOUTH_SUDAN";
        editorPreview="\x\cfp\addons\o_ssrebels\Data\Preview\Militia.jpg";
    };
    class CFP_O_SSREBELS_T55_01 : CUP_I_T55_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
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

    class CFP_O_SSREBELS_ZU_23_01 : CUP_I_ZU23_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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

    class CFP_O_SSREBELS_SPG_9_01 : CUP_I_SPG9_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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

    class CFP_O_SSREBELS_Mortar_01 : CUP_I_2b14_82mm_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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

    class CFP_O_SSREBELS_DShKM_01 : CUP_I_DSHKM_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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

    class CFP_O_SSREBELS_DShKM_Low_01 : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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

    class CFP_O_SSREBELS_UAZ_DShKM_01 : CUP_O_UAZ_MG_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
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

    class CFP_O_SSREBELS_Land_Rover_SPG_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (SPG-9)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "OLIVE";

    };

    class CFP_O_SSREBELS_Land_Rover_01 : CUP_O_LR_Transport_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "OLIVE";

    };

    class CFP_O_SSREBELS_Offroad_02 : O_G_Offroad_01_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

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

    class CFP_O_SSREBELS_Offroad_White_Army_01 : CFP_O_SSREBELS_Offroad_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Offroad\offroad_muddy.paa'];_unit setObjectTextureGlobal [1,'A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Muddy";

    };

    class CFP_O_SSREBELS_Pickup_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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

    class CFP_O_SSREBELS_Pickup_White_Army_01 : CFP_O_SSREBELS_Pickup_01 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

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

    class CFP_O_SSREBELS_Pickup_PK_01 : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
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

    class CFP_O_SSREBELS_Pickup_PK_White_Army_01 : CFP_O_SSREBELS_Pickup_PK_01 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK/Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_20"; };
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

    class CFP_O_SSREBELS_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_03";

    };

    class CFP_O_SSREBELS_Truck_White_Army_01 : CFP_O_SSREBELS_Truck_01 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck (Nuer White Army)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_16";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Brown";

    };

    class CFP_O_SSREBELS_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SSREBELS_Soldier_02"; };
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

    class CFP_O_SSREBELS_Praga_V3S_01 : CUP_I_V3S_Open_TKG_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_O_SSREBELS_Praga_V3S_Repair_01 : CUP_I_V3S_Repair_TKG_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Repair)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_kabpar_egue_co'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_intkor_egue_co'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_koloint02_egue_co'];_unit setObjectTextureGlobal [3,'CUP\WheeledVehicles\CUP_WheeledVehicles_v3s\Data\v3s_repair_egue_co'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "TKG";

    };

    class CFP_O_SSREBELS_Praga_V3S_Refuel_01 : CUP_I_V3S_Refuel_TKG_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Refuel)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_SSREBELS_Praga_V3S_Ammunition_01 : CUP_I_V3S_Rearm_TKG_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S (Ammunition)";
        side = 0;
        faction = "CFP_O_SSREBELS";
        crew = "CFP_O_SSREBELS_Soldier_02";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};