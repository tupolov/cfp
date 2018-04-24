
//Somalia

	class Somalia_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Somalia";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Somalia\Somalia.paa""";
		};
	};
	class Somali_Pirates_Flag: FlagPole_F
	{
		scope = 2;
		accuracy = 10000;
		displayName = "Somali Pirates";
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\x\cfp\addons\flags\Somalia\Somali_Pirates.paa""";
		};
	};

