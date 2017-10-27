
//EastTimor

	class EastTimor_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "East Timor";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\EastTimor\EastTimor.paa""";
		};
	};

