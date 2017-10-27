
//NorthKorea

	class NorthKorea_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "North Korea";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\NorthKorea\NorthKorea.paa""";
		};
	};

