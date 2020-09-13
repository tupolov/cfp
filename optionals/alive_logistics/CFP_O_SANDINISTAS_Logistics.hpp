// Faction Static Data Template for ALiVE

/*
 * Mil placement ambient vehicles per faction
 */
[ALIVE_factionDefaultSupports, "CFP_O_SANDINISTAS", [
	"CFP_O_SANDINISTAS_Ural_Open",
	"CFP_O_SANDINISTAS_UAZ_Open",
	"CFP_O_SANDINISTAS_UAZ_Unarmed",
	"CFP_O_SANDINISTAS_BRDM_2_01"
	]
] call ALIVE_fnc_hashSet;

/*
 * Mil placement random supply boxes per faction
 */

[ALIVE_factionDefaultSupplies, "CFP_O_SANDINISTAS", ["CFP_O_SANDINISTAS_AmmoBox","CFP_O_SANDINISTAS_WeaponsBox","CFP_O_SANDINISTAS_LaunchersBox"]] call ALIVE_fnc_hashSet;

/*
 * Mil logistics convoy transport vehicles per faction
 */
[ALIVE_factionDefaultTransport, "CFP_O_SANDINISTAS", [
	"CFP_O_SANDINISTAS_BRDM_2_01",
	"CFP_O_SANDINISTAS_Ural_Open",
	"CFP_O_SANDINISTAS_Ural",
	"CFP_O_SANDINISTAS_UAZ_Unarmed",
	"CFP_O_SANDINISTAS_UAZ_MG"
	]
] call ALIVE_fnc_hashSet;

/*
 * Mil logistics air transport vehicles per faction
 */
[ALIVE_factionDefaultAirTransport, "CFP_O_SANDINISTAS", [
	"CFP_O_SANDINISTAS_Mi8_1"
	]
] call ALIVE_fnc_hashSet;

/*
 * Mil logistics airdrop containers per faction
 */
[ALIVE_factionDefaultContainers, "CFP_O_SANDINISTAS", [
		"ALIVE_B_T_supplyCrate_F","B_CargoNet_01_ammo_F","CargoNet_01_box_F","Land_Pod_Heli_Transport_04_box_F"
	]
] call ALIVE_fnc_hashSet;

