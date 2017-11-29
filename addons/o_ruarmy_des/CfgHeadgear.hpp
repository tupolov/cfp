	class HeadgearItem;
	class CUP_H_RUS_6B27_NVG;
	class CFP_H_O_RUARMY_6B27_NVG: CUP_H_RUS_6B27_NVG
	{
		scope = 2;
		author = "Tupolov";
		dlc = "CFP";
		displayName  = "6B27 Helmet (Desert, NVG mount)";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_ruarmy_des\data\MEC_helm_a_h_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\MEC_6B27_helm_regular.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\o_ruarmy_des\data\MEC_helm_a_h_co.paa"};
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

	class CUP_H_RUS_6B27;
	class CFP_H_O_RUARMY_6B27: CUP_H_RUS_6B27
	{
		scope = 2;
		author = "Tupolov";
		dlc = "CFP";
		displayName  = "6B27 Helmet (Desert)";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_6b27_noNVG.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\o_ruarmy_des\data\CUP_6b27_noNVG_desert_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_6b27_noNVG.p3d";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
			modelSides[] = {6};
			armor = 0;
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\o_ruarmy_des\data\CUP_6b27_noNVG_desert_co.paa"};
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