class CfgPatches
{
	class CFP_Camelbak
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicleClasses
{
	class CFP_Camelbak
	{
		displayName = "Camelbak";
	};
};
class CfgVehicles
{
	
	class B_Carryall_oucamo;

	class SP_Camelbak_Black: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Black)";
		model = "\x\cfp\addons\common_character\Models\Camelbak.p3d";
		picture = "\x\cfp\addons\common_character\BackPacks\Camelbak\ui\Black.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Camelbak\Black.paa"};
		author = "SP Craig";
		

		
	};
	class SP_Camelbak_Green: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Green)";
		model = "\x\cfp\addons\common_character\Models\Camelbak.p3d";
		picture = "\x\cfp\addons\common_character\BackPacks\Camelbak\ui\Green.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Camelbak\Green.paa"};
		author = "SP Craig";

	};

	class SP_Camelbak_Tan: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Tan)";
		model = "\x\cfp\addons\common_character\Models\Camelbak.p3d";
		picture = "\x\cfp\addons\common_character\BackPacks\Camelbak\ui\Tan.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Camelbak\Tan.paa"};
		author = "SP Craig";		
	};	
	
};

