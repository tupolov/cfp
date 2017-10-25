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
	class CFP_0000_Standard_WorkUniform
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};


class CfgVehicleClasses
{
	class SP_0000_Standard_WorkUniform
	{
		displayName = "SP Standard Work Uniform";
		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	
	class SP_0000_Standard_WorkUniform_Hunter: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Work Uniform (Hunter)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_WorkUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_WorkUniform_Hunter";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\WorkUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\Hunter.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};

		};
	};

	class SP_0000_Standard_WorkUniform_ATacsFG: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Work Uniform (A-Tacs FG)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_WorkUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_WorkUniform_ATacsFG";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\WorkUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\ATacsFG.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};

		};
	};

	class SP_0000_Standard_WorkUniform_NodUrban: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Work Uniform (Nod Urban)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_WorkUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_WorkUniform_NodUrban";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\WorkUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\NodUrban.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};

		};
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadGearItem;
	class V_PlateCarrier1_rgr;
	class VestItem;

	class SP_0000_Standard_WorkUniform_Hunter: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Work Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\ui\Hunter.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_WorkUniform_Hunter";
			containerClass="Supply60";
			mass=80;

		};
	};
	class SP_0000_Standard_WorkUniform_Hunter2: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Work Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\ui\Hunter2.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_WorkUniform_Hunter2";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_WorkUniform_ATacsFG: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Work Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\ui\ATacsFG.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_WorkUniform_ATacsFG";
			containerClass="Supply60";
			mass=80;
		};
	};

	class SP_0000_Standard_WorkUniform_NodUrban: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Nod Urban (Work Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\WorkUniform\0000_Standard\ui\NodUrban.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_WorkUniform_NodUrban";
			containerClass="Supply60";
			mass=80;


		};
	};
};

