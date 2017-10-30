#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define true	1
#define false	0

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

class CfgPatches
{
    class CFP_Vests
    {
        units[] = {};
		weapons[] = {
			"SP_AssaultMolle1_Black",
			"SP_AssaultMolle1_Green",
			"SP_AssaultMolle1_Tan",
			"SP_Bandolier1_Black",
			"SP_Bandolier1_Green",
			"SP_Bandolier1_Tan",
			"SP_Bandolier1_Grey",
			"SP_BluforMolle1_Black",
			"SP_BluforMolle1_Green",
			"SP_BluforMolle1_Tan",
			"SP_BluforMolle1_Grey",
			"SP_BluforMolle1_Un",
			"SP_ChestRig1_Black",
			"SP_ChestRig1_Green",
			"SP_ChestRig1_Tan",
			"SP_ChestRig1_Grey",
			"SP_FlyyeMolle1_Black",
			"SP_FlyyeMolle1_Green",
			"SP_FlyyeMolle1_Tan",
			"SP_FlyyeMolle1_Grey",
			"SP_Harness1_Black",
			"SP_Harness1_Green",
			"SP_Harness1_Tan",
			"SP_Harness1_Grey",
			"SP_Holster1_Black",
			"SP_Holster1_Brown",
			"SP_JackEllis1_Black",
			"SP_JackEllis1_Green",
			"SP_JackEllis1_Tan",
			"SP_JackEllis1_Grey",
			"SP_JackEllis1_White",
			"SP_JackEllis1_Blue",
			"SP_JackEllis1_UNBlue1",
			"SP_JackEllis1_PressBlue1",
			"SP_JackEllis1_PoliceBlack1",
			"SP_JackEllis1_SwatBlack1",
			"SP_JackEllis1_FBIBlack1",
			"SP_Modular1_Black",
			"SP_Modular1_Green",
			"SP_Modular1_Tan",
			"SP_Modular1_Grey",
			"SP_Modular1_White",
			"SP_Modular2_Black",
			"SP_Modular2_Green",
			"SP_Modular2_Tan",
			"SP_Modular2_Grey",
			"SP_Modular2_White",
			"SP_OpforMolle1_Black",
			"SP_OpforMolle1_Green",
			"SP_OpforMolle1_Tan",
			"SP_OpforMolle1_Grey",
			"SP_OpforMolle1_Un",
			"SP_OpforRig1_Black",
			"SP_OpforRig1_Green",
			"SP_OpforRig1_Tan",
			"SP_OpforRig1_Grey",
			"SP_PlateCarrier1_Black",
			"SP_PlateCarrier1_Green",
			"SP_PlateCarrier1_Tan",
			"SP_PlateCarrier1_Grey",
			"SP_PlateCarrier1_Hunter",
			"SP_PlateCarrier1_Hunter2",
			"SP_PlateCarrier1_ATacsFG",
			"SP_PlateCarrier1_NodUrban",
			"SP_Tactical1_Black",
			"SP_Tactical1_Blue",
			"SP_Tactical1_Green",
			"SP_Tactical1_Tan",
			"SP_Tactical1_Grey",
			"SP_Tactical1_White"
		};
        requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
    };
};

#include "CfgWeapons.hpp"

