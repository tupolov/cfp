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
	class CFP_Uniform_SPLA_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Woodland Fatigues";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_01";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_02: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Woodland Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_02";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_03: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Woodland BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_03";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_04: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Olive Fatigues";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_04";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_05: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Olive Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_05";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_06: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Olive BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_06";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_07: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Green Fatigues";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_07";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_08: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Green Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_08";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_09: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Green BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_09";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_10: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA DDPM Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_10";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA DDPM BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_11";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_12: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Tiger Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_12";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_13: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Tiger BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_13";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_14: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA UCP Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_14";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_15: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA UCP BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_15";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_16: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA MARPAT Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_16";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_17: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA MARPAT BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_17";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_18: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_18";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_19: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_19";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_20: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Uniform 2";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_20";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_21: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS BDU 2";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_21";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_22: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Pink DPM Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_22";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_23: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Pink DPM BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_23";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_24: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Orange DPM Uniform";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_24";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_25: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Orange DPM BDU";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_25";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLA_26: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Uniform 3";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\i_ssarmy\Data\UI\SSudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_I_SSArmy_Soldier_base_SPLA_26";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Cap_SPLA_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Woodland Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_Wdl.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_Wdl.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_Cap_SPLA_02: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Green Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_Green.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_Green.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_Cap_SPLA_03: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA Olive Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_Olive.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_Olive.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_Cap_SPLA_04: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA MARPAT Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_Marpat.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_Marpat.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_Cap_SPLA_05: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SPLA DDPM Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_DDPM.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_DDPM.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_Cap_SPLA_06: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="SSPS Patrol Cap";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\i_ssarmy\Data\Cap_Police.paa"
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
				"\x\cfp\addons\i_ssarmy\Data\Cap_Police.paa"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={0,3};
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
	class CFP_TacVest_SPLA: ItemCore
	{
     picture = "\x\cfp\addons\vests\data\ui\icon_SP_Tactical1_Black.paa";
		scope = 2;
		displayName = "Tactical 1 (SPLA Tiger)";
		// picture = "\x\cfp\addons\vests\Tactical1\ui\Black.jpg";
		model = "\x\cfp\addons\models\Tactical1";
		hiddenSelectionsTextures[] = {"x\cfp\addons\i_ssarmy\Data\Vest_Tiger.paa"};
		hiddenSelections[] = {"Camo"};

		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\models\Tactical1";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo"};
			mass = 150;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 18;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 18;
					passThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 18;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};

		};
	};
};