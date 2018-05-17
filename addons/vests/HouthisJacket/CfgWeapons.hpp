
	class CFP_HouthisJacket: CUP_Vest_TKI_Camo_Base
    {
		scope = 2;
		displayName = "Houthis Jacket (Pouches)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_01_ca.paa";
		model = "\x\cfp\addons\models\Houthis_Jacket.p3d";
		author = "Tupolov";
		hiddenSelections[] = {"camo","camo1","camo2"}; // Vest, arms, pouches
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_1_co.paa", "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\loc_ind01_1_co.paa", "cup\creatures\people\military\cup_creatures_people_military_takiinsurgents\data\loc_opfor05_1_co.paa"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\Houthis_Jacket.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo","camo1","camo2"}; // Vest, arms, pouches
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};

		};
	};
/*
	class CFP_HouthisJacket2: CUP_Vest_TKI_Camo_Base
    {
		scope = 2;
		displayName = "Houthis Jacket (Small)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_01_ca.paa";
		model = "\x\cfp\addons\models\Houthis_Jacket2.p3d";
		author = "Tupolov";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cup\creatures\people\civil\cup_creatures_people_civil_chernarus\data\profiteer_co.paa"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\Houthis_Jacket2.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};

		};
	};

	class CFP_HouthisJacket3: CUP_Vest_TKI_Camo_Base
	{
		scope = 2;
		displayName = "Houthis Jacket (Large)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\ui\icon_v_jacket3_01_ca.paa";
		model = "\x\cfp\addons\models\Houthis_Jacket3.p3d";
		author = "Tupolov";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\cup\creatures\people\civil\cup_creatures_people_civil_chernarus\data\functionary_co.paa"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\Houthis_Jacket3.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};

		};
	};*/