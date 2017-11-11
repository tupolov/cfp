class FlagChecked_F;
class IS_Flag_1 : FlagChecked_F
{
	_generalMacro="FlagCarrier";
	faction="CFP_O_IS";
	vehicleClass="IS_Flags";
	scope=2;
	side=4;
	accuracy=1000;
	displayName="Flag IS 1";
	armor=1;
	class EventHandlers
	{
		init="(_this select 0) setFlagTexture ""\CFP_Iraq_Syria_v\Flags\ISC_flag_IS_1.paa""";
	};
};
class IS_Flag_2 : FlagChecked_F
{
	_generalMacro="FlagCarrier";
	faction="CFP_O_IS";
	vehicleClass="IS_Flags";
	scope=2;
	side=4;
	accuracy=1000;
	displayName="Flag IS 2";
	armor=1;
	class EventHandlers
	{
		init="(_this select 0) setFlagTexture ""\CFP_Iraq_Syria_v\Flags\ISC_flag_IS_2.paa""";
	};
};
class IS_Flag_3 : FlagChecked_F
{
	_generalMacro="FlagCarrier";
	faction="CFP_O_IS";
	vehicleClass="IS_Flags";
	scope=2;
	side=4;
	accuracy=1000;
	displayName="Flag IS 3";
	armor=1;
	class EventHandlers
	{
		init="(_this select 0) setFlagTexture ""\CFP_Iraq_Syria_v\Flags\ISC_flag_IS_3.paa""";
	};
};

class YPG_Flag : FlagChecked_F
{
	_generalMacro = "FlagCarrier";
	faction = "CFP_B_YPG";
	vehicleClass = "YPG_Flags";
	scope = 2;
	side = 4;
	accuracy = 1000;
	displayName = "Flag YPG";
	armor = 1;
	class EventHandlers
	{
		init = "(_this select 0) setFlagTexture ""\CFP_Iraq_Syria_v\Flags\ISC_flag_YPG.paa""";
	};
};
