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
	class CFP_Uniform_SPLMN_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Archduke";
		displayName="Rebel Uniform (ChocChip)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SDRebels_Soldier_base_01";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Cap_SPLMN_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Archduke";
		displayName="SPLMN Patrol Cap (ChocChip)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_sdrebels\Data\Cap_Chip.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\x\cfp\addons\models\PatrolCap";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\x\cfp\addons\i_sdrebels\Data\Cap_Chip.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
};