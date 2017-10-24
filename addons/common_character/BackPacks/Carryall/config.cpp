

class CfgPatches
{
	class CFP_Carryall
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicleClasses
{
	class CFP_Carryall
	{
		displayName = "Carryall";
	};
};
class CfgVehicles
{
	
	class B_Carryall_oucamo;

	

	class SP_Carryall_Black: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Black)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\Black.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\Black.paa"};
		author = "SP Craig";
		

		
	};
	class SP_Carryall_Green: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Green)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\Green.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\Green.paa"};
		author = "SP Craig";

	};

	class SP_Carryall_Tan: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Tan)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\Tan.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\Tan.paa"};
		author = "SP Craig";

	};

	class SP_Carryall_White: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (White)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\White.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\White.paa"};
		author = "SP Craig";
	};

	class SP_Carryall_Hunter: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Hunter)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\Hunter.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\Hunter.paa"};
		author = "SP Craig";

	};

	class SP_Carryall_Hunter2: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Hunter2)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\Hunter2.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\Hunter2.paa"};
		author = "SP Craig";
	};

	class SP_Carryall_ATacsFG: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (A-Tacs FG)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\ATacsFG.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\ATacsFG.paa"};
		author = "SP Craig";

	};

	class SP_Carryall_NodUrban: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Nod Urban)";
		picture = "\x\cfp\addons\common_character\BackPacks\Carryall\ui\NodUrban.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\BackPacks\Carryall\NodUrban.paa"};
		author = "SP Craig";		
	};	
	
};
