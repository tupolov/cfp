class CBA_Extended_EventHandlers_base;

class CfgEditorSubCategories
{
    class CFP_EdSubcat_Personnel_Camo_Tropen { displayName = "Men (KSK - Tropentarn)";  };
};

class CfgVehicles {

    class CUP_UH1H_base;
    class CUP_B_UH1D_GER_KSK_Des : CUP_UH1H_base
    {
        crew = "CFP_B_DEArmy_Pilot_DES_01";
    };
    class CUP_UH1H_slick_base;
    class CUP_B_UH1D_slick_GER_KSK_Des : CUP_UH1H_slick_base
    {
        crew = "CFP_B_DEARMY_Pilot_DES_01";
        typicalCargo[]={CFP_B_DEArmy_Pilot_DES_01};
    };

    class CFP_B_USARMY_US_Pilot;
    class CFP_B_USARMY_US_Pilot_OCimport_01 : CFP_B_USARMY_US_Pilot { scope = 0; class EventHandlers; };
    class CFP_B_USARMY_US_Pilot_OCimport_02 : CFP_B_USARMY_US_Pilot_OCimport_01 { class EventHandlers; };

    class CFP_B_DEARMY_Pilot_DES_01 : CFP_B_USARMY_US_Pilot_OCimport_02 {
        author = "Tupolov";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "CUP_B_GER";
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_Tropen";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" , "G_GUERIL_default" };
        uniformClass = "CUP_U_B_GER_Tropentarn_1";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_smg_MP5A5','','','',['CUP_30Rnd_9x19_MP5',30],[],''],[],['CUP_hgun_Glock17_tan','','','',['CUP_17Rnd_9x19_glock17',17],[],''],['CUP_U_B_GER_Tropentarn_1',[['FirstAidKit',1],['CUP_HandGrenade_M67',1,1],['CUP_30Rnd_9x19_MP5',3,30],['CUP_17Rnd_9x19_glock17',1,17]]],['CUP_V_BAF_Osprey_Mk2_DDPM_Pilot',[['SmokeShell',1,1],['SmokeShellRed',1,1],['CUP_17Rnd_9x19_glock17',2,17]]],[],'CUP_H_BAF_Helmet_Pilot','',[],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_PVS7']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class SoldierWB;
    class CUP_Creatures_Military_GER_Soldier_Base : SoldierWB
    {
        editorSubcategory = "CFP_EdSubcat_Personnel_Camo_Tropen";
    };
};

