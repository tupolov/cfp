#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class cfp_b_iqpolice_officer : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Iraqi Police Officer";
        side = 1;
        faction = "CFP_B_IQPOLICE";

        identityTypes[] = {"Head_TK","LanguagePER_F","NoGlasses","G_IRAN_default"};

        uniformClass = "CFP_FieldUniform_ipdigital";

        linkedItems[] = {"CFP_RAV_Black","CFP_BaseballCap_IP2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"CFP_RAV_Black","CFP_BaseballCap_IP2","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"CUP_arifle_AKM","Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM","Binocular"};

        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_FieldUniform_ipdigital",{{"FirstAidKit",1},{"CUP_30Rnd_762x39_AK47_M",1,30}}},{"CFP_RAV_Black",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{},"CFP_BaseballCap_IP2","CFP_Scarfshades_grey",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

        //Uniforms
        uniformList[] = {
          "CFP_FieldUniform_ipdigital", 0.25,
          "CFP_FieldUniform_ipdigital_SS", 0.25,
          "CFP_FieldUniform_ipdpm", 0.25,
          "CFP_FieldUniform_ipdpm_SS",0.25
        };

        //Helmets
        headgearList[] = {
            "", 0.1,
            "CFP_Basic_Helmet_Black", 0.1,
            "CFP_BaseballCap_IP1", 0.25,
            "CFP_BaseballCap_IP2", 0.25,
            "CFP_BaseballCap_IP3", 0.25,
            "CFP_PASGTHelmet_IPDigital1", 0.2,
            "CFP_PASGTHelmet_IPDigital2", 0.2,
            "H_PASGT_basic_blue_F", 0.1,
            "CFP_PASGTHelmet_IPDPM1", 0.2,
            "CFP_PASGTHelmet_IPDPM2", 0.2,
            "SP_Beret2_Red", 0.25,
            "CFP_PatrolCap_IPDPM", 0.2,
            "CFP_PatrolCap_IPDigital", 0.2
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
            "CFP_ITV_Empty_Brown", 0.2,
            "CFP_ITV_Empty_ANP", 0.2,
            "CFP_RAV_Black", 0.33,
            "CUP_V_PMC_CIRAS_Coyote_Patrol", 0.2,
            "CUP_V_PMC_CIRAS_Black_Patrol", 0.2,
            "CUP_V_PMC_CIRAS_Coyote_Empty", 0.2,
            "CUP_V_PMC_CIRAS_Black_Empty", 0.2,
            "CFP_AK_VEST_Black", 0.2,
            "CFP_AK_VEST_Tan", 0.2,
            "CFP_AK_VEST_LOlive", 0.2
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

    class cfp_b_iqpolice_policeman : cfp_b_iqpolice_officer {

        displayName = "Iraqi Policeman";

        linkedItems[] = {"CUP_V_PMC_CIRAS_Black_Empty","SP_Beret2_Red","ItemRadio"};
        respawnlinkedItems[] = {"CUP_V_PMC_CIRAS_Black_Empty","SP_Beret2_Red","ItemRadio"};

        weapons[] = {"CUP_arifle_AK74M"};
        respawnWeapons[] = {"CUP_arifle_AK74M"};

        magazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M","CUP_30Rnd_545x39_AK74M_M"};

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK74M_M",30},{},""},{},{},{"CFP_FieldUniform_ipdpm",{{"FirstAidKit",1},{"CUP_HandGrenade_RGD5",2,1},{"CUP_30Rnd_545x39_AK74M_M",1,30}}},{"CUP_V_PMC_CIRAS_Black_Empty",{{"CUP_30Rnd_545x39_AK74M_M",5,30}}},{},"SP_Beret2_Red","CFP_Neck_Wrap4",{},{"","","ItemRadio","","",""}};

    };

	class Offroad_01_base_F;
    class Offroad_01_base_F_OCimport_01 : Offroad_01_base_F { scope = 0; class Eventhandlers; };
    class cfp_b_iqpolice_offroad : Offroad_01_base_F_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IP Offroad";
		faction = "CFP_B_IQPOLICE";
		vehicleClass = "CFP_B_IQPOLICE_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqpolice_policeman";
		typicalCargo[] = {"cfp_b_iqpolice_policeman","cfp_b_iqpolice_policeman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\offroad_ip_03.paa","\x\cfp\addons\b_iqpolice\data\offroad_ip_01.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\b_iqpolice\data\Preview_IP_Offroad.jpg";
	};
	class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_b_iqpolice_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IP Offroad MG";
		faction = "CFP_B_IQPOLICE";
		vehicleClass = "CFP_B_IQPOLICE_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqpolice_policeman";
		typicalCargo[] = {"cfp_b_iqpolice_policeman","cfp_b_iqpolice_policeman"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\offroad_ip_05.paa","\x\cfp\addons\b_iqpolice\data\offroad_ip_02.paa"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\b_iqpolice\data\Preview_IP_Offroad_MG.jpg";
	};
	class CUP_B_HMMWV_M2_USA;
    class CUP_B_HMMWV_M2_USA_OCimport_01 : CUP_B_HMMWV_M2_USA { scope = 0; class Eventhandlers; };
    class cfp_b_iqpolice_HMMWV_M2 : CUP_B_HMMWV_M2_USA_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IP HMMWV M2";
		faction = "CFP_B_IQPOLICE";
		vehicleClass = "CFP_B_IQPOLICE_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqpolice_policeman";
		typicalCargo[] = {"cfp_b_iqpolice_policeman","cfp_b_iqpolice_policeman"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\b_iqpolice\data\Preview_IP_HMMWV.jpg";
	};
	class CUP_B_HMMWV_DSHKM_GPK_ACR;
    class CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01 : CUP_B_HMMWV_DSHKM_GPK_ACR { scope = 0; class Eventhandlers; };
    class cfp_b_iqpolice_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IA HMMWV GPK DShKM";
		faction = "CFP_B_IQPOLICE";
		vehicleClass = "CFP_B_IQPOLICE_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqpolice_policeman";
		typicalCargo[] = {"cfp_b_iqpolice_policeman","cfp_b_iqpolice_policeman"};
	};
	class CUP_O_Ural_CHDKZ;
    class CUP_O_Ural_CHDKZ_OCimport_01 : CUP_O_Ural_CHDKZ { scope = 0; class Eventhandlers; };
    class cfp_b_iqpolice_Ural : CUP_O_Ural_CHDKZ_OCimport_01
	{
		scope = 2;
		side = 1;
		displayName = "IP Ural";
		faction = "CFP_B_IQPOLICE";
		vehicleClass = "CFP_B_IQPOLICE_MOTORIZED";
		camouflage = 4;
		crew = "cfp_b_iqpolice_policeman";
		typicalCargo[] = {"cfp_b_iqpolice_policeman","cfp_b_iqpolice_policeman"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_tex.sqf""";
			};
		};
		editorPreview = "\x\cfp\addons\b_iqpolice\data\Preview_IA_Ural.jpg";
	};

    class CUP_USBasicAmmunitionBox; // CUP_USBasicAmmunitionBox
    class CUP_USBasicWeaponsBox; // CUP_USBasicWeaponsBox
    class CUP_USSpecialWeaponsBox; // CUP_USSpecialWeaponsBox
    class CUP_USVehicleBox; // CUP_USVehicleBox

    class CFP_B_IQPOLICE_AmmoBox : CUP_USBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Iraqi Police Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_B_IQPOLICE_WeaponsBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Iraqi Police Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
        };
        class TransportItems {
        };
    };
    class CFP_B_IQPOLICE_UniformBox : CUP_USBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Iraqi Police Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CFP_FieldUniform_ipdigital,15);
            item_xx(IP_uniform_policeman_b,15);
        };
    };
    class CFP_B_IQPOLICE_SupportBox : CUP_USSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Iraqi Police Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(H_PASGT_basic_blue_F,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_camo,10);
        };
    };
    class CFP_B_IQPOLICE_SupplyBox : CUP_USVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Iraqi Police Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK47,10);
        };
        class TransportItems {
            item_xx(Binocular,10);
            item_xx(V_TacChestrig_grn_F,10);
            item_xx(H_PASGT_basic_blue_F,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(V_TacVest_camo,10);
            item_xx(CFP_FieldUniform_ipdigital,10);
            item_xx(IP_uniform_policeman_b,10);
        };
    };
};