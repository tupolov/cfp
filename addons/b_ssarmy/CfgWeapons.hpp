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
	class CFP_Uniform_Sudan_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Arid Digital)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_01";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_02: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Arid Digital)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_02";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_03: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Brown Digital)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_03";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_04: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Brown Digital)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_04";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_05: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese RSF Digital)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_05";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_06: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese RSF Digital)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_06";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_07: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Pixel)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_07";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_08: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Pixel)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_08";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_09: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Leaf)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_09";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_10: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Leaf)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_10";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_11: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Police)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_11";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_12: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Police)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_12";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_13: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Desert)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_13";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_14: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Desert)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_14";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_15: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Field Uniform (Sudanese Desert Variant)";
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_15";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_16: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Desert Variant)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_16";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_17: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Police Desert)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_17";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Uniform_Sudan_18: ItemCore
	{
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		scope=2;
		model="\x\cfp\addons\models\Suitpack";
		displayName="Battle Dress Uniform (Sudanese Speckle)";
		author="Archduke";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="CFP_B_soldier_base_Sudan_18";
			containerClass="Supply60";
			mass=20;
		};
	};
	class CFP_Beret_Brown_Sudan: ItemCore
	{
		scope=2;
		scopeArsenal=2;

		author="Archduke";
		displayName="Sudanese Brown Beret";
		picture="\x\cfp\addons\b_ssarmy\Data\UI\Sudan.paa";
		model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Beret.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"x\cfp\addons\b_ssarmy\Data\Beret_Brown.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Beret.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"x\cfp\addons\b_ssarmy\Data\Beret_Brown.paa"
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
	class CFP_PASGTHelmet_Sudan_01: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Arid Digital)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Digital.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Digital.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_PASGTHelmet_Sudan_02: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Arid Digital)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Brown.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Brown.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_PASGTHelmet_Sudan_03: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Arid Digital)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Pixel.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Pixel.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_PASGTHelmet_Sudan_04: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Arid Digital)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Leaf.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Leaf.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_PASGTHelmet_Sudan_05: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Desert)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Sword.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Sword.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_PASGTHelmet_Sudan_06: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_PASGTHelmet_Black1.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "PASGT Helmet (Sudanese Desert)";
		// picture = "\x\cfp\addons\headgear\PASGTHelmet\ui\Black1.jpg";
		model = "\x\cfp\addons\models\PASGTHelmet1";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Sword2.paa"};
		hiddenSelections[] = {"Camo"};
		author = "Archduke";



		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\models\PASGTHelmet1";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			HITPOINTS_HEAD(10,0.30)
			hiddenSelectionsTextures[] = {"\x\cfp\addons\b_ssarmy\Data\PASGT_Sudan_Sword2.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class CFP_Cap_Sudan_01: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Arid Digital)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Sudan.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Sudan.paa"
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
	class CFP_Cap_Sudan_02: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Brown Digital)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Brown.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Brown.paa"
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
	class CFP_Cap_Sudan_03: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese RSF)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Green.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Green.paa"
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
	class CFP_Cap_Sudan_04: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Pixel)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Pixel.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Pixel.paa"
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
	class CFP_Cap_Sudan_05: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Leaf)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Leaf.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Leaf.paa"
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
	class CFP_Cap_Sudan_06: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Police)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Police.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Police.paa"
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
	class CFP_Cap_Sudan_07: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Desert)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Sword.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Sword.paa"
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
	class CFP_Cap_Sudan_08: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Desert Variant)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Sword2.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Sword2.paa"
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
	class CFP_Cap_Sudan_09: ItemCore
	{
		scope=2;
		scopeArsenal=2;
		dlc="CFP_Sudan";
		author="Archduke";
		displayName="Patrol Cap (Sudanese Police Desert)";
		picture="";
		model="\x\cfp\addons\models\PatrolCap";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\cfp\addons\b_ssarmy\Data\Cap_Police2.paa"
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
				"\x\cfp\addons\b_ssarmy\Data\Cap_Police2.paa"
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
};