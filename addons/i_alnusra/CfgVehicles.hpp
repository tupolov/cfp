class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class cfp_i_alNusra_team_leader : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Team Leader";
        side = 2;
        faction = "CFP_I_ALNUSRA";

        identityTypes[] = {"Head_TK","Language_Ackbar","NoGlasses","G_IRAN_default"};

        uniformClass = "SP_0000_Standard_FieldUniform_Black";

        linkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacVest_khk",{{"CUP_30Rnd_545x39_AK_M",4,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "SP_0000_Standard_FieldUniform_Black", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "SP_0000_Standard_PulloverUniform_Black", 0.2,
          "CUP_I_B_PMC_Unit_24", 0.2,
          "CUP_I_B_PMC_Unit_3", 0.2,
          "CUP_I_B_PMC_Unit_14", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_KhetPartug_Short_Grey", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 0.3,
            "H_Bandanna_camo", 0.2,
            "H_Bandanna_sand", 0.2,
            "H_Bandanna_khk", 0.1,
            "H_Bandanna_gry", 0.2,
            "H_Bandanna_mcamo", 0.2,
            "H_Bandanna_sgg", 0.25,
            "H_Bandanna_cbr", 0.2,
            "SP_BeanieHat_Black", 0.25,
            "SP_PatrolCap_Black", 0.2,
            "CFP_PatrolCap_M81", 0.2
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
            "CFP_Scarfshades_green", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_Black", 0.4,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3,
            "CFP_Shemagh_Face_Atacsau", 0.3,
            "CFP_Shemagh_Neck_Gold", 0.3,
            "CFP_Shemagh_Neck_Creme", 0.3,
            "CFP_Shemagh_Neck_Red", 0.3,
            "CFP_Shemagh_Neck_White", 0.3,
            "CFP_Shemagh_Neck", 0.3
        };

        //Vests
        vestList[] = {
            "V_TacVest_brn", 0.3,
            "V_TacVest_khk", 0.3,
            "V_TacVest_blk", 0.4,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.4,
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2,
            "CUP_V_OI_TKI_Jacket3_05", 0.1,
            "CUP_V_OI_TKI_Jacket3_03", 0.1
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this select 0,'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_i_alNusra_squad_leader : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Squad Leader";

        linkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_TacVest_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AK74"};
        respawnWeapons[] = {"CUP_arifle_AK74"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"SP_0000_Standard_BattleDressUniform_Black",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"V_TacVest_camo",{{"CUP_30Rnd_545x39_AK_M",2,30}}},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class cfp_i_alNusra_grenadier : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Grenadier";
        side = 2;
        faction = "CFP_I_ALNUSRA";

        identityTypes[] = {"Head_TK","Language_Ackbar","NoGlasses","G_IRAN_default"};

        uniformClass = "SP_0000_Standard_FieldUniform_Black_SS";

        linkedItems[] = {"CFP_AK_VEST_Black","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M_GL","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL","Binocular"};

        magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M"};

        backpack = "CFP_Kitbag_Drab";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"SP_0000_Standard_FieldUniform_Black_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK_M",2,30}}},{"CFP_AK_VEST_Black",{{"CUP_30Rnd_545x39_AK_M",4,30},{"CUP_HandGrenade_RGD5",1,1},{"CUP_1Rnd_HE_GP25_M",2,1}}},{"CFP_Kitbag_Drab",{{"CUP_1Rnd_HE_GP25_M",10,1},{"CUP_1Rnd_SMOKE_GP25_M",5,1}}},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "SP_0000_Standard_FieldUniform_Black", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "SP_0000_Standard_PulloverUniform_Black", 0.2,
          "CUP_I_B_PMC_Unit_24", 0.2,
          "CUP_I_B_PMC_Unit_3", 0.2,
          "CUP_I_B_PMC_Unit_14", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_KhetPartug_Short_Grey", 0.2
        };

        //Helmets
        headgearList[] = {
            "CFP_Shemagh_Full_Red", 0.3,
            "CFP_Shemagh_Full_Black", 0.5,
            "CFP_Shemagh_Head_Grey", 0.4,
            "CFP_Shemagh_Full_Gold", 0.2,
            "CFP_Shemagh_Full_Tan", 0.2,
            "CFP_Shemagh_Full_Green", 0.2,
            "CFP_Shemagh_Full_Creme", 0.2,
            "CFP_Shemagh_Head_White", 0.2
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "", 1.0
        };

        //Vests
        vestList[] = {
            "V_TacVest_brn", 0.3,
            "V_TacVest_khk", 0.3,
            "V_TacVest_blk", 0.4,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.4,
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2,
            "CUP_V_OI_TKI_Jacket3_05", 0.1,
            "CUP_V_OI_TKI_Jacket3_03", 0.1
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this select 0,'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_i_alNusra_rifleman : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Rifleman";

        linkedItems[] = {"SP_Tactical1_Black","ItemRadio"};
        respawnlinkedItems[] = {"SP_Tactical1_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_KhetPartug_Short_Black",{{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"SP_Tactical1_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_machinegunner : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "al-Nusra Machinegunner";
        side = 2;
        faction = "CFP_I_ALNUSRA";

        identityTypes[] = {"Head_TK","Language_Ackbar","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_U_KhetPartug_Short_Grey";

        linkedItems[] = {"V_I_G_resistanceLeader_F","ItemRadio"};
        respawnlinkedItems[] = {"V_I_G_resistanceLeader_F","ItemRadio"};

        weapons[] = {"CUP_lmg_PKM"};
        respawnWeapons[] = {"CUP_lmg_PKM"};

        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};

        backpack = "B_AssaultPack_blk";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_KhetPartug_Short_Grey",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1}}},{"V_I_G_resistanceLeader_F",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_AssaultPack_blk",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"","",{},{"","","ItemRadio","","",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "SP_0000_Standard_FieldUniform_Black", 0.3,
          "CFP_FieldUniform_tanblack_SS", 0.3,
          "CFP_FieldUniform_blackacu_SS", 0.3,
          "SP_0000_Standard_FieldUniform_Black_SS", 0.3,
          "CFP_U_WOrkUniform_BlackGrey", 0.2,
          "SP_0000_Standard_PulloverUniform_Black", 0.2,
          "CUP_I_B_PMC_Unit_24", 0.2,
          "CUP_I_B_PMC_Unit_3", 0.2,
          "CUP_I_B_PMC_Unit_14", 0.2,
          "CFP_U_KhetPartug_Short_Black", 0.2,
          "CFP_U_KhetPartug_Short_Grey", 0.2
        };

        //Helmets
        headgearList[] = {
            "", 1.0
        };

        // Beards / mouth scarf / scarf / sunglasses
        facewearList[] = {
            "SP_Balaclava_Skull2", 0.2,
            "IS_Balaclava", 0.4,
            "SP_Balaclava_IDF", 0.3,
            "G_Balaclava_oli", 0.3,
            "CFP_Scarfbeard_white", 0.2,
            "CFP_Scarfbeard_grey", 0.2,
            "CFP_Scarfbeard_green", 0.2,
            "CFP_Scarfbeard_tan", 0.2,
            "CFP_Scarfbeardshades_white", 0.2,
            "CFP_Scarfbeardshades_grey", 0.2,
            "CFP_Scarfbeardshades_green", 0.2,
            "CFP_Scarfbeardshades_tan", 0.2,
            "CFP_Shemagh_Half_Red", 0.3,
            "CFP_Shemagh_Half_Black", 0.4,
            "CFP_Shemagh_Half_White", 0.3,
            "CFP_Shemagh_Half_Tan", 0.3
        };

        //Vests
        vestList[] = {
            "V_TacVest_brn", 0.3,
            "V_TacVest_khk", 0.3,
            "V_TacVest_blk", 0.4,
            "V_TacVest_camo", 0.4,
            "CFP_AK_VEST_EDRL", 0.4,
            "CFP_AK_VEST_Olive", 0.4,
            "CFP_AK_VEST_LOlive", 0.4,
            "CFP_AK_VEST_Black", 0.4,
            "CFP_AK_VEST_Tan", 0.4,
            "V_I_G_resistanceLeader_F", 0.4,
            "CFP_Tactical1_Flecktarn", 0.3,
            "SP_Tactical1_Black", 0.4,
            "CFP_UtilityJacket_Woodland", 0.2,
            "CFP_UtilityJacket_M81", 0.2,
            "CFP_UtilityJacket_ChocChip", 0.2,
            "CUP_V_OI_TKI_Jacket1_01", 0.1,
            "CUP_V_OI_TKI_Jacket1_03", 0.1,
            "CUP_V_OI_TKI_Jacket1_04", 0.1,
            "CUP_V_OI_TKI_Jacket1_05", 0.1,
            "CUP_V_OI_TKI_Jacket1_06", 0.1,
            "CFP_RAV_Green", 0.2,
            "CFP_RAV_Black", 0.2,
            "CUP_V_OI_TKI_Jacket3_05", 0.1,
            "CUP_V_OI_TKI_Jacket3_03", 0.1
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;[_this select 0, 'Male01_ackbar'] remoteExecCall ['setSpeaker', 0];  [_this select 0,'Male01_ackbar'] spawn cfp_main_fnc_setSpeakerRemote;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class cfp_i_alNusra_sniper : cfp_i_alNusra_machinegunner {

        displayName = "al-Nusra Sniper";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","ItemRadio"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_05","ItemRadio"};

        weapons[] = {"CUP_srifle_SVD_pso","Binocular"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso","Binocular"};

        magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};
        respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD_pso","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CUP_I_B_PMC_Unit_3",{{"FirstAidKit",1},{"CUP_10Rnd_762x54_SVD_M",2,10},{"CUP_HandGrenade_RGD5",1,1}}},{"CUP_V_OI_TKI_Jacket3_05",{{"CUP_10Rnd_762x54_SVD_M",6,10},{"CUP_HandGrenade_RGD5",1,1}}},{},"","",{"Binocular","","","",{},{},""},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_at : cfp_i_alNusra_grenadier {

        displayName = "al-Nusra Anti-Tank";

        linkedItems[] = {"V_TacVest_blk","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_blk","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};
        respawnWeapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_RPGPack_Khaki";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7VL_M",1},{},""},{},{"CUP_I_B_PMC_Unit_24",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"V_TacVest_blk",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7VL_M",2,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_medic : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Medic";
        attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";

        linkedItems[] = {"CFP_UtilityJacket_M81","ItemRadio"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_M81","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_AssaultPack_rgr_Medic";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_BlackGrey",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_UtilityJacket_M81",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_AssaultPack_rgr_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_sapper : cfp_i_alNusra_grenadier {

        displayName = "al-Nusra Sapper";
        canDeactivateMines = 1;
        engineer = 1;

        linkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Olive","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "B_Kitbag_cbr";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_PulloverUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Olive",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"B_Kitbag_cbr",{{"APERSMine_Range_Mag",1,1},{"IEDLandSmall_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",6,1},{"ClaymoreDirectionalMine_Remote_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1}}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_crewman : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Crewman";

        linkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemRadio"};
        respawnlinkedItems[] = {"CFP_UtilityJacket_ChocChip","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_FieldUniform_blackacu_SS",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_M",2,30}}},{"CFP_UtilityJacket_ChocChip",{{"CUP_30Rnd_545x39_AK74M_M",4,30}}},{},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_dshkm : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Gunner [DSHKM]";

        linkedItems[] = {"CFP_AK_VEST_Lime","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Lime","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_DShkM_TripodHigh_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CUP_I_B_PMC_Unit_14",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_Lime",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_kord : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Gunner [KORD]";

        linkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemRadio"};
        respawnlinkedItems[] = {"CUP_V_OI_TKI_Jacket3_03","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Kord_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_tanblack_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CUP_V_OI_TKI_Jacket3_03",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Kord_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_podnos : cfp_i_alNusra_team_leader {

        displayName = "al-Nusra Gunner [Podnos]";

        linkedItems[] = {"V_TacVest_khk","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemRadio"};

        weapons[] = {"CUP_arifle_AK47"};
        respawnWeapons[] = {"CUP_arifle_AK47"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Podnos_Bipod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK47","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_WorkUniform_BlackGrey",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacVest_khk",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_ags30 : cfp_i_alNusra_grenadier {

        displayName = "al-Nusra Gunner [AGS30]";

        linkedItems[] = {"SP_Modular1_Black","ItemRadio"};
        respawnlinkedItems[] = {"SP_Modular1_Black","ItemRadio"};

        weapons[] = {"CUP_arifle_AKS"};
        respawnWeapons[] = {"CUP_arifle_AKS"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_AGS30_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black_SS",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Black",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_AGS30_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_spg9 : cfp_i_alNusra_machinegunner {

        displayName = "al-Nusra Gunner [SPG9]";

        linkedItems[] = {"CFP_AK_VEST_Tan","ItemRadio"};
        respawnlinkedItems[] = {"CFP_AK_VEST_Tan","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M_railed"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        backpack = "CUP_B_SPG9_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_railed","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"SP_0000_Standard_BattleDressUniform_Black",{{"FirstAidKit",1},{"CUP_30Rnd_545x39_AK74M_M",2,30},{"CUP_HandGrenade_RGD5",1,1}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_545x39_AK74M_M",4,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class cfp_i_alNusra_rifleman_metis : cfp_i_alNusra_machinegunner {

        displayName = "al-Nusra Gunner [METIS]";

        linkedItems[] = {"V_TacVest_khk","ItemRadio"};
        respawnlinkedItems[] = {"V_TacVest_khk","ItemRadio"};

        weapons[] = {"CUP_arifle_AKM"};
        respawnWeapons[] = {"CUP_arifle_AKM"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        backpack = "CUP_B_Metis_Tripod_Bag";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"SP_0000_Standard_FieldUniform_Black",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",1,1},{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_TacVest_khk",{{"CUP_30Rnd_762x39_AK47_M",4,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"","",{},{"","","ItemRadio","","",""}};

    };

    class FlagCarrier;
    class FlagCarrier_OCimport_01 : FlagCarrier { scope = 0; class Eventhandlers; };
    class ISC_Flag_alNusra : FlagCarrier_OCimport_01
    {
        author = "AccuracythruVolume";
        displayName = "Flag (al-Nusra)";
        scope = 2;
        scopeCurator = 2;
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) setFlagTexture '\x\cfp\addons\i_alnusra\data\ISC_flag_alNusra.paa'";
            };
        };
    };

    class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_i_alNusra_offroad : Offroad_01_base_F_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Offroad";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\i_alnusra\data\offroad_an_01.paa","\x\cfp\addons\i_alnusra\data\offroad_an_01.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Offroad.jpg";
    };
    class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_i_alNusra_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Offroad MG";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\i_alnusra\data\offroad_an_02.paa","\x\cfp\addons\i_alnusra\data\offroad_an_02.paa"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Offroad_MG.jpg";
    };
    class CUP_I_Datsun_PK_TK_Random;
    class CUP_I_Datsun_PK_TK_Random_OCimport_01 : CUP_I_Datsun_PK_TK_Random { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_pickup_PK : CUP_I_Datsun_PK_TK_Random_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Pickup PK";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_LR_MG_TKA;
    class CUP_O_LR_MG_TKA_OCimport_01 : CUP_O_LR_MG_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_M2 : CUP_O_LR_MG_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R. M2";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR_MG.jpg";
    };
    class CUP_O_LR_SPG9_TKA;
    class CUP_O_LR_SPG9_TKA_OCimport_01 : CUP_O_LR_SPG9_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_SPG9 : CUP_O_LR_SPG9_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R. SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR_SPG.jpg";
    };
    class CUP_O_LR_Transport_TKA;
    class CUP_O_LR_Transport_TKA_OCimport_01 : CUP_O_LR_Transport_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_LR_Unarmed : CUP_O_LR_Transport_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra L.R.";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_LR.jpg";
    };
    class CUP_O_UAZ_MG_RU;
    class CUP_O_UAZ_MG_RU_OCimport_01 : CUP_O_UAZ_MG_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_MG : CUP_O_UAZ_MG_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ MG";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_MG.jpg";
    };
    class CUP_B_UAZ_AGS30_CDF;
    class CUP_B_UAZ_AGS30_CDF_OCimport_01 : CUP_B_UAZ_AGS30_CDF { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_AGS30 : CUP_B_UAZ_AGS30_CDF_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ AGS30";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_AGS.jpg";
    };
    class CUP_O_UAZ_SPG9_RU;
    class CUP_O_UAZ_SPG9_RU_OCimport_01 : CUP_O_UAZ_SPG9_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ_SPG.jpg";
    };
    class CUP_O_UAZ_METIS_RU;
    class CUP_O_UAZ_METIS_RU_OCimport_01 : CUP_O_UAZ_METIS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_METIS : CUP_O_UAZ_METIS_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ METIS";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_UAZ_Unarmed_RU;
    class CUP_O_UAZ_Unarmed_RU_OCimport_01 : CUP_O_UAZ_Unarmed_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_UAZ.jpg";
    };
    class CUP_O_UAZ_Open_RU;
    class CUP_O_UAZ_Open_RU_OCimport_01 : CUP_O_UAZ_Open_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_UAZ_Open : CUP_O_UAZ_Open_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra UAZ Open";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
    };
    class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_Ural : CUP_O_Ural_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Ural";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Ural.jpg";
    };
    class CUP_O_Ural_ZU23_CHDKZ;
    class CUP_O_Ural_ZU23_CHDKZ_OCimport_01 : CUP_O_Ural_ZU23_CHDKZ { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra Ural ZU23";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MOTORIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_Ural_ZU23.jpg";
    };
    class CUP_O_BMP1_TKA;
    class CUP_O_BMP1_TKA_OCimport_01 : CUP_O_BMP1_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_BMP1 : CUP_O_BMP1_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra BMP-1";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_BMP1.jpg";
    };
    class CUP_O_BMP1P_TKA;
    class CUP_O_BMP1P_TKA_OCimport_01 : CUP_O_BMP1P_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_BMP1P : CUP_O_BMP1P_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra BMP-1P";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_MECHANIZED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_BMP1P.jpg";
    };
    class CUP_O_T34_TKA;
    class CUP_O_T34_TKA_OCimport_01 : CUP_O_T34_TKA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_T34 : CUP_O_T34_TKA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra T34";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_T34.jpg";
    };
    class CUP_O_T55_CSAT;
    class CUP_O_T55_CSAT_OCimport_01 : CUP_O_T55_CSAT { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_T55 : CUP_O_T55_CSAT_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra T55";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_T55.jpg";
    };
    class CUP_O_ZSU23_SLA;
    class CUP_O_ZSU23_SLA_OCimport_01 : CUP_O_ZSU23_SLA { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_ZSU : CUP_O_ZSU23_SLA_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra ZSU";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_ARMORED";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};
        class EventHandlers : EventHandlers
        {
            class ADDON {
                init = "(_this select 0) execVM ""\x\cfp\addons\i_alnusra\Scripts\randomize_tex.sqf""";
            };
        };
        editorPreview = "\x\cfp\addons\i_alnusra\data\Preview_alNusra_ZSU.jpg";
    };
    class CUP_O_ZU23_RU;
    class CUP_O_ZU23_RU_OCimport_01 : CUP_O_ZU23_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_ZU23 : CUP_O_ZU23_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra ZU23";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_crewman";
        typicalCargo[] = {"cfp_i_alNusra_crewman"};
    };
    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_DSHKM : CUP_O_DSHKM_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra DSHKM";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_alNusra_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra DSHkM Mini TriPod";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_KORD_RU;
    class CUP_O_KORD_RU_OCimport_01 : CUP_O_KORD_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_KORD : CUP_O_KORD_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra KORD";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_KORD_high_RU;
    class CUP_O_KORD_high_RU_OCimport_01 : CUP_O_KORD_high_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_KORD_high : CUP_O_KORD_high_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra KORD High";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_AGS_RU;
    class CUP_O_AGS_RU_OCimport_01 : CUP_O_AGS_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_AGS : CUP_O_AGS_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra AGS";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class Eventhandlers; class Turrets; };
    class cfp_i_alNusra_SPG9 : CUP_O_SPG9_TK_INS_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra SPG9";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
    class CUP_O_2b14_82mm_RU;
    class CUP_O_2b14_82mm_RU_OCimport_01 : CUP_O_2b14_82mm_RU { scope = 0; class EventHandlers; class Turrets; };
    class cfp_i_alNusra_2b14_82mm : CUP_O_2b14_82mm_RU_OCimport_01
    {
        scope = 2;
        side = 2;
        displayName = "al-Nusra 2b14 82mm";
        faction = "CFP_I_ALNUSRA";
        vehicleClass = "CFP_I_alNusra_STATIC";
        camouflage = 4;
        crew = "cfp_i_alNusra_rifleman";
        typicalCargo[] = {"cfp_i_alNusra_rifleman"};
    };
};