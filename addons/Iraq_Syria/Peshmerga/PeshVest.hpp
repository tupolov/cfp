class PESH_Vest: Vest_Camo_Base
{
	scope = 2;
	displayName = "Peshmerga Chest Rig";
	model = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
	hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Chestrigs\Pesh_Vest.paa"};
	class ItemInfo: VestItem
	{
		uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		containerClass = "Supply100";
		hiddenSelections[] = {"camo"};
		mass = 80;
		
        class HitpointsProtectionInfo
		{
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};