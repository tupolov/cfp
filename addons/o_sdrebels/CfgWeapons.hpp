#define HITPOINTS_HEAD(ARMOUR,PT) \
        class HitpointsProtectionInfo \
        { \
            class Head \
            { \
                hitpointName = "HitHead"; \
                armor = ARMOUR; \
                passThrough = PT; \
            }; \
        };

class cfgWeapons
{
	class UniformItem;
	class VestItem;
	class ItemCore;
	class HeadgearItem;
	class CFP_Uniform_NRF_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="T-Shirt (Justice and Equality Movement)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\o_sdrebels\Data\UI\JEM.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SDRebels_Soldier_base_01";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_NRF_02: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (ChocChip)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\o_sdrebels\Data\UI\SRF.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SDRebels_Soldier_base_Guerilla";
			containerClass="Supply60";
			mass=20;
		};
	};
};