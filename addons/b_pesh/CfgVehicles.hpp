#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class cfp_b_pesh_leader : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Leader";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_m81";

        linkedItems[] = {"CFP_RAV_Black","PESH_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_Black","PESH_Beret","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_FieldUniform_pesh_m81",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"MiniGrenade",2,1}}},{"CFP_RAV_Black",{{"CUP_30Rnd_545x39_AK_M",6,30},{"CUP_1Rnd_HE_GP25_M",8,1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_1Rnd_SMOKE_GP25_M",4,1}}},{},"PESH_Beret","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_pesh_m81", 0.25,
          "CFP_FieldUniform_pesh_m81_SS", 0.25,
          "CFP_FieldUniform_pesh_edrl", 0.25,
          "CFP_FieldUniform_pesh_3cd", 0.25,
          "CFP_FieldUniform_pesh_3cd_SS", 0.25,
          "CFP_FieldUniform_pesh_edrl_SS",0.25
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3
        };

        //Vests
        vestList[] = {
            "CFP_RAV_Green", 0.33,
            "CFP_RAV_OGA", 0.2,
            "CFP_RAV_Black", 0.33,
            "CFP_AK_VEST_Olive", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_Black", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "PESH_Vest", 0.33
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

    class cfp_b_pesh_rifleman : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Rifleman";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_edrl_SS";

        linkedItems[] = {"PESH_Vest","CFP_Basic_Helmet_ArmyGreen","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","CFP_Basic_Helmet_ArmyGreen","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_edrl_SS",{{"FirstAidKit",1},{"MiniGrenade",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"PESH_Vest",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"CFP_Basic_Helmet_ArmyGreen","",{},{"","","ItemRadio","","",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_pesh_m81", 0.25,
          "CFP_FieldUniform_pesh_m81_SS", 0.25,
          "CFP_FieldUniform_pesh_edrl", 0.25,
          "CFP_FieldUniform_pesh_3cd", 0.25,
          "CFP_FieldUniform_pesh_3cd_SS", 0.25,
          "CFP_FieldUniform_pesh_edrl_SS",0.25
        };

        //Helmets
        headgearList[] = {
            "", 0.5,
            "PESH_Beret", 0.2,
            "PESH_Beret_CTG", 0.2,
            "CFP_PatrolCap_M81", 0.4,
            "CFP_Basic_Helmet_Black", 0.1,
            "H_Cap_oli", 0.25,
            "CFP_Basic_Helmet_ArmyGreen", 0.2,
            "CFP_Basic_Helmet_Gray", 0.2,
            "CFP_Basic_Helmet_Gray_Green", 0.1,
            "H_Bandanna_khk", 0.2,
            "H_Bandanna_cbr", 0.2,
            "CFP_Basic_Helmet_Tan", 0.25,
            "CFP_Basic_Helmet_M81", 0.2,
            "H_Bandanna_camo", 0.25,
            "SP_BaseballCap_Black", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2,
            "CFP_Neck_Wrap2", 0.3,
            "CFP_Neck_Wrap3", 0.3,
            "CFP_Neck_Wrap4", 0.3,
            "CFP_Neck_Plain2", 0.2,
            "CFP_Neck_Plain3", 0.2,
            "CFP_Neck_Plain4", 0.2,
            "CFP_Scarfshades_tan", 0.3,
            "CFP_Scarfshades_grey", 0.3,
            "CFP_Scarfshades_white", 0.3,
            "CFP_Scarfshades_green", 0.3
        };

        //Vests
        vestList[] = {
            "CFP_RAV_Green", 0.33,
            "CFP_RAV_OGA", 0.2,
            "CFP_RAV_Black", 0.33,
            "CFP_AK_VEST_Olive", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_Black", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "PESH_Vest", 0.33
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

    class cfp_b_pesh_grenadier : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Grenadier";

        linkedItems[] = {"PESH_Vest","H_Cap_oli","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","H_Cap_oli","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_FieldUniform_pesh_3cd_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",1,30},{"CUP_1Rnd_HE_GP25_M",1,1},{"MiniGrenade",2,1}}},{"PESH_Vest",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_HandGrenade_RGD5",1,1}}},{"B_AssaultPack_rgr",{{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"H_Cap_oli","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_machinegunner : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Machinegunner";

        linkedItems[] = {"PESH_Vest","SP_BaseballCap_Black","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","SP_BaseballCap_Black","ItemRadio"};

        weapons[] = {"CUP_lmg_Pecheneg"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_Pecheneg","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_FieldUniform_pesh_3cd_SS",{{"FirstAidKit",1},{"MiniGrenade",2,1}}},{"PESH_Vest",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_Kitbag_cbr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",3,100}}},"SP_BaseballCap_Black","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_sniper : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Sniper";

        linkedItems[] = {"CFP_AK_VEST_Tan","H_Bandanna_cbr","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","H_Bandanna_cbr","ItemRadio"};

        weapons[] = {"CUP_srifle_SVD_pso","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_FieldUniform_pesh_m81_SS",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",1,10},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_Tan",{{"CUP_10Rnd_762x54_SVD_M",6,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"H_Bandanna_cbr","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_at : cfp_b_pesh_rifleman {

        displayName = "Peshmerga AT Gunner";

        linkedItems[] = {"PESH_Vest","CFP_Basic_Helmet_Tan","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","CFP_Basic_Helmet_Tan","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKM","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7VL_M",1},{},""},{},{"CFP_FieldUniform_pesh_m81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"PESH_Vest",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"CFP_Basic_Helmet_Tan","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_medic : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_AK_VEST_Olive","H_Bandanna_khk","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","H_Bandanna_khk","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_3cd",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"H_Bandanna_khk","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_crewman : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Crewman";
        engineer = 1;
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_m81_SS";

        linkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","CUP_H_RUS_TSH_4_Brown","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_m81_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"CUP_H_RUS_TSH_4_Brown","CFP_Neck_Wrap2",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_b_pesh_rifleman_dshkm : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Gunner [DSHKM]";

        linkedItems[] = {"CFP_AK_VEST_Black","SP_BeanieHat_Black","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","SP_BeanieHat_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_edrl_SS",{{"FirstAidKit",1},{"MiniGrenade",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"SP_BeanieHat_Black","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_rifleman_kord : cfp_b_pesh_rifleman {

        displayName = "Peshmerga Gunner [KORD]";

        linkedItems[] = {"PESH_Vest","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Kord_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_m81",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"PESH_Vest",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Kord_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_b_pesh_rifleman_podnos : cfp_b_pesh_rifleman {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [Podnos]";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_m81_SS";

        linkedItems[] = {"CFP_RAV_Green","H_Bandanna_camo","ItemRadio"};
        respawnlinkedItems[] = {"CFP_RAV_Green","H_Bandanna_camo","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_m81_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CFP_RAV_Green",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"H_Bandanna_camo","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_b_pesh_rifleman_ags30 : cfp_b_pesh_rifleman {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [AGS30]";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_3cd_SS";

        linkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_M81","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","CFP_PatrolCap_M81","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_3cd_SS",{{"FirstAidKit",1},{"MiniGrenade",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"CFP_PatrolCap_M81","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_b_pesh_rifleman_metis : cfp_b_pesh_rifleman {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [METIS]";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_edrl";

        linkedItems[] = {"PESH_Vest","SP_BeanieHat_Green","ItemRadio"};
        respawnlinkedItems[] = {"PESH_Vest","SP_BeanieHat_Green","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_edrl",{{"FirstAidKit",1},{"MiniGrenade",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"PESH_Vest",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"SP_BeanieHat_Green","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_b_pesh_rifleman_spg9 : cfp_b_pesh_rifleman {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Peshmerga Gunner [SPG9]";
        side = 1;
        faction = "CFP_B_PESH";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_pesh_m81_SS";

        linkedItems[] = {"CFP_RAV_OGA","CFP_Basic_Helmet_Gray","ItemRadio"};
        respawnlinkedItems[] = {"CFP_RAV_OGA","CFP_Basic_Helmet_Gray","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_pesh_m81_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30},{"MiniGrenade",2,1}}},{"CFP_RAV_OGA",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"CFP_Basic_Helmet_Gray","",{},{"","","ItemRadio","","",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };


    class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_Kurdistan : FlagCarrier_OCimport_01
    {
        author = "AccuracythruVolume";
        displayName = "Flag (Kurdistan)";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) setFlagTexture '\x\cfp\addons\b_pesh\data\ISC_flag_Kurdistan.paa'";
            };
        };
    };

    class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_b_pesh_offroad : Offroad_01_base_F_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Offroad";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman","cfp_b_pesh_rifleman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa","\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Offroad.jpg";
    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_b_pesh_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Offroad MG";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman","cfp_b_pesh_rifleman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa","\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Offroad_M2.jpg";
    };
    class CUP_B_HMMWV_M2_USA;
    class CUP_B_HMMWV_M2_USA_OCimport_01 : CUP_B_HMMWV_M2_USA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_HMMWV_M2 : CUP_B_HMMWV_M2_USA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga HMMWV M2";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman","cfp_b_pesh_rifleman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_HMMWV.jpg";
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Ural : CUP_O_Ural_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Ural";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman","cfp_b_pesh_rifleman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Ural.jpg";
    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Ural ZU23";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MOTORIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman","cfp_b_pesh_rifleman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_Ural_ZU23.jpg";
    };
	
	class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };
	
	class cfp_b_pesh_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_pesh\data\Preview_Ural_Refuel_01.JPG;
        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 1;
        faction = "CFP_B_PESH";
        crew = "cfp_b_pesh_rifleman";


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
	
	 class cfp_b_pesh_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_pesh\data\Preview_Ural_Repair_01.JPG;
        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 1;
        faction = "CFP_B_PESH";
        crew = "cfp_b_pesh_rifleman";


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
	
	class cfp_b_pesh_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_pesh\data\Preview_Ural_Ammo_01.JPG;
        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 1;
        faction = "CFP_B_PESH";
        crew = "cfp_b_pesh_rifleman";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
	
	
	
	
    class CUP_O_BRDM2_TKA;
    class CUP_O_BRDM2_TKA_OCimport_01 : CUP_O_BRDM2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BRDM : CUP_O_BRDM2_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BRDM";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\b_pesh\data\brdm_pesh_1.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BRDM.jpg";
    };
    class CUP_O_BTR60_TK;
    class CUP_O_BTR60_TK_OCimport_01 : CUP_O_BTR60_TK { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BTR60 : CUP_O_BTR60_TK_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BTR60";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BTR60.jpg";
    };
    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BMP1 : CUP_O_BMP1_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BMP-1";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BMP1.jpg";
    };
    class CUP_O_BMP2_TKA;
    class CUP_O_BMP2_TKA_OCimport_01 : CUP_O_BMP2_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_BMP2 : CUP_O_BMP2_TKA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga BMP-2";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_MECHANIZED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_BMP2.jpg";
    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_ZSU : CUP_O_ZSU23_SLA_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga ZSU";
        faction = "CFP_B_PESH";
        vehicleClass = "CFP_B_PESH_ARMORED";
        camouflage = 4;
        crew = "cfp_b_pesh_crewman";
        typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON
            {
                init = "(_this select 0) execVM ""\x\cfp\addons\b_pesh\Scripts\randomize_tex.sqf""";
            };
        };
        Editorpreview = "\x\cfp\addons\b_pesh\data\Preview_Peshmerga_ZSU.jpg";
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_2b14 : CUP_O_2b14_82mm_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga 2b14";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_Metis_RU;
    class CUP_O_Metis_RU_OCimport_01 : CUP_O_Metis_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_Metis : CUP_O_Metis_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga Metis";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_ags30 : CUP_O_AGS_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga AGS30";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_dshkm : CUP_O_DSHKM_TK_INS_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga DSHKM";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_b_pesh_dshkm_minitripod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga DSHKM (Minitripod)";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_b_pesh_zu23 : CUP_O_ZU23_RU_OCimport_01
    {
        scope = 2;
        side = 1;
        displayName = "Peshmerga ZU23";
        faction = "CFP_B_PESH";
        vehicleClass = "PESH_static_b";
        camouflage = 4;
        crew = "cfp_b_pesh_rifleman";
        typicalCargo[] = {"cfp_b_pesh_rifleman"};
    };

    class CUP_USBasicAmmunitionBox; // CUP_USBasicAmmunitionBox

    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox

    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox

    class CUP_USLaunchersBox; // CUP_USLaunchersBox

    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_PESH_AmmoBox : CUP_USBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Ammo Box;
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
    class CFP_B_PESH_WeaponsBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74M_GL,10);
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKS,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
        };
    };
    class CFP_B_PESH_LaunchersBox : CUP_USLaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_B_PESH_UniformBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(PESH_uniform,15);
        };
    };
    class CFP_B_PESH_SupportBox : CUP_USSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(V_TacVest_camo,10);
            item_xx(PESH_Beret,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(SP_Goggles_Green,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(SP_Goggles_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
        };
    };
    class CFP_B_PESH_SupplyBox : CUP_USVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Peshmerga Supply Box;
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
            weap_xx(CUP_arifle_AKM,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_srifle_SVD_pso,10);
            weap_xx(CUP_arifle_AKS,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_PSO_1,10);
            item_xx(Binocular,10);
            item_xx(V_TacVest_camo,10);
            item_xx(PESH_Beret,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_HarnessOGL_gry,10);
            item_xx(SP_Goggles_Green,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(SP_Goggles_Tan,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
        };
    };
};