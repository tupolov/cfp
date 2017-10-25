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
	class CFP_0000_Standard_BattleDressUniform
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};


class CfgFactionClasses {
	class CFP_TEST {
		displayName = "CFP TEST";
		priority = 100;
		side = 1;
		icon = "\x\cfp\addons\character\Uniforms\Icon\Icon.jpg";

	};
};


class CfgVehicleClasses
{
	class SP_0000_Standard_BattleDressUniform
	{
		displayName = "SP Standard Battle Dress Uniform";

		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	


	
	class SP_0000_Standard_BattleDressUniform_Black: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Black)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Black";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Black.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Black.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};




		};
	};


	class SP_0000_Standard_BattleDressUniform_Green: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Green)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Green";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Green.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};



		};
	};


	class SP_0000_Standard_BattleDressUniform_Tan: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Tan)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Tan";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Tan.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


		};
	};


	class SP_0000_Standard_BattleDressUniform_Grey: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Grey)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Grey";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Grey.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Grey.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};



		};
	};


	class SP_0000_Standard_BattleDressUniform_BlueDark: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Blue Dark)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_BlueDark";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\BlueDark.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\BlueDark.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};



		};
	};


	class SP_0000_Standard_BattleDressUniform_BlueFrost: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Blue Frost)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_BlueFrost";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\BlueFrost.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\BlueFrost.paa"};
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


		};
	};


	class SP_0000_Standard_BattleDressUniform_GreenOlive: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Green Olive)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_GreenOlive";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\GreenOlive.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\GreenOlive.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};

		};
	};


	class SP_0000_Standard_BattleDressUniform_Hunter: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Hunter)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Hunter.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Hunter.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


		};
	};


	class SP_0000_Standard_BattleDressUniform_Hunter2: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Hunter2)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter2";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\Hunter2.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\Hunter2.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


		};
	};


	class SP_0000_Standard_BattleDressUniform_ATacsFG: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (A-Tacs FG)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_ATacsFG";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ATacsFG.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\ATacsFG.paa"};  
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


		};
	};


	class SP_0000_Standard_BattleDressUniform_NodUrban: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Battle Dress Uniform (Nod Urban)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_BattleDressUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_BattleDressUniform_NodUrban";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\BattleDressUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\NodUrban.paa","\x\cfp\addons\character\Uniforms\FieldUniform\0000_Standard\NodUrban.paa"};
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};


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




	


	class SP_0000_Standard_BattleDressUniform_Black: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Black (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Black.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Black";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_Green: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Green.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Green";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_BattleDressUniform_Tan: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Tan (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Tan.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Tan";
			containerClass="Supply60";
			mass=80;




		};
	};

	class SP_0000_Standard_BattleDressUniform_Grey: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Grey (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Grey.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Grey";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_BlueDark: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Dark (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\BlueDark.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_BlueDark";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_BlueFrost: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Frost (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\BlueFrost.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_BlueFrost";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_GreenOlive: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green Olive (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\GreenOlive.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_GreenOlive";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_Hunter: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Hunter.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_Hunter2: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\Hunter2.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_Hunter2";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_BattleDressUniform_ATacsFG: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\ATacsFG.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_ATacsFG";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_BattleDressUniform_NodUrban: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Nod Urban (Battle Dress Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\BattleDressUniform\0000_Standard\ui\NodUrban.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_BattleDressUniform_NodUrban";
			containerClass="Supply60";
			mass=80;




		};
	};
};
};
//};
