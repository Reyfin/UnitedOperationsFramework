class EGVAR(ACRE,UnitOptions) {
    displayName = "ACRE Options";
    collapsed = 1;
    class Attributes {
        class EGVAR(ACRE,UNITSETTINGS_Enable) {
            property = QEGVAR(ACRE,UNITSETTINGS_Enable);
            displayName = "Enable ACRE Unit Settings";
            tooltip = "Enables Framework ACRE Settings on this unit";
            control = QEGVAR(Core,CheckBoxStatePlayerOnlyCategory);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "false";
        };
        class EGVAR(ACRE,SR_RADIO_Enabled) {
            property = QEGVAR(ACRE,SR_RADIO_Enabled);
            displayName = "Give Short Range Radio";
            tooltip = "Gives this unit a short range radio defined in ACRE settings";
            control = "CheckBox";
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "false";
        };
        class EGVAR(ACRE,SR_RADIO_CHANNEL) {
            property = QEGVAR(ACRE,SR_RADIO_CHANNEL);
            displayName = "Short Range Radio Channel";
            tooltip = "Sets the short range radio channel of this unit";
            control = QEGVAR(ACRE,ChannelSelect);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,SR_RADIO_EAR) {
            property = QEGVAR(ACRE,SR_RADIO_EAR);
            displayName = "Short Range Radio Ear";
            tooltip = "Sets the short range radio earpiece setting";
            control = QEGVAR(ACRE,EarSetting);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,LR_RADIO_Enabled) {
            property = QEGVAR(ACRE,LR_RADIO_Enabled);
            displayName = "Give Long Range Radio";
            tooltip = "Gives this unit a long range radio defined in ACRE settings";
            control = "CheckBox";
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "false";
        };
        class EGVAR(ACRE,LR_RADIO_CHANNEL) {
            property = QEGVAR(ACRE,LR_RADIO_CHANNEL);
            displayName = "Long Range Radio Channel";
            tooltip = "Sets the long range radio channel of this unit";
            control = QEGVAR(ACRE,ChannelSelect);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,LR_RADIO_EAR) {
            property = QEGVAR(ACRE,LR_RADIO_EAR);
            displayName = "Long Range Radio Ear";
            tooltip = "Sets the long range radio earpiece setting";
            control = QEGVAR(ACRE,EarSetting);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,PK_RADIO_Enabled) {
            property = QEGVAR(ACRE,PK_RADIO_Enabled);
            displayName = "Give Pack Radio";
            tooltip = "Gives this unit a long range pack radio defined in ACRE settings";
            control = "CheckBox";
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "false";
        };
        class EGVAR(ACRE,PK_RADIO_CHANNEL) {
            property = QEGVAR(ACRE,PK_RADIO_CHANNEL);
            displayName = "Pack Radio Channel";
            tooltip = "Sets the long range pack radio channel of this unit";
            control = QEGVAR(ACRE,ChannelSelect);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,PK_RADIO_EAR) {
            property = QEGVAR(ACRE,PK_RADIO_EAR);
            displayName = "Pack Radio Ear";
            tooltip = "Sets the long range pack radio earpiece setting";
            control = QEGVAR(ACRE,EarSetting);
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "1";
        };
        class EGVAR(ACRE,AdditionalLanguage) {
            displayName = "Additional Language";
            tooltip = "Selected Language will be added to the list of spoken Babbel langauges. The language must be defined in the main acre settings.";
            property = QEGVAR(ACRE,AdditionalLanguage);
            control = QEGVAR(ACRE,AdditionalLanguageAttribute);
            typeName = "STRING";
            expression = ENTITY_EXPRESSION;
            condition = "objectControllable";
            defaultValue = "'None'";
        };
        class EGVAR(ACRE,VehicleACRE_Enabled) {
            property = QEGVAR(ACRE,VehicleACRE_Enabled);
            displayName = "Enable ACRE Vehicle Settings";
            tooltip = "Enable ACRE Vehicle Settings";
            control = "CheckBox";
            expression = ENTITY_EXPRESSION;
            condition = "objectVehicle";
            defaultValue = "false";
        };
        class EGVAR(ACRE,VehicleACREPreset) {
            property = QEGVAR(ACRE,VehicleACREPreset);
            displayName = "Vehicle Rack Preset";
            tooltip = "Will set the vehicles ACRE rack to the selected side. Selecting Default will skip this setting. Requires ACRE Scrambling to be enabled.";
            control = QEGVAR(ACRE,VehicleRadioPresetAttribute);
            typeName = "STRING";
            expression = ENTITY_EXPRESSION;
            condition = "objectVehicle";
            defaultValue = "''";
        };
    };
};
