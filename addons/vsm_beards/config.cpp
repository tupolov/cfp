////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 6.44
//'now' is Sat Mar 10 18:53:18 2018 : 'file' last modified on Mon Sep 04 00:25:12 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\x\cfp\addons\vsm_beards\config.bin{
class CfgPatches
{
	class CFP_Beards_config
	{
		units[] = {};
		weapons[] = {"CFP_beard_3"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class ItemCore;
class UniformItem;
class Uniform_Base: ItemCore
{
	class ItemInfo;
};
class CfgGlasses
{
	class CFP_beard_3
	{
		scope = 2;
		author = "VanSchmoozin";
		displayname = "Beard";
		model = "\x\cfp\addons\vsm_beards\VSM_beard_3";
		hiddenSelections[] = {"_newnew"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_beards\data\VSM_Beard_2.paa"};
		picture = "";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
};

