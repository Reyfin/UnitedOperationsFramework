//Heal any hurt friendlies nearby.
//Potential for ace healing
//_damageVar = player getvariable ["ace_medical_bodyPartStatus", [0,0,0,0,0,0]]; [player, "selection", (_damageVar select (["selection"] call ace_medical_fnc_selectionNameToNumber)) + _newDamage, player, "TypeOfDammage", -1] call ace_medical_fnc_handleDamage;

#include "\x\UO_FW\addons\Main\HeadlessAIModule\module_macros.hpp"
UO_FW_AI_EXEC_CHECK(SERVERHC);

private _Unitgroup = group _this;
private _USide = side _Unitgroup;
private _Friendlies = allUnits select {Side _x isEqualTo _USide && (_x distance _this) < 50};

{
    if (damage _x > 0) exitWith {
        while {alive _x && {alive _this} && {_this distance _x > 3}} do {
            _this domove (getposATL _x);
            _this forcespeed -1;
            sleep 5;
            LOG_1("%1 moving to heal unit",_this);
        };
        if (alive _x && alive _this && _this distance _x <= 3) then {
            _this action ["HealSoldier",_x];
            _this forcespeed -1;
            [objNull, _x] call ace_medical_fnc_treatmentAdvanced_fullHealLocal;
            LOG_1("%1 moving to heal unit",_this);
        };
    };
} foreach _Friendlies;
