class DefaultEventhandlers;

class CfgPatches 
{
	class CFP_Iraq_Syria
	{
		units[] =
		{
			// BLUFOR
			// -- Peshmerga --
			"cfp_b_pesh_leader",
			"cfp_b_pesh_grenadier",
			"cfp_b_pesh_rifleman",
			"cfp_b_pesh_machinegunner",
			"cfp_b_pesh_sniper",
			"cfp_b_pesh_at",
			"cfp_b_pesh_medic",
			"cfp_b_pesh_crewman",
			"cfp_b_pesh_rifleman_dshkm",
			"cfp_b_pesh_rifleman_kord",
			"cfp_b_pesh_rifleman_podnos",
			"cfp_b_pesh_rifleman_ags30",
			"cfp_b_pesh_rifleman_metis",
			"cfp_b_pesh_rifleman_spg9",
			
			// -- Iraqi Army --
			"cfp_b_ia_officer",
			"cfp_b_ia_grenadier",
			"cfp_b_ia_rifleman",
			"cfp_b_ia_machinegunner",
			"cfp_b_ia_sniper",
			"cfp_b_ia_at",
			"cfp_b_ia_medic",
			"cfp_b_ia_sapper",
			"cfp_b_ia_crewman",
			"cfp_b_ia_sf",
			"cfp_b_ia_rifleman_dshkm",
			"cfp_b_ia_rifleman_kord",
			"cfp_b_ia_rifleman_podnos",
			"cfp_b_ia_rifleman_ags30",
			"cfp_b_ia_rifleman_metis",
			"cfp_b_ia_rifleman_spg9",
	
			// --Iraqi Police--
			"cfp_b_ip_officer",
			"cfp_b_ip_policeman",
	
			// -- YPG --
			"cfp_b_ypg_leader",
			"cfp_b_ypg_rifleman",
			"cfp_b_ypg_machinegunner",
			"cfp_b_ypg_sniper",
			"cfp_b_ypg_at",
			"cfp_b_ypg_medic",
			"cfp_b_ypg_crewman",
			"cfp_b_ypg_rifleman_dshkm",
			"cfp_b_ypg_rifleman_kord",
			"cfp_b_ypg_rifleman_podnos",
			"cfp_b_ypg_rifleman_ags30",
			"cfp_b_ypg_rifleman_metis",
			"cfp_b_ypg_rifleman_spg9",

			// OPFOR
			// -- Islamic State --
			"cfp_o_is_team_leader",
			"cfp_o_is_squad_leader",
			"cfp_o_is_grenadier",
			"cfp_o_is_rifleman",
			"cfp_o_is_militaman",
			"cfp_o_is_irregular",
			"cfp_o_is_autorifleman",
			"cfp_o_is_machinegunner",
			"cfp_o_is_sniper",
			"cfp_o_is_at",
			"cfp_o_is_medic",
			"cfp_o_is_sapper",
			"cfp_o_is_crewman",
			"cfp_o_is_rifleman_dshkm",
			"cfp_o_is_rifleman_kord",
			"cfp_o_is_rifleman_podnos",
			"cfp_o_is_rifleman_ags30",
			"cfp_o_is_rifleman_metis",
			"cfp_o_is_rifleman_spg9",
			
			// ---- SAA ----
			"cfp_o_saa_officer",
			"cfp_o_saa_grenadier",
			"cfp_o_saa_rifleman",
			"cfp_o_saa_machinegunner",
			"cfp_o_saa_sniper",
			"cfp_o_saa_at",
			"cfp_o_saa_medic",
			"cfp_o_saa_sapper",
			"cfp_o_saa_crewman",
			"cfp_o_saa_rifleman_dshkm",
			"cfp_o_saa_rifleman_kord",
			"cfp_o_saa_rifleman_podnos",
			"cfp_o_saa_rifleman_ags30",
			"cfp_o_saa_rifleman_metis",
			"cfp_o_saa_rifleman_spg9",

			// Independent
			// -- Islamic State --
			"cfp_i_is_team_leader",
			"cfp_i_is_squad_leader",
			"cfp_i_is_grenadier",
			"cfp_i_is_rifleman",
			"cfp_i_is_militaman",
			"cfp_i_is_irregular",
			"cfp_i_is_autorifleman",
			"cfp_i_is_machinegunner",
			"cfp_i_is_sniper",
			"cfp_i_is_at",
			"cfp_i_is_medic",
			"cfp_i_is_sapper",
			"cfp_i_is_crewman",
			"cfp_i_is_rifleman_dshkm",
			"cfp_i_is_rifleman_kord",
			"cfp_i_is_rifleman_podnos",
			"cfp_i_is_rifleman_ags30",
			"cfp_i_is_rifleman_metis",
			"cfp_i_is_rifleman_spg9",

			// ---- al-Nusra Front ----
			"cfp_i_alNusra_team_leader",
			"cfp_i_alNusra_squad_leader",
			"cfp_i_alNusra_grenadier",
			"cfp_i_alNusra_rifleman",
			"cfp_i_alNusra_machinegunner",
			"cfp_i_alNusra_sniper",
			"cfp_i_alNusra_at",
			"cfp_i_alNusra_medic",
			"cfp_i_alNusra_sapper",
			"cfp_i_alNusra_crewman",
			"cfp_i_alNusra_rifleman_dshkm",
			"cfp_i_alNusra_rifleman_kord",
			"cfp_i_alNusra_rifleman_podnos",
			"cfp_i_alNusra_rifleman_ags30",
			"cfp_i_alNusra_rifleman_metis",
			"cfp_i_alNusra_rifleman_spg9"


		};
		
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Common","A3_Characters_F_Civil","A3_Characters_F_Gamma","A3_Characters_F_Bootcamp","A3_Characters_F_BLUFOR"};
		
	};
};

class CfgFactionClasses
{
	// Blufor
	
	class CFP_B_PESH
	{
		displayName = "[CFP] Peshmerga";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 1; // Blufor
	};
	
	class CFP_B_IA
	{
		displayName = "[CFP] Iraqi Army";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 1; // Blufor
	};
	
	class CFP_B_IP
	{
		displayName = "[CFP] Iraqi Police";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 1; // Blufor
	};
	
	class CFP_B_YPG
	{
		displayName = "[CFP] YPG";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 1; // Blufor
	};
	
	// Opfor
	
	class CFP_O_IS
	{
		displayName = "[CFP] Islamic State";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 0; // Opfor
	};
	
	class CFP_O_SAA
	{
		displayName = "[CFP] Syrian Arab Army";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 0; // Opfor
	};
	
	// Indep
	
	class CFP_I_IS
	{
		displayName = "[CFP] Islamic State";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 2; // Indep
	};
	
	class CFP_I_alNusra
	{
		displayName = "[CFP] al-Nusra Front";
		author = "CFP Team";
		icon = "\CFP_Iraq_Syria\cfp_logo_small.paa";
		priority = 1;
		side = 2; // Indep
	};
	
};
class CfgVehicleClasses
{
	class CFP_B_PESH_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_B_IA_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_B_IP_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_B_YPG_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_O_IS_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_O_SAA_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_I_IS_INFANTRY
	{
		displayName = "Infantry"; 
	};
	
	class CFP_I_alNusra_INFANTRY
	{
		displayName = "Infantry"; 
	};
	class SP_Rig
	{
		displayName = "Opfor Rig";
	};
	class SP_PASGTHelmet
	{
		displayName = "PASGT Helmet";
	};
	class SP_Beret3
	{
		displayName = "Beret3";
	};

};

class CfgVehicles 
{

	class I_soldier_F;
	class I_officer_F;
	class I_G_Soldier_F;
	class I_Soldier_A_F;
	class O_officer_F;
	class B_Soldier_F;
	class I_C_Soldier_Camo_F;
	

	// Blufor
	#include "\Peshmerga\Peshmerga_Blu_inf.hpp"
	#include "\IA\IA_Blu_inf.hpp"
	#include "\IP\IP_Blu_inf.hpp"
	#include "\YPG\YPG_Blu_inf.hpp"
	
	// Opfor
	#include "\IS\Opf\IS_Opf_inf.hpp"
	#include "\SAA\SAA_Opf_inf.hpp"
	
	// Indep
	#include "\IS\Ind\IS_Ind_inf.hpp"
	#include "\alNusra\alNusra_Ind_inf.hpp"
	
	#include "\Flags\Flags.hpp"
};

class CfgGroups
{
	class West
	{
		#include "\Peshmerga\Peshmerga_Blu_inf_grps.hpp"
		#include "\IA\IA_Blu_inf_grps.hpp"
		#include "\IP\IP_Blu_inf_grps.hpp"
		#include "\YPG\YPG_Blu_inf_grps.hpp"
	};
	class East
	{
		#include "\IS\Opf\IS_Opf_inf_grps.hpp"
		#include "\SAA\SAA_Opf_inf_grps.hpp"
	};
    class Indep
    {
        #include "\IS\Ind\IS_Ind_inf_grps.hpp"
		#include "\alNusra\alNusra_Ind_inf_grps.hpp"
	};
};

class CfgUnitInsignia 
{
	#include "Insignia\Insignia.hpp"
};

class CfgWeapons 
{
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	
	class InventoryItem_Base_F;
	class HeadgearItem: InventoryItem_Base_F
	{
		class Iteminfo;
		class HeadgearItem;
	};

	class VestItem: ItemCore
	{
		class ItemInfo;
	};
	
	class Uniform_Base: Itemcore
	{
		class ItemInfo;
	};
	
	class ItemInfo;
	class Vest_Camo_Base;
	class U_BG_Guerilla1_1;
	class U_I_CombatUniform;
	class U_I_OfficerUniform;
	class U_I_C_Soldier_Camo_F;
	class UniformItem;
	class H_Shemag_tan;
	class H_Bandanna_gry;
	class H_Bandmask_blk;
	class G_Balaclava_blk;	
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class HeadgearItem;
	class H_Beret_Colonel;
	class AFG_1996Leaf_BattleDressUniform;

	#include "gear\Beret3\Beret3.hpp"
	
	#include "\Peshmerga\PeshVest.hpp"
	#include "\Peshmerga\PeshBeret.hpp"
	#include "\Peshmerga\PeshBeretCTG.hpp"
	
	#include "\Peshmerga\Peshmerga_Blu_inf_cfg_wpns.hpp"
	#include "\IA\IA_Blu_inf_cfg_wpns.hpp"
	#include "\IP\IP_Blu_inf_cfg_wpns.hpp"
	
	#include "IS\Opf\IS_Opf_inf_cfg_wpns.hpp"
	#include "SAA\SAA_Opf_inf_cfg_wpns.hpp"
	
	#include "\YPG\YPG_inf_cfg_wpns.hpp"
	
	#include "IS\Ind\IS_Ind_inf_cfg_wpns.hpp"
	#include "\alNusra\alNusra_Ind_inf_cfg_wpns.hpp"
	
	// ************************************************ Shemag ****************************
	class IS_shemag_black : H_Shemag_tan
	{
		scope = 2;
		displayName = "IS Shemag";
		picture = "\CFP_Iraq_Syria\icon\icon_is_shemag.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\shemags\IS_shemag_black.paa"};

	};
	// ************************************************ Bandanna ****************************
	class IS_bandanna_black_logo1 : H_Bandanna_gry
	{
		scope = 2;
		displayName = "IS Bandanna";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\bandanna\IS_bandana_black_logo1.paa"};

	};
	class IS_bandanna_black_logo2 : H_Bandanna_gry
	{
		scope = 2;
		displayName = "IS Bandanna";
		picture = "\A3\Characters_F\data\UI\icon_H_bandanna_gry_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\bandanna\IS_bandana_black_logo2.paa"};

	};	
	// ************************************************ Balaclavas ****************************
	class IS_Balaclava_black_logo1 : G_Balaclava_blk
	{
		scope = 2;
		displayName = "IS Balaclava"; 
		picture = "\A3\characters_f_bootcamp\data\UI\icon_g_balaclava_clean_ca.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\balaclava\IS_balaclava_black_logo1.paa"};

	};
		
};

class Headgear_Base_F; 
class Item_Base_F; 

class CfgGlasses
{ 
    class G_Balaclava_blk; 
	
    class IS_Balaclava_logo1 : G_Balaclava_blk 
    { 
        author="CFP Team"; 
        _generalMacro="Balaclava_logo"; 
        displayName="IS Balaclava logo1";
		scope = 2;		
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d"; 
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa"; 
        hiddenSelections[]= {"camo"}; 
        hiddenSelectionsTextures[]= {"\CFP_Iraq_Syria\textures\balaclava\IS_balaclava_black_logo1.paa"}; 
        identityTypes[]={}; 
    }; 
	class IS_Balaclava_logo2 : G_Balaclava_blk 
    { 
        author="CFP Team"; 
        _generalMacro="Balaclava_logo2"; 
        displayName="IS Balaclava logo2"; 
		scope = 2;
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d"; 
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa"; 
        hiddenSelections[]= {"camo"}; 
        hiddenSelectionsTextures[]= {"\CFP_Iraq_Syria\textures\balaclava\IS_balaclava_black_logo2.paa"}; 
        identityTypes[]={}; 
    }; 
	class IS_Balaclava : G_Balaclava_blk 
    { 
        author="CFP Team"; 
        _generalMacro="Balaclava_IS"; 
        displayName="IS Balaclava"; 
		scope = 2;
        model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d"; 
        picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa"; 
        hiddenSelections[]= {"camo"}; 
        hiddenSelectionsTextures[]= {"\CFP_Iraq_Syria\textures\balaclava\IS_balaclava_black.paa"}; 
        identityTypes[]={}; 
    }; 

};  