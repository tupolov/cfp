

/*GhillieHat

class CfgVehicleClasses
{
	class CFP_GhillieHat
	{
		displayName = "Ghillie Hat";
	};
};
*/
	class SP_GhillieHat_Forrest: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Forrest)";
		picture = "\x\cfp\addons\headgear\GhillieHat\ui\Forrest.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Forrest.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Forrest.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_GhillieHat_Tropical: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Tropical)";
		picture = "\x\cfp\addons\headgear\GhillieHat\ui\Tropical.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Tropical.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Tropical.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};
	class SP_GhillieHat_Summer: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ghillie Hat (Summer)";
		picture = "\x\cfp\addons\headgear\GhillieHat\ui\Summer.jpg";
		model = "\x\cfp\addons\character\Models\GhillieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Summer.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";
		
		

		class ItemInfo: HeadgearItem
		{
			mass = 60;
			uniformmodel = "\x\cfp\addons\character\Models\GhillieHat";
			modelSides[] = {3,1};
			armor = 10;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GhillieHat\Summer.paa"};
			hiddenSelections[] = {"Camo"};		};
		};
	
