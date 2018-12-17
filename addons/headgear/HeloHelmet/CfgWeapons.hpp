

/*M1Helmet

class CfgVehicleClasses
{
	class CFP_SOARCREW
	{
		displayName = "SOAR Crew Helmet";
	};
};
*/
class CFP_SOARCREW_SKULL: ItemCore
    {
    picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName="SOAR Crew Helmet (Skull)";
	model="A3\Characters_F\Common\headgear_helmet_heli_shield";
	hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarskull.paa"};
	hiddenSelections[] = {"Camo"};
	author = "AuburnAlumni";
        ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)

	class ItemInfo: HeadgearItem
	{
		mass = 60;
		uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		modelSides[] = {3,1};
		armor = 6;
		passThrough = 0.50;
		HITPOINTS_HEAD(10,0.30)
		hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarskull.paa"};
		hiddenSelections[] = {"Camo"};

	};
};

class CFP_SOARCREW_RED: ItemCore
    {
    picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName="SOAR Crew Helmet (Red)";
	model="A3\Characters_F\Common\headgear_helmet_heli_shield";
	hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarred.paa"};
	hiddenSelections[] = {"Camo"};
	author = "AuburnAlumni";
        ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)

	class ItemInfo: HeadgearItem
	{
		mass = 60;
		uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		modelSides[] = {3,1};
		armor = 6;
		passThrough = 0.50;
		HITPOINTS_HEAD(10,0.30)
		hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarred.paa"};
		hiddenSelections[] = {"Camo"};

	};
};

class CFP_SOARCREW_BLUE: ItemCore
    {
    picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName="SOAR Crew Helmet (Blue)";
	model="A3\Characters_F\Common\headgear_helmet_heli_shield";
	hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarblue.paa"};
	hiddenSelections[] = {"Camo"};
	author = "AuburnAlumni";
        ace_hearing_protection = 0.85;  // Protection against deafening (0 to 1, higher means more protection)
        ace_hearing_lowerVolume = 0.60;  // Muffling of the sound (0 to 1, higher means more muffling)

	class ItemInfo: HeadgearItem
	{
		mass = 60;
		uniformmodel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		modelSides[] = {3,1};
		armor = 6;
		passThrough = 0.50;
		HITPOINTS_HEAD(10,0.30)
		hiddenSelectionsTextures[] = {"x\cfp\addons\headgear\HeloHelmet\soarblue.paa"};
		hiddenSelections[] = {"Camo"};

	};
};
