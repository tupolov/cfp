// --Motorized section--

// Offroads

class cfp_b_pesh_offroad : Offroad_01_base_F
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga Offroad"; 
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_01.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_Offroad.jpg";
};
		
class cfp_b_pesh_offroad_M2 : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga Offroad MG"; 
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_02.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_Offroad_M2.jpg";
};

// Hummers

class cfp_b_pesh_HMMWV_M2 : CUP_B_HMMWV_M2_USA
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga HMMWV M2"; 
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_HMMWV.jpg";
};

// Urals

class cfp_b_pesh_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga Ural"; 
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_Ural.jpg";
};

class cfp_b_pesh_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga Ural ZU23"; 
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_Ural_ZU23.jpg";
};
	
// --Mechanized section--

// BRDMs

class cfp_b_pesh_BRDM : CUP_O_BRDM2_TKA
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga BRDM";
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	hiddenSelections[] = {"camo1"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_1.paa"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_BRDM.jpg";
};

// BTRs

class cfp_b_pesh_BTR60 : CUP_O_BTR60_TK
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga BTR60";
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_BTR60.jpg";
};
	
// BMPs

class cfp_b_pesh_BMP1 : CUP_O_BMP1_TKA
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga BMP-1";
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_BMP1.jpg";
};

class cfp_b_pesh_BMP2 : CUP_O_BMP2_TKA
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga BMP-2";
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_BMP2.jpg";
};
	
// --Armor--

class cfp_b_pesh_ZSU : CUP_O_ZSU23_SLA
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga ZSU";
	faction = CFP_B_PESH; 
	vehicleClass = "CFP_B_PESH_ARMORED";
	camouflage = 4;	
	crew = "cfp_b_pesh_crewman";          
	typicalCargo[] = {"cfp_b_pesh_crewman","cfp_b_pesh_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\Peshmerga\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_Peshmerga_ZSU.jpg";
};
	
// *****  Static Weapons  *****

class cfp_b_pesh_2b14 : CUP_O_2b14_82mm_RU
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga 2b14";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
};

class cfp_b_pesh_Metis : CUP_O_Metis_RU
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga Metis";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
};

class cfp_b_pesh_ags30 : CUP_O_AGS_RU
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga AGS30";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
};

class cfp_b_pesh_dshkm : CUP_O_DSHKM_TK_INS
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga DSHKM";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
	editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_cdf_DSHKM.paa";
};

class cfp_b_pesh_dshkm_minitripod : CUP_O_DSHkM_MiniTriPod_TK_INS
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga DSHKM (Minitripod)";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
	editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_cdf_DSHKM_Mini_TriPod.paa";
};


class cfp_b_pesh_zu23 : CUP_O_ZU23_RU
{
	scope = 2;
	side = 1; 
	displayName = "Peshmerga ZU23";
	faction = CFP_B_PESH; 
	vehicleClass = "PESH_static_b";
	camouflage = 4;	
	crew = "cfp_b_pesh_rifleman";          
	typicalCargo[] = {"cfp_b_pesh_rifleman"}; 
	editorPreview="rhsgref\addons\rhsgref_editorPreviews\data\rhsgref_cdf_ZU23.paa";
};