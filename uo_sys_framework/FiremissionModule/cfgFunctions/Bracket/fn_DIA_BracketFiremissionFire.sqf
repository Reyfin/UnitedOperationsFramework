#include "..\..\Global\defs.hpp"
_guns = player getVariable [QEGVAR(Firemission,ObsGuns),[]];
_selectedUnit = _guns select (lbValue [BFM_DIA_IDC_GUNSELECT,lbCurSel BFM_DIA_IDC_GUNSELECT]);
_selectedAmmo = lbData [BFM_DIA_IDC_SHELLSELECT, lbCurSel BFM_DIA_IDC_SHELLSELECT];
_startGrid =     ctrlText BFM_DIA_IDC_STARTGRID;
_endGrid =  ctrlText BFM_DIA_IDC_ENDGRID;
_salvoNumber = (ctrlText BFM_DIA_IDC_BURSTNUMBER) call BIS_fnc_parseNumber;
_salvoRounds = (ctrlText BFM_DIA_IDC_BURSTROUNDS) call BIS_fnc_parseNumber;
_salvoDelay = (ctrlText BFM_DIA_IDC_BURSTDELAY) call BIS_fnc_parseNumber;
_spotting =  (ctrlText BFM_DIA_IDC_SPOTTING) call BIS_fnc_parseNumber;
_inputIsCorrect = true;
_inputIsCorrect = _inputIsCorrect && [_selectedUnit,"No Arty selected/aviable"] call EFUNC(Firemission,InputIsUnit);
_inputIsCorrect = _inputIsCorrect && [_salvoNumber,"Salvo number is not a number"] call EFUNC(Firemission,InputIsNumber);
_inputIsCorrect = _inputIsCorrect && [_salvoRounds,"Salvo rounds is not a number"] call EFUNC(Firemission,InputIsNumber);
_inputIsCorrect = _inputIsCorrect && [_salvoDelay,"Salvo delay is not a number"] call EFUNC(Firemission,InputIsNumber);
_inputIsCorrect = _inputIsCorrect && [_spotting,"Spotting distance is not a number"] call EFUNC(Firemission,InputIsNumber);

if (_inputIsCorrect) then {
                    hint (([_selectedUnit,[_startGrid,true] call CBA_fnc_mapGridToPos,[_endGrid,true] call CBA_fnc_mapGridToPos,_salvoNumber,_salvoRounds,_salvoDelay,_spotting,_selectedAmmo] call EFUNC(Firemission,GetBracketFiremissionText))
                        + "Requested by:" + (name player)
                        + "\nETA: " + str (round ((_selectedUnit call EFUNC(Firemission,GetArtyAimTime)) + ([_selectedUnit,[_startGrid,true] call CBA_fnc_mapGridToPos,_selectedAmmo] call EFUNC(Firemission,GetArtyEta)))) + " s");
                    [QEGVAR(Firemission,CallBracketFiremission), [player,_selectedUnit,_selectedAmmo,_startGrid,_endGrid,_salvoNumber,_salvoRounds,_salvoDelay,_spotting,_selectedAmmo]] call CBA_fnc_serverEvent;
                    [] call EFUNC(BracketFiremission,DIA_BracketFiremissionCloseDialog);
};




