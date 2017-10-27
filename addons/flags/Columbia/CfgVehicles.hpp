
//Columbia

	class Columbia_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Columbia";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Columbia\Columbia.paa""";
		};
	};
	class Columbia_NationalArmy_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Columbia (National Army)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Columbia\NationalArmy.paa""";
		};
	};
	class Columbia_NationalAirForce_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Columbia (National Air Force)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Columbia\NationalAirForce.paa""";
		};
	};
	class Columbia_NationalNavy_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Columbia (National Navy)";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Columbia\NationalNavy.paa""";
		};
	};