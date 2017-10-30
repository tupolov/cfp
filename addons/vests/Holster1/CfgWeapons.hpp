

/*Holster1

class CfgVehicleClasses
{
	class CFP_Holster
	{
		displayName = "Holster";
	};
};
*/

	class SP_Holster1_Black: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Holster 1 (Black)";
		picture = "\x\cfp\addons\vests\Holster1\ui\Black.jpg";
		model = "\x\cfp\addons\character\Models\Holster1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Holster1\Black.paa","\x\cfp\addons\vests\Holster1\Black2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Holster1";
			containerClass = "Supply0";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 10;
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

	class SP_Holster1_Brown: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Holster 1 (Brown)";
		picture = "\x\cfp\addons\vests\Holster1\ui\Brown.jpg";
		model = "\x\cfp\addons\character\Models\Holster1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\Holster1\Brown.paa","\x\cfp\addons\vests\Holster1\Brown2.paa"};
		hiddenSelections[] = {"Camo1","Camo2"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\character\Models\Holster1";
			containerClass = "Supply0";
			hiddenSelections[] = {"Camo1","Camo2"};
			mass = 10;
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

