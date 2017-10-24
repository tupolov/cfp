	#define ReadAndWrite		0
	#define ReadAndCreate		1
	#define ReadOnly		2
	#define ReadOnlyVerified		3

	#define true	1
	#define false	0

	#define VSoft		0
	#define VArmor		1
	#define VAir		2

	#define TEast		0
	#define TWest		1
	#define TGuerrila		2
	#define TCivilian		3
	#define TSideUnknown		4
	#define TEnemy		5
	#define TFriendly		6
	#define TLogic		7

	#define private		0
	#define protected		1
	#define public		2

class CfgPatches
{
	class CFP_JackEllis1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Vest
	{
		displayName = "Jack Ellis";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_JackEllis1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Black)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\Black.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\Black.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};        class SP_JackEllis1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Green)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\Green.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\Green.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Tan)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\Tan.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Grey)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\Grey.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_White: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (White)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\White.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\White.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_Blue: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Blue)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\Blue.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\Blue.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_UNBlue1: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (UN Blue1)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\UNBlue1.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\UNBlue1.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_PressBlue1: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Press Blue1)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\PressBlue1.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\PressBlue1.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_PoliceBlack1: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Police Black1)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\PoliceBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\PoliceBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_SwatBlack1: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (Swat Black1)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\SwatBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\SwatBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			
		};
	};

	class SP_JackEllis1_FBIBlack1: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Jack Ellis 1 (FBI Black1)";
		picture = "\x\cfp\addons\common_character\Vests\JackEllis1\ui\FBIBlack1.jpg";
		model = "\x\cfp\addons\common_character\Models\JackEllis1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Vests\JackEllis1\FBIBlack1.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\common_character\Models\JackEllis1";
			containerClass = "Supply0";
			hiddenSelections[] = {"camo"};
			mass = 120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};
};
	//};