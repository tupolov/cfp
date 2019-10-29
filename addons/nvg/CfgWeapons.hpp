class CfgWeapons
{
	class NVGoggles;
	class SP_Kneepads_Black: NVGoggles
	{
		displayname = "Knee Pads (Black)";
		model = "\x\cfp\addons\nvg\KneePadsBlack.p3d";
		picture = "\x\cfp\addons\nvg\data\BlackKnee.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\KneePadsBlack.p3d";
			modelOff = "\x\cfp\addons\nvg\KneePadsBlack.p3d";
			mass = 4;
		};
	};
	class SP_Kneepads_Green: NVGoggles
	{
		displayname = "Knee Pads (Green)";
		model = "\x\cfp\addons\nvg\KneePadsGreen.p3d";
		picture = "\x\cfp\addons\nvg\data\GreenKnee.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\KneePadsGreen.p3d";
			modelOff = "\x\cfp\addons\nvg\KneePadsGreen.p3d";
			mass = 4;
		};
	};
	class SP_Kneepads_Tan: NVGoggles
	{
		displayname = "Knee Pads (Tan)";
		model = "\x\cfp\addons\nvg\KneePadsTan.p3d";
		picture = "\x\cfp\addons\nvg\data\TanKnee.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\KneePadsTan.p3d";
			modelOff = "\x\cfp\addons\nvg\KneePadsTan.p3d";
			mass = 4;
		};
	};
	class SP_MouthScarf_Black: NVGoggles
	{
		displayname = "Mouth Scarf (Black)";
		model = "\x\cfp\addons\nvg\MouthScarfBlack.p3d";
		picture = "\x\cfp\addons\nvg\data\Black.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\MouthScarfBlack.p3d";
			modelOff = "\x\cfp\addons\nvg\MouthScarfBlack.p3d";
			mass = 4;
		};
	};
	class SP_MouthScarf_Green: NVGoggles
	{
		displayname = "Mouth Scarf (Green)";
		model = "\x\cfp\addons\nvg\MouthScarfGreen.p3d";
		picture = "\x\cfp\addons\nvg\data\Green.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\MouthScarfGreen.p3d";
			modelOff = "\x\cfp\addons\nvg\MouthScarfGreen.p3d";
			mass = 4;
		};
	};
	class SP_MouthScarf_Tan: NVGoggles
	{
		displayname = "Mouth Scarf (Tan)";
		model = "\x\cfp\addons\nvg\MouthScarfTan.p3d";
		picture = "\x\cfp\addons\nvg\data\Tan.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\MouthScarfTan.p3d";
			modelOff = "\x\cfp\addons\nvg\MouthScarfTan.p3d";
			mass = 4;
		};
	};
	class SP_MouthScarf_Grey: NVGoggles
	{
		displayname = "Mouth Scarf (Grey)";
		model = "\x\cfp\addons\nvg\MouthScarfGrey.p3d";
		picture = "\x\cfp\addons\nvg\data\Grey.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\MouthScarfGrey.p3d";
			modelOff = "\x\cfp\addons\nvg\MouthScarfGrey.p3d";
			mass = 4;
		};
	};
	class SP_MouthScarf_White: NVGoggles
	{
		displayname = "Mouth Scarf (White)";
		model = "\x\cfp\addons\nvg\MouthScarfWhite.p3d";
		picture = "\x\cfp\addons\nvg\data\White.jpg";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\MouthScarfWhite.p3d";
			modelOff = "\x\cfp\addons\nvg\MouthScarfWhite.p3d";
			mass = 4;
		};
	};

	class CFP_ANPVS15_Black: NVGoggles
	{
		displayname = "AN/PVS-15 NVG Blk";
		model = "\x\cfp\addons\nvg\an_pvs15.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\nvg\tex\an_pvs15_blk_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\an_pvs15.p3d";
			modelOff = "\x\cfp\addons\nvg\an_pvs15_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 4;
		};
	};

	class CFP_ANPVS15_Camo_V1: NVGoggles
	{
		displayname = "AN/PVS-15 NVG Camo_V1";
		model = "\x\cfp\addons\nvg\an_pvs15.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\nvg\tex\an_pvs15_cam1_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\an_pvs15.p3d";
			modelOff = "\x\cfp\addons\nvg\an_pvs15_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 4;
		};
	};

	class CFP_ANPVS15_Camo_V2: NVGoggles
	{
		displayname = "AN/PVS-15 NVG Camo V2";
		model = "\x\cfp\addons\nvg\an_pvs15.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\nvg\tex\an_pvs15_cam2_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\an_pvs15.p3d";
			modelOff = "\x\cfp\addons\nvg\an_pvs15_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 4;
		};
	};

	class CFP_ANPVS15_Camo_V3: NVGoggles
	{
		displayname = "AN/PVS-15 NVG Camo V3";
		model = "\x\cfp\addons\nvg\an_pvs15.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\nvg\tex\an_pvs15_cam3_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\an_pvs15.p3d";
			modelOff = "\x\cfp\addons\nvg\an_pvs15_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 4;
		};
	};

	class CFP_ANPVS15_Camo_V4: NVGoggles
	{
		displayname = "AN/PVS-15 NVG Camo V4";
		model = "\x\cfp\addons\nvg\an_pvs15.p3d";
		picture = "\CUP\Weapons\CUP_Weapons_NVG\data\icon_pvs15_black_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\nvg\tex\an_pvs15_cam4_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\x\cfp\addons\nvg\an_pvs15.p3d";
			modelOff = "\x\cfp\addons\nvg\an_pvs15_off.p3d";
			hiddenSelections[] = {"camo"};
			mass = 4;
		};
	};
};

