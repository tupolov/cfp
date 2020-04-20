	class VestItem;
	class CUP_V_B_GER_Tactical_Fleck;
    class CFP_V_O_RUMVD_SURPAT: CUP_V_B_GER_Tactical_Fleck
	{
		scope=2;
		dlc="CFP";
		author="CFP";
		displayName="Russian MVD SURPAT Vest";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_carrier_vest_ca.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_rumvd\data\CFP_V_O_RUMVD_SURPAT_1_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo"};
			mass = 80;

		class HitpointsProtectionInfo
			{
				class Chest	{
				hitpointName = "HitChest";
				armor = 12;
				passThrough = 0.2;
				};

				class Diaphragm	{
				hitpointName = "HitDiaphragm";
				armor = 12;
				passThrough = 0.2;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 12;
				passThrough = 0.2;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.2;
			};
		};
	};
};

class CUP_V_B_GER_PVest_Fleck_RFL;
class CFP_V_O_RUMVD_Black : CUP_V_B_GER_PVest_Fleck_RFL
{
	scope=2;
	dlc="CFP";
	author="CFP";
	displayName="Russian MVD Protection Vest (Black)";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","_pistol","_pistol_cartridge_pouches","_pistol_holster"};
	hiddenSelectionsTextures[] = {"\x\cfp\addons\o_rumvd\data\bundes_bullet_vest_black_co.paa","\x\cfp\addons\o_rumvd\data\b_cartridge_pouch_blk_co.paa","\x\cfp\addons\o_rumvd\data\B_backpack_blk_co.paa","\x\cfp\addons\o_rumvd\data\B_first_aid_blk_co.paa"};
	class ItemInfo: VestItem {

					uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_ProtectionVest2.p3d";
					containerClass = "Supply220";
					mass = 90;
					hiddenSelections[] = {"camo1","camo2","camo3","camo4","_pistol","_pistol_cartridge_pouches","_pistol_holster"};

			class HitpointsProtectionInfo {

				class Chest {
				HitpointName = "HitChest";
				armor = 20;
				PassThrough = 0.200000;
				};

				class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = 20;
				PassThrough = 0.200000;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 20;
				passThrough = 0.200000;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.200000;
			};
		};
	};
};

class CFP_V_O_RUMVD_MCam : CUP_V_B_GER_PVest_Fleck_RFL
{
	scope=2;
	dlc="CFP";
	author="CFP";
	displayName="Russian Protection Vest (Multicam)";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","_pistol","_pistol_cartridge_pouches","_pistol_holster"};
	hiddenSelectionsTextures[] = {"\x\cfp\addons\o_rumvd\data\bundes_bullet_vest_mcam_co.paa","\x\cfp\addons\o_rumvd\data\b_cartridge_pouch_mcam_co.paa","\x\cfp\addons\o_rumvd\data\B_backpack_mcam_co.paa","\x\cfp\addons\o_rumvd\data\B_first_aid_mcam_co.paa"};
	class ItemInfo: VestItem {

					uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_ProtectionVest2.p3d";
					containerClass = "Supply220";
					mass = 90;
					hiddenSelections[] = {"camo1","camo2","camo3","camo4","_pistol","_pistol_cartridge_pouches","_pistol_holster"};

			class HitpointsProtectionInfo {

				class Chest {
				HitpointName = "HitChest";
				armor = 20;
				PassThrough = 0.200000;
				};

				class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = 20;
				PassThrough = 0.200000;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 20;
				passThrough = 0.200000;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.200000;
			};
		};
	};
};

class CUP_V_RUS_6B45_1;
class CFP_V_RUS_6B45_MCam_1: CUP_V_RUS_6B45_1
{
    dlc = "CUP_Units";
	author = "$STR_CUP_AUTHOR_STRING";
	scope = 2;
	displayName  = "6B45 Vest (Multicam / Variant 1)";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_1_emr_ca.paa";
	hiddenSelections[] = {"camo", "camo1"};
	hiddenSelectionsTextures[] =
		{
			"\x\cfp\addons\o_rumvd\data\6b45_vest_mcam_co.paa",
			"\x\cfp\addons\o_rumvd\data\6b45_equipment_mcam_co.paa"
		};
	class ItemInfo: VestItem
	{
		uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_1.p3d";
		containerClass = "Supply140";
		mass = 100;
		hiddenSelections[] = {"camo", "camo1"};

	class HitpointsProtectionInfo {

				class Chest {
				HitpointName = "HitChest";
				armor = 16;
				PassThrough = 0.3;
				};

				class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = 16;
				PassThrough = 0.3;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 16;
				passThrough = 0.3;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
	};
};

class CUP_V_RUS_6B45_2;
class CFP_V_RUS_6B45_MCam_2: CUP_V_RUS_6B45_2
{
    dlc = "CFP";
	author = "CFP";
	scope = 2;
	displayName  = "6B45 Vest (Multicam / Variant 2)";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_2_emr_ca.paa";
	hiddenSelections[] = {"camo", "camo1"};
	hiddenSelectionsTextures[] =
		{
			"\x\cfp\addons\o_rumvd\data\6b45_vest_mcam_co.paa",
			"\x\cfp\addons\o_rumvd\data\6b45_equipment_mcam_co.paa"
		};
	class ItemInfo: VestItem
	{
		uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_2.p3d";
		containerClass = "Supply140";
		mass = 100;
		hiddenSelections[] = {"camo", "camo1"};

	class HitpointsProtectionInfo {

				class Chest {
				HitpointName = "HitChest";
				armor = 16;
				PassThrough = 0.3;
				};

				class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = 16;
				PassThrough = 0.3;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 16;
				passThrough = 0.3;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
	};
};

class CUP_V_RUS_6B45_3;
class CFP_V_RUS_6B45_MCam_3: CUP_V_RUS_6B45_3
{
    dlc = "CFP";
	author = "CFP";
	scope = 2;
	displayName  = "6B45 Vest (Multicam / Variant 3)";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_6b45_3_emr_ca.paa";
	hiddenSelections[] = {"camo", "camo1"};
	hiddenSelectionsTextures[] =
		{
			"\x\cfp\addons\o_rumvd\data\6b45_vest_mcam_co.paa",
			"\x\cfp\addons\o_rumvd\data\6b45_equipment_mcam_co.paa"
		};
	class ItemInfo: VestItem
	{
		uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\ratnik\vest\CUP_6B45_3.p3d";
		containerClass = "Supply140";
		mass = 110;
		hiddenSelections[] = {"camo", "camo1"};

	class HitpointsProtectionInfo {

				class Chest {
				HitpointName = "HitChest";
				armor = 16;
				PassThrough = 0.3;
				};

				class Diaphragm {
				HitpointName = "HitDiaphragm";
				armor = 16;
				PassThrough = 0.3;
				};

				class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 16;
				passThrough = 0.3;
				};

				class Body {
				hitpointName = "HitBody";
				passThrough = 0.3;
			};
		};
	};
};

