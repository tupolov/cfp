
//CapeVerde

	class CapeVerde_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Cape Verde";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\CapeVerde\CapeVerde.paa""";
		};
	};

