
//SanMarino

	class SanMarino_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "San Marino";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\SanMarino\SanMarino.paa""";
		};
	};

