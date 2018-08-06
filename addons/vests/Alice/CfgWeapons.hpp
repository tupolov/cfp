

/*Alice

class CfgVehicleClasses
{
	class CFP_Smersh
	{
		displayName = "Alice Vest";
	};
};
*/

	class CFP_Alice_Vest: V_PlateCarrier1_rgr
	{
	    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_Smersh_Brown.paa";
		scope = 2;
		displayName = "Alice Vest";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\x\cfp\addons\vests\Alice\alice_sample.p3d";
		hiddenSelectionsTextures[] = {""};
		hiddenSelections[] = {""};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vests\Alice\alice_sample.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {""};
			mass = 100;
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

	class CFP_Alice_Vest2: V_PlateCarrier1_rgr
	{
	    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_Smersh_Brown.paa";
		scope = 2;
		displayName = "Alice Vest (Version 2)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Russia\data\ui\icon_v_smerch_1_ca.paa";
		model = "\x\cfp\addons\vests\Alice\alice_sample2.p3d";
		hiddenSelectionsTextures[] = {""};
		hiddenSelections[] = {""};
		author = "AuburnAlumni";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vests\Alice\alice_sample2.p3d";
			containerClass = "Supply140";
			hiddenSelections[] = {""};
			mass = 100;
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

