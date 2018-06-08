
//Sudan

	class Sudan_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Sudan";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Sudan\Sudan.paa""";
		};
	};
	class Sudan_Revolutionary_Front_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Sudan Revolutionary Front";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Sudan\Sudan_Revolutionary_Front.paa""";
		};
	};
