

/*Mich2000

class CfgVehicleClasses
{
	class CFP_Mich2000
	{
		displayName = "Mich 2000 Helmet";
	};
};
*/
	class CFP_Mich2000_USArmy: ItemCore
    {
        picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_H_USMC_HelmetWDL_ca.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mich 2000 (OCP)";
		// picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ui\icon_H_USMC_HelmetWDL_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_h_usarmy_mich.p3d";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mich2000\tex2_ocp.paa"};
		hiddenSelections[] = {"Camo1"};
		author = "AuburnAlumni";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_h_usarmy_mich.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 3;
			passThrough = 0.5;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\Mich2000\tex2_ocp.paa"};
			hiddenSelections[] = {"Camo1"};
		};
	};
