#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[
    QGVARMAIN(autoEquipNVG),
    "CHECKBOX",
    "Enable NVG auto equip",
    "AI",
    true,
    true,
    {},
    false
] call CBA_fnc_addSetting;

ADDON = true;
