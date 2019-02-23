#define COMPONENT Gear
#include "\x\UO_FW\addons\Main\script_macros.hpp"
UO_FW_EXEC_CHECK(ALL);
UO_FW_3DEN_CHECK;

params ["_object"];
LOG_1("_object: %1",_object);

if (_object isKindOf "CAManBase") then {
    private _GearSystem = (_object get3DENAttribute "UO_FW_Gear_UnitSystemType") select 0;
    LOG_1("_GearSystem: %1",_GearSystem);
    private _objectClass = (_object get3DENAttribute "UO_FW_Gear_UnitGearType") select 0;
    LOG_1("_objectClass: %1",_objectClass);
    if (_GearSystem isEqualto "NONE") exitwith {};
    if (_objectClass isEqualto "NONE") exitwith {
        ERROR_1("No loadout found for unit: %1",_object);
    };
    if (_objectClass isEqualto "MANUAL") then {
        private _loadoutName = _object getVariable ["UO_FW_Gear_ManualUnitClass", ""];
        if (_loadoutName isEqualto "") exitwith {
            ERROR_1("Unit %1 is set to manual loadout but has none!, exiting gearscript.",_object);
        };
        switch (_GearSystem) do {
            case "ACEAR": {
                private _found = false;
                private _defaultloadoutsArray = getMissionConfigValue ["ace_arsenal_DefaultLoadoutsListAttribute",[]];
                {
                    _x params ["_name","_loadoutData"];
                    if (_loadoutName isEqualto _name) exitwith {
                        _object setUnitLoadout _loadoutData;
                        LOG_2("Setting ace loadout: %1 for unit %2",_loadoutName,_object);
                        _found = true;
                    };
                } foreach _defaultloadoutsArray;
                if !(_found) exitwith {
                    ERROR_1("Could not find %1 in Default Loadouts!",_loadoutName);
                };
            };
            case "OLSEN": {
                LOG_2("Executing gear class: %1 for unit %2",_loadoutName,_object);
                [_object,_loadoutName] call UO_FW_fnc_OlsenGearScript;
            };
        };
    } else {
        private ["_SystemTag","_loadoutvarname"];
        switch (_GearSystem) do {
            case "ACEAR": {_SystemTag = "ACE_Arsenal"};
            case "OLSEN": {_SystemTag = "Olsen"};
        };
        switch (side _object) do {
            case west: {
                _loadoutvarname = format ["UO_FW_GearSettings_%1_LoadoutType_Blufor_%2",_SystemTag,_objectClass];
            };
            case east: {
                _loadoutvarname = format ["UO_FW_GearSettings_%1_LoadoutType_Opfor_%2",_SystemTag,_objectClass];
            };
            case independent: {
                _loadoutvarname = format ["UO_FW_GearSettings_%1_LoadoutType_Indfor_%2",_SystemTag,_objectClass];
            };
            case civilian: {
                _loadoutvarname = format ["UO_FW_GearSettings_%1_LoadoutType_CIV_%2",_SystemTag,_objectClass];
            };
        };
        private _loadoutName = getMissionConfigValue [_loadoutvarname,"NONE"];
        if (_loadoutName isEqualto "NONE") exitwith {
            ERROR_2("No loadout found for unit: %1 and var %2",_object,_loadoutvarname);
        };
        switch (_GearSystem) do {
            case "ACEAR": {
                private _found = false;
                private _defaultloadoutsArray = getMissionConfigValue ["ace_arsenal_DefaultLoadoutsListAttribute",[]];
                {
                    _x params ["_name","_loadoutData"];
                    if (_loadoutName isEqualto _name) exitwith {
                        _object setUnitLoadout _loadoutData;
                        LOG_2("Setting ace loadout: %1 for unit %2",_loadoutName,_object);
                        _found = true;
                    };
                } foreach _defaultloadoutsArray;
                if !(_found) exitwith {
                    ERROR_1("Could not find %1 in Default Loadouts!",_loadoutName);
                };
            };
            case "OLSEN": {
                LOG_2("Executing gear class: %1 for unit %2",_loadoutName,_object);
                [_object,_loadoutName] call UO_FW_fnc_OlsenGearScript;
            };
        };
    };
    save3DENInventory [_object];
} else {
    private _GearSystem = (_object get3DENAttribute "UO_FW_Gear_VehicleSystemType") select 0;
    private _loadoutName = (_object get3DENAttribute "UO_FW_Gear_VehicleGearManualType") select 0;
    if (_GearSystem isEqualto "NONE") exitwith {};
    switch (_GearSystem) do {
        case "OLSEN": {
            if (_loadoutName isEqualto "") exitwith {
                ERROR_1("Vehicle %1 is set to manual loadout but has none!, exiting gearscript.",_object);
            };
            LOG_2("Executing gear of file: %1 for vehicle %2",_loadoutName,_object);
            [_object,_loadoutName] call UO_FW_fnc_OlsenGearScript;
        };
    };
    save3DENInventory [_object];
};
