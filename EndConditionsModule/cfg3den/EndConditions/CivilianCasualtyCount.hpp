class CasualtyCount_CAT_CIVILIAN
{
    displayName = "CIVILIAN Casualty Count";
    collapsed = 1;
    class Attributes
    {
        class UO_FW_CasualtyCount_CIVILIAN_Enabled
        {
            property = "UO_FW_CasualtyCount_CIVILIAN_Enabled";
            displayName = "Enable End Condition";
            tooltip = "Enables casualty limit for this team";
            control = "CheckBoxState";
            expression="missionNamespace setVariable ['%s', _value]; %s = _value;";
            defaultValue = "false";
        };
        class UO_FW_CasualtyCount_CIVILIAN_Percentage
        {
            property = "UO_FW_CasualtyCount_CIVILIAN_Percentage";
            displayName = "Casualty Percentage";
            tooltip = "End condition fires when team casualty percentage is over this number";
			control = "EditShort";
            expression="missionNamespace setVariable ['%s',_value];";
			validate = "number";
            defaultValue = "75";
        };
		class UO_FW_CasualtyCount_CIVILIAN_EndCondition_Apply
        {
            property = "UO_FW_CasualtyCount_CIVILIAN_EndCondition_Apply";
            displayName = "End Condition Categories";
            tooltip = "Apply this requirement to selected end conditions";
            control = "UO_FW_ENDCONDITIONS_SELECT";
            expression="missionNamespace setVariable ['%s', _value]; %s = _value;";
            defaultValue = "[]";
        };
    };
};