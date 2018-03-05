#include <\x\cfp\addons\main\script_component.hpp>
SCRIPT(loadout);

/* ----------------------------------------------------------------------------
Function: CFP_fnc_loadout
Description:
Adds uniform, vest and backpack cnotents

Parameters:
Object - Unit

Returns:
Nil

Examples:
(begin example)
[_this] call CFP_fnc_loadout;
(end)

See Also:
- nil

Author:
Tupolov

Peer reviewed:
nil
----------------------------------------------------------------------------
*/

params ["_unit"];

if ( _unit getVariable ["CFP_OverrideLoadout",false]) exitWith {};

if (local _unit) then {

	_unit setVariable ["BIS_enableRandomization", false];

	// Check for uniform items
	private _uniformLoadout = getArray (configFile >> "CfgVehicles" >> typeOf _unit >> "CFP_UniformItems");

	if (count _uniformLoadout > 0) then {

		{
			private _item = _x select 0;
			if (_item != "") then {
				private _count = _x select 1;
				for "_i" from 1 to _count do {
					_unit addItemToUniform _item;
				};
			};
		} foreach _uniformLoadout;

	};

	// Check for vest items
	private _vestLoadout = getArray (configFile >> "CfgVehicles" >> typeOf _unit >> "CFP_VestItems");

	if (count _vestLoadout > 0) then {

		{
			private _item = _x select 0;
			if (_item != "") then {
				private _count = _x select 1;
				for "_i" from 1 to _count do {
					_unit addItemToVest _item;
				};
			};
		} foreach _vestLoadout;

	};

	// Check for backpack items
	private _backpackLoadout = getArray (configFile >> "CfgVehicles" >> typeOf _unit >> "CFP_BackpackItems");

	if (count _backpackLoadout > 0) then {

		{
			private _item = _x select 0;
			if (_item != "") then {
				private _count = _x select 1;
				for "_i" from 1 to _count do {
					_unit addItemToBackpack _item;
				};
			};
		} foreach _backpackLoadout;

	};

	// Facewear
	private _facewear = getText (configFile >> "CfgVehicles" >> typeOf _unit >> "CFP_Facewear");
	if (_facewear != "") then {
		_unit addGoggles _facewear;
	};

	// Attachments
	private _attachments = getArray (configFile >> "CfgVehicles" >> typeOf _unit >> "CFP_Attachments");

	if (count _attachments > 0) then {

		private _primary = _attachments select 0;
		private _secondary = _attachments select 1;
		private _handgun = _attachments select 2;

		{
			if (_x != "") then {
				_unit addPrimaryWeaponItem _x;
			};

		} foreach _primary;

		{
			if (_x != "") then {
				_unit addSecondaryWeaponItem _x;
			};

		} foreach _secondary;

		{
			if (_x != "") then {
				_unit addHandgunItem _x;
			};

		} foreach _handgun;

	};
};