// Motorized 
	
// Hummers

class cfp_b_ia_HMMWV_M2 : CUP_B_HMMWV_M2_USA
{
	scope = 2;
	side = 1; 
	displayName = "IA HMMWV M2"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_HMMWV.jpg";	
};
	
class cfp_b_ia_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR
{
	scope = 2;
	side = 1; 
	displayName = "IA HMMWV GPK DShKM";
	faction = CFP_B_IA;
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
    typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 

};

class cfp_b_ia_hmmwv_m2_gpk : CUP_B_HMMWV_M2_GPK_ACR
{
	scope = 2;
	side = 1; 
	displayName = "IA HMMWV GPK M2";
	faction = CFP_B_IA;
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
    typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 

};
	
// Urals

class cfp_b_ia_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 1; 
	displayName = "IA Ural"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_Ural.jpg";	
};

class cfp_b_ia_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
{
	scope = 2;
	side = 1; 
	displayName = "IA Ural ZU23"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_Ural_ZU23.jpg";	
};
	
//-- MRAPS

class cfp_b_ia_mrap_rg31 : CUP_B_RG31_M2_USMC
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP RG31"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};
	
class cfp_b_ia_mrap_mastiff_hmg : CUP_B_Mastiff_HMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Mastiff HMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

class cfp_b_ia_mrap_mastiff_lmg : CUP_B_Mastiff_LMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Mastiff LMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

class cfp_b_ia_mrap_ridgback_hmg : CUP_B_Ridgback_HMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Ridgback HMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

class cfp_b_ia_mrap_ridgback_lmg : CUP_B_Ridgback_LMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Ridgback LMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

class cfp_b_ia_mrap_wolfhound_hmg : CUP_B_Wolfhound_HMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Wolfhound HMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

class cfp_b_ia_mrap_wolfhound_lmg : CUP_B_Wolfhound_LMG_GB_D
{	
	scope = 2;
	side = 1; 
	displayName = "IA MRAP Wolfhound LMG"; 
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
};

// -- Mechanized section --
	
class cfp_b_ia_BTR60 : CUP_O_BTR60_TK
{
	scope = 2;
	side = 1; 
	displayName = "IA BTR60";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_BTR60.jpg";	
};

// BMPs

class cfp_b_ia_BMP1 : CUP_O_BMP1_TKA
{
	scope = 2;
	side = 1; 
	displayName = "IA BMP-1";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_BMP1.jpg";	
};

class cfp_b_ia_BMP1P : CUP_O_BMP1P_TKA
{
	scope = 2;
	side = 1; 
	displayName = "IA BMP-1P";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_BMP1P.jpg";	
};

class cfp_b_ia_BMP2 : CUP_O_BMP2_TKA
{
	scope = 2;
	side = 1; 
	displayName = "IA BMP-2";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_BMP2.jpg";	
};

// Tanks - Armored section

class cfp_b_ia_T55 : CUP_O_T55_CSAT
{
	scope = 2;
	side = 1; 
	displayName = "IA T55";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_ARMORED";
	camouflage = 4;
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_T55.jpg";	
};

class cfp_b_ia_T72 : CUP_O_T72_TKA
{
	scope = 2;
	side = 1; 
	displayName = "IA T72";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_ARMORED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_T72.jpg";	
};

class cfp_b_ia_ZSU : CUP_O_ZSU23_SLA
{
	scope = 2;
	side = 1; 
	displayName = "IA ZSU";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_ARMORED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
};

// M1 Abrams

class cfp_b_ia_M1A1 : CUP_B_M1A1_DES_US_Army
{
	scope = 2;
	side = 1; 
	displayName = "IA M1A1";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_ARMORED";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman","cfp_b_ia_crewman"};

	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};		
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_M1A1.jpg";	
};

// Static weapons

class cfp_b_ia_ZU23 : CUP_O_ZU23_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA ZU23";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman"}; 
};
class cfp_b_ia_DSHKM : CUP_O_DSHKM_TK_INS
{
	scope = 2;
	side = 1; 
	displayName = "IA DSHKM";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS
{
	scope = 2;
	side = 1; 
	displayName = "IA DSHkM Mini TriPod";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_KORD : CUP_O_KORD_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA KORD";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};

class cfp_b_ia_KORD_high : CUP_O_KORD_high_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA KORD High";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_AGS : CUP_O_AGS_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA AGS";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};

class cfp_b_ia_Metis : CUP_O_Metis_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA Metis";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_SPG9 : CUP_O_SPG9_TK_INS
{
	scope = 2;
	side = 1; 
	displayName = "IA SPG9";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_2b14_82mm : CUP_O_2b14_82mm_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA 2b14 82mm";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_D30 : CUP_O_D30_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA D30";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};
class cfp_b_ia_D30_AT : CUP_O_D30_AT_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA D30 AT";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_STATIC";
	camouflage = 4;	
	crew = "cfp_b_ia_rifleman";          
	typicalCargo[] = {"cfp_b_ia_rifleman"}; 
};

// Aircraft

class cfp_b_ia_MI24V : CUP_O_Mi24_V_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA Mi-24v";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_AIRCRAFT";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_MI24V.jpg";	
};

class cfp_b_ia_MI24P : CUP_O_Mi24_P_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA Mi-24p";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_AIRCRAFT";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IA\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IA_MI24P.jpg";
};

class cfp_b_ia_SU25 : CUP_O_Su25_Dyn_RU
{
	scope = 2;
	side = 1; 
	displayName = "IA SU25";
	faction = CFP_B_IA; 
	vehicleClass = "CFP_B_IA_AIRCRAFT";
	camouflage = 4;	
	crew = "cfp_b_ia_crewman";          
	typicalCargo[] = {"cfp_b_ia_crewman","cfp_b_ia_crewman"}; 
	hiddenSelectionsTextures[]=
	{
		"\CFP_Iraq_Syria_v\textures\SU25\su25_body1_ia.paa",
		"\CFP_Iraq_Syria_v\textures\SU25\su25_body2_ia.paa"
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_ia_su25.jpg";
};

