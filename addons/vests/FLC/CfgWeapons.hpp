

/*FLC

class CfgVehicleClasses
{
	class CFP_FLC
	{
		displayName = "FLC_Vest";
	};
};
*/

	class CFP_FLC_M81: V_PlateCarrier1_rgr
	{
	    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_Smersh_Brown.paa";
		scope = 2;
		displayName = "FLC Vest (M81)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\x\cfp\addons\vests\FLC\flc_e.p3d";
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_m81_co.paa"};
		hiddenSelections[] = {"camo3"};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vests\FLC\flc_e.p3d";
			containerClass = "Supply140";
			hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_m81_co.paa"};
			hiddenSelections[] = {"camo3"};
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

	class CFP_FLC_DCU: V_PlateCarrier1_rgr
	{
	    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_Smersh_Brown.paa";
		scope = 2;
		displayName = "FLC Vest (DCU)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\x\cfp\addons\vests\FLC\flc_e.p3d";
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_dcu_co.paa"};
		hiddenSelections[] = {"camo3"};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vests\FLC\flc_e.p3d";
			containerClass = "Supply140";
			hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_dcu_co.paa"};
			hiddenSelections[] = {"camo3"};
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

	class CFP_FLC_UCP: V_PlateCarrier1_rgr
	{
	    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_Smersh_Brown.paa";
		scope = 2;
		displayName = "FLC Vest (UCP)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\x\cfp\addons\vests\FLC\flc_e.p3d";
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_ucp_co.paa"};
		hiddenSelections[] = {"camo3"};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vests\FLC\flc_e.p3d";
			containerClass = "Supply140";
			hiddenSelectionsTextures[] = {"x\cfp\addons\vests\FLC\tex\flc_ucp_co.paa"};
			hiddenSelections[] = {"camo3"};
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

