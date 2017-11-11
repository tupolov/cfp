	class cfp_b_ip_officer : I_Soldier_A_F
	{
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "Iraqi Police Officer"; 
		faction = "CFP_B_IP";
		modelsides[] = {1,2};
		side = 1;
		vehicleClass = "CFP_B_IP_INFANTRY"; 
		icon = "iconManOfficer"; 
		nakedUniform = "U_BasicBody";  
		uniformClass = "IP_uniform_officer_b";  
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IP_digital_flag.paa"};
		camouflage = 1;	
		backpack = ""; 
		headgearProbability = 50;
        allowedHeadgear[] = {"H_PASGT_basic_blue_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 50;
		beardProbability = 50;
		linkedItems[] = {"SP_OpforRig1_Grey", "ItemMap", "ItemCompass", "ItemWatch",  "ItemRadio"};
		respawnLinkedItems[] = {"SP_OpforRig1_Grey", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"}; 
		respawnweapons[] = {"CUP_arifle_AK47","Binocular","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
		
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\CFP_Iraq_Syria\IP\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\IP\script\randomize_weapon.sqf""";
		};
		editorPreview = "CFP_Iraq_Syria\Previews\Preview_ip_infantry.jpg";
	
	};

	class cfp_b_ip_policeman : I_Soldier_A_F
	{
		modelSides[] = {0,1,2,3};
		side = 1;
		genericnames = "TakistaniMen";
		scope = 2;
		scopeCurator = 2;
		displayName = "Iraqi Policeman"; 
		faction = "CFP_B_IP"; 
		vehicleClass = "CFP_B_IP_INFANTRY"; 
		icon = "iconMan"; 
		nakedUniform = "U_BasicBody";  
		uniformClass = "IP_uniform_policeman_b";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Uniforms\IP_dpm_flag.paa"};
		camouflage = 1;	
		backpack = ""; 
		headgearProbability = 30;
        allowedHeadgear[] = {"H_PASGT_basic_blue_F"};
		allowedHeadgearB[] = {""};
		facewear = "";
		allowedfacewear[] = {""};
		randomWeaponProbability = 100;
		linkedItems[] = {"SP_OpforRig1_Grey", "ItemRadio"};  
		respawnLinkedItems[] = {"SP_OpforRig1_Grey", "ItemRadio"};
		weapons[] = {"CUP_arifle_AK47","Throw","Put"}; 
		respawnweapons[] = {"CUP_arifle_AK47","Throw","Put"};
		magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		Respawnmagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
		identityTypes[] = {"NoGlasses", "LanguagePER_F", "Head_TK", "G_IRAN_default"};
		
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\CFP_Iraq_Syria\IP\script\randomize_gear.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria\IP\script\randomize_weapon.sqf""";
		};
		editorPreview = "CFP_Iraq_Syria\Previews\Preview_ip_infantry.jpg";
		
	};
	