// Faction Static Data Template for ALiVE

/*
 * Mil placement ambient vehicles per faction
 */
[ALIVE_factionDefaultSupports, "CFP_O_RHGUERILLAS", [
	"CFP_O_RHGUERILLAS_Truck_01"
	]
] call ALIVE_fnc_hashSet;

/*
 * Mil placement random supply boxes per faction
 */

[ALIVE_factionDefaultSupplies, "CFP_O_RHGUERILLAS", ["CFP_O_RHGUERILLAS_AmmoBox","CFP_O_RHGUERILLAS_WeaponsBox","CFP_O_RHGUERILLAS_LaunchersBox"]] call ALIVE_fnc_hashSet;

/*
 * Mil logistics convoy transport vehicles per faction
 */
[ALIVE_factionDefaultTransport, "CFP_O_RHGUERILLAS", [
	"CFP_O_RHGUERILLAS_Truck_01"
	]
] call ALIVE_fnc_hashSet;

/*
 * Mil logistics air transport vehicles per faction
 */
[ALIVE_factionDefaultAirTransport, "CFP_O_RHGUERILLAS", []
] call ALIVE_fnc_hashSet;

/*
 * Mil logistics airdrop containers per faction
 */
[ALIVE_factionDefaultContainers, "CFP_O_RHGUERILLAS", [
		"ALIVE_B_T_supplyCrate_F","B_CargoNet_01_ammo_F","CargoNet_01_box_F","Land_Pod_Heli_Transport_04_box_F"
	]
] call ALIVE_fnc_hashSet;

