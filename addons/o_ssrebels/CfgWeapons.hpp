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
	class CFP_Uniform_SPLM_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Archduke";
		displayName="Rebel Uniform (Woodland)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_01";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_02: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		author="Archduke";
		displayName="Militia Uniform (Pixel/Khaki)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_02";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_03: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (Woodland/Open)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_Hunter";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_04: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (Woodland/Rolled)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_Guerrilla";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_05: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Militia Uniform (Khaki/Woodland)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_05";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_06: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Battle Dress Uniform (Woodland)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_BDU";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_07: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (DDPM)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_07";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_08: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Battle Dress Uniform (Pixel)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_08";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_09: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Battle Dress Uniform (Police)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_09";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_10: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Militia Uniform (Khaki/Woodland/Open)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_10";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Militia Uniform (Blue/Police)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_11";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_12: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Brown/ChocChip)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_Civil";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_13: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Blue/Khaki)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_13";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_14: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Green/Blue)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_14";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_15: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Khaki/Blue)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_15";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_16: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (OD)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_16";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_17: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Rebel Uniform (Police)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_17";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_18: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Green/Woodland)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_18";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_19: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Woodland/Blue)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_19";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_20: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Black/Blue)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_20";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_21: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Tan/DDPM)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_21";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_22: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Clothes (Black/Police)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_22";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_23: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Soldier Uniform (Woodland)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_Taki";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_24: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Soldier Uniform (Green)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_23";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_25: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Soldier Uniform (DDPM)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_24";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_26: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Battle Dress Uniform (Brown Digital)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_25";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_SPLM_27: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Soldier Uniform (Green Digital)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_O_SSREBELS_Soldier_Base_26";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CUP_Vest_TKI_Camo_Base;
	class CFP_Chest_Rig_SPLM_01: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="Battle Dress Uniform Chest Rig (Woodland)";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Chest_Rig_Wdl.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Chest_Rig_SPLM_02: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="Battle Dress Uniform Chest Rig (Woodland/Green)";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Chest_Rig_Wdl_Green.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Chest_Rig_SPLM_03: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="Battle Dress Uniform Chest Rig (Woodland/Tan)";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Chest_Rig_Wdl_Tan.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Chest_Rig_SPLM_04: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="Battle Dress Uniform Chest Rig (ChocChip/Tan)";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Chest_Rig_Choc_Tan.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket4.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Jacket_SPLM_01: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="Woodland Jacket";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Jacket_Wdl.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Jacket_SPLM_02: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="OD Jacket";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Jacket_OD.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Jacket_SPLM_03: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_CFP_TakJacket_ChocChip.paa";
		scope=2;
		displayName="DDPM Jacket";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\o_ssrebels\Data\Jacket_DDPM.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_Taki_Jacket.p3d";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class CFP_Bandolier_SPLM_01: CUP_Vest_TKI_Camo_Base
	{
		picture="\x\cfp\addons\vests\data\ui\icon_SP_Bandolier1_Green.paa";
		scope=2;
		displayName="MG Bandolier";
		model="\x\cfp\addons\models\Bandolier1";
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\vests\Bandolier1\Green.paa"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		author="Archduke";
		class ItemInfo: VestItem
		{
			uniformModel="\x\cfp\addons\models\Bandolier1";
			containerClass="Supply250";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
};