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
	class CFP_0000_Standard_Coverall
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
		icon = "\x\cfp\addons\common_character\Uniforms\Icon\Icon.jpg";

	};
};


class CfgVehicleClasses
{
	class SP_0000_Standard_Coverall
	{
		displayName = "SP Standard Coverall";

		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	


	
	class SP_0000_Standard_Coverall_Black: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Black)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Black";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Black.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};




		};
	};


	class SP_0000_Standard_Coverall_Green: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Green)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Green";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};

			

		};
	};


	class SP_0000_Standard_Coverall_Tan: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Tan)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Tan";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};


		};
	};


	class SP_0000_Standard_Coverall_Grey: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Grey)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Grey";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Grey.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};



		};
	};


	class SP_0000_Standard_Coverall_BlueDark: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Blue Dark)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_BlueDark";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\BlueDark.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};



		};
	};


	class SP_0000_Standard_Coverall_BlueFrost: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Blue Frost)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_BlueFrost";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\BlueFrost.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};



		};
	};


	class SP_0000_Standard_Coverall_GreenOlive: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Green Olive)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_GreenOlive";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\GreenOlive.paa"};  
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};

		};
	};


	class SP_0000_Standard_Coverall_White: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (White)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_White";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\White.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};


		};
	};


	class SP_0000_Standard_Coverall_Red: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Red)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Red";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Red.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};


		};
	};


	class SP_0000_Standard_Coverall_Yellow: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Yellow)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Yellow";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Yellow.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};

		};
	};


	class SP_0000_Standard_Coverall_Brown: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Brown)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Brown";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Brown.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};

		};
	};


	class SP_0000_Standard_Coverall_Orange: B_Soldier_base_F
	{
		
		scope = 2;
		displayName = "Coverall (Orange)";
		faction = "CFP_TEST";
		vehicleClass = "SP_0000_Standard_Coverall";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_Coverall_Orange";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\common_character\Models\Coverall.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\Orange.paa"};   
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[]={"x\cfp\addons\common_character\Models\rv\Coverall_w1mc.paa" , "x\cfp\addons\common_character\Models\rv\Coverall_w2mc.paa"};
			mat[]={"x\cfp\addons\common_character\Models\rv\Coverall.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w1.rvmat" , "x\cfp\addons\common_character\Models\rv\Coverall_w2.rvmat"};


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




	


	class SP_0000_Standard_Coverall_Black: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Black)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Black.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Black";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_Coverall_Green: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Green)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Green.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Green";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_Coverall_Tan: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Tan)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Tan.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Tan";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_Coverall_Grey: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Grey)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Grey.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Grey";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_Coverall_BlueDark: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Blue Dark)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\BlueDark.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_BlueDark";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_Coverall_BlueFrost: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Blue Frost)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\BlueFrost.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_BlueFrost";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_Coverall_GreenOlive: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Green Olive)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\GreenOlive.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_GreenOlive";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_Coverall_White: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (White)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\White.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_White";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_Coverall_Red: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Red)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Red.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Red";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_Coverall_Yellow: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Yellow)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Yellow.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Yellow";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_Coverall_Brown: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Brown)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Brown.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Brown";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_Coverall_Orange: Uniform_Base
	{
		scope=1;
		model = "\x\cfp\addons\common_character\Models\Suitpack";
		displayName = "Coverall Standard (Orange)";
		picture = "\x\cfp\addons\common_character\Uniforms\Coverall\0000_Standard\ui\Orange.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_Coverall_Orange";
			containerClass="Supply60";
			mass=80;




		};
	};
};
};
//};
