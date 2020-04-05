#define TRANSPORTBACKPACKSEMPTY	class TransportBackpacks{};

#define TRANSPORTBACKPACKSSMALL(BACKPACK)					\
class TransportBackpacks									\
{															\
	class _xx_##BACKPACK									\
	{														\
		backpack = BACKPACK;						 		\
		count = 1;											\
	};														\
};					

#define TRANSPORTBACKPACKSMEDIUM(BACKPACK)					\
class TransportBackpacks									\
{															\
	class _xx_##BACKPACK									\
	{														\
		backpack = BACKPACK;						 		\
		count = 4;											\
	};														\
};					

#define TRANSPORTBACKPACKSLARGE(BACKPACK)					\
class TransportBackpacks									\
{															\
	class _xx_##BACKPACK									\
	{														\
		backpack = BACKPACK;						 		\
		count = 8;											\
	};														\
};				

#define TRANSPORTBACKPACKSHUGE(BACKPACK)					\
class TransportBackpacks									\
{															\
	class _xx_##BACKPACK									\
	{														\
		backpack = BACKPACK;						 		\
		count = 16;											\
	};														\
};				