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
	class CFP_Bandolier1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Bandolier
	{
		displayName = "Bandolier";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_Bandolier1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Bandolier 1 (Black)";
		picture = "\x\cfp\addons\character\Vests\Bandolier1\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Bandolier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Bandolier1\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Bandolier1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
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

	class SP_Bandolier1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Bandolier 1 (Green)";
		picture = "\x\cfp\addons\character\Vests\Bandolier1\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Bandolier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Bandolier1\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Bandolier1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
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

	class SP_Bandolier1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Bandolier 1 (Tan)";
		picture = "\x\cfp\addons\character\Vests\Bandolier1\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Bandolier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Bandolier1\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Bandolier1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
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

	class SP_Bandolier1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Bandolier (Grey)";
		picture = "\x\cfp\addons\character\Vests\Bandolier1\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Bandolier1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Bandolier1\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Bandolier1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0;
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