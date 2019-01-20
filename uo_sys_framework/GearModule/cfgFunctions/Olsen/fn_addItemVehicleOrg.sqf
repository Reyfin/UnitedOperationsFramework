/*
 * Author: Olsen
 *
 * Add item to vehicle.
 *
 * Arguments:
 * 0: vehicle <object>
 * 1: loadout name <string>
 * 2: item <string>
 * 3: amount <number> (optional)
 *
 * Return Value:
 * nothing
 *
 * Public: No
 */

#define COMPONENT Gear
#include "\x\UO_FW\addons\Main\script_macros.hpp"
UO_FW_EXEC_CHECK(ALL);

private ["_vehicle", "_loadoutType", "_item", "_amount", "_Type"];

_vehicle = _this select 0;
_loadoutType = _this select 1;
_item = _this select 2;
_amount = 1;
_Type = (_item call BIS_fnc_itemType) select 1;

if !([_item] call UO_FW_fnc_checkClassname) exitWith {};

if (count _this > 3) then {

    _amount = _this select 3;

};

for "_x" from 1 to _amount do {

    if (_vehicle canAdd _item) then {

        if (_Type == "backpack") then {

            _vehicle addBackpackCargoGlobal [_item, 1];

        } else {

            _vehicle addItemCargoGlobal [_item, 1];

        };

    } else {

        (format ["UO_FW_fnc_AddItemVehicle: Warning couldn't fit %1, in %2, case %3", _item, _vehicle, _loadoutType]) call UO_FW_fnc_DebugMessage;

    };
};
