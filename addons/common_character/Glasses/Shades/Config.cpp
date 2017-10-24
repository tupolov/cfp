class CfgPatches
{
	class SP_Shades
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
	class SP_Shades_Black: None
	{
		scope = 2;
		displayname = "Shades (Black)";
		model = "\x\cfp\addons\common_character\Models\ShadesBlack.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\Shades\ui\Black.jpg";
		identityTypes[] = {"NoGlasses",1000};
		
	};
};