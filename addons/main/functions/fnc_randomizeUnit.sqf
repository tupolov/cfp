#include <\x\cfp\addons\main\script_component.hpp>
SCRIPT(randomizeUnit);

/* ----------------------------------------------------------------------------
Function: CFP_fnc_randomizeUnit)
Description:
Randomizes a units weapon and gear loadout based on config

Parameters:
Object - Unit

Returns:
Nil

Examples:
(begin example)
[_this] call cfp_fnc_randomizeUnit;
(end)

See Also:
- nil

Author:
Tupolov

Peer reviewed:
Jmaster
----------------------------------------------------------------------------
*/
waitUntil {!(isNull _unit)}; //checks if unit is initialized
#define GEAR_CATEGORIES ["uniform","headgear","facewear","nvg","vest","backpack","speaker","insignia"]

#define WEAPON_CATEGORIES ["rifle", "handgun", "launcher", "grenade", "explosive"]

params ["_unit"];

if ( _unit getVariable ["NoRandom",false] || _unit getVariable ["CFP_DisableRandom",false]) exitWith {};

if (local _unit) then {

	_unit setVariable ["BIS_enableRandomization", false];

	// Check to see if we randomize Gear
	private _gearProbability = getNumber (configFile >> "CfgVehicles" >> typeOf _unit >> "randomGearProbability");

	if (random 100 < _gearProbability) then {
		private _magazines = magazines _unit;

		{
			private _cat = format ["%1List",_x];
			if (count (getArray (configFile >> "CfgVehicles" >> typeOf _unit >> _cat))>0) then {
				[_unit, _x] call FUNC(randomizeGear);
			};
		} foreach GEAR_CATEGORIES;

		{
			_unit addMagazine _x;
		} foreach _magazines;

		// Add FAK and medikit if medic
		if (side _unit != civilian) then {
			[_unit] spawn {(_this select 0) addItem "FirstAidKit"};
			if (_unit getUnitTrait "medic") then {
				[_unit] spawn {(_this select 0) addItem "FirstAidKit"};
				[_unit] spawn {(_this select 0) addItem "Medikit"};
			};
		};
	};

	// Check to see if we randomize Weapon
	private _weaponProbability = getNumber (configFile >> "CfgVehicles" >> typeOf _unit >> "randomWeaponProbability");

	if (random 100 < _weaponProbability) then {
		removeAllWeapons _unit;
		{
			private _cat = format ["%1List",_x];
			if (count  (getArray(configFile >> "CfgVehicles" >> typeOf _unit >> _cat))>0) then {
				[_unit, _x] call FUNC(randomizeWeapon);
			};
		} foreach WEAPON_CATEGORIES;

	};
};
