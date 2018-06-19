	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class CFP_ANPEQ15_Black: ItemCore
	{
		author = "CFP";
		scope = 2;
		inertia = 0.1;
		displayName = "ANPEQ-15 (Black)";
		picture = "\CUP\Weapons\CUP_Weapons_West_Attachments\AN_PEQ_15\data\ui\gear_accv_an_peq15_ca.paa";
		model = "\x\cfp\addons\weapons\ANPEQ15\CUP_anpeq15.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class Pointer
			{
				RMBhint = "Laser Pointer";
				irLaserPos = "laser pos";
				irLaserEnd = "laser dir";
				irDistance = 5;
			};
			class FlashLight{};
		};
	};
