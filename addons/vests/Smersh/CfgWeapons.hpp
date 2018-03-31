

/*Smersh

class CfgVehicleClasses
{
	class CFP_Smersh
	{
		displayName = "Smersh Vest";
	};
};
*/

	class CUP_Vest_RUS_Camo_Base;

	class CFP_Smersh_Brown: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_brown.paa","\x\cfp\addons\vests\Smersh\equip_brown.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

	class CFP_Smersh_Tan: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Tan)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_tan.paa","\x\cfp\addons\vests\Smersh\equip_tan.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

class CFP_Smersh_ArmyGreen: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Army Green)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_armygreen.paa","\x\cfp\addons\vests\Smersh\equip_armygreen.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

class CFP_Smersh_Green: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Green)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_green.paa","\x\cfp\addons\vests\Smersh\equip_green.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

class CFP_Smersh_Creme: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Creme)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_creme.paa","\x\cfp\addons\vests\Smersh\equip_creme.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

	class CFP_Smersh_Olive: CUP_Vest_RUS_Camo_Base
	{
		scope = 2;
		displayName = "Smersh Vest (Olive)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Smersh\partizan_olive.paa","\x\cfp\addons\vests\Smersh\equip_olive.paa"};
		hiddenSelections[] = {"camo1","camo2"};
		author = "AuburnAlumni";



		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\CUP_RUS_SPVest_1.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};