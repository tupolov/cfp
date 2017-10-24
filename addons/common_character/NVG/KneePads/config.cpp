	class CfgPatches
	{
		class SP_KneePads
		{
			units[] = {};
			weapons[] = {};
			requiredVersion = 0.1;
			requiredAddons[] = {};
		};
	};
	class cfgWeapons
	{
		class NVGoggles;

		class SP_Kneepads_Black: NVGoggles
		{
			displayname = "Knee Pads (Black)";
			model = "\x\cfp\addons\common_character\Models\KneePadsBlack.p3d";
			picture = "\x\cfp\addons\common_character\NVG\KneePads\ui\Black.jpg";
			class ItemInfo
			{
				type = 616;
				hmdType = 0;
				uniformModel = "\x\cfp\addons\common_character\Models\KneePadsBlack.p3d";
				modelOff = "\x\cfp\addons\common_character\Models\KneePadsBlack.p3d";
				mass = 4;

			};
		};

		class SP_Kneepads_Green: NVGoggles
		{
			displayname = "Knee Pads (Green)";
			model = "\x\cfp\addons\common_character\Models\KneePadsGreen.p3d";
			picture = "\x\cfp\addons\common_character\NVG\KneePads\ui\Green.jpg";
			class ItemInfo
			{
				type = 616;
				hmdType = 0;
				uniformModel = "\x\cfp\addons\common_character\Models\KneePadsGreen.p3d";
				modelOff = "\x\cfp\addons\common_character\Models\KneePadsGreen.p3d";
				mass = 4;

			};
		};	
	class SP_Kneepads_Tan: NVGoggles
		{
			displayname = "Knee Pads (Tan)";
			model = "\x\cfp\addons\common_character\Models\KneePadsTan.p3d";
			picture = "\x\cfp\addons\common_character\NVG\KneePads\ui\Tan.jpg";
			class ItemInfo
			{
				type = 616;
				hmdType = 0;
				uniformModel = "\x\cfp\addons\common_character\Models\KneePadsTan.p3d";
				modelOff = "\x\cfp\addons\common_character\Models\KneePadsTan.p3d";
				mass = 4;
				
			};
		};
	};
	//};
