/*
 * Author: Olsen
 *
 * Disable tracking of unit by framework.
 * Unit will be ignored in casualty count etc.
 *
 * Arguments:
 * 0: unit to not track <object>
 *
 * Return Value:
 * nothing
 *
 * Public: Yes
 */

#define COMPONENT Core
#include "\x\UO_FW\addons\Main\script_macros.hpp"
UO_FW_EXEC_CHECK(ALL);

["UO_FW_NotTrack_Event", []] call CBA_fnc_serverEvent;
