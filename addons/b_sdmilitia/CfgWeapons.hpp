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
	class CFP_Uniform_RSF_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Archduke";
		displayName="Sudan RSF Uniform (3 Color)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_sdmilitia\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_SDMILITIA_Soldier_base_01";
			containerClass="Supply60";
			mass=20;
		};
	};
};