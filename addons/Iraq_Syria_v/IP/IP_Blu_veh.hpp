// Motorized 

// Offroads

class cfp_b_ip_offroad : Offroad_01_base_F
{
	scope = 2;
	side = 1; 
	displayName = "IP Offroad"; 
	faction = CFP_B_IP; 
	vehicleClass = "CFP_B_IP_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ip_policeman";          
	typicalCargo[] = {"cfp_b_ip_policeman","cfp_b_ip_policeman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_03.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IP\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IP_Offroad.jpg";
};
		
class cfp_b_ip_offroad_M2 : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 1; 
	displayName = "IP Offroad MG"; 
	faction = CFP_B_IP; 
	vehicleClass = "CFP_B_IP_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ip_policeman";          
	typicalCargo[] = {"cfp_b_ip_policeman","cfp_b_ip_policeman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_05.paa",
	"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IP\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IP_Offroad_MG.jpg";
};

// HMMWV

class cfp_b_ip_HMMWV_M2 : CUP_B_HMMWV_M2_USA
{
	scope = 2;
	side = 1; 
	displayName = "IP HMMWV M2"; 
	faction = CFP_B_IP; 
	vehicleClass = "CFP_B_IP_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ip_policeman";          
	typicalCargo[] = {"cfp_b_ip_policeman","cfp_b_ip_policeman"}; 

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IP\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IP_HMMWV.jpg";	
};

class cfp_b_ip_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR
{
	scope = 2;
	side = 1; 
	displayName = "IA HMMWV GPK DShKM";
	faction = CFP_B_IP;
	vehicleClass = "CFP_B_IP_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ip_policeman";          
    typicalCargo[] = {"cfp_b_ip_policeman","cfp_b_ip_policeman"}; 

};
	
// Urals

class cfp_b_ip_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 1; 
	displayName = "IP Ural"; 
	faction = CFP_B_IP; 
	vehicleClass = "CFP_B_IP_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ip_policeman";          
	typicalCargo[] = {"cfp_b_ip_policeman","cfp_b_ip_policeman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IP\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_Ural.jpg";	
};
