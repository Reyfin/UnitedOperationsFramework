#define COMPONENT Spectator
#include "\x\UO_FW\addons\Main\script_macros.hpp"
UO_FW_EXEC_CHECK(CLIENT);

//37 is DIK code for K
if ((_this select 1) isEqualto 37) then {
    if (UO_FW_killcam_toggle) then {
        UO_FW_SETMVAR(killcam_toggle,false);
        "KillCamLayer" cutText ["", "PLAIN DOWN"];
    } else {
        UO_FW_SETMVAR(killcam_toggle,true);
        "KillCamLayer" cutText ["Line shows LINE OF SIGHT from postion of enemy to player's position during the time of death.\nPress K to toggle hud markers off.\n\nTHIS FRAMEWORK FEATURE IS WIP. It may contain bugs and may be updated or changed at any point.", "PLAIN DOWN"];
    };
};
