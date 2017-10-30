

/*OpforRig1

class CfgVehicleClasses
{
	class CFP_Rig
	{
		displayName = "Rig";
	};
};
*/

	class SP_OpforRig1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Black)";
		picture = "\x\cfp\addons\vests\OpforRig1\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\OpforRig1\Black.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\OpforRig1";
			containerClass = "Supply80";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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
	class SP_OpforRig1_Green: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Green)";
		picture = "\x\cfp\addons\vests\OpforRig1\ui\Green.jpg";
		model = "\x\cfp\addons\character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\OpforRig1\Green.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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

	class SP_OpforRig1_Tan: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Tan)";
		picture = "\x\cfp\addons\vests\OpforRig1\ui\Tan.jpg";
		model = "\x\cfp\addons\character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\OpforRig1\Tan.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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

	class SP_OpforRig1_Grey: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Opfor Rig 1 (Grey)";
		picture = "\x\cfp\addons\vests\OpforRig1\ui\Grey.jpg";
		model = "\x\cfp\addons\character\Models\OpforRig1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\OpforRig1\Grey.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\OpforRig1";
			containerClass = "Supply60";
			hiddenSelections[] = {"camo"};
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
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
