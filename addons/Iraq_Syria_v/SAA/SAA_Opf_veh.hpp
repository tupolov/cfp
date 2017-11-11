// Motorized

// Urals

class cfp_o_saa_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 0; 
	displayName = "SAA Ural"; 
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_Ural.jpg";
};

class cfp_o_saa_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
{
	scope = 2;
	side = 0; 
	displayName = "SAA Ural ZU23"; 
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_Ural_ZU23.jpg";
};

// BTR 40

class cfp_o_saa_BTR40_MG : CUP_O_BTR40_MG_TKA
{
	scope = 2;
	side = 0; 
	displayName = "SAA BTR40 MG"; 
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_BTR40.jpg";
};

	
// BMPs - Mechanized section
	
class cfp_o_saa_BTR60 : CUP_O_BTR60_TK
{
	scope = 2;
	side = 0; 
	displayName = "SAA BTR60";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_BTR60.jpg";
};

class cfp_o_saa_BMP1 : CUP_O_BMP1_TKA
{
	scope = 2;
	side = 0; 
	displayName = "SAA BMP-1";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_BMP1.jpg";
};

class cfp_o_saa_BMP1P : CUP_O_BMP1P_TKA
{
	scope = 2;
	side = 0; 
	displayName = "SAA BMP-1P";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_BMP1P.jpg";
};

class cfp_o_saa_BMP2 : CUP_O_BMP2_TKA
{
	scope = 2;
	side = 0; 
	displayName = "SAA BMP-2";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_BMP2.jpg";
};

// Tanks - Armored section

class cfp_o_saa_T55 : CUP_O_T55_CSAT
{
	scope = 2;
	side = 0; 
	displayName = "SAA T55";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_ARMORED";
	camouflage = 4;
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_T55_desert.jpg";
};

class cfp_o_saa_T72 : CUP_O_T72_TKA
{
	scope = 2;
	side = 0; 
	displayName = "SAA T72";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_ARMORED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_T72_tan.jpg";
};


class cfp_o_saa_ZSU : CUP_O_ZSU23_SLA
{
	scope = 2;
	side = 0; 
	displayName = "SAA ZSU";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_ARMORED";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman","cfp_o_saa_crewman","cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	
};

// ***** Aircraft *****

// Fixed Wing

class cfp_o_saa_L39_AA : I_Plane_Fighter_03_AA_F
{
	scope = 2;
	side = 0; 
	displayName = "SAA L-39 AntiAir";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_AIR";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_L39_AA.jpg";
};

class cfp_o_saa_L39_CAS : I_Plane_Fighter_03_CAS_F
{
	scope = 2;
	side = 0; 
	displayName = "SAA L-39 CAS";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_AIR";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\SAA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_L39_CAS.jpg";
};



class cfp_o_saa_yak130 : O_Plane_CAS_02_F
{
	scope = 2;
	side = 0; 
	displayName = "SAA Yak-130";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_AIR";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman"}; 
	hiddenSelectionsTextures[]=
	{
		"\CFP_Iraq_Syria_v\textures\Yak130\01.paa",
		"\CFP_Iraq_Syria_v\textures\Yak130\02.paa"
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_SAA_Yak130.jpg";
};

class cfp_o_saa_SU25 : CUP_O_Su25_Dyn_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA SU25";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_AIR";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman"}; 
	hiddenSelectionsTextures[]=
	{
		"\CFP_Iraq_Syria_v\textures\SU25\su25_body1_saa.paa",
		"\CFP_Iraq_Syria_v\textures\SU25\su25_body2_saa.paa"
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_saa_su25.jpg";
};

// Static weapons

class cfp_o_saa_ZU23 : CUP_O_ZU23_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA ZU23";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_crewman";          
	typicalCargo[] = {"cfp_o_saa_crewman"}; 
};
class cfp_o_saa_DSHKM : CUP_O_DSHKM_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "SAA DSHKM";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "SAA DSHkM Mini TriPod";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_KORD : CUP_O_KORD_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA KORD";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};

class cfp_o_saa_KORD_high : CUP_O_KORD_high_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA KORD High";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_AGS : CUP_O_AGS_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA AGS";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};

class cfp_o_saa_Metis : CUP_O_Metis_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA Metis";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_SPG9 : CUP_O_SPG9_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "SAA SPG9";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};

class cfp_o_saa_2b14_82mm : CUP_O_2b14_82mm_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA 2b14 82mm";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_D30 : CUP_O_D30_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA D30";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
class cfp_o_saa_D30_AT : CUP_O_D30_AT_RU
{
	scope = 2;
	side = 0; 
	displayName = "SAA D30 AT";
	faction = CFP_O_SAA; 
	vehicleClass = "CFP_O_SAA_STATIC";
	camouflage = 4;	
	crew = "cfp_o_saa_rifleman";          
	typicalCargo[] = {"cfp_o_saa_rifleman"}; 
};
