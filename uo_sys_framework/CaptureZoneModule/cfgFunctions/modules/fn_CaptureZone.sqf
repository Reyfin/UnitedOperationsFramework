#include "\x\UO_FW\addons\Main\script_macros.hpp"
UO_FW_EXEC_CHECK(SERVER);

params [["_mode","",[""]],["_input",[],[[]]]];
switch (_mode) do {
    // Default object init
    case "init": {
        if (!is3DEN) then {
            _input params ["_logic",["_isActivated",true,[true]]];
            if !(_isActivated) exitWith {};
            private _zoneName = _logic getVariable ["UO_FW_CaptureZone_ZoneName",""];
            private _loc = getPosATL _logic;
            private _radiusX = _logic getVariable ["UO_FW_CaptureZone_RadiusX",100];
            private _radiusY = _logic getVariable ["UO_FW_CaptureZone_RadiusY",100];
            private _direction = getdir _logic;
            private _isRectangle = if ((typeof _logic) isEqualTo "UO_FW_CaptureZoneModule_R") then {true} else {false};
            private _area = [_loc,_radiusX,_radiusY,_direction,_isRectangle];
            private _interval = _logic getVariable ["UO_FW_CaptureZone_SleepInterval",15];
            private _repeatable = _logic getVariable ["UO_FW_CaptureZone_Repeatable",true];
            private _ratioNeeded = _logic getVariable ["UO_FW_CaptureZone_RatioNeeded",0.75];
            private _BluforCap = (_logic getVariable ["UO_FW_CaptureZone_Cap_Blufor",0]);
            private _OpforCap = (_logic getVariable ["UO_FW_CaptureZone_Cap_Opfor",0]);
            private _INDFORCap = (_logic getVariable ["UO_FW_CaptureZone_Cap_INDFOR",0]);
            private _CIVCap = (_logic getVariable ["UO_FW_CaptureZone_Cap_CIV",0]);
            private _BluforTime = (_logic getVariable ["UO_FW_CaptureZone_Time_Blufor",30]);
            private _OpforTime = (_logic getVariable ["UO_FW_CaptureZone_Time_Opfor",30]);
            private _INDFORTime = (_logic getVariable ["UO_FW_CaptureZone_Time_INDFOR",30]);
            private _CIVTime = (_logic getVariable ["UO_FW_CaptureZone_Time_CIV",30]);
            private _BluforMessage = (_logic getVariable ["UO_FW_CaptureZone_Message_Blufor",["BLUFOR is capturing the zone!","BLUFOR has captured the zone!"]]);
            private _OpforMessage = (_logic getVariable ["UO_FW_CaptureZone_Message_Opfor",["OPFOR is capturing the zone!","OPFOR has captured the zone!"]]);
            private _INDFORMessage = (_logic getVariable ["UO_FW_CaptureZone_Message_INDFOR",["Independent is capturing the zone!","Independent has captured the zone!"]]);
            private _CIVMessage = (_logic getVariable ["UO_FW_CaptureZone_Message_CIV",["Civilian is capturing the zone!","Civilian has captured the zone!"]]);
            private _ContestedMessage = (_logic getVariable ["UO_FW_CaptureZone_ContestedMessage","The zone is contested!"]);
            private _UncontestedMessage = (_logic getVariable ["UO_FW_CaptureZone_UncontestedMessage","The zone is uncontested!"]);
            private _colours = _logic getVariable ["UO_FW_CaptureZone_Colours",["ColorBlue","ColorRed","ColorGreen","ColorYellow","ColorWhite","ColorKhaki"]];
            private _hidden = _logic getVariable ["UO_FW_CaptureZone_Hidden",false];
            private _silent = _logic getVariable ["UO_FW_CaptureZone_Silent",false];
            private _automessages = _logic getVariable ["UO_FW_CaptureZone_AutoMessages",false];
            private _cond = _logic getVariable ["UO_FW_CaptureZone_Condition","true"];
            [_logic,_zoneName,_area,_interval,_repeatable,[_BluforCap,_OpforCap,_INDFORCap,_CIVCap],[_BluforTime,_OpforTime,_INDFORTime,_CIVTime],[_BluforMessage,_OpforMessage,_INDFORMessage,_CIVMessage,_ContestedMessage,_UncontestedMessage],_colours,_hidden,_silent,_automessages,_ratioNeeded,_cond] call UO_FW_fnc_CaptureZoneLoop;
        };
    };
    // When some attributes were changed (including position and rotation)
    case "attributesChanged3DEN": {
        private _logic = _input param [0,objNull,[objNull]];
        private _radiusX = _logic getVariable ["UO_FW_CaptureZone_RadiusX",_logic getVariable ["UO_FW_CaptureZone_RadiusX", 100]];
        private _radiusY = _logic getVariable ["UO_FW_CaptureZone_RadiusY",_logic getVariable ["UO_FW_CaptureZone_RadiusY", 100]];
        set3DENAttributes [[[_logic],"size2",[_radiusX,_radiusY]]];
    };
    default {};
};
true
