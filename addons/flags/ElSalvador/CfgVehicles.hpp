
//ElSalvador

	class ElSalvador_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "El Salvador";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\ElSalvador\ElSalvador.paa""";
		};
	};

