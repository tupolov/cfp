
#define TRANSPORTWEAPONSEMPTY class TransportWeapons{};

#define TRANSPORTWEAPONSSMALL(RIFLE)						\
class TransportWeapons										\
{															\
	class _xx_##RIFLE										\
	{														\
		weapon = RIFLE;										\
		count = 1;											\
	};														\
};															

#define TRANSPORTWEAPONSMEDIUM(RIFLE,LAUNCHER)				\
class TransportWeapons										\
{															\
	class _xx_##RIFLE										\
	{														\
		weapon = RIFLE;										\
		count = 2;											\
	};														\
	class _xx_##LAUNCHER									\
	{														\
		weapon = LAUNCHER;									\
		count = 1;											\
	};														\
};																		

#define TRANSPORTWEAPONSLARGE(RIFLE,LAUNCHER)				\
class TransportWeapons										\
{															\
	class _xx_##RIFLE										\
	{														\
		weapon = RIFLE;										\
		count = 4;											\
	};														\
	class _xx_##LAUNCHER									\
	{														\
		weapon = LAUNCHER;									\
		count = 2;											\
	};														\
};															
