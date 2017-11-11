//   ***** Motorized  *****

// Offroads
	
class cfp_i_alNusra_offroad : Offroad_01_base_F
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra Offroad"; 
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_an_01.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_an_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_Offroad.jpg";
};

class cfp_i_alNusra_offroad_M2 : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra Offroad MG"; 
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_an_02.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_an_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_Offroad_MG.jpg";
};

// Pickup

class cfp_i_alNusra_pickup_PK : CUP_I_Datsun_PK_TK_Random
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra Pickup PK"; // In-game name of unit
	faction = CFP_I_alNusra; // Puts unit under new faction
	vehicleClass = "CFP_I_alNusra_MOTORIZED"; // Puts unit in the vehicleclass
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";         
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};        
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
};

// Land Rovers
class cfp_i_alNusra_LR_M2 : CUP_O_LR_MG_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra L.R. M2"; 
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};  
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_LR_MG.jpg";
};

class cfp_i_alNusra_LR_SPG9 : CUP_O_LR_SPG9_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra L.R. SPG9";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_LR_SPG.jpg";
};

class cfp_i_alNusra_LR_Unarmed : CUP_O_LR_Transport_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra L.R.";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_LR.jpg";
};

// UAZs

class cfp_i_alNusra_UAZ_MG : CUP_O_UAZ_MG_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ MG";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_UAZ_MG.jpg";
};

class cfp_i_alNusra_UAZ_AGS30 : CUP_B_UAZ_AGS30_CDF
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ AGS30";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_UAZ_AGS.jpg";
};

class cfp_i_alNusra_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ SPG9";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_UAZ_SPG.jpg";
};

class cfp_i_alNusra_UAZ_METIS : CUP_O_UAZ_METIS_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ METIS";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
};

class cfp_i_alNusra_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_UAZ.jpg";
};

class cfp_i_alNusra_UAZ_Open : CUP_O_UAZ_Open_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra UAZ Open";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
};
	
// Urals

class cfp_i_alNusra_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra Ural";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_Ural.jpg";
};

class cfp_i_alNusra_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra Ural ZU23";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"};  
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_Ural_ZU23.jpg";
};
	
// BMPs - Mechanized section
	
class cfp_i_alNusra_BMP1 : CUP_O_BMP1_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra BMP-1";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_BMP1.jpg";
};

class cfp_i_alNusra_BMP1P : CUP_O_BMP1P_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra BMP-1P";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_BMP1P.jpg";
};

// Tanks - Armored section
	
class cfp_i_alNusra_T34 : CUP_O_T34_TKA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra T34";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_ARMORED";
	camouflage = 4;
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_T34.jpg";
};

class cfp_i_alNusra_T55 : CUP_O_T55_CSAT
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra T55";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_ARMORED";
	camouflage = 4;
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_T55.jpg";
};

class cfp_i_alNusra_ZSU : CUP_O_ZSU23_SLA
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra ZSU";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_ARMORED";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman","cfp_i_alNusra_crewman","cfp_i_alNusra_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\alNusra\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_alNusra_ZSU.jpg";
};
	
// Static weapons
	
class cfp_i_alNusra_ZU23 : CUP_O_ZU23_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra ZU23";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_crewman";          
	typicalCargo[] = {"cfp_i_alNusra_crewman"}; 
};
class cfp_i_alNusra_DSHKM : CUP_O_DSHKM_TK_INS
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra DSHKM";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};
class cfp_i_alNusra_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra DSHkM Mini TriPod";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};
class cfp_i_alNusra_KORD : CUP_O_KORD_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra KORD";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};
class cfp_i_alNusra_KORD_high : CUP_O_KORD_high_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra KORD High";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};
class cfp_i_alNusra_AGS : CUP_O_AGS_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra AGS";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};

class cfp_i_alNusra_SPG9 : CUP_O_SPG9_TK_INS
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra SPG9";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};

class cfp_i_alNusra_2b14_82mm : CUP_O_2b14_82mm_RU
{
	scope = 2;
	side = 2; 
	displayName = "al-Nusra 2b14 82mm";
	faction = CFP_I_alNusra; 
	vehicleClass = "CFP_I_alNusra_STATIC";
	camouflage = 4;	
	crew = "cfp_i_alNusra_rifleman";          
	typicalCargo[] = {"cfp_i_alNusra_rifleman"}; 
};