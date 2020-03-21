#include <\x\cfp\addons\main\script_component.hpp>
SCRIPT(randomizeVehicle);

/* ----------------------------------------------------------------------------
Function: CFP_main_fnc_randomizeVehicle
Description:
Randomizes the texture applied to a vehicle based on weighted values

Parameters:
Object - Unit

Returns:
Nil

Examples:
(begin example)
[_this] call cfp_main_fnc_randomizeVehicle;
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

if ( _unit getVariable ["NoRandom",false] || _unit getVariable ["CFP_DisableRandom",false]) exitWith {};

if (local _unit) then {

	_unit setVariable ["BIS_enableRandomization", false];

	// Check to see if we randomize Gear
	private _textureProbability = getNumber (configFile >> "CfgVehicles" >> typeOf _unit >> "randomTextureProbability");

	if (random 100 < _textureProbability) then {

		private _texturesArray = (configFile >> "CfgVehicles" >> typeOf _unit >> "textureList") call bis_fnc_getCfgData;

		if (count _texturesArray > 0) then {
			private _textures = selectRandomWeighted _texturesArray;

			{
				_unit setObjectTextureGlobal [_foreachIndex,_x];
			} foreach _textures;
		};
	};

};