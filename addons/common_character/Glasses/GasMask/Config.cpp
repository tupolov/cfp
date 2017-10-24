class CfgPatches
{
	class SP_GasMask
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
	class SP_GasMask_Black: None
	{
		scope = 2;
		displayname = "Gas Mask (Black)";
		model = "\x\cfp\addons\common_character\Models\GasMaskBlack.p3d";
		picture = "\x\cfp\addons\common_character\Glasses\GasMask\ui\Black.jpg";
		identityTypes[] = {"NoGlasses",1000};
	};
};