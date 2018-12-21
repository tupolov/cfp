#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_helipilot_F;
    class O_helipilot_F_OCimport_01 : O_helipilot_F { scope = 0; class EventHandlers; };
    class O_helipilot_F_OCimport_02 : O_helipilot_F_OCimport_01 { class EventHandlers; };

    class O_Pilot_F;
    class O_Pilot_F_OCimport_01 : O_Pilot_F { scope = 0; class EventHandlers; };
    class O_Pilot_F_OCimport_02 : O_Pilot_F_OCimport_01 { class EventHandlers; };


    class cfp_o_syarmy_officer : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_officer.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SAA Officer";
        side = 0;
        faction = "CFP_O_SYARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_BattleDressUniform_M81";

        linkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"MiniGrenade",2,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_U_BattleDressUniform_M81", 0.4,
          "CFP_U_FieldUniform_edrl", 0.3,
          "CFP_U_BattleDressUniform_edrl", 0.3,
          "CFP_U_FieldUniform_M81_SS",0.3,
          "CFP_U_BattleDressUniform_woodlanddark", 0.3,
          "CFP_U_FieldUniform_woodlanddark", 0.3,
          "CFP_U_FieldUniform_M81light", 0.3
        };

        //Helmets
        headgearList[] = {
            "CFP_Basic_Helmet_Black", 0.2,
            "CFP_PatrolCap_M81", 0.25,
            "SP_SSh68NetHelmet_Green1", 0.3,
            "CUP_H_SLA_Helmet", 0.3,
            "CFP_Basic_Helmet_Gray_Green", 0.2,
            "CFP_Basic_Helmet_Tan", 0.2,
            "CFP_Basic_Helmet_M81", 0.2,
            "SP_PatrolCap_Green", 0.2


        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Beard",0.1,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfbeard_white", 0.1,
            "CFP_Scarfbeard_grey", 0.1,
            "CFP_Scarfbeard_green", 0.1,
            "CFP_Scarfbeard_tan", 0.1,
            "CFP_Scarfbeardshades_white", 0.1,
            "CFP_Scarfbeardshades_grey", 0.1,
            "CFP_Scarfbeardshades_green", 0.1,
            "CFP_Scarfbeardshades_tan", 0.1,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3
        };

        //Vests
        vestList[] = {
            "V_I_G_resistanceLeader_F", 0.33,
            "CFP_Tactical1_EDRL", 0.2,
            "V_TacVest_camo", 0.33,
            "CFP_Tactical1_Woodland", 0.33,
            "CFP_AK_VEST_EDRL", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "V_TacVest_oli", 0.2,
            "V_TacVest_khk", 0.2,
            "CUP_V_CDF_6B3_2_Green", 0.2,
            "CFP_AK_VEST_Olive", 0.2
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_o_syarmy_rifleman : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SAA Rifleman";
        side = 0;
        faction = "CFP_O_SYARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_BattleDressUniform_M81";

        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"","",{},{"","","ItemRadio","","",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_U_BattleDressUniform_M81", 0.4,
          "CFP_U_FieldUniform_edrl", 0.3,
          "CFP_U_BattleDressUniform_edrl", 0.3,
          "CFP_U_WorkUniform_Green",0.1,
          "CFP_U_FieldUniform_M81_SS",0.3,
          "CFP_GUER_ERDLpants",0.1,
          "CFP_GUER_M81",0.2,
          "CFP_U_BattleDressUniform_woodlanddark", 0.3,
          "CFP_U_FieldUniform_woodlanddark", 0.3,
          "CFP_U_FieldUniform_M81light", 0.3,
          "CFP_GUER_M81Tee", 0.1
        };

        //Helmets
        headgearList[] = {
            "", 0.3,
            "CFP_Basic_Helmet_Black", 0.2,
            "CFP_PatrolCap_M81", 0.25,
            "SP_SSh68NetHelmet_Green1", 0.3,
            "CUP_H_SLA_Helmet", 0.3,
            "CFP_Basic_Helmet_Gray_Green", 0.2,
            "SP_BaseballCap_Black", 0.2,
            "H_Cap_oli", 0.2,
            "CFP_Basic_Helmet_Tan", 0.2,
            "CFP_Basic_Helmet_M81", 0.2,
            "H_Bandanna_khk", 0.2,
            "SP_Bandana_Tan", 0.2,
            "SP_BeanieHat_Green", 0.2,
            "SP_PatrolCap_Green", 0.2


        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Beard",0.1,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfbeard_white", 0.1,
            "CFP_Scarfbeard_grey", 0.1,
            "CFP_Scarfbeard_green", 0.1,
            "CFP_Scarfbeard_tan", 0.1,
            "CFP_Scarfbeardshades_white", 0.1,
            "CFP_Scarfbeardshades_grey", 0.1,
            "CFP_Scarfbeardshades_green", 0.1,
            "CFP_Scarfbeardshades_tan", 0.1,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3
        };

        //Vests
        vestList[] = {
            "V_I_G_resistanceLeader_F", 0.33,
            "CFP_Tactical1_EDRL", 0.2,
            "V_TacVest_camo", 0.33,
            "CFP_Tactical1_Woodland", 0.33,
            "CFP_AK_VEST_EDRL", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "V_TacVest_oli", 0.2,
            "V_TacVest_khk", 0.2,
            "CUP_V_CDF_6B3_2_Green", 0.2,
            "CFP_AK_VEST_Olive", 0.2
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_o_syarmy_grenadier : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_grenadier.JPG;

        displayName = "SAA Grenadier";

        linkedItems[] = {"CFP_Tactical1_EDRL","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Tactical1_EDRL","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_Kitbag_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_FieldUniform_edrl",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"MiniGrenade",2,1}}},{"CFP_Tactical1_EDRL",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1}}},{"CFP_Kitbag_M81",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_machinegunner : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_machinegunner.JPG;

        displayName = "SAA Machinegunner";

        linkedItems[] = {"CFP_Tactical1_Woodland","ItemRadio"};
        respawnlinkedItems[] = {"CFP_Tactical1_Woodland","ItemRadio"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"FirstAidKit",1},{"MiniGrenade",2,1}}},{"CFP_Tactical1_Woodland",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_sniper : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_sniper.JPG;

        displayName = "SAA Sniper";

        linkedItems[] = {"CFP_AK_VEST_EDRL","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_EDRL","ItemRadio"};

        weapons[] = {"CUP_srifle_SVD_pso","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_WorkUniform_Green",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",1,10},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_EDRL",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_at : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_at.JPG;

        displayName = "SAA Anti-Tank";

        linkedItems[] = {"V_I_G_resistanceLeader_F","ItemRadio"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7VL_M",1},{},""},{},{"CFP_U_FieldUniform_M81_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_medic : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_medic.JPG;

        displayName = "SAA Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AlicePack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_ERDLpants",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_AlicePack_Khaki",{{"FirstAidKit",10},{"Medikit",1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_sapper : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_sapper.JPG;

        displayName = "SAA Sapper";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"ToolKit",1},{"ATMine_Range_Mag",1,1},{"DemoCharge_Remote_Mag",5,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_crewman : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_crewman.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SAA Crewman";
        side = 0;
        faction = "CFP_O_SYARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_BattleDressUniform_M81";

        linkedItems[] = {"V_TacVest_oli","CUP_H_RUS_TSH_4_Brown","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_oli","CUP_H_RUS_TSH_4_Brown","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS74U","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKS74U","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74_plum_M","CUP_30Rnd_545x39_AK74_plum_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK74_plum_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74_plum_M",1,30}}},{"V_TacVest_oli",{{"CUP_30Rnd_545x39_AK74_plum_M",5,30}}},{},"CUP_H_RUS_TSH_4_Brown","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_o_syarmy_rifleman_dshkm : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_dshkm.JPG;

        displayName = "SAA Gunner [DSHKM]";

        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_rifleman_kord : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_kord.JPG;

        displayName = "SAA Gunner [KORD]";

        linkedItems[] = {"V_TacVest_khk","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Kord_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"V_TacVest_khk",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Kord_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_rifleman_podnos : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_podnos.JPG;

        displayName = "SAA Gunner [Podnos]";

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS74"};
        respawnWeapons[] = {"CUP_arifle_AKS74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_woodlanddark",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_rifleman_ags30 : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_ags30.JPG;

        displayName = "SAA Gunner [AGS30]";

        linkedItems[] = {"V_TacVest_camo","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_FieldUniform_woodlanddark",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"MiniGrenade",2,1}}},{"V_TacVest_camo",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_rifleman_spg9 : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_spg9.JPG;

        displayName = "SAA Gunner [SPG9]";

        linkedItems[] = {"CUP_V_CDF_6B3_2_Green","ItemRadio"};
        respawnlinkedItems[] = {"CUP_V_CDF_6B3_2_Green","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81light",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CUP_V_CDF_6B3_2_Green",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_rifleman_metis : cfp_o_syarmy_rifleman {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_rifleman_metis.JPG;

        displayName = "SAA Gunner [METIS]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AKS_top_rail"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS_top_rail","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_GUER_M81Tee",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_o_syarmy_helicopter_pilot_01 : O_helipilot_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_helicopter_pilot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SAA Helicopter Pilot";
        side = 0;
        faction = "CFP_O_SYARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "SP_0000_Standard_FieldUniform_Tan";

        linkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_khk","H_PilotHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Tan",{{"FirstAidKit",1},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacVest_khk",{{"Chemlight_red",2,1},{"CUP_30Rnd_545x39_AK_M",1,30},{"SmokeShell",2,1},{"SmokeShellRed",2,1}}},{},"H_PilotHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_o_syarmy_pilot_01 : O_Pilot_F_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_pilot_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SAA Pilot";
        side = 0;
        faction = "CFP_O_SYARMY";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

        uniformClass = "U_I_pilotCoveralls";

        linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS74U"};
        respawnWeapons[] = {"CUP_arifle_AKS74U"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS74U","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"U_I_pilotCoveralls",{{"FirstAidKit",1},{"Chemlight_red",1,1},{"CUP_30Rnd_545x39_AK_M",3,30},{"SmokeShellRed",2,1}}},{},{"B_Parachute",{}},"CUP_H_RUS_ZSH_Shield_Up","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_Ural : CUP_O_Ural_CHDKZ_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Ural.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA Ural";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman","cfp_o_syarmy_rifleman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Ural_ZU23.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA Ural ZU23";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman","cfp_o_syarmy_rifleman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };

    class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class cfp_o_syarmy_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Ural_Refuel_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 0;
        faction = "CFP_O_SYARMY";
        crew = "cfp_o_syarmy_rifleman";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Ural\ural_open_iran.paa'];_unit setObjectTextureGlobal [2,'\x\cfp\addons\vehicles\Ural\ural_fuel_iran.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_O_Ural_Repair_SLA;
    class CUP_O_Ural_Repair_SLA_OCimport_01 : CUP_O_Ural_Repair_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Repair_SLA_OCimport_02 : CUP_O_Ural_Repair_SLA_OCimport_01 { scope = 0; class EventHandlers; };

     class cfp_o_syarmy_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Ural_Repair_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 0;
        faction = "CFP_O_SYARMY";
        crew = "cfp_o_syarmy_rifleman";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class CUP_O_Ural_Reammo_SLA;
    class CUP_O_Ural_Reammo_SLA_OCimport_01 : CUP_O_Ural_Reammo_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Reammo_SLA_OCimport_02 : CUP_O_Ural_Reammo_SLA_OCimport_01 { scope = 0; class EventHandlers; };

    class cfp_o_syarmy_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Ural_Ammo_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 0;
        faction = "CFP_O_SYARMY";
        crew = "cfp_o_syarmy_rifleman";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_O_BTR40_MG_TKA;
    class CUP_O_BTR40_MG_TKA_OCimport_01 : CUP_O_BTR40_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_BTR40_MG : CUP_O_BTR40_MG_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_BTR40_MG.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA BTR40 MG";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MOTORIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BTR60_TK;
    class CUP_O_BTR60_TK_OCimport_01 : CUP_O_BTR60_TK { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_BTR60 : CUP_O_BTR60_TK_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_BTR60.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA BTR60";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_BMP1 : CUP_O_BMP1_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_BMP1.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA BMP-1";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_BMP1P : CUP_O_BMP1P_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_BMP1P.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA BMP-1P";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_BMP2_TKA;
    class CUP_O_BMP2_TKA_OCimport_01 : CUP_O_BMP2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_BMP2 : CUP_O_BMP2_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_BMP2.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA BMP-2";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_MECHANIZED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_T55 : CUP_O_T55_CSAT_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_T55.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA T55";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_ARMORED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_T72_TKA;
    class CUP_O_T72_TKA_OCimport_01 : CUP_O_T72_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_T72 : CUP_O_T72_TKA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_T72.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA T72";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_ARMORED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_ZSU : CUP_O_ZSU23_SLA_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_ZSU.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA ZSU";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_ARMORED";
        camouflage = 4;
        crew = "cfp_o_syarmy_crewman";
        typicalCargo[] = {"cfp_o_syarmy_crewman","cfp_o_syarmy_crewman","cfp_o_syarmy_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class I_Plane_Fighter_03_AA_F;
    class I_Plane_Fighter_03_AA_F_OCimport_01 : I_Plane_Fighter_03_AA_F { scope = 0; class Eventhandlers; };
    class cfp_o_syarmy_L39_AA : I_Plane_Fighter_03_AA_F_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_L39_AA.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA L-39 AntiAir";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_AIR";
        camouflage = 4;
        crew = "cfp_o_syarmy_pilot_01";
        typicalCargo[] = {"cfp_o_syarmy_pilot_01"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class I_Plane_Fighter_03_CAS_F;
    class I_Plane_Fighter_03_CAS_F_OCimport_01 : I_Plane_Fighter_03_CAS_F { scope = 0; class Eventhandlers; };
    class cfp_o_syarmy_L39_CAS : I_Plane_Fighter_03_CAS_F_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_L39_CAS.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA L-39 CAS";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_AIR";
        camouflage = 4;
        crew = "cfp_o_syarmy_pilot_01";
        typicalCargo[] = {"cfp_o_syarmy_pilot_01"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\o_syarmy\Scripts\randomize_tex.sqf""";
            };
        };

    };
    class O_Plane_CAS_02_F;
    class O_Plane_CAS_02_F_OCimport_01 : O_Plane_CAS_02_F { scope = 0; class Eventhandlers; };
    class cfp_o_syarmy_yak130 : O_Plane_CAS_02_F_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_yak130.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA Yak-130";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_AIR";
        camouflage = 4;
        crew = "cfp_o_syarmy_pilot_01";
        typicalCargo[] = {"cfp_o_syarmy_pilot_01"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\01.paa","\x\cfp\addons\o_syarmy\data\02.paa"};

    };
    class CUP_O_Su25_Dyn_RU;
    class CUP_O_Su25_Dyn_RU_OCimport_01 : CUP_O_Su25_Dyn_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_SU25 : CUP_O_Su25_Dyn_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_SU25.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA SU25";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_AIR";
        camouflage = 4;
        crew = "cfp_o_syarmy_pilot_01";
        typicalCargo[] = {"cfp_o_syarmy_pilot_01"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_syarmy\data\su25_body1_saa.paa","\x\cfp\addons\o_syarmy\data\su25_body2_saa.paa"};

    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_ZU23 : CUP_O_ZU23_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_ZU23.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA ZU23";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_DSHKM.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA DSHKM";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_o_syarmy_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_DSHkM_Mini_TriPod.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA DSHkM Mini TriPod";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_KORD : CUP_O_KORD_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_KORD.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA KORD";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_KORD_high : CUP_O_KORD_high_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_KORD_high.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA KORD High";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_AGS : CUP_O_AGS_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_AGS.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA AGS";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_Metis : CUP_O_Metis_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_Metis.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA Metis";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_o_syarmy_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_SPG9.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA SPG9";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_2b14_82mm.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA 2b14 82mm";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_D30_RU;
    class CUP_O_D30_RU_OCimport_01 : CUP_O_D30_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_D30 : CUP_O_D30_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_D30.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA D30";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };
    class CUP_O_D30_AT_RU;
    class CUP_O_D30_AT_RU_OCimport_01 : CUP_O_D30_AT_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_o_syarmy_D30_AT : CUP_O_D30_AT_RU_OCimport_01 {
        editorPreview = \x\cfp\addons\o_syarmy\data\preview\cfp_o_syarmy_D30_AT.JPG;
        scope = 2;
        side = 0;
        displayName = "SAA D30 AT";
        faction = "CFP_O_SYARMY";
        vehicleClass = "cfp_o_syarmy_STATIC";
        camouflage = 4;
        crew = "cfp_o_syarmy_rifleman";
        typicalCargo[] = {"cfp_o_syarmy_rifleman"};
    };

    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox

    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox

    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox

    class CUP_RULaunchersBox; // CUP_RULaunchersBox

    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_SYARMY_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_SYARMY_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKS,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_O_SYARMY_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_SYARMY_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(SAA_uniform_officer,15);
            item_xx(SAA_uniform,15);
        };
    };
    class CFP_O_SYARMY_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(CUP_H_SLA_Helmet,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(H_PASGT_basic_olive_F,10);
            item_xx(V_TacVest_camo,10);
            item_xx(B_OutdoorPack_blk,10);
            item_xx(V_BandollierB_blk,10);
            item_xx(CUP_H_TK_Helmet,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(V_TacVest_oli,10);
            item_xx(CUP_B_AlicePack_Khaki,10);
            item_xx(B_OutdoorPack_tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_RUS_6B27_olive,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
        };
    };
    class CFP_O_SYARMY_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Syrian Arab Army Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(Binocular,10);
            item_xx(V_TacChestrig_cbr_F,10);
            item_xx(CUP_H_SLA_Helmet,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessOGL_brn,10);
            item_xx(H_PASGT_basic_olive_F,10);
            item_xx(V_TacVest_camo,10);
            item_xx(B_OutdoorPack_blk,10);
            item_xx(V_BandollierB_blk,10);
            item_xx(CUP_H_TK_Helmet,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(V_TacVest_oli,10);
            item_xx(CUP_B_AlicePack_Khaki,10);
            item_xx(B_OutdoorPack_tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(V_TacChestrig_oli_F,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_RUS_6B27_olive,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(SAA_uniform_officer,10);
            item_xx(SAA_uniform,10);
        };
    };
};