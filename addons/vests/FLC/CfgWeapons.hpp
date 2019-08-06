

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
		author = "CFP";
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
		author = "CFP";
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
		author = "CFP";
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
			containerClass = "Supply140";
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
			containerClass = "Supply140";
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

	class CFP_RAV_IDF: V_PlateCarrier1_rgr
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "RAV Vest (IDF)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\models\CFP_RAV.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\spec_rav_idf.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\CFP_RAV.p3d";
			containerClass = "Supply140";
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
			containerClass = "Supply100";
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
			containerClass = "Supply140";
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
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\spec_rav_tan.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\CFP_RAV.p3d";
			containerClass = "Supply140";
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

	class CFP_V_PASGT_DBDU: V_PlateCarrier1_rgr
	{

	author = "CFP";
	scope = 2;
	displayName  = "PASGT Vest (DBDU)";
	descriptionShort = "$STR_A3_SP_AL_II";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_ACR\data\ui\icon_acr_vest20.paa";
	model   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_US_PASGT_vest.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	hiddenSelectionsTextures[] = {
	"x\cfp\addons\vests\FLC\tex\pasgt_v_dbdu_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"};

	class ItemInfo: VestItem
	{
		containerClass = "Supply100";
		uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_US_PASGT_vest.p3d";
		armor = 10;
		passThrough = 0.5;
		mass = 60;
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {
		"x\cfp\addons\vests\FLC\tex\pasgt_v_dbdu_co.paa","\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\data\US_PASGT_gear_CO.paa"};
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



