
//PuertoRico

	class PuertoRico_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Puerto Rico";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\PuertoRico\PuertoRico.paa""";
		};
	};

