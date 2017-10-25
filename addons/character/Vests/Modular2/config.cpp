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
	class CFP_Modular2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_Modular
	{
		displayName = "Modular";
	};
};

class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_Modular2_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Modular 2 (Black)";
		picture = "\x\cfp\addons\character\Vests\Modular2\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Modular2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Modular2\Black.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Modular2";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 180;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 19;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 19;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 19;
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

	class SP_Modular2_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Modular 2 (Green)";
		picture = "\x\cfp\addons\character\Vests\Modular2\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\Modular2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Modular2\Green.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Modular2";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 180;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 19;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 19;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 19;
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

	class SP_Modular2_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Modular 2 (Tan)";
		picture = "\x\cfp\addons\character\Vests\Modular2\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\Modular2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Modular2\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Modular2";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 180;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 19;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 19;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 19;
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

	class SP_Modular2_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Modular 2 (Grey)";
		picture = "\x\cfp\addons\character\Vests\Modular2\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\Modular2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Modular2\Grey.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Modular2";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 180;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 19;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 19;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 19;
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

	class SP_Modular2_White: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Modular 2 (White)";
		picture = "\x\cfp\addons\character\Vests\Modular2\ui\White.jpg";
		model = "\x\cfp\addons\character\Models\Modular2";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\Modular2\White.paa"};
		hiddenSelections[] = {"Camo"};
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Modular2";
			containerClass = "Supply120";
			hiddenSelections[] = {"camo"};
			mass = 180;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 19;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 19;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 19;
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
