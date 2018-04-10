

/*IOTV

class CfgVehicleClasses
{
	class CFP_IOTV
	{
		displayName = "IOTV Vest";
	};
};
*/

	class CUP_Vest_Camo_Base;

	class CFP_IOTV_Rifleman: CUP_Vest_Camo_Base
	{
	    picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_v_modular_tactical_vest_patrol_ca.paa";
		scope = 2;
		displayName = "IOTV (Rifleman)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_v_modular_tactical_vest_patrol_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\cup_v_iotv_rifle.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\IOTV\tex1_cfp.paa","\x\cfp\addons\vests\IOTV\tex2_cfp.paa"};
		hiddenSelections[] = {"camo","camo1"};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\cup_v_iotv_rifle.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo","camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 16;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 16;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};

		};
	};

