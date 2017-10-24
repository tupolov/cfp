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
class CfgGlasses
{
	class None;

	class SP_Kneepads_Black2: None
	{
		scope = 2;
		displayname = "Knee Pads (Black)";
		model = "\x\cfp\addons\common_character\Models\KneePadsBlack.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\KneePads\ui\Black.jpg";
		identityTypes[] = {"NoGlasses",1000};

	};
	

	class SP_Kneepads_Green2: None
	{
		scope = 2;
		displayname = "Knee Pads (Green)";
		model = "\x\cfp\addons\common_character\Models\KneePadsGreen.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\KneePads\ui\Green.jpg";
		identityTypes[] = {"NoGlasses",1000};

	};
	

	class SP_Kneepads_Tan2: None
	{
		scope = 2;
		displayname = "Knee Pads (Tan)";
		model = "\x\cfp\addons\common_character\Models\KneePadsTan.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\KneePads\ui\Tan.jpg";
		identityTypes[] = {"NoGlasses",1000};

		
	};
};
