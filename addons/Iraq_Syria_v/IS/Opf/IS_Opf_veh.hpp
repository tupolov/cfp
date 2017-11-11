// ***** Motorized section *****

// Offroads
	
class cfp_o_is_offroad : Offroad_01_base_F
{
	scope = 2;
	side = 0; 
	displayName = "IS Offroad"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_isis_01.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_isis_01.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Offroad.jpg";
};

class cfp_o_is_offroad_flag : cfp_o_is_offroad
{ 
	displayName = "IS Offroad (Flag)"; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		//killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
		//deleted="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\ondeleted.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Offroad_flag.jpg";
};
	
class cfp_o_is_offroad_M2 : B_G_Offroad_01_armed_F
{
	scope = 2;
	side = 0; 
	displayName = "IS Offroad MG"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	hiddenSelections[] = {"camo","camo2"}; 
	hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria_v\textures\offroad\offroad_isis_02.paa","\CFP_Iraq_Syria_v\textures\offroad\offroad_isis_02.paa"};
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Offroad_MG.jpg";
};

class cfp_o_is_offroad_M2_flag : cfp_o_is_offroad_M2
{
	displayName = "IS Offroad MG (Flag)"; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		//killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
		//deleted="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\ondeleted.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Offroad_MG_flag.jpg";
};

// Pickup PK

class cfp_o_is_pickup_PK : CUP_I_Datsun_PK_TK_Random
{
	scope = 2;
	side = 0; 
	displayName = "IS Pickup PK";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";         
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};        
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
};

class cfp_o_is_pickup_PK_flag : cfp_o_is_pickup_PK
{
	scope = 2;
	side = 0; 
	displayName = "IS Pickup PK (Flag)";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";         
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Datsun_PK.jpg";	
};

// Land Rovers
class cfp_o_is_LR_M2 : CUP_O_LR_MG_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS L.R. M2"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_LR_MG.jpg";	
};

class cfp_o_is_LR_SPG9 : CUP_O_LR_SPG9_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS L.R. SPG9";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_LR_SPG.jpg";	
};

class cfp_o_is_LR_Unarmed : CUP_O_LR_Transport_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS L.R.";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_LR.jpg";
};

// UAZs

class cfp_o_is_UAZ_MG : CUP_O_UAZ_MG_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ MG";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_UAZ_DShKM.jpg";	
};

class cfp_o_is_UAZ_AGS30 : CUP_O_UAZ_AGS30_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ AGS30";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_UAZ_AGS.jpg";	
};

class cfp_o_is_UAZ_SPG9 : CUP_O_UAZ_SPG9_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ SPG9";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_UAZ_SPG.jpg";	
};

class cfp_o_is_UAZ_METIS : CUP_O_UAZ_METIS_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ METIS";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_UAZ_Metis.jpg";	
};

class cfp_o_is_UAZ_Unarmed : CUP_O_UAZ_Unarmed_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_UAZ.jpg";	
};

class cfp_o_is_UAZ_Open : CUP_O_UAZ_Open_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS UAZ Open";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
};

class cfp_o_is_hmmwv_dshkm : CUP_B_HMMWV_DSHKM_GPK_ACR
{
	scope = 2;
	side = 0; 
	displayName = "IS HMMWV DShKM";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_hmmwv_ags : CUP_B_HMMWV_AGS_GPK_ACR
{
	scope = 2;
	side = 0; 
	displayName = "IS HMMWV AGS";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};


// Urals

class cfp_o_is_Ural : CUP_O_Ural_CHDKZ
{
	scope = 2;
	side = 0; 
	displayName = "IS Ural"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Ural.jpg";	
};

class cfp_o_is_Ural_ZU23 : CUP_O_Ural_ZU23_CHDKZ
{
	scope = 2;
	side = 0; 
	displayName = "IS Ural ZU23"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};  
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_Ural_ZU23.jpg";	
};

// BTR 40

class cfp_o_is_BTR40_MG : CUP_O_BTR40_MG_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS BTR40 MG"; 
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MOTORIZED"; 
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"};  
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BTR40.jpg";	
};

class cfp_o_is_BTR40_MG_flag : cfp_o_is_BTR40_MG
{
	displayName = "IS BTR40 MG (Flag)"; 	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BTR40_flag.jpg";
};

// Mechanized section

class cfp_o_is_M113 : CUP_O_M113_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS M113";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_M113_2.jpg";	
};

class cfp_o_is_M113_flag : cfp_o_is_M113
{
	displayName = "IS M113 (Flag)";	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_M113_2_flag.jpg";
};

class cfp_o_is_BMP1 : CUP_O_BMP1_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS BMP-1";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP1.jpg";
};

class cfp_o_is_BMP1_flag : cfp_o_is_BMP1
{ 
	displayName = "IS BMP-1 (Flag)";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP1_flag.jpg";
};

class cfp_o_is_BMP1P : CUP_O_BMP1P_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS BMP-1P";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP1P.jpg";
};

class cfp_o_is_BMP1P_flag : cfp_o_is_BMP1P
{
	displayName = "IS BMP-1P (Flag)";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP1P_flag.jpg";
};

class cfp_o_is_BMP2_PKM : CUP_B_BMP_HQ_CZ_Des
{
	scope = 2;
	side = 0; 
	displayName = "IS BMP-2 PKM";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP2_PKM.jpg";
};

class cfp_o_is_BMP2_PKM_flag : cfp_o_is_BMP2_PKM
{
	displayName = "IS BMP-2 PKM (Flag)";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP2_PKM_flag.jpg";
};


class cfp_o_is_BMP2 : CUP_B_BMP2_CZ_DES
{
	scope = 2;
	side = 0; 
	displayName = "IS BMP-2";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP2.jpg";
};

class cfp_o_is_BMP2_ZU : CUP_O_BMP2_ZU_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS BMP-2 ZSU";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_MECHANIZED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_BMP2_ZSU.jpg";
};


// Tanks - Armored section


class cfp_o_is_T34 : CUP_O_T34_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS T34";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_ARMORED";
	camouflage = 4;
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_T34.jpg";
};

class cfp_o_is_T34_flag : cfp_o_is_T34
{
	displayName = "IS T34 (Flag)";
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_T34_flag.jpg";
};

class cfp_o_is_T55 : CUP_O_T55_CSAT
{
	scope = 2;
	side = 0; 
	displayName = "IS T55";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_ARMORED";
	camouflage = 4;
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 

	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_T55.jpg";
};

class cfp_o_is_T55_flag : cfp_o_is_T55
{

	displayName = "IS T55 (Flag)"; 	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_T55_flag.jpg";
};

class cfp_o_is_T72 : CUP_O_T72_TKA
{
	scope = 2;
	side = 0; 
	displayName = "IS T72";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_ARMORED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_T72_tan.jpg";
};

class cfp_o_is_T72_flag : cfp_o_is_T72 
{
	scope = 2;
	side = 0; 
	displayName = "IS T72 (Flag)";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_ARMORED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""; (_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\AttachFlag.sqf""";
		killed="(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\onkilled.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_T72_flag.jpg";
};


class cfp_o_is_ZSU : CUP_O_ZSU23_SLA
{
	scope = 2;
	side = 0; 
	displayName = "IS ZSU";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_ARMORED";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman","cfp_o_is_crewman","cfp_o_is_crewman"}; 
	
	class EventHandlers
	{
		init = "(_this select 0) execVM ""\CFP_Iraq_Syria_v\IS\script\randomize_tex.sqf""";
	};
	editorPreview = "CFP_Iraq_Syria_v\Previews\Preview_IS_ZSU.jpg";	
};

// Static weapons

class cfp_o_is_ZU23 : CUP_O_ZU23_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS ZU23";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_DSHKM : CUP_O_DSHKM_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "IS DSHKM";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_DSHkM_Mini_TriPod : CUP_O_DSHkM_MiniTriPod_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "IS DSHkM Mini TriPod";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_KORD : CUP_O_KORD_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS KORD";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_KORD_high : CUP_O_KORD_high_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS KORD High";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_AGS : CUP_O_AGS_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS AGS";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_M2Static : CUP_B_M2StaticMG_US
{
	scope = 2;
	side = 0; 
	displayName = "IS M2";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_M2Static_MiniTripod : CUP_B_M2StaticMG_MiniTripod_US
{
	scope = 2;
	side = 0; 
	displayName = "IS M2 Mini Tripod";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_Metis : CUP_O_Metis_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS Metis";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_SPG9 : CUP_O_SPG9_TK_INS
{
	scope = 2;
	side = 0; 
	displayName = "IS SPG9";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_TOW : CUP_B_TOW_TriPod_USMC
{
	scope = 2;
	side = 0; 
	displayName = "IS TOW";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_2b14_82mm : CUP_O_2b14_82mm_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS 2b14 82mm";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};

class cfp_o_is_M252 : CUP_B_M252_US
{
	scope = 2;
	side = 0; 
	displayName = "IS M252";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_D30 : CUP_O_D30_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS D30";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_D30_AT : CUP_O_D30_AT_RU
{
	scope = 2;
	side = 0; 
	displayName = "IS D30 AT";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};
class cfp_o_is_M119 : CUP_B_M119_US
{
	scope = 2;
	side = 0; 
	displayName = "IS M119";
	faction = CFP_O_IS; 
	vehicleClass = "CFP_O_IS_STATIC";
	camouflage = 4;	
	crew = "cfp_o_is_crewman";          
	typicalCargo[] = {"cfp_o_is_crewman"}; 
};