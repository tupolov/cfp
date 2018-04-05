#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles
{
	class I_Soldier_02_F;
	class I_Soldier_A_F : I_Soldier_02_F {
		class EventHandlers;
	};
    class cfp_b_iqpolice_officer : I_Soldier_A_F
	{
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "Iraqi Police Officer";
		faction = "CFP_B_IQPOLICE";
		modelsides[] = {6};
		side = 1;
		vehicleClass = "CFP_B_IQPOLICE_INFANTRY";
		icon = "iconManOfficer";
		nakedUniform = "U_BasicBody";
		uniformClass = "IP_uniform_officer_b";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\IP_digital_flag.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 50;
		allowedHeadgear[] = {"H_PASGT_basic_blue_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"SP_OpforRig1_Grey","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"SP_OpforRig1_Grey","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_weapon.sqf""";
			};
		};
		editorPreview = "x\cfp\addons\b_iqpolice\data\Preview_ip_infantry.jpg";
	};

    class cfp_b_iqpolice_policeman : I_Soldier_A_F
	{
		side = 1;
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "Iraqi Policeman";
		faction = "CFP_B_IQPOLICE";
		modelsides[] = {6};
		vehicleClass = "CFP_B_IQPOLICE_INFANTRY";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "IP_uniform_policeman_b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_iqpolice\data\IP_dpm_flag.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 30;
		allowedHeadgear[] = {"H_PASGT_basic_blue_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 100;
		linkedItems[] = {"SP_OpforRig1_Grey","ItemRadio"};
		respawnLinkedItems[] = {"SP_OpforRig1_Grey","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_TK","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_iqpolice\Scripts\randomize_weapon.sqf""";
			};
		};
		editorPreview = "x\cfp\addons\b_iqpolice\data\Preview_ip_infantry.jpg";
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
            item_xx(IP_uniform_officer_b,15);
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
            item_xx(IP_uniform_officer_b,10);
            item_xx(IP_uniform_policeman_b,10);
        };
    };
};