#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class cfp_b_ypg_leader : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_leader.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "YPG Leader";
        side = 1;
        faction = "CFP_B_YPG";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_FieldUniform_marpat_w_light_SS";

        linkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_AssaultPack_Marpat";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_FieldUniform_marpat_w_light_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_AK_VEST_Marpat",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_1Rnd_HE_GP25_M",6,1},{"CUP_HandGrenade_RGD5",2,1}}},{"CFP_AssaultPack_Marpat",{{"CUP_1Rnd_HE_GP25_M",6,1},{"CUP_1Rnd_SMOKE_GP25_M",6,1}}},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_U_FieldUniform_marpat_w", 0.2,
          "CFP_U_FieldUniform_marpat_w_SS", 0.2,
          "CFP_U_FieldUniform_marpat_w_light", 0.2,
          "CFP_U_FieldUniform_marpat_w_light_SS", 0.2,
          "CFP_BDU_Marpat", 0.2
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

        //Helmets
        headgearList[] = {
            "", 0.7,
            "CFP_PatrolCap_Marpat", 0.4,
            "H_Cap_oli", 0.25,
            "H_Bandanna_khk", 0.2,
            "H_Bandanna_cbr", 0.2,
            "H_Bandanna_camo", 0.25,
            "SP_BaseballCap_Black", 0.2
        };

        //Vests
        vestList[] = {
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_OGA", 0.2,
            "CFP_RAV_Black", 0.2,
            "CFP_AK_VEST_Marpat", 0.5,
            "CFP_AK_VEST_M81", 0.5,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "CFP_Alice_Vest_Tan", 0.2,
            "CFP_Alice_Vest", 0.2
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'insignia_cfp_YPG'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "insignia_cfp_YPG";

    };

    class cfp_b_ypg_rifleman : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman.JPG;

        displayName = "YPG Rifleman";

        linkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_M81","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_machinegunner : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_machinegunner.JPG;

        displayName = "YPG Machinegunner";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_RPK74"};
        respawnWeapons[] = {"CUP_arifle_RPK74"};

        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"};

        backpack = "CFP_AssaultPack_Marpat";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",75},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_light",{{"FirstAidKit",1},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,75},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,75},{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",1,75}}},{"CFP_AssaultPack_Marpat",{{"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M",3,75}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_sniper : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_sniper.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "YPG Sniper";
        side = 1;
        faction = "CFP_B_YPG";

        identityTypes[] = {"Head_Greek","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_FieldUniform_marpat_w";

        linkedItems[] = {"CFP_Alice_Vest","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_srifle_SVD_pso","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_Alice_Vest",{{"CUP_10Rnd_762x54_SVD_M",5,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_U_FieldUniform_marpat_w", 0.2,
          "CFP_U_FieldUniform_marpat_w_SS", 0.2,
          "CFP_U_FieldUniform_marpat_w_light", 0.2,
          "CFP_U_FieldUniform_marpat_w_light_SS", 0.2,
          "CFP_BDU_Marpat", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
        	"", 0.5,
            "CFP_Oakleys_Clr", 0.2,
            "CFP_Oakleys_Drk", 0.2,
            "CFP_Oakleys_Embr", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.7,
            "YPG_shemag", 0.3,
            "CFP_PatrolCap_Marpat", 0.4,
            "H_Cap_oli", 0.25,
            "H_Bandanna_khk", 0.2,
            "H_Bandanna_cbr", 0.2,
            "H_Bandanna_camo", 0.25,
            "SP_BaseballCap_Black", 0.2
        };

        //Vests
        vestList[] = {
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_OGA", 0.2,
            "CFP_RAV_Black", 0.2,
            "CFP_AK_VEST_Marpat", 0.5,
            "CFP_AK_VEST_M81", 0.5,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_LOlive", 0.2,
            "CFP_Alice_Vest_Tan", 0.2,
            "CFP_Alice_Vest", 0.2
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this, 'insignia_cfp_YPG'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_b_ypg_at : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_at.JPG;

        displayName = "YPG AT Gunner";

        linkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7VL_M",1},{},""},{},{"CFP_U_FieldUniform_marpat_w_light",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Marpat",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CFP_RPGPack_Khaki",{{"CUP_PG7VL_M",1,1},{"CUP_OG7_M",2,1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_medic : cfp_b_ypg_sniper {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_medic.JPG;

        displayName = "YPG Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_light_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Marpat",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_rgr_Medic",{{"FirstAidKit",10},{"Medikit",1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_crewman : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_crewman.JPG;

        displayName = "YPG Engineer";
        engineer = 1;
        canDeactivateMines = 1;

        linkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CFP_AssaultPack_Marpat";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_SS",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Marpat",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CFP_AssaultPack_Marpat",{{"ToolKit",1},{"MineDetector",1}}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_dshkm : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_dshkm.JPG;

        displayName = "YPG Gunner [DSHKM]";

        linkedItems[] = {"CFP_Alice_Vest_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Alice_Vest_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_light_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Alice_Vest_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_kord : cfp_b_ypg_sniper {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_kord.JPG;

        displayName = "YPG Gunner [KORD]";

        linkedItems[] = {"CFP_RAV_OGA","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_OGA","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK47_top_rail"};
        respawnWeapons[] = {"CUP_arifle_AK47_top_rail"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Kord_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47_top_rail","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_RAV_OGA",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Kord_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_podnos : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_podnos.JPG;

        displayName = "YPG Gunner [Podnos]";

        linkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_LOlive","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_ags30 : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_ags30.JPG;

        displayName = "YPG Gunner [AGS30]";

        linkedItems[] = {"CUP_V_PMC_CIRAS_Coyote_Patrol","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Coyote_Patrol","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_light_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_PMC_CIRAS_Coyote_Patrol",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_metis : cfp_b_ypg_leader {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_metis.JPG;

        displayName = "YPG Gunner [METIS]";

        linkedItems[] = {"CFP_Tactical1_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_Tactical1_Marpat","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_Tactical1_Marpat",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_b_ypg_rifleman_spg9 : cfp_b_ypg_sniper {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_rifleman_spg9.JPG;

        displayName = "YPG Gunner [SPG9]";


        linkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w_light",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

	class FlagChecked_F;
    class FlagChecked_F_OCimport_01 : FlagChecked_F { scope = 0; class Eventhandlers; };
    class YPG_Flag : FlagChecked_F_OCimport_01
	{
		_generalMacro = "FlagCarrier";
		faction = "CFP_B_YPG";
		vehicleClass = "YPG_Flags";
		scope = 2;
		side = 4;
		accuracy = 1000;
		displayName = "Flag YPG";
		armor = 1;
		class EventHandlers : EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\b_ypg\data\ISC_flag_YPG.paa""";
		};
	};

	class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_b_ypg_offroad : Offroad_01_base_F_OCimport_01
	{
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_offroad.JPG;
		scope = 2;
		side = 1;
		displayName = "YPG Offroad";
		faction = "CFP_B_YPG";
		vehicleClass = "YPG_motorized_b";
		camouflage = 4;
		crew = "cfp_b_ypg_crewman";
		typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa","\x\cfp\addons\b_ypg\data\offroad_ip_01.paa"};
		class EventHandlers : EventHandlers
		{
			init = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_tex.sqf""";
		};

	};

    class cfp_b_ypg_offroad_flag : cfp_b_ypg_offroad
	{
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_offroad_flag.JPG;
		scope = 2;
		side = 1;
		displayName = "YPG Offroad (Flag)";
		faction = "CFP_B_YPG";
		vehicleClass = "YPG_motorized_b";
		camouflage = 4;
		crew = "cfp_b_ypg_crewman";
		typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa","\x\cfp\addons\b_ypg\data\offroad_ip_01.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\onkilled.sqf""";
			};
		};

	};

	class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_b_ypg_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
	{
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_offroad_M2.JPG;
		scope = 2;
		side = 1;
		displayName = "YPG Offroad MG";
		faction = "CFP_B_YPG";
		vehicleClass = "YPG_motorized_b";
		camouflage = 4;
		crew = "cfp_b_ypg_crewman";
		typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa","\x\cfp\addons\b_ypg\data\offroad_ip_02.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\onkilled.sqf""";
			};
		};

	};

    class cfp_b_ypg_offroad_M2_flag : cfp_b_ypg_offroad_M2
	{
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_offroad_M2_flag.JPG;
		scope = 2;
		side = 1;
		displayName = "YPG Offroad MG (Flag)";
		faction = "CFP_B_YPG";
		vehicleClass = "YPG_motorized_b";
		camouflage = 4;
		crew = "cfp_b_ypg_crewman";
		typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa","\x\cfp\addons\b_ypg\data\offroad_ip_02.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_tex.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\AttachFlag.sqf""";
				killed = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\onkilled.sqf""";
			};
		};

	};

	class CUP_O_Ural_Refuel_SLA;
    class CUP_O_Ural_Refuel_SLA_OCimport_01 : CUP_O_Ural_Refuel_SLA { scope = 0; class EventHandlers; };
    class CUP_O_Ural_Refuel_SLA_OCimport_02 : CUP_O_Ural_Refuel_SLA_OCimport_01 { scope = 0; class EventHandlers; };

	class cfp_b_ypg_Ural_Refuel_01 : CUP_O_Ural_Refuel_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_Ural_Refuel_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Refuel]";
        side = 1;
        faction = "CFP_B_YPG";
        crew = "cfp_b_ypg_crewman";


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

	class cfp_b_ypg_Ural_Repair_01 : CUP_O_Ural_Repair_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_Ural_Repair_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Repair]";
        side = 1;
        faction = "CFP_B_YPG";
        crew = "cfp_b_ypg_crewman";


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

	class cfp_b_ypg_Ural_Ammo_01 : CUP_O_Ural_Reammo_SLA_OCimport_02 {
        editorPreview = \x\cfp\addons\b_ypg\data\preview\cfp_b_ypg_Ural_Ammo_01.JPG;

        author = "AccuracyThruVolume";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural [Ammo]";
        side = 1;
        faction = "CFP_B_YPG";
        crew = "cfp_b_ypg_crewman";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\x\cfp\addons\vehicles\Ural\ural_kabina_des.paa'];_unit setObjectTextureGlobal [1,'\x\cfp\addons\vehicles\Ural\ural_plachta_iran.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CUP_USBasicAmmunitionBox; // CUP_USBasicAmmunitionBox

    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox

    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox

    class CUP_USLaunchersBox; // CUP_USLaunchersBox

    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_YPG_AmmoBox : CUP_USBasicAmmunitionBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Ammo Box;
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
    class CFP_B_YPG_WeaponsBox : CUP_USBasicWeaponsBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Weapons Box;
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
    class CFP_B_YPG_LaunchersBox : CUP_USLaunchersBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_B_YPG_UniformBox : CUP_USBasicWeaponsBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(YPG_uniform,15);
        };
    };
    class CFP_B_YPG_SupportBox : CUP_USSpecialWeaponsBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(V_TacVest_camo,10);
            item_xx(SP_Goggles_Tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_Goggles_Black,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(SP_Goggles_Green,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
        };
    };
    class CFP_B_YPG_SupplyBox : CUP_USVehicleBox {

        author = ALiVE ORBAT CREATOR;
        displayName = YPG Supply Box;
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
            item_xx(V_TacVest_camo,10);
            item_xx(SP_Goggles_Tan,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(SP_Goggles_Black,10);
            item_xx(B_AssaultPack_blk,10);
            item_xx(V_BandollierB_oli,10);
            item_xx(CUP_B_RPGPack_Khaki,10);
            item_xx(B_AssaultPack_rgr_Medic,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_B_Kord_Tripod_Bag,10);
            item_xx(SP_Goggles_Green,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_AGS30_Tripod_Bag,10);
            item_xx(CUP_B_Metis_Tripod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(YPG_uniform,10);
        };
    };
};