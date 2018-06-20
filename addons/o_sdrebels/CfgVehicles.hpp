class CBA_Extended_EventHandlers_base;
class EventHandlers_base;
class Extended_Init_Eventhandlers;
class EventHandlers
{
    class CFP_O_SDRebels_Soldier_base
    {
        CFP_O_SDRebels_Soldier_base_init="if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
};


class CfgVehicles {

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

    class C_Van_02_transport_F;
    class C_Van_02_transport_F_OCimport_01 : C_Van_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Van_02_transport_F_OCimport_02 : C_Van_02_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
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
    class I_G_Offroad_01_AT_F;
    class I_G_Offroad_01_AT_F_OCimport_01 : I_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Offroad_01_AT_F_OCimport_02 : I_G_Offroad_01_AT_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

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
    class CUP_B_AlicePack_Bedroll;
    class CUP_B_AlicePack_Egineer: CUP_B_AlicePack_Bedroll
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
    class CFP_O_SDRebels_Soldier_base_00: B_Soldier_base_F
    {
        scope=0;
        class EventHandlers;
    };
    class CFP_O_SDRebels_Soldier_base_Shirt: B_Soldier_base_F
    {
        side = 0;
        scope=1;
        faction="CFP_O_SDRebels";
        modelSides[]={6};
        vehicleClass="CFP_ShirtUniform";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1;
        attendant="true";
        uniformAccessories[]={};
        nakedUniform="U_BasicBody";
        model="\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
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
    class CFP_O_SDRebels_Soldier_base_01: CFP_O_SDRebels_Soldier_base_Shirt
    {
        displayName="JEM Shirt";
        uniformClass="CFP_Uniform_NRF_01";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdrebels\Data\Shirt_JEM.paa",
            "\x\cfp\addons\o_sdrebels\Data\Uniform_OD.paa"
        };
    };
    class CFP_O_SDRebels_Soldier_base_Guerilla: B_Soldier_base_F
    {
        side = 0;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;

        author="Archduke";
        faction="CFP_O_SDRebels";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
        uniformClass="CFP_Uniform_NRF_02";
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
            "\x\cfp\addons\o_sdrebels\Data\Guerilla_Chip.paa"
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
    class CFP_O_SDRebels_Soldier_01: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;  reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\AK.jpg";
    };
    class CFP_O_SDRebels_Soldier_02: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;  reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\AK.jpg";
    };
    class CFP_O_SDRebels_Soldier_03: CFP_O_SDRebels_Soldier_base_Guerilla
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
            "CUP_srifle_M14",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_srifle_M14",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag"
        };
        respawnMagazines[]=
        {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag"
        };      ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;  reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\M14.jpg";
    };
    class CFP_O_SDRebels_Soldier_04: CFP_O_SDRebels_Soldier_base_Guerilla
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
            "CUP_arifle_FNFAL5061",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_FNFAL5061",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M"
        };
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;  reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\FAL.jpg";
    };
    class CFP_O_SDRebels_Soldier_05: CFP_O_SDRebels_Soldier_base_01
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
            "CUP_arifle_AKS",
            "CUP_launch_RPG7V",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AKS",
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
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;  reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\AT.jpg";
    };
    class CFP_O_SDRebels_Soldier_06: CFP_O_SDRebels_Soldier_base_Guerilla
    {
        displayName="Sniper";
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Sniper.jpg";
    };
    class CFP_O_SDRebels_Soldier_07: CFP_O_SDRebels_Soldier_base_Guerilla
    {
        displayName="Machinegunner";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CFP_Bandolier_SPLM_01",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CFP_Bandolier_SPLM_01",
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
            "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"
        };
        respawnMagazines[]=
        {
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CFP_Jacket_SPLM_01",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Jacket_SPLM_03",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\MG.jpg";
    };
    class CFP_O_SDRebels_Soldier_08: CFP_O_SDRebels_Soldier_base_Guerilla
    {
        displayName="Miner";
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
            "CUP_arifle_FNFAL5061",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_FNFAL5061",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M"
        };
        respawnMagazines[]=
        {
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M",
            "CUP_20Rnd_762x51_FNFAL_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Miner.jpg";
    };
    class CFP_O_SDRebels_Soldier_09: CFP_O_SDRebels_Soldier_base_Guerilla
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
            "CUP_srifle_M14",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_srifle_M14",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag"
        };
        respawnMagazines[]=
        {
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag",
            "20Rnd_762x51_Mag"
        };
        ALiVE_orbatCreator_loadout[]=
        {
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Medic.jpg";
    };
    class CFP_O_SDRebels_Soldier_10: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_11: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_12: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_13: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_14: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_15: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_16: CFP_O_SDRebels_Soldier_base_01
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\Gunner.jpg";
    };
    class CFP_O_SDRebels_Soldier_17: CFP_O_SDRebels_Soldier_base_01
    {
        displayName="Leader";
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
            "CFP_Uniform_NRF_01",
            0.25,
            "CFP_Uniform_NRF_02",
            0.25,
            "CFP_U_BattleDressUniform_woodlandlight",
            0.25,
            "CFP_U_BattleDressUniform_woodlanddark",
            0.25,
            "CFP_U_BattleDressUniform_3ColorDesert",
            0.25,
            "SP_0000_Standard_BattleDressUniform_Green",
            0.25,
            "SP_0000_Standard_BattleDressUniform_GreenOlive",
            0.25,
            "CFP_U_BattleDressUniform_ChocChip",
            0.25,
            "CFP_Uniform_SPLMN_01",
            0.25,
            "CFP_Uniform_SPLM_24",
            0.25,
            "CFP_Uniform_SPLM_16",
            0.25,
            "CFP_Uniform_SPLM_12",
            0.25,
            "CFP_Uniform_Sudan_10",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLMN_01",
            0.25,
            "SP_PatrolCap_Green",
            0.25,
            "SP_PatrolCap_GreenOlive",
            0.25,
            "SP_PatrolCap_Tan",
            0.25,
            "CFP_PatrolCap_M81",
            0.25,
            "H_Cap_grn",
            0.25,
            "H_Cap_oli",
            0.25,
            "H_Bandanna_gry",
            0.25,
            "CUP_H_SLA_BeanieGreen",
            0.25,
            "Shemagh_Sand",
            0.25,
            "Shemagh_Tan",
            0.25,
            "Shemagh_White",
            0.25,
            "CFP_Lungee_Shemagh_Yellow",
            0.25,
            "CFP_Lungee_Open_Creme",
            0.25,
            "CFP_Lungee_Open_LightOlive",
            0.25,
            "CFP_Lungee_Open_Tan",
            0.25,
            "CFP_Lungee_Shemagh",
            0.25,
            "CFP_Lungee_Shemagh_White",
            0.25,
            "SP_Shemagh_CheckTan",
            0.25,
            "SP_Shemagh_CheckWhite",
            0.25,
            "SP_Shemagh_CheckGreen",
            0.25,
            "SP_Shemagh_CheckBlack",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_OpforRig1_Green",
            0.2,
            "SP_OpforRig1_Tan",
            0.2,
            "CUP_V_O_Ins_Carrier_Rig",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_Chest_Rig_SPLM_04",
            0.2,
            "CFP_Jacket_SPLM_02",
            0.2,
            "CFP_Bandolier_SPLM_01",
            0.2,
            "CUP_V_OI_TKI_Jacket1_01",
            0.2,
            "CFP_TakJacket_M81",
            0.2,
            "CFP_TakJacket_Woodland",
            0.2,
            "CFP_TakJacket_ChocChip",
            0.2,
            "CFP_TakJacket_Marpat",
            0.2,
            "CFP_UtilityJacket_M81",
            0.2,
            "CFP_UtilityJacket_ChocChip",
            0.2,
            "CFP_UtilityJacket_Woodland",
            0.2,
            "CUP_V_OI_TKI_Jacket3_03",
            0.2,
            "CUP_V_OI_TKI_Jacket3_02",
            0.2,
            "CUP_V_OI_TKI_Jacket3_01",
            0.2
        };
            insigniaList[] =
        {
            "USP_PATCH_FACTION_JEM",
            0.4,
            "USP_PATCH_FACTION_SRF",
            0.4
        };
        class EventHandlers: EventHandlers_base
        {
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base
            {
            };
            class ALiVE_orbatCreator
            {
                init="if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit; reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };
        };
        ALiVE_orbatCreator_owned=1;
        ALiVE_orbatCreator_insignia="USP_PATCH_FACTION_SRF";
        editorPreview="\x\cfp\addons\o_sdrebels\Data\Preview\AK.jpg";
    };
    class CFP_O_SDRebels_Offroad_AT_01 : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = "CFP_O_SDRebels_Soldier_04"; };
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
    class CFP_O_SDRebels_SPG_9_01 : CUP_I_SPG9_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

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
    class CFP_O_SDRebels_Mortar_01 : CUP_I_2b14_82mm_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

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

    class CFP_O_SDRebels_DShKM_01 : CUP_I_DSHKM_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

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

    class CFP_O_SDRebels_DShKM_Low_01 : CUP_I_DSHkM_MiniTriPod_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_02";

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
    class CFP_O_SDRebels_Land_Rover_SPG_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover (SPG-9)";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_04";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SDRebels_Soldier_01"; };
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

    class CFP_O_SDRebels_Land_Rover_01 : CUP_O_LR_Transport_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\civ_r_lr_base_co.paa'];_unit setObjectTextureGlobal [1,'cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\civ_r_lr_special_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "CIV";

    };

    class CFP_O_SDRebels_Offroad_01 : O_G_Offroad_01_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_02";

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

    class CFP_O_SDRebels_Pickup_01 : CUP_I_Datsun_4seat_TK_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_02";

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

    class CFP_O_SDRebels_Pickup_PK_01 : CUP_I_Datsun_PK_TK_Random_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_02";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_O_SDRebels_Soldier_03"; };
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

    class CFP_O_SDRebels_Van_01 : C_Van_02_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Orange\Van_02\Data\van_body_FIA_02_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa'];_unit setObjectTextureGlobal [3,'\a3\Soft_F_Orange\Van_02\Data\van_body_FIA_02_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "FIA2";

    };

    class CFP_O_SDRebels_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 0;
        faction = "CFP_O_SDRebels";
        crew = "CFP_O_SDRebels_Soldier_02";

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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
};