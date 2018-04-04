

/*AssaultMolle1


class CfgVehicleClasses
{
	class CFP_Molle
	{
		displayName = "Molle";
	};
};

*/

	class SP_AssaultMolle1_Black: V_PlateCarrier1_rgr
{
    picture = "\x\cfp\addons\vests\data\ui\icon_SP_AssaultMolle1_Black.paa";
		scope = 2;
		displayName = "Assault Molle 1 (Black)";
		// picture = "\x\cfp\addons\vests\AssaultMolle1\ui\Black.jpg";
		model = "\x\cfp\addons\models\AssaultMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\AssaultMolle1\Black.paa"};
		hiddenSelections[] = {"Camo"};


		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\AssaultMolle1";
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

	class SP_AssaultMolle1_Green: V_PlateCarrier1_rgr
{
    picture = "\x\cfp\addons\vests\data\ui\icon_SP_AssaultMolle1_Green.paa";
		scope = 2;
		displayName = "Assault Molle 1 (Green)";
		// picture = "\x\cfp\addons\vests\AssaultMolle1\ui\Green.jpg";
		model = "\x\cfp\addons\models\AssaultMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\AssaultMolle1\Green.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\AssaultMolle1";
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

	class SP_AssaultMolle1_Tan: V_PlateCarrier1_rgr
{
    picture = "\x\cfp\addons\vests\data\ui\icon_SP_AssaultMolle1_Tan.paa";
		scope = 2;
		displayName = "Assault Molle 1 (Tan)";
		// picture = "\x\cfp\addons\vests\AssaultMolle1\ui\Tan.jpg";
		model = "\x\cfp\addons\models\AssaultMolle1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vests\AssaultMolle1\Tan.paa"};
		hiddenSelections[] = {"Camo"};



		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\AssaultMolle1";
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
