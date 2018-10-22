

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

	class CFP_FAPC_Light_OGA: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_OGA.paa";
		scope = 2;
		displayName = "OGA DT FAPC (Light)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "x\cfp\addons\models\FAPC_Light.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_fapc_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\models\FAPC_Light.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_LBT6094_Light_OGA: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT6094 (Light)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\LBT6094_Light.p3d";
		hiddenSelections[] = {"_battleBelt","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\LBT6094_Light.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_LBT6094_Empty_OGA: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT6094 (Empty)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\LBT6094_Empty.p3d";
		hiddenSelections[] = {"_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\LBT6094_Empty.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_RAV_Green: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "RAV Vest (RGR Green)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\CFP_RAV.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\spec_rav_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\CFP_RAV.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_RAV_Empty_Green: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "RAV Vest Empty (RGR Green)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\RAV_Empty.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\spec_rav_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\RAV_Empty.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_RAV_Black: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "RAV Vest (Black)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\CFP_RAV.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\spec_rav_blk_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\CFP_RAV.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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

	class CFP_RAV_OGA: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "RAV Vest (OGA)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\CFP_RAV.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\vsm_rav_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\CFP_RAV.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
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
