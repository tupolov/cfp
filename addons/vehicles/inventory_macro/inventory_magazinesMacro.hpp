#define TRANSPORTMAGAZINESEMPTY class TransportMagazines{};

#define TRANSPORTMAGAZINESBASIC(SMOKESHELL,SMOKESHELL_COLORED)					\
class TransportMagazines									\
{															\
	class _xx_##SMOKESHELL									\
	{														\
		magazine = SMOKESHELL;								\
		count = 2;											\
	};														\
	class _xx_##SMOKESHELL_COLORED							\
	{														\
		magazine = SMOKESHELL_COLORED;						\
		count = 2;											\
	};														\
	class _xx_Chemlight_Red									\
	{														\
		magazine = Chemlight_Red;							\
		count = 2;											\
	};														\
};					

#define TRANSPORTMAGAZINESSMALL(RIFLE_MAG,SMOKESHELL,SMOKESHELL_COLORED)			\
class TransportMagazines									\
{															\
	class _xx_##RIFLE_MAG									\
	{														\
		magazine = RIFLE_MAG;								\
		count = 10;											\
	};														\
	class _xx_##SMOKESHELL									\
	{														\
		magazine = SMOKESHELL;								\
		count = 2;											\
	};														\
	class _xx_##SMOKESHELL_COLORED							\
	{														\
		magazine = SMOKESHELL_COLORED;						\
		count = 2;											\
	};														\
	class _xx_Chemlight_Red									\
	{														\
		magazine = Chemlight_Red;							\
		count = 2;											\
	};														\
};						

#define TRANSPORTMAGAZINESMEDIUM(RIFLE_MAG,LAUNCHER_MAG,SMOKESHELL,SMOKESHELL_COLORED)			\
class TransportMagazines									\
{															\
	class _xx_##RIFLE_MAG									\
	{														\
		magazine = RIFLE_MAG;								\
		count = 20;											\
	};														\
	class _xx_##LAUNCHER_MAG								\
	{														\
		magazine = LAUNCHER_MAG;							\
		count = 2;											\
	};														\
	class _xx_##SMOKESHELL									\
	{														\
		magazine = SMOKESHELL;								\
		count = 2;											\
	};														\
	class _xx_##SMOKESHELL_COLORED							\
	{														\
		magazine = SMOKESHELL_COLORED;						\
		count = 2;											\
	};														\
	class _xx_Chemlight_Red									\
	{														\
		magazine = Chemlight_Red;							\
		count = 2;											\
	};														\
};					

#define TRANSPORTMAGAZINESLARGE(RIFLE_MAG,LMG_MAG,GL_MAG,LAUNCHER_MAG,GRENADE,SMOKESHELL,SMOKESHELL_COLORED)			\
class TransportMagazines									\
{															\
	class _xx_##RIFLE_MAG									\
	{														\
		magazine = RIFLE_MAG;								\
		count = 20;											\
	};														\
	class _xx_##LMG_MAG										\
	{														\
		magazine = LMG_MAG;									\
		count = 4;											\
	};														\
	class _xx_##GL_MAG										\
	{														\
		magazine = GL_MAG;									\
		count = 10;											\
	};														\
	class _xx_##LAUNCHER_MAG								\
	{														\
		magazine = LAUNCHER_MAG;							\
		count = 2;											\
	};														\
	class _xx_##GRENADE										\
	{														\
		magazine = GRENADE;									\
		count = 4;											\
	};														\
	class _xx_##SMOKESHELL									\
	{														\
		magazine = SMOKESHELL;								\
		count = 4;											\
	};														\
	class _xx_##SMOKESHELL_COLORED							\
	{														\
		magazine = SMOKESHELL_COLORED;						\
		count = 4;											\
	};														\
	class _xx_Chemlight_Red									\
	{														\
		magazine = Chemlight_Red;							\
		count = 4;											\
	};														\
};		