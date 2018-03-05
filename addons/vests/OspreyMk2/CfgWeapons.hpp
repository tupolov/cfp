

/*OspreyMk2

class CfgVehicleClasses
{
	class CFP_Osprey
	{
		displayName = "Osprey";
	};
};
*/

	class CFP_Osprey1_Wd: V_PlateCarrier1_rgr
	{
		scope = 2;
		displayName = "Osprey Mk2 (Woodland)";
		picture = "\x\cfp\addons\vests\OspreyMk2\ui\icon_v_mk2_empty_wd.paa";
		model = "\x\cfp\addons\models\Mk2_Empty_Vest";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\OspreyMk2\mk2_empty_m81.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\Mk2_Empty_Vest";
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



