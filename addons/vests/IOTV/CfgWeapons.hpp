

/*IOTV

class CfgVehicleClasses
{
	class CFP_IOTV
	{
		displayName = "IOTV Vest";
	};
};
*/

	class CUP_V_PMC_IOTV_Base;
	class CFP_IOTV_Empty: CUP_V_PMC_IOTV_Base
	{
	    picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\ui\icon_v_iotv_c1_ca.paa";
		scope = 2;
		displayName = "IOTV (Empty UCP)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\ui\icon_v_iotv_c1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_1.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\IOTV\iotv_ucp.paa","\x\cfp\addons\vests\IOTV\extras_ucp.paa"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		author = "CFP";
		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_1.p3d";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo1","camo2","camo3"};
			mass = 80;
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

	class CFP_IOTV_Patrol: CUP_V_PMC_IOTV_Base
	{
	    picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\ui\icon_v_iotv_c1_ca.paa";
		scope = 2;
		displayName = "IOTV (Patrol UCP)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\data\ui\icon_v_iotv_c1_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_2.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\IOTV\iotv_ucp.paa","\x\cfp\addons\vests\IOTV\extras_ucp.paa"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		author = "CFP";
		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_PMC\CUP_iotv_2.p3d";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo1","camo2","camo3"};
			mass = 80;
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

