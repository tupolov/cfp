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
				};
};