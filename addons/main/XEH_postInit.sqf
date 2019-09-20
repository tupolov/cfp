#include "script_component.hpp"

GVAR(mainPostInited) = true;

[] spawn {
    // Simple NVG un- and equip script "inspired" by Robalo's ASR AI3
    while {true} do {
        private _equipNVGoggles = (sunOrMoon < 1 || {moonIntensity > 0.8});

        {
            private _unit = _x;

            if (!(isNull _unit) && !(isPlayer _unit) && {alive _unit}) then {
                private _nvg = hmd _unit;
                private _nvgHelmet = "";

                // Figure out if helmet has NVG hardware if no NVGoggles detected
                if (_nvg == "") then {
                    private _helmetSubItems = [(configFile >> "CfgWeapons" >> (headGear _unit)), "subItems", []] call BIS_fnc_returnConfigEntry;

                    {
                        if (getText (configFile >> "CfgWeapons" >> _x >> "simulation") == "NVGoggles") exitWith {
                            _nvgHelmet = _helmet;
                        };
                    } forEach _helmetSubItems;
                };

                if (_equipNVGoggles) then {
                    // Unit has no NVG equiped and helmet doesn't contain NVG hardware
                    if (_nvg == "" && {_nvgHelmet == ""}) then {
                        {
                            if (getText (configFile >> "CfgWeapons" >> _x >> "simulation") == "NVGoggles") exitWith {
                                _unit assignItem _x;
                            };
                        } forEach items _unit;
                    };
                } else {
                    // Unit has NVG equiped and isn't currently using it
                    if (!(_nvg == "") && {currentVisionMode _unit == 0}) then {
                        if (_unit canAdd _nvg) then {
                            _unit unassignItem _nvg;
                        };
                    };
                };
            };
        } foreach allUnits;

        sleep 30;
    };
};

