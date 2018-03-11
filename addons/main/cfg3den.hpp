// Eden attribute to allow mission makers to override scripted loadouts.
class Cfg3DEN
{
      // Configuration of all objects
      class Object
      {
            // Categories collapsible in "Edit Attributes" window
            class AttributeCategories
            {
                  // Category class, can be anything
                  class State
                  {
                        class Attributes
                        {
                              // Attribute class, can be anything
                              class ALiVE_OverrideLoadout
                              {
                                    //--- Mandatory properties
                                    displayName = "Override ALiVE ORBAT Loadout"; // Name assigned to UI control class Title
                                    tooltip = " ALiVE ORBAT Creator units have scripted loadouts. Enable this to override these loadouts."; // Tooltip assigned to UI control class Title
                                    property = "ALiVE_OverrideLoadout"; // Unique config property name saved in SQM
                                    control = "Checkbox"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes

                                    // Expression called when applying the attribute in Eden and at the scenario start
                                    // The expression is called twice - first for data validation, and second for actual saving
                                    // Entity is passed as _this, value is passed as _value
                                    // %s is replaced by attribute config name. It can be used only once in the expression
                                    // In MP scenario, the expression is called only on server.
                                    expression = "_this setVariable ['%s',_value];";

                                    // Expression called when custom property is undefined yet (i.e., when setting the attribute for the first time)
                                    // Entity is passed as _this
                                    // Returned value is the default value
                                    // Used when no value is returned, or when it's of other type than NUMBER, STRING or ARRAY
                                    // Custom attributes of logic entities (e.g., modules) are saved always, even when they have default value
                                    defaultValue = "false";

                                    //--- Optional properties
                                    condition = "objectControllable";
                                    typeName = "BOOL"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
                              };
                              // Attribute class, can be anything
                              class CFP_DisableRandom : CFP_OverrideLoadout
                              {
                                    displayName = "Disable CFP Randomization";
                                    tooltip = "Some CFP units have randomized weapons and/or items. Some vehicles have random textures. Enable this to disable randomization."; // Tooltip assigned to UI control class Title
                                    property = "CFP_DisableRandom";
                                    condition = "objectControllable + objectVehicle";
                              };
                        };
                  };
            };
      };
};