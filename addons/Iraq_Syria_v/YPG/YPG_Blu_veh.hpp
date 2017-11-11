// Motorized 

// Offroads

class cfp_b_ypg_offroad : Offroad_01_base_F
{
	scope = 2;
	side = 1; 
	displayName = "YPG Offroad"; 
	faction = CFP_B_YPG; 
	vehicleClass = "YPG_motorized_b"; 
	camouflage = 4;	
	crew = "cfp_b_ypg_crewman";          
	typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ypg_white.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_YPG_Offroad.jpg";
};

class cfp_b_ypg_offroad_flag : cfp_b_ypg_offroad
{
	scope = 2;
	side = 1; 
	displayName = "YPG Offroad (Flag)"; 
	faction = CFP_B_YPG; 
	vehicleClass = "YPG_motorized_b"; 
	camouflage = 4;	
	crew = "cfp_b_ypg_crewman";          
	typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ypg_white.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_YPG_Offroad_flag.jpg";
};

class cfp_b_ypg_offroad_M2 : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 1; 
	displayName = "YPG Offroad MG"; 
	faction = CFP_B_YPG; 
	vehicleClass = "YPG_motorized_b"; 
	camouflage = 4;	
	crew = "cfp_b_ypg_crewman";          
	typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ypg_white.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_YPG_Offroad_M2.jpg";
};

class cfp_b_ypg_offroad_M2_flag : cfp_b_ypg_offroad_M2 
{
	scope = 2;
	side = 1; 
	displayName = "YPG Offroad MG (Flag)"; 
	faction = CFP_B_YPG; 
	vehicleClass = "YPG_motorized_b"; 
	camouflage = 4;	
	crew = "cfp_b_ypg_crewman";          
	typicalCargo[] = {"cfp_b_ypg_crewman","cfp_b_ypg_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ypg_white.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\AttachFlag.sqf""";
		killed = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\YPG\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_YPG_Offroad_M2_flag.jpg";
};
