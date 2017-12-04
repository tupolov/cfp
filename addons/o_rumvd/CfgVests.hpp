	class VestItem;

    class CUP_V_B_GER_Carrier_Vest_2;
	class CFP_V_O_RUMVD_SURPAT: CUP_V_B_GER_Carrier_Vest_2
	{
		scope=2;
		dlc="CFP";
		author="Spartan";
		displayName="Russian MVD SURPAT Vest";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\o_rumvd\data\CFP_V_O_RUMVD_SURPAT_1_co.paa", "x\cfp\addons\o_rumvd\data\CFP_V_O_RUMVD_SURPAT_2_co.paa"};
		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo1", "camo2"};
			hiddenSelectionsTextures[] = {"x\cfp\addons\o_rumvd\data\CFP_V_O_RUMVD_SURPAT_1_co.paa", "x\cfp\addons\o_rumvd\data\CFP_V_O_RUMVD_SURPAT_2_co.paa"};
			containerClass="Supply100";
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_CarrierVest2.p3d";
			armor=0;
			passThrough=1;
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};