#include <\x\cfp\addons\main\script_component.hpp>
SCRIPT(randomizeGear);

/* ----------------------------------------------------------------------------
Function: CFP_fnc_randomizeGear
Description:
Randomizes a units gear loadout based on config

Parameters:
Object - Unit
String - Category

Returns:
Nil

Examples:
(begin example)
[_unit, "headgear"] call cfp_main_fnc_randomizeGear;
(end)

See Also:
- nil

Author:
Tupolov

Peer reviewed:
nil
----------------------------------------------------------------------------*/
params ["_unit","_cat"];

private _category = format["%1List",_cat];
private _array = (configFile >> "CfgVehicles" >> typeOf _unit >> _category) call bis_fnc_getCfgData;

if (count _array == 0) exitWith {};

private _item = selectRandomWeighted _array;

if (_item isEqualType "" && {_item == ""}) exitWith {};

_getRandomInsignia = {
    private _item = _this select 0;
    private _config = (configFile >> "CfgUnitInsignia");
    private _result = "USP_PATCH_MORALE_FING_A";
    private _output = [];

    for "_i" from 0 to (count _config)-1 do {

        private _cfg = _config select _i;
        private _default = "";

        if (isClass _cfg) then {
            _default = configName _cfg;

            if (((_default) find _item) > -1) then {
                _output pushback _default;
            };
        };
    };

    if (count _output > 0) then {
        _result = selectRandom _output;
    };

    _result
};

switch (_cat) do {

    case ("headgear") : {
        removeHeadGear _unit;
        if (_item != "") then {
            _unit addHeadGear _item;
        };
    };
    case ("facewear") : {
        removeGoggles _unit;
        if (_item != "") then {
            _unit addGoggles _item;
        };
    };
    case ("uniform") : {
        removeUniform _unit;
        if (_item isEqualType []) then {
                _unit forceAddUniform (_item select 0);
                private _textures = selectRandomWeighted (_item select 1);
                {
                    _unit setObjectTextureGlobal [_foreachIndex,_x];
                } foreach _textures;
        } else {
            _unit forceAddUniform _item;
        };
    };
    case ("vest") : {
        removeVest _unit;
        if (_item != "") then {
            _unit addVest _item;
        };
    };
    case ("backpack") : {
        removeBackpack _unit;
        if (_item != "") then {
            _unit addBackpack _item;
        };
    };
    case ("nvg") : {
        if (_item == "") then {
            _unit unlinkItem "NVGoggles";
        } else {
            _unit linkItem _item;
        };
    };
    case ("speaker") : {
        [_unit, _item] remoteExecCall ["SetSpeaker",0];
    };
    case ("insignia") : {
        if (_item in ["MORALE","BLOOD","TAB","COMIC","GAME"]) then {
            _item = [_item] call _getRandomInsignia;
        };
        [_unit, _item] call BIS_fnc_setUnitInsignia;
    };
};


