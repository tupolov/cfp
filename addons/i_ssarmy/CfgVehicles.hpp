
class CBA_Extended_EventHandlers_base;
class EventHandlers_base;
class Extended_Init_Eventhandlers;
class EventHandlers
{
    class CFP_I_SSArmy_Soldier_base
    {
        CFP_I_SSArmy_Soldier_base_init="if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
    };
};


class CfgVehicles
{
    class B_Soldier_base_F;
    class CFP_I_SSArmy_Soldier_base_SPLA_00: B_Soldier_base_F
    {
        scope=0;
        class EventHandlers;
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_01: B_Soldier_base_F
    {
        side=2;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        modelsides[] = {6};
        author="Archduke";
        faction="CFP_I_SSArmy";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_officer.p3d";
        uniformClass="CFP_Uniform_SPLA_01";
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
            "\x\cfp\addons\i_ssarmy\Data\Taki_SPLA_Wdl.paa"
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
    class CFP_I_SSArmy_Soldier_base_SPLA_02: B_Soldier_base_F
    {
        side=2;
        scope=1;
        scopeCurator=0;
        asr_ai_level=6;
        accuracy=2.3;
        sensitivity=3;
        threat[]={1,0.1,0.1};
        camouflage=1.1;
        minFireTime=7;
        cost=150000;
        modelsides[] = {6};
        author="Archduke";
        faction="CFP_I_SSArmy";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\A3\Characters_F\OPFOR\o_officer_noinsignia_f.p3d";
        uniformClass="CFP_Uniform_SPLA_02";
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
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Wdl.paa"
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
    class CFP_I_SSArmy_Soldier_base_SPLA_BDU: B_Soldier_base_F
    {
        side=2;
        scope=1;
        faction="CFP_I_SSArmy";
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
    class CFP_I_SSArmy_Soldier_base_SPLA_03: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA Woodland BDU";
        uniformClass="CFP_Uniform_SPLA_03";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Wdl.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Wdl.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_04: B_Soldier_base_F
    {
        side=2;
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
        faction="CFP_I_SSArmy";
        identityTypes[]=
        {
            "LanguageGRE_F",
            "Head_African",
            ""
        };
        model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_officer.p3d";
        uniformClass="CFP_Uniform_SPLA_04";
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
            "\x\cfp\addons\i_ssarmy\Data\Taki_SPLA_Olive.paa"
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
    class CFP_I_SSArmy_Soldier_base_SPLA_05: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA Olive Uniform";
        uniformClass="CFP_Uniform_SPLA_05";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\GreenOlive.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_06: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA Olive BDU";
        uniformClass="CFP_Uniform_SPLA_06";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\GreenOlive.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Olive.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_07: CFP_I_SSArmy_Soldier_base_SPLA_01
    {
        displayName="SPLA Green Fatigues";
        uniformClass="CFP_Uniform_SPLA_07";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\Taki_SPLA_Green.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_08: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA Green Uniform";
        uniformClass="CFP_Uniform_SPLA_08";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\Green.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_09: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA Green BDU";
        uniformClass="CFP_Uniform_SPLA_09";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\Green.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Green.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_10: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA DDPM Uniform";
        uniformClass="CFP_Uniform_SPLA_10";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_DDPM.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_11: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA DDPM BDU";
        uniformClass="CFP_Uniform_SPLA_11";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_DDPM.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_DDPM.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_12: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA Tiger Uniform";
        uniformClass="CFP_Uniform_SPLA_12";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Tiger.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_13: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA Tiger BDU";
        uniformClass="CFP_Uniform_SPLA_13";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Tiger.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Tiger.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_14: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA UCP Uniform";
        uniformClass="CFP_Uniform_SPLA_14";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_UCP.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_15: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA UCP BDU";
        uniformClass="CFP_Uniform_SPLA_15";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_UCP.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_UCP.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_16: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SPLA MARPAT Uniform";
        uniformClass="CFP_Uniform_SPLA_16";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Marpat.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_17: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SPLA MARPAT BDU";
        uniformClass="CFP_Uniform_SPLA_17";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Marpat.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Marpat.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_18: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SSPS Uniform";
        uniformClass="CFP_Uniform_SPLA_18";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_Police.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_19: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SSPS BDU";
        uniformClass="CFP_Uniform_SPLA_19";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_Police.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_Police.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_20: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SSPS Uniform 2";
        uniformClass="CFP_Uniform_SPLA_20";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_Police2.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_21: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SSPS BDU 2";
        uniformClass="CFP_Uniform_SPLA_21";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_Police2.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_Police2.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_22: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SSPS Pink DPM Uniform";
        uniformClass="CFP_Uniform_SPLA_22";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Pink.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_23: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SSPS Pink DPM BDU";
        uniformClass="CFP_Uniform_SPLA_23";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Pink.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Pink.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_24: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SSPS Orange DPM Uniform";
        uniformClass="CFP_Uniform_SPLA_24";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Orange.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_25: CFP_I_SSArmy_Soldier_base_SPLA_BDU
    {
        displayName="SSPS Orange DPM BDU";
        uniformClass="CFP_Uniform_SPLA_25";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_SPLA_Orange.paa",
            "\x\cfp\addons\i_ssarmy\Data\Uniform_SPLA_Orange.paa"
        };
    };
    class CFP_I_SSArmy_Soldier_base_SPLA_26: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="SSPS Uniform 3";
        uniformClass="CFP_Uniform_SPLA_26";
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\i_ssarmy\Data\BDU_Police3.paa"
        };
    };
    class CUP_I_DSHKM_NAPA;
    class CUP_I_DSHKM_NAPA_OCimport_01 : CUP_I_DSHKM_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_DSHKM_NAPA_OCimport_02 : CUP_I_DSHKM_NAPA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Datsun_PK;
    class CUP_I_Datsun_PK_OCimport_01 : CUP_I_Datsun_PK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_PK_OCimport_02 : CUP_I_Datsun_PK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_I_SPG9_NAPA;
    class CUP_I_SPG9_NAPA_OCimport_01 : CUP_I_SPG9_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_SPG9_NAPA_OCimport_02 : CUP_I_SPG9_NAPA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_DSHkM_MiniTriPod_NAPA;
    class CUP_B_DSHkM_MiniTriPod_NAPA_OCimport_01 : CUP_B_DSHkM_MiniTriPod_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_DSHkM_MiniTriPod_NAPA_OCimport_02 : CUP_B_DSHkM_MiniTriPod_NAPA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Ural_ZU23_NAPA;
    class CUP_I_Ural_ZU23_NAPA_OCimport_01 : CUP_I_Ural_ZU23_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Ural_ZU23_NAPA_OCimport_02 : CUP_I_Ural_ZU23_NAPA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_Datsun_4seat;
    class CUP_I_Datsun_4seat_OCimport_01 : CUP_I_Datsun_4seat { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Datsun_4seat_OCimport_02 : CUP_I_Datsun_4seat_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class CUP_V3S_Open_NAPA;
    class CUP_V3S_Open_NAPA_OCimport_01 : CUP_V3S_Open_NAPA { scope = 0; class EventHandlers; };
    class CUP_V3S_Open_NAPA_OCimport_02 : CUP_V3S_Open_NAPA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_2b14_82mm_TK_GUE;
    class CUP_I_2b14_82mm_TK_GUE_OCimport_01 : CUP_I_2b14_82mm_TK_GUE { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_2b14_82mm_TK_GUE_OCimport_02 : CUP_I_2b14_82mm_TK_GUE_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_I_T72_NAPA;
    class CUP_I_T72_NAPA_OCimport_01 : CUP_I_T72_NAPA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_T72_NAPA_OCimport_02 : CUP_I_T72_NAPA_OCimport_01 {
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

    class CUP_O_BM21_SLA;
    class CUP_O_BM21_SLA_OCimport_01 : CUP_O_BM21_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_BM21_SLA_OCimport_02 : CUP_O_BM21_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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

    class CUP_I_UAZ_MG_UN;
    class CUP_I_UAZ_MG_UN_OCimport_01 : CUP_I_UAZ_MG_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_UAZ_MG_UN_OCimport_02 : CUP_I_UAZ_MG_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class MainTurret;
        };
    };

    class CUP_C_S1203_CIV;
    class CUP_C_S1203_CIV_OCimport_01 : CUP_C_S1203_CIV { scope = 0; class EventHandlers; };
    class CUP_C_S1203_CIV_OCimport_02 : CUP_C_S1203_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_LR_Transport_TKA_OCimport_02 : CUP_O_LR_Transport_TKA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
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

    class CUP_I_Ural_UN;
    class CUP_I_Ural_UN_OCimport_01 : CUP_I_Ural_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Ural_UN_OCimport_02 : CUP_I_Ural_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_I_Ural_Repair_UN;
    class CUP_I_Ural_Repair_UN_OCimport_01 : CUP_I_Ural_Repair_UN { scope = 0; class EventHandlers; };
    class CUP_I_Ural_Repair_UN_OCimport_02 : CUP_I_Ural_Repair_UN_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_Ural_Reammo_UN;
    class CUP_I_Ural_Reammo_UN_OCimport_01 : CUP_I_Ural_Reammo_UN { scope = 0; class EventHandlers; };
    class CUP_I_Ural_Reammo_UN_OCimport_02 : CUP_I_Ural_Reammo_UN_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_O_Ural_Open_SLA;
    class CUP_O_Ural_Open_SLA_OCimport_01 : CUP_O_Ural_Open_SLA { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_Ural_Open_SLA_OCimport_02 : CUP_O_Ural_Open_SLA_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_B_S1203_Ambulance_CDF;
    class CUP_B_S1203_Ambulance_CDF_OCimport_01 : CUP_B_S1203_Ambulance_CDF { scope = 0; class EventHandlers; };
    class CUP_B_S1203_Ambulance_CDF_OCimport_02 : CUP_B_S1203_Ambulance_CDF_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_I_Mi17_UN;
    class CUP_I_Mi17_UN_OCimport_01 : CUP_I_Mi17_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Mi17_UN_OCimport_02 : CUP_I_Mi17_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class BackTurret;
            class CopilotTurret;
        };
    };

    class CUP_I_Mi24_D_Dynamic_UN;
    class CUP_I_Mi24_D_Dynamic_UN_OCimport_01 : CUP_I_Mi24_D_Dynamic_UN { scope = 0; class EventHandlers; class Turrets; };
    class CUP_I_Mi24_D_Dynamic_UN_OCimport_02 : CUP_I_Mi24_D_Dynamic_UN_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
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
    class CFP_I_SSArmy_Soldier_01: CFP_I_SSArmy_Soldier_base_SPLA_01
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_I_SSArmy_Soldier_02: CFP_I_SSArmy_Soldier_base_SPLA_02
    {
        displayName="Machinegunner";
        scope=2;
        scopeCurator=2;
        backpack="B_TacticalPack_oli";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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
        {

            {
                "CUP_lmg_PKM",
                "",
                "",
                "",

                {
                    "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                    100
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        1,
                        100
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        3,
                        100
                    }
                }
            },

            {
                "B_TacticalPack_oli",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        3,
                        100
                    }
                }
            },
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Machinegunner.jpg";
    };
    class CFP_I_SSArmy_Soldier_03: CFP_I_SSArmy_Soldier_base_SPLA_03
    {
        displayName="Rifleman AT";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_RPGPack_Khaki";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AK47",
            "CUP_launch_RPG7V",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AK47",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },

            {
                "CUP_launch_RPG7V",
                "",
                "",
                "",

                {
                    "CUP_PG7V_M",
                    1
                },
                {},
                ""
            },
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        5,
                        30
                    }
                }
            },

            {
                "CUP_B_RPGPack_Khaki",

                {

                    {
                        "CUP_PG7V_M",
                        3,
                        1
                    }
                }
            },
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\RiflemanAT.jpg";
    };
    class CFP_I_SSArmy_Soldier_04: CFP_I_SSArmy_Soldier_base_SPLA_04
    {
        displayName="Marksman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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
            "CUP_10Rnd_762x54_SVD_M",
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
            "CUP_10Rnd_762x54_SVD_M",
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
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Marksman.jpg";
    };
    class CFP_I_SSArmy_Soldier_05: CFP_I_SSArmy_Soldier_base_SPLA_05
    {
        displayName="Rifleman AA";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_RPGPack_Khaki";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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
            "CUP_Strela_2_M",
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
            "CUP_Strela_2_M",
            "CUP_Strela_2_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },

            {
                "CUP_launch_9K32Strela",
                "",
                "",
                "",

                {
                    "CUP_Strela_2_M",
                    1
                },
                {},
                ""
            },
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },

            {
                "CUP_B_RPGPack_Khaki",

                {

                    {
                        "CUP_Strela_2_M",
                        3,
                        1
                    }
                }
            },
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\RiflemanAA.jpg";
    };
    class CFP_I_SSArmy_Soldier_06: CFP_I_SSArmy_Soldier_base_SPLA_06
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
        {

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CUP_H_TK_TankerHelmet",
            0.25,
            "CUP_H_SLA_TankerHelmet",
            0.25,
            "CUP_H_RUS_TankerHelmet",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Crewman.jpg";
    };
    class CFP_I_SSArmy_Soldier_07: CFP_I_SSArmy_Soldier_base_SPLA_07
    {
        displayName="Medic";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Medic";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "Medikit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "Medikit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
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

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Medic.jpg";
    };
    class CFP_I_SSArmy_Soldier_08: CFP_I_SSArmy_Soldier_base_SPLA_08
    {
        displayName="Miner";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_AlicePack_Egineer";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "MineDetector",
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "MineDetector",
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

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Miner.jpg";
    };
    class CFP_I_SSArmy_Soldier_09: CFP_I_SSArmy_Soldier_base_SPLA_09
    {
        displayName="Officer";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Officer.jpg";
    };
    class CFP_I_SSArmy_Soldier_10: CFP_I_SSArmy_Soldier_base_SPLA_10
    {
        displayName="Policeman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Blue",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Blue",
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

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_18",
            0.25,
            "CFP_Uniform_SPLA_19",
            0.25,
            "CFP_Uniform_SPLA_20",
            0.25,
            "CFP_Uniform_SPLA_21",
            0.25,
            "CFP_Uniform_SPLA_22",
            0.25,
            "CFP_Uniform_SPLA_23",
            0.25,
            "CFP_Uniform_SPLA_24",
            0.25,
            "CFP_Uniform_SPLA_25",
            0.25,
            "CFP_Uniform_SPLA_26",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_06",
            0.25,
            "SP_Beret_Blue",
            0.25,
            "SP_Beret_Black",
            0.25,
            "SP_Beret2_Blue",
            0.25,
            "SP_Beret2_Black",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Police.jpg";
    };
    class CFP_I_SSArmy_Soldier_11: CFP_I_SSArmy_Soldier_base_SPLA_11
    {
        displayName="Rifleman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Rifleman.jpg";
    };
    class CFP_I_SSArmy_Soldier_12: CFP_I_SSArmy_Soldier_base_SPLA_12
    {
        displayName="Policeman";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret_Black",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_18",
            0.25,
            "CFP_Uniform_SPLA_19",
            0.25,
            "CFP_Uniform_SPLA_20",
            0.25,
            "CFP_Uniform_SPLA_21",
            0.25,
            "CFP_Uniform_SPLA_22",
            0.25,
            "CFP_Uniform_SPLA_23",
            0.25,
            "CFP_Uniform_SPLA_24",
            0.25,
            "CFP_Uniform_SPLA_25",
            0.25,
            "CFP_Uniform_SPLA_26",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "CFP_Cap_SPLA_06",
            0.25,
            "SP_Beret_Blue",
            0.25,
            "SP_Beret_Black",
            0.25,
            "SP_Beret2_Blue",
            0.25,
            "SP_Beret2_Black",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Police.jpg";
    };
    class CFP_I_SSArmy_Soldier_13: CFP_I_SSArmy_Soldier_base_SPLA_13
    {
        displayName="Commando";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "SP_Tactical1_Black",
            "SP_Beret2_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "SP_Tactical1_Black",
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
        {

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "SP_Tactical1_Black",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    },

                    {
                        "CUP_HandGrenade_RGD5",
                        3,
                        1
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_12",
            0.25,
            "CFP_Uniform_SPLA_13",
            0.25,
            "CFP_Uniform_SPLA_14",
            0.25,
            "CFP_Uniform_SPLA_15",
            0.25,
            "CFP_U_BattleDressUniform_scorpion_w2",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_Tactical1_Black",
            0.45,
            "SP_OpforRig1_Tan",
            0.2,
            "CFP_AK_VEST_LOlive",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_TacVest_SPLA",
            0.3
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Commando.jpg";
    };
    class CFP_I_SSArmy_Soldier_14: CFP_I_SSArmy_Soldier_base_SPLA_14
    {
        displayName="Commando";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "SP_Tactical1_Black",
            "SP_Beret_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "SP_Tactical1_Black",
            "SP_Beret_Red",
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

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "SP_Tactical1_Black",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    },

                    {
                        "CUP_HandGrenade_RGD5",
                        3,
                        1
                    }
                }
            },
            {},
            "SP_Beret2_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_12",
            0.25,
            "CFP_Uniform_SPLA_13",
            0.25,
            "CFP_Uniform_SPLA_14",
            0.25,
            "CFP_Uniform_SPLA_15",
            0.25,
            "CFP_U_BattleDressUniform_scorpion_w2",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_Tactical1_Black",
            0.45,
            "SP_OpforRig1_Tan",
            0.2,
            "CFP_AK_VEST_LOlive",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_TacVest_SPLA",
            0.3
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Commando.jpg";
    };
    class CFP_I_SSArmy_Soldier_15: CFP_I_SSArmy_Soldier_base_SPLA_15
    {
        displayName="Gunner (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodHigh_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_DShKM_TripodHigh_Bag",
                {}
            },
            {},
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_I_SSArmy_Soldier_16: CFP_I_SSArmy_Soldier_base_SPLA_16
    {
        displayName="Gunner (DShKM Low)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_TripodLow_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_DShKM_TripodLow_Bag",
                {}
            },
            {},
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_I_SSArmy_Soldier_17: CFP_I_SSArmy_Soldier_base_SPLA_17
    {
        displayName="Assistant Gunner (DShKM)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_DShkM_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_DShkM_Gun_Bag",
                {}
            },
            {},
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Assist.jpg";
    };
    class CFP_I_SSArmy_Soldier_18: CFP_I_SSArmy_Soldier_base_SPLA_18
    {
        displayName="Gunner (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Tripod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_SPG9_Tripod_Bag",
                {}
            },
            {},
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_I_SSArmy_Soldier_19: CFP_I_SSArmy_Soldier_base_SPLA_19
    {
        displayName="Assistant Gunner (SPG-9)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_SPG9_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AKM",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_SPG9_Gun_Bag",
                {}
            },
            {},
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Assist.jpg";
    };
    class CFP_I_SSArmy_Soldier_20: CFP_I_SSArmy_Soldier_base_SPLA_20
    {
        displayName="Gunner (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Bipod_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_Podnos_Bipod_Bag",
                {}
            },
            {},
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Gunner.jpg";
    };
    class CFP_I_SSArmy_Soldier_21: CFP_I_SSArmy_Soldier_base_SPLA_21
    {
        displayName="Assistant Gunner (Mortar)";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_Podnos_Gun_Bag";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {
                "CUP_B_Podnos_Gun_Bag",
                {}
            },
            {},
            "SP_Beret_Green",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Assist.jpg";
    };
    class CFP_I_SSArmy_Soldier_22: CFP_I_SSArmy_Soldier_base_SPLA_22
    {
        displayName="Pilot";
        scope=2;
        scopeCurator=2;
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "CUP_H_TK_PilotHelmet",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "CUP_H_TK_PilotHelmet",
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

            {
                "CUP_arifle_AKS",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },
            {},
            "CUP_H_TK_PilotHelmet",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_01",
            0.25,
            "CFP_Uniform_SPLA_02",
            0.25,
            "CFP_Uniform_SPLA_03",
            0.25,
            "CFP_Uniform_SPLA_04",
            0.25,
            "CFP_Uniform_SPLA_05",
            0.25,
            "CFP_Uniform_SPLA_06",
            0.25,
            "CFP_Uniform_SPLA_07",
            0.25,
            "CFP_Uniform_SPLA_08",
            0.25,
            "CFP_Uniform_SPLA_09",
            0.25,
            "CFP_Uniform_SPLA_10",
            0.25,
            "CFP_Uniform_SPLA_11",
            0.25,
            "CFP_Uniform_SPLA_16",
            0.25,
            "CFP_Uniform_SPLA_17",
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Pilot.jpg";
    };
    class CFP_I_SSArmy_Soldier_23: CFP_I_SSArmy_Soldier_base_SPLA_23
    {
        displayName="Commando Machinegunner";
        scope=2;
        scopeCurator=2;
        backpack="B_TacticalPack_oli";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
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
        {

            {
                "CUP_lmg_PKM",
                "",
                "",
                "",

                {
                    "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                    100
                },
                {},
                ""
            },
            {},
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        1,
                        100
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        3,
                        100
                    }
                }
            },

            {
                "B_TacticalPack_oli",

                {

                    {
                        "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",
                        3,
                        100
                    }
                }
            },
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_12",
            0.25,
            "CFP_Uniform_SPLA_13",
            0.25,
            "CFP_Uniform_SPLA_14",
            0.25,
            "CFP_Uniform_SPLA_15",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_Tactical1_Black",
            0.45,
            "SP_OpforRig1_Tan",
            0.2,
            "CFP_AK_VEST_LOlive",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_TacVest_SPLA",
            0.3
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\CommandoMG.jpg";
    };
    class CFP_I_SSArmy_Soldier_24: CFP_I_SSArmy_Soldier_base_SPLA_24
    {
        displayName="Commando AT";
        scope=2;
        scopeCurator=2;
        backpack="CUP_B_RPGPack_Khaki";
        linkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "CUP_V_I_Carrier_Belt",
            "SP_Beret2_Green",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        weapons[]=
        {
            "CUP_arifle_AK47",
            "CUP_launch_RPG7V",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "CUP_arifle_AK47",
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
            "CUP_PG7V_M",
            "CUP_PG7V_M",
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
            "CUP_PG7V_M",
            "CUP_PG7V_M",
            "CUP_PG7V_M"
        };
        ALiVE_orbatCreator_loadout[]=
        {

            {
                "CUP_arifle_AK47",
                "",
                "",
                "",

                {
                    "CUP_30Rnd_762x39_AK47_M",
                    30
                },
                {},
                ""
            },

            {
                "CUP_launch_RPG7V",
                "",
                "",
                "",

                {
                    "CUP_PG7V_M",
                    1
                },
                {},
                ""
            },
            {},

            {
                "CFP_Uniform_SPLA_01",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        3,
                        30
                    }
                }
            },

            {
                "CUP_V_I_Carrier_Belt",

                {

                    {
                        "CUP_30Rnd_762x39_AK47_M",
                        6,
                        30
                    }
                }
            },

            {
                "CUP_B_RPGPack_Khaki",

                {

                    {
                        "CUP_PG7V_M",
                        3,
                        1
                    }
                }
            },
            "SP_Beret_Red",
            "",
            {},

            {
                "ItemMap",
                "",
                "ItemRadio",
                "ItemCompass",
                "ItemWatch",
                ""
            }
        };
        randomGearProbability=100;
        uniformList[]=
        {
            "CFP_Uniform_SPLA_12",
            0.25,
            "CFP_Uniform_SPLA_13",
            0.25,
            "CFP_Uniform_SPLA_14",
            0.25,
            "CFP_Uniform_SPLA_15",
            0.25
        };
        headgearList[]=
        {
            "None",
            0.25,
            "SP_Beret_Red",
            0.25,
            "SP_Beret_Green",
            0.25,
            "SP_Beret2_Red",
            0.25,
            "SP_Beret2_Green",
            0.25
        };
        vestList[]=
        {
            "CUP_V_I_Carrier_Belt",
            0.2,
            "SP_Tactical1_Black",
            0.45,
            "SP_OpforRig1_Tan",
            0.2,
            "CFP_AK_VEST_LOlive",
            0.2,
            "CFP_AK_VEST_Tan",
            0.2,
            "CFP_TacVest_SPLA",
            0.3
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
        editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\CommandoAT.jpg";
    };
    class CFP_I_SSArmy_DShKM_01 : CUP_I_DSHKM_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_Pickup_PK_01 : CUP_I_Datsun_PK_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup (PK)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_03"; };
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

    class CFP_I_SSArmy_SPG_9_01 : CUP_I_SPG9_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_DShKM_Low_01 : CUP_B_DSHkM_MiniTriPod_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM (Low)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_Ural_ZU_23_01 : CUP_I_Ural_ZU23_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (ZU-23)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
        };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class CFP_I_SSArmy_Pickup_01 : CUP_I_Datsun_4seat_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_Praga_V3S_01 : CUP_V3S_Open_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


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

    class CFP_I_SSArmy_Mortar_01 : CUP_I_2b14_82mm_TK_GUE_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mortar";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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

    class CFP_I_SSArmy_T72_01 : CUP_I_T72_NAPA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_06";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_06"; };
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
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_1_co.paa'];_unit setObjectTextureGlobal [1,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_2_co.paa'];_unit setObjectTextureGlobal [2,'cup\TrackedVehicles\CUP_TrackedVehicles_T72\data\textures\GUE_T72_3_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "NAPA";

    };

    class CFP_I_SSArmy_T55_01 : CUP_O_T55_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-55";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_06";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_06"; };
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

    class CFP_I_SSArmy_BM_21_01 : CUP_O_BM21_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "BM-21";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_bm21_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";

    };

    class CFP_I_SSArmy_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_10";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_07";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Offroad.jpg";

    };

    class CFP_I_SSArmy_Truck_01 : C_Van_01_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Truck.jpg";

    };

    class CFP_I_SSArmy_Van_Transport_01 : C_Van_02_transport_F_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Transport)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_10";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Orange\Van_02\Data\van_body_FIA_01_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa'];_unit setObjectTextureGlobal [3,'\a3\Soft_F_Orange\Van_02\Data\van_body_FIA_01_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "FIA1";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Van.jpg";

    };

    class CFP_I_SSArmy_UAZ_DShKM_01 : CUP_I_UAZ_MG_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ (DShKM)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_main_SLA_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_UAZ\data\uaz_mount_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="x\cfp\addons\i_ssarmy\Data\Preview\UAZ.jpg";

    };

    class CFP_I_SSArmy_Skoda_1203_01 : CUP_C_S1203_CIV_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda 1203";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Land_Rover_01 : CUP_O_LR_Transport_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

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
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\LR.jpg";

    };

    class CFP_I_SSArmy_Land_Rover_SPG_9_01 : CUP_O_LR_SPG9_TKA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover SPG-9";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
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
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\LRAT.jpg";


    };

    class CFP_I_SSArmy_Ural_01 : CUP_I_Ural_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Ural.jpg";


    };

    class CFP_I_SSArmy_Ural_Repair_01 : CUP_I_Ural_Repair_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Repair)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\UralR.jpg";

    };

    class CFP_I_SSArmy_Ural_Ammunition_01 : CUP_I_Ural_Reammo_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Ammunition)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\UralA.jpg";

    };

    class CFP_I_SSArmy_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Refuel)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];_unit setObjectTextureGlobal [2,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_fuel_chdkz_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\UralF.jpg";

    };

    class CFP_I_SSArmy_Ural_Open_01 : CUP_O_Ural_Open_SLA_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural (Open)";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_sla_co.paa'];_unit setObjectTextureGlobal [1,'CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_sla_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\UralO.jpg";

    };

    class CFP_I_SSArmy_Ambulance_01 : CUP_B_S1203_Ambulance_CDF_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ambulance";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_07";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_I_SSArmy_Mi_17_01 : CUP_I_Mi17_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-17";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_22";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
            class BackTurret : BackTurret { gunnerType = "CFP_I_SSArmy_Soldier_01"; };
            class CopilotTurret : CopilotTurret { gunnerType = "CFP_I_SSArmy_Soldier_22"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\textures\mi8_sla2_1_co.paa'];_unit setObjectTextureGlobal [1,'\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_det_g_co.paa'];_unit setObjectTextureGlobal [2,'a3\data_f\clear_empty.paa'];_unit setObjectTextureGlobal [3,'CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi8_decals_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA_W";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Mi17.jpg";

    };

    class CFP_I_SSArmy_Mi_24D_01 : CUP_I_Mi24_D_Dynamic_UN_OCimport_02 {
        author = "Archduke";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-24D";
        side = 2;
        faction = "CFP_I_SSArmy";
        crew = "CFP_I_SSArmy_Soldier_22";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "CFP_I_SSArmy_Soldier_22"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\textures\sla_001_co.paa'];_unit setObjectTextureGlobal [1,'CUP\AirVehicles\CUP_AirVehicles_Mi24\Data\textures\sla_002_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "SLA";
    editorPreview="\x\cfp\addons\i_ssarmy\Data\Preview\Mi24.jpg";

    };
};