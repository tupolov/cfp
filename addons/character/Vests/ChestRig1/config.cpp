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
	class CFP_ChestRig1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class CFP_ChestRig
	{
		displayName = "Chest Rig";
	};
};
class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class VestItem;	
	class SP_ChestRig1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Chest Rig 1 (Black)";
		picture = "\x\cfp\addons\character\Vests\ChestRig1\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\ChestRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\ChestRig1\Black.paa","\x\cfp\addons\character\Vests\ChestRig1\Black2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\ChestRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
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

	class SP_ChestRig1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Chest Rig 1 (Green)";
		picture = "\x\cfp\addons\character\Vests\ChestRig1\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\ChestRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\ChestRig1\Green.paa","\x\cfp\addons\character\Vests\ChestRig1\Green2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\ChestRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
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

	class SP_ChestRig1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Chest Rig 1 (Tan)";
		picture = "\x\cfp\addons\character\Vests\ChestRig1\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\ChestRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\ChestRig1\Tan.paa","\x\cfp\addons\character\Vests\ChestRig1\Tan2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\ChestRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
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

	class SP_ChestRig1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Chest Rig 1 (Grey)";
		picture = "\x\cfp\addons\character\Vests\ChestRig1\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\ChestRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Vests\ChestRig1\Grey.paa","\x\cfp\addons\character\Vests\ChestRig1\Grey2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};
		author = "SP Craig";
		
		

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\ChestRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 14;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 14;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 14;
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