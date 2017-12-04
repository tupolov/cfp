	class HeadgearItem;
	class CUP_H_USMC_LWH_NVGMOUNT_DES;
	class CFP_H_O_RUMVD_SURPAT: CUP_H_USMC_LWH_NVGMOUNT_DES
	{
		scope = 2;
		author = "Spartan";
		dlc = "CFP";
		displayName  = "Russian MVD Helmet";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_rumvd\data\CFP_H_O_RUMVD_SURPAT_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 5;
			passThrough = 0.3;
			 picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_h_LWH_1_ca.paa";
 			 uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_LWH_1.p3d";
  			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\o_ruarmy_des\data\CFP_H_O_RUMVD_SURPAT_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};