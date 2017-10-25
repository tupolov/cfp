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
	class CFP_0000_Standard_PulloverUniform
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};





class CfgVehicleClasses
{
	class SP_0000_Standard_PulloverUniform
	{
		displayName = "SP Standard Pullover Uniform";

		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	


	
	class SP_0000_Standard_PulloverUniform_Black: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Black)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Black";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Black.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};




		};
	};


	class SP_0000_Standard_PulloverUniform_Green: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Green)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Green";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


			
		};
	};


	class SP_0000_Standard_PulloverUniform_Tan: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Tan)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Tan";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};


	class SP_0000_Standard_PulloverUniform_Grey: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Grey)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Grey";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Grey.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};





		};
	};


	class SP_0000_Standard_PulloverUniform_BlueDark: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Blue Dark)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_BlueDark";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\BlueDark.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



			
			
		};
	};


	class SP_0000_Standard_PulloverUniform_BlueFrost: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Blue Frost)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_BlueFrost";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\BlueFrost.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};




		};
	};


	class SP_0000_Standard_PulloverUniform_GreenOlive: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Green Olive)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_GreenOlive";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\GreenOlive.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};


	class SP_0000_Standard_PulloverUniform_Hunter: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Hunter)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Hunter";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Hunter.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_PulloverUniform_Hunter2: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Hunter2)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_Hunter2";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\Hunter2.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};


	class SP_0000_Standard_PulloverUniform_ATacsFG: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (A-Tacs FG)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_ATacsFG";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ATacsFG.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_PulloverUniform_NodUrban: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Pullover Uniform (Nod Urban)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_PulloverUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_PulloverUniform_NodUrban";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\PulloverUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\NodUrban.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};







			
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




	


	class SP_0000_Standard_PulloverUniform_Black: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Black (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Black.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Black";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_PulloverUniform_Green: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Green.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Green";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_PulloverUniform_Tan: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Tan (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Tan.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Tan";
			containerClass="Supply60";
			mass=80;




		};
	};

	class SP_0000_Standard_PulloverUniform_Grey: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Grey (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Grey.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Grey";
			containerClass="Supply60";
			mass=80;




		};
	};

	class SP_0000_Standard_PulloverUniform_BlueDark: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Dark (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\BlueDark.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_BlueDark";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_PulloverUniform_BlueFrost: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Frost (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\BlueFrost.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_BlueFrost";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_PulloverUniform_GreenOlive: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green Olive (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\GreenOlive.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_GreenOlive";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_PulloverUniform_Hunter: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Hunter.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Hunter";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_PulloverUniform_Hunter2: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\Hunter2.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_Hunter2";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_PulloverUniform_ATacsFG: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\ATacsFG.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_ATacsFG";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_PulloverUniform_NodUrban: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Nod Urban (Pullover Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\PulloverUniform\0000_Standard\ui\NodUrban.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_PulloverUniform_NodUrban";
			containerClass="Supply60";
			mass=80;





		};
	};
};
};
//};
