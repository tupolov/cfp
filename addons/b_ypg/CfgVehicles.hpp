#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles
{
    class I_Soldier_base_F;
    class I_soldier_F : I_Soldier_base_F {
        class EventHandlers;
    };

	class cfp_b_ypg_base: I_Soldier_F
	{
		displayName = "YPG Base";
		genericnames = "TakistaniMen";
		scope = 0;
		scopeCurator = 0;
		faction = "CFP_B_YPG";
		modelsides[] = {6};
		side = 1;
		vehicleClass = "CFP_B_YPG_INFANTRY";
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "YPG_uniform";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ypg\data\YPG_marpat_1.paa"};
		camouflage = 1;
		backpack = "";
		headgearProbability = 85;
		allowedHeadgear[] = {"YPG_shemag"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"Throw","Put"};
		respawnweapons[] = {"Throw","Put"};
		magazines[] = {};
		Respawnmagazines[] = {};
		identityTypes[] = {"NoGlasses","LanguagePER_F","Head_Greek","G_IRAN_default"};
		class EventHandlers : EventHandlers
		{
			class ADDON {
				init = "(_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_gear.sqf""; (_this select 0) execVM ""\x\cfp\addons\b_ypg\Scripts\randomize_weapon.sqf""";
			};
		};
		editorPreview = "x\cfp\addons\b_ypg\data\Preview_ypg_infantry.jpg";
	};
	class cfp_b_ypg_leader: cfp_b_ypg_base
	{
		displayName = "YPG Leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		headgearProbability = 85;
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK74M_GL","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_ypg_rifleman: cfp_b_ypg_base
	{
		displayName = "YPG Rifleman";
		scope = 2;
		scopeCurator = 2;
		icon = "iconMan";
		headgearProbability = 85;
		randomWeaponProbability = 100;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_ypg_machinegunner: cfp_b_ypg_base
	{
		displayName = "YPG Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "b_assaultpack_blk";
		headgearProbability = 85;
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnweapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		Respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
	};
	class cfp_b_ypg_sniper: cfp_b_ypg_base
	{
		displayName = "YPG Sniper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManRecon";
		camouflage = 0.6;
		headgearProbability = 85;
		randomWeaponProbability = 35;
		beardProbability = 50;
		linkedItems[] = {"V_BandollierB_oli","ItemRadio"};
		respawnLinkedItems[] = {"V_BandollierB_oli","ItemRadio"};
		weapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		respawnweapons[] = {"CUP_srifle_SVD_pso","Binocular","Throw","Put"};
		magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
		Respawnmagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_HandGrenade_RGD5"};
	};
	class cfp_b_ypg_at: cfp_b_ypg_base
	{
		displayName = "YPG AT Gunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CUP_B_RPGPack_Khaki";
		headgearProbability = 85;
		randomWeaponProbability = 100;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","CUP_launch_RPG7V","Throw","Put"};
		magazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_PG7VL_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_ypg_medic: cfp_b_ypg_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Medic";
		attendant = 1;
        icon = "iconManMedic";
        picture = "pictureHeal";
		backpack = "B_AssaultPack_rgr_Medic";
		headgearProbability = 85;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_ypg_crewman: cfp_b_ypg_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Crewman";
		icon = "iconManEngineer";
		headgearProbability = 85;
		randomWeaponProbability = 30;
		beardProbability = 50;
		linkedItems[] = {"V_TacVest_camo","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_camo","ItemRadio"};
		weapons[] = {"CUP_arifle_AKS","Throw","Put"};
		respawnweapons[] = {"CUP_arifle_AKS","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
	};
	class cfp_b_ypg_rifleman_dshkm: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [DSHKM]";
		icon = "iconManAT";
		backpack = "CUP_B_DShkM_TripodHigh_Bag";
	};
	class cfp_b_ypg_rifleman_kord: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [KORD]";
		icon = "iconManAT";
		backpack = "CUP_B_Kord_Tripod_Bag";
	};
	class cfp_b_ypg_rifleman_podnos: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [Podnos]";
		icon = "iconManAT";
		backpack = "CUP_B_Podnos_Bipod_Bag";
	};
	class cfp_b_ypg_rifleman_ags30: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [AGS30]";
		icon = "iconManAT";
		backpack = "CUP_B_AGS30_Tripod_Bag";
	};
	class cfp_b_ypg_rifleman_metis: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [METIS]";
		icon = "iconManAT";
		backpack = "CUP_B_Metis_Tripod_Bag";
	};
	class cfp_b_ypg_rifleman_spg9: cfp_b_ypg_rifleman
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "YPG Gunner [SPG9]";
		icon = "iconManAT";
		backpack = "CUP_B_SPG9_Tripod_Bag";
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
		editorPreview = "\x\cfp\addons\b_ypg\data\Preview_YPG_Offroad.jpg";
	};

    class cfp_b_ypg_offroad_flag : cfp_b_ypg_offroad
	{
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
		editorPreview = "\x\cfp\addons\b_ypg\data\Preview_YPG_Offroad_flag.jpg";
	};

	class B_G_Offroad_01_armed_F;
    class B_G_Offroad_01_armed_F_OCimport_01 : B_G_Offroad_01_armed_F { scope = 0; class Eventhandlers; };
    class cfp_b_ypg_offroad_M2 : B_G_Offroad_01_armed_F_OCimport_01
	{
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
		editorPreview = "\x\cfp\addons\b_ypg\data\Preview_YPG_Offroad_M2.jpg";
	};

    class cfp_b_ypg_offroad_M2_flag : cfp_b_ypg_offroad_M2
	{
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
		editorPreview = "\x\cfp\addons\b_ypg\data\Preview_YPG_Offroad_M2_flag.jpg";
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