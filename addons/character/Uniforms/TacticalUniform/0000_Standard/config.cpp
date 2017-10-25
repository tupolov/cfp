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
	class CFP_0000_Standard_TacticalUniform
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};





class CfgVehicleClasses
{
	class SP_0000_Standard_TacticalUniform
	{
		displayName = "SP Standard Tactical Uniform";

		
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	


	
	class SP_0000_Standard_TacticalUniform_Black: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Black)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Black";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Black.paa"};
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};

	class SP_0000_Standard_TacticalUniform_Black_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Black)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Black_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Black.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};

	class SP_0000_Standard_TacticalUniform_Black_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Black)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Black_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Black.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Black.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};


	class SP_0000_Standard_TacticalUniform_Green: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Green)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Green";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Green_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Green)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Green_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_Green_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Green)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Green_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Green.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			
			
			

		};
	};


	class SP_0000_Standard_TacticalUniform_Tan: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Tan)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Tan";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Tan_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Tan)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Tan_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Tan_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Tan)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Tan_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Tan.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Tan.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};



		};
	};


	class SP_0000_Standard_TacticalUniform_Grey: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Grey)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Grey";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Grey.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Grey_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Grey)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Grey_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Grey.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_Grey_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Grey)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Grey_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Grey.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Grey.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};





		};
	};


	class SP_0000_Standard_TacticalUniform_BlueDark: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Blue Dark)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueDark.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_BlueDark_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Blue Dark)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueDark.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_BlueDark_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Blue Dark)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueDark.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\BlueDark.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
			
			
			
		};
	};


	class SP_0000_Standard_TacticalUniform_BlueFrost: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Blue Frost)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueFrost.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_BlueFrost_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Blue Frost)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueFrost.paa"};   
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_BlueFrost_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Blue Frost)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\BlueFrost.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\BlueFrost.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_GreenOlive: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Green Olive)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\GreenOlive.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_GreenOlive_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Green Olive)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\GreenOlive.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_GreenOlive_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Green Olive)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\GreenOlive.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\GreenOlive.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Hunter)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Hunter)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Hunter)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Brown.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter2: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Hunter2)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter2.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter2_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Hunter2)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter2.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_Hunter2_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Hunter2)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\Hunter2.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_ATacsFG: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (A-Tacs FG)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ATacsFG.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_ATacsFG_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (A-Tacs FG)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ATacsFG.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_ATacsFG_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (A-Tacs FG)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ATacsFG.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Green.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};


		};
	};


	class SP_0000_Standard_TacticalUniform_NodUrban: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform (Nod Urban)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\NodUrban.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_NodUrban_SS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform SS (Nod Urban)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban_SS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform2.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\NodUrban.paa"};  
		hiddenSelections[] = {"Camo", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};

		};
	};


	class SP_0000_Standard_TacticalUniform_NodUrban_TS: B_Soldier_base_F
	{
		
		scope = 1;
		displayName = "Tactical Uniform TS (Nod Urban)";
		faction = "BLU_F";
        modelSides[] = {6};
		vehicleClass = "SP_0000_Standard_TacticalUniform";
		canCarryBackPack=1;
		canDeactivateMines=1;
		engineer=1; 
		attendant = "true";
		uniformAccessories[] = {};
		uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban_TS";
		nakedUniform = "U_BasicBody";
		model = "\x\cfp\addons\character\Models\TacticalUniform3.p3d";
		Items[] = {};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\NodUrban.paa","\x\cfp\addons\character\Uniforms\Underwear\0000_Standard\Black.paa"};   
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};






			
			
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




	


	class SP_0000_Standard_TacticalUniform_Black: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Black (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Black.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Black";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Black_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Black (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Black.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Black_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Black_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Black (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlackTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Black_TS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Green: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Green.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Green";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Green_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Green.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Green_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Green_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\GreenTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Green_TS";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_TacticalUniform_Tan: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Tan (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Tan.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Tan";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Tan_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Tan (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Tan.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Tan_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Tan_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Tan (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\TanTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Tan_TS";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_TacticalUniform_Grey: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Grey (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Grey.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Grey";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Grey_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Grey (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Grey.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Grey_SS";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_TacticalUniform_Grey_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Grey (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\GreyTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Grey_TS";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_TacticalUniform_BlueDark: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Dark (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueDark.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_BlueDark_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Dark (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueDark.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_BlueDark_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Dark (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueDarkTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueDark_TS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_BlueFrost: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Frost (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueFrost.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_BlueFrost_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Frost (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueFrost.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_BlueFrost_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Blue Frost (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\BlueFrostTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_BlueFrost_TS";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_TacticalUniform_GreenOlive: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green Olive (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\GreenOlive.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_GreenOlive_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green Olive (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\GreenOlive.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_GreenOlive_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Green Olive (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\GreenOliveTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_GreenOlive_TS";
			containerClass="Supply60";
			mass=80;


		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Hunter.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Hunter.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\HunterTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter_TS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter2: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Hunter2.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter2_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Hunter2.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_Hunter2_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Hunter2 (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\Hunter2TS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_Hunter2_TS";
			containerClass="Supply60";
			mass=80;



		};
	};

	class SP_0000_Standard_TacticalUniform_ATacsFG: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\ATacsFG.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_ATacsFG_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\ATacsFG.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_ATacsFG_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard A-Tacs FG (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\ATacsFGTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_ATacsFG_TS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_NodUrban: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard NodUrban (Tactical Uniform)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\NodUrban.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_NodUrban_SS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Nod Urban (Tactical Uniform SS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\NodUrban.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban_SS";
			containerClass="Supply60";
			mass=80;

		};
	};

	class SP_0000_Standard_TacticalUniform_NodUrban_TS: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\character\Models\Suitpack";
		displayName = "Standard Nod Urban (Tactical Uniform TS)";
		picture = "\x\cfp\addons\character\Uniforms\TacticalUniform\0000_Standard\ui\NodUrbanTS.jpg";
		author = "SP Craig";
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SP_0000_Standard_TacticalUniform_NodUrban_TS";
			containerClass="Supply60";
			mass=80;





		};
	};
};
};
//};
