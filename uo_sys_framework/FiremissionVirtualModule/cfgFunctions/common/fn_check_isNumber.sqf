#define COMPONENT FiremissionVirtual
#include "\x\UO_FW\addons\Main\script_macros.hpp"
params ["_value","_errorText"];

private _ret = true;

if(_value < 0) then {
	hint _errorText;

	_ret = false;
};

_ret