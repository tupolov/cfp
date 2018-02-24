class CfgPatches
{
    class VSM_Vests_Config
    {
        units[] = {"VSM_Vests_Mod";};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F"};
    };
};




    class CfgVehicles
    {

        class B_AssaultPack_Base;

        class VSM_Eagle_A3: B_AssaultPack_Base {
            scope = 2;
            displayName = "[VSM] EagleIndustries A3 Pack";
            model   = "VSM_Vests\VSM_tactical_backpack\Models\VSM_Tactical_Backpack";
        };
    };


	class cfgWeapons {
    class ItemCore;
    class UniformItem;
    class VestItem;
   	class Vest_Camo_Base: ItemCore

    {
        class ItemInfo;
    };

	//................................................................................
	//      RAV
	//................................................................................

    class VSM_Gen2_BattleBelt_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] Multicam BattleBelt (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\BattleBelt\Models\VSM_Gen2_BattleBelt.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_Gen2BB","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_gen2_battlebelt_multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;


        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\BattleBelt\Models\VSM_Gen2_BattleBelt.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_Gen2BB","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };



    	class VSM_RAV_operator_MulticamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;


		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


		class VSM_RAV_MG_MulticamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_boxmag.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};

			class VSM_RAV_Breacher_MulticamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


		class VSM_RAV_operator_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;


		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


		class VSM_RAV_MG_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_projecthonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};

			class VSM_RAV_Breacher_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


	class VSM_RAV_operator_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;


		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


		class VSM_RAV_MG_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};

			class VSM_RAV_Breacher_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


	class VSM_RAV_operator_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;


		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};


		class VSM_RAV_MG_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};

			class VSM_RAV_Breacher_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
	};








	//................................................................................
	//      MBSS
	//................................................................................
	class VSM_MBSS_Green: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS (Green)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_icon.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_MBSS\MBSS.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_co.paa"};

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_MBSS\MBSS.p3d"; /// what model does the vest use
            containerClass = "Supply70";
            mass = 20;
			passThrough = 1; /// coef of damage passed to total damage
 			hiddenSelections[] = {"camo"};

            class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.4;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.4;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.4;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
            };
		};
	};

	class VSM_MBSS_BLK: VSM_MBSS_Green
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS (Black)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_icon_blk.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_blk_co.paa"}; /// what texture is going to be used

	};

	class VSM_MBSS_TAN: VSM_MBSS_Green
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS (Tan)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_icon_tan.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_tan_co.paa"}; /// what texture is going to be used

	};

	class VSM_MBSS_CB: VSM_MBSS_Green
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS (CB)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_icon_cb.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_cb_co.paa"}; /// what texture is going to be used

	};

	class VSM_MBSS_WTF: VSM_MBSS_Green
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS (WTF???)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_icon_wtf.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_wtf_co.paa"}; /// what texture is going to be used
	};


	//
	// MBSS + PACA
	//

        class VSM_MBSS_PACA_operator: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] MBSS + PACA Operator (Coyote)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_MBSS\vsm_MBSS_PACA.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_MBSS\vsm_MBSS_PACA.p3d"; /// what model does the vest use
            containerClass = "Supply70";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


    		class VSM_MBSS_PACA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS + PACA (Green)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_MBSS\MBSS_PACA.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_co.paa","\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"};

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_MBSS\MBSS_PACA.p3d"; /// what model does the vest use
            containerClass = "Supply70";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
 			hiddenSelections[] = {"camo","camo2"};

            class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
		};
	};

	class VSM_MBSS_PACA_BLK: VSM_MBSS_PACA
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS + PACA (Black)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_blk.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_blk_co.paa","\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"}; /// what texture is going to be used

	};

	class VSM_MBSS_PACA_TAN: VSM_MBSS_PACA
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS + PACA (Tan)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_tan.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_tan_co.paa","\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"}; /// what texture is going to be used

	};

		class VSM_MBSS_PACA_CB: VSM_MBSS_PACA
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS + PACA (CB)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_cb.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_cb_co.paa","\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"}; /// what texture is going to be used

	};

	class VSM_MBSS_PACA_WTF: VSM_MBSS_PACA
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MBSS + PACA (WTF???)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_MBSS\data\mbss_paca_icon_wtf.paa"; /// this icon fits the vest surprisingly well
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_MBSS\data\spec_mbss_wtf_co.paa","\VSM_Vests\Spectergear_MBSS\data\spec_paca_co.paa"}; /// what texture is going to be used

	};

    //
	// LBT
	//

	class VSM_LBT1961_Black: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] LBT 1961a (BLK+BLK)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_LBT\data\icon_blk_blk.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\carrier_rig.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_LBT\data\carrier_black_co.paa","\VSM_Vests\Spectergear_LBT\data\chestrig_black_co.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\carrier_rig.p3d"; /// what model does the vest use
            containerClass = "Supply70";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"camo","camo2","insignia"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        	class VSM_CarrierRig_Operator_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_OD_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA_OD.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        	class VSM_CarrierRig_Breacher_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_OD_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

    class VSM_CarrierRig_Gunner_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA OD LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_oga_od.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_OD_plate.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


            	class VSM_CarrierRig_Operator_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_ProjectHonor.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        	class VSM_CarrierRig_Breacher_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

    class VSM_CarrierRig_Gunner_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ProjectHonor LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_ProjectHonor.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_plate.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


    	class VSM_CarrierRig_Operator_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_multicamtropic_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_multicamtropic.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        	class VSM_CarrierRig_Breacher_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_multicamtropic_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

    class VSM_CarrierRig_Gunner_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] MulticamTropic LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_boxmag.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_multicamtropic_plate.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        	class VSM_CarrierRig_Operator_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        	class VSM_CarrierRig_Breacher_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
		descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"}; /// what texture is going to be used

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

    class VSM_CarrierRig_Gunner_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] OGA LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OGA_plate.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };




    class VSM_LBT1961_CB: VSM_LBT1961_Black
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] LBT 1961a (CB+CB)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_LBT\data\icon_cb_cb.paa"; /// this icon fits the vest surprisingly well
        hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_LBT\data\carrier_coyote_co.paa","\VSM_Vests\Spectergear_LBT\data\chestrig_coyote_co.paa"}; /// what texture is going to be used

    };

    class VSM_LBT1961_GRN: VSM_LBT1961_Black
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] LBT 1961a (GRN+GRN)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_LBT\data\icon_grn_grn.paa"; /// this icon fits the vest surprisingly well
        hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_LBT\data\carrier_green_co.paa","\VSM_Vests\Spectergear_LBT\data\chestrig_green_co.paa"}; /// what texture is going to be used

    };

        class VSM_LBT1961_OGA_OD: VSM_LBT1961_Black
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin - Specter";
		displayName  = "[VSM] ODA OD LBT 1961a"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Spectergear_LBT\data\icon_grn_grn.paa"; /// this icon fits the vest surprisingly well
        hiddenSelectionsTextures[] = {"\VSM_Vests\Spectergear_LBT\data\VSM_OGA_OD_Plate.paa","\VSM_Vests\Spectergear_LBT\data\VSM_OGA_OD_Chestrig.paa"}; /// what texture is going to be used

    };



    class VSM_LBT6094_operator_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] MulticamTropic LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        class VSM_LBT6094_MG_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] MulticamTropic LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_boxmag.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

            class VSM_LBT6094_breacher_multicamTropic: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] MulticamTropic LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_multicamtropic.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        class VSM_LBT6094_operator_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        class VSM_LBT6094_MG_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

            class VSM_LBT6094_breacher_OGA: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        class VSM_LBT6094_operator_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA OD LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\Spectergear_LBT\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        class VSM_LBT6094_MG_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA OD LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\Spectergear_LBT\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA_OD.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

            class VSM_LBT6094_breacher_OGA_OD: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] OGA OD LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\Spectergear_LBT\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA_OD.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

        class VSM_LBT6094_operator_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] ProjectHonor LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };


        class VSM_LBT6094_MG_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] ProjectHonor LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_ProjectHonor.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };

            class VSM_LBT6094_breacher_ProjectHonor: Vest_Camo_Base
	{
		scope = 2; /// scope needs to be 2 to have a visible class
		author = "VanSchmoozin";
		displayName  = "[VSM] ProjectHonor LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa"; /// this icon fits the vest surprisingly well
		model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_ProjectHonor.paa"};
		descriptionShort = $STR_A3_SP_AL_IV;

		class ItemInfo: VestItem
		{
			uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
			passThrough = 1; /// coef of damage passed to total damage
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

			class HitpointsProtectionInfo {
				class Chest {
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};

				class Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};

				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};

				class Body {
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
            };
        };
    };



    	class VSM_FAPC_Operator_MulticamTropic : ItemCore
	{

		scope = 2;
		displayName = "[VSM] MulticamTropic DT FAPC (Operator)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_Breacher_MulticamTropic : ItemCore
	{

		scope = 2;
		displayName = "[VSM] MulticamTropic DT FAPC (Breacher)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc.paa","vsm_vests\spectergear_rav\data\vsm_pouches_multicamtropic.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_MG_MulticamTropic : ItemCore
	{

		scope = 2;
		displayName = "[VSM] MulticamTropic DT FAPC (Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_MulticamTropic.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_multicamtropic.paa","vsm_vests\spectergear_rav\data\vsm_boxmag.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_multicamtropic_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_multicamtropic.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};


	    	class VSM_FAPC_Operator_OGA_OD : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA OD DT FAPC (Operator)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_Breacher_OGA_OD : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA OD DT FAPC (Breacher)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_OD_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA_OD.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_MG_OGA_OD : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA OD DT FAPC (Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA_OD.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA_OD.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_OGA_OD_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA_OD.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA_OD.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

		    	class VSM_FAPC_Operator_OGA : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA DT FAPC (Operator)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_Breacher_OGA : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA DT FAPC (Breacher)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_MG_OGA : ItemCore
	{

		scope = 2;
		displayName = "[VSM] OGA DT FAPC (Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_OGA.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_OGA.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OGA.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OGA.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};



			    	class VSM_FAPC_Operator_ProjectHonor : ItemCore
	{

		scope = 2;
		displayName = "[VSM] ProjectHonor DT FAPC (Operator)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_Breacher_ProjectHonor : ItemCore
	{

		scope = 2;
		displayName = "[VSM] ProjectHonor DT FAPC (Breacher)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_ProjectHonor_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_pouches_ProjectHonor.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	    	class VSM_FAPC_MG_ProjectHonor : ItemCore
	{

		scope = 2;
		displayName = "[VSM] ProjectHonor DT FAPC (Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture = "\VSM_Vests\Icons\VSM_ProjectHonor.paa";
		model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_ProjectHonor.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa_tan.paa","vsm_vests\spectergear_rav\data\vsm_ProjectHonor_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_ProjectHonor.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_ProjectHonor.paa"};

		class ItemInfo : VestItem
		{
			uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};



        class VSM_RAV_operator_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_M81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;


        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_RAV_MG_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_M81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_RAV_Breacher_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_M81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };



        class VSM_CarrierRig_Operator_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_M81_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_M81.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_CarrierRig_Breacher_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_M81_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class VSM_CarrierRig_Gunner_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] M81 LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_m81.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_M81_plate.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


       class VSM_LBT6094_operator_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] M81 LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_M81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_LBT6094_MG_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] M81 LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_m81.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_LBT6094_breacher_M81: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] M81 LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_M81.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_M81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_M81.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

        class VSM_FAPC_Operator_M81 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] M81 DT FAPC (Operator)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_M81.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_m81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_Breacher_M81 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] M81 DT FAPC (Breacher)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_M81.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_M81_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_m81.paa","vsm_vests\spectergear_rav\data\vsm_pouches_M81.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_MG_M81 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] M81 DT FAPC (Gunner)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_M81.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_M81.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_m81.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_M81_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_m81.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_M81.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


            class VSM_RAV_operator_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;


        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_RAV_MG_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_RAV_Breacher_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_rav\data\vsm_rav_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };



        class VSM_CarrierRig_Operator_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_Multicam_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_Multicam.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_CarrierRig_Breacher_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_Multicam_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class VSM_CarrierRig_Gunner_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] Multicam LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_Multicam.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\spectergear_lbt\data\vsm_Multicam_plate.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


       class VSM_LBT6094_operator_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] Multicam LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_LBT6094_MG_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] Multicam LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_Multicam.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_LBT6094_breacher_Multicam: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] Multicam LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_Multicam.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

        class VSM_FAPC_Operator_Multicam : ItemCore
    {

        scope = 2;
        displayName = "[VSM] Multicam DT FAPC (Operator)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_Breacher_Multicam : ItemCore
    {

        scope = 2;
        displayName = "[VSM] Multicam DT FAPC (Breacher)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_Multicam_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_pouches_Multicam.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_MG_Multicam : ItemCore
    {

        scope = 2;
        displayName = "[VSM] Multicam DT FAPC (Gunner)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_Multicam.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_Multicam.paa","vsm_vests\lbt6094\textures\vsm_dropholster.paa","vsm_vests\spectergear_rav\data\serpa.paa","vsm_vests\spectergear_rav\data\vsm_Multicam_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch_green.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_Multicam.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_Multicam.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


                class VSM_RAV_operator_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;


        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_RAV_MG_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_RAV_Breacher_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };



        class VSM_CarrierRig_Operator_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_AOR1_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_AOR1.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_CarrierRig_Breacher_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_AOR1_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class VSM_CarrierRig_Gunner_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] AOR1 LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_AOR1.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_AOR1_plate.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


       class VSM_LBT6094_operator_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] AOR1 LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_LBT6094_MG_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] AOR1 LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_AOR1.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_LBT6094_breacher_AOR1: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] AOR1 LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_AOR1.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

        class VSM_FAPC_Operator_AOR1 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] AOR1 DT FAPC (Operator)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_Breacher_AOR1 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] AOR1 DT FAPC (Breacher)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_AOR1_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_pouches_AOR1.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_MG_AOR1 : ItemCore
    {

        scope = 2;
        displayName = "[VSM] AOR1 DT FAPC (Gunner)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_AOR1.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_AOR1.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_AOR1_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_AOR1.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_AOR1.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


                    class VSM_RAV_operator_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP Paraclete RAV(Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;


        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_RAV_MG_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP Paraclete RAV(Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_RAV_Breacher_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP Paraclete RAV(Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_rav\data\vsm_rav_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;
     /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_RAV\RAV_Breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };



        class VSM_CarrierRig_Operator_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP LBT Armatus (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OCP_plate.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OCP.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d"; /// what model does the vest use
            containerClass = "Supply170";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_CarrierRig_Breacher_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP LBT Armatus (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OCP_plate.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa"}; /// what texture is going to be used

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

    class VSM_CarrierRig_Gunner_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin - Specter";
        displayName  = "[VSM] OCP LBT Armatus (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OCP.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\spectergear_lbt\data\vsm_OCP_plate.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};


            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


       class VSM_LBT6094_operator_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] OCP LBT6094 (Operator)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };


        class VSM_LBT6094_MG_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] OCP LBT6094 (Gunner)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OCP.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d"; /// what model does the vest use
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_LBT6094_breacher_OCP: Vest_Camo_Base
    {
        scope = 2; /// scope needs to be 2 to have a visible class
        author = "VanSchmoozin";
        displayName  = "[VSM] OCP LBT6094 (Breacher)"; /// how would the stuff be displayed in inventory and on ground
        picture = "\VSM_Vests\Icons\VSM_OCP.paa"; /// this icon fits the vest surprisingly well
        model   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\lbt6094\textures\vsm_lbt6094_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OCP.paa"};
        descriptionShort = $STR_A3_SP_AL_IV;

        class ItemInfo: VestItem
        {
            uniformModel   = "\VSM_Vests\lbt6094\models\VSM_lbt6094_breacher.p3d"; /// what model does the vest use
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1; /// coef of damage passed to total damage
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};

            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };

                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };

                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

        class VSM_FAPC_Operator_OCP : ItemCore
    {

        scope = 2;
        displayName = "[VSM] OCP DT FAPC (Operator)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_OCP.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_Breacher_OCP : ItemCore
    {

        scope = 2;
        displayName = "[VSM] OCP DT FAPC (Breacher)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_OCP.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OCP_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OCP.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OCP.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };

            class VSM_FAPC_MG_OCP : ItemCore
    {

        scope = 2;
        displayName = "[VSM] OCP DT FAPC (Gunner)";
        author="VanSchmoozin - Ardvarkdb";
        picture = "\VSM_Vests\Icons\VSM_OCP.paa";
        model = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
        hiddenSelectionsTextures[] = {"vsm_vests\battlebelt\textures\vsm_battlebelt_OCP.paa","vsm_vests\spectergear_rav\data\vsm_boxmag_OCP.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OCP_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\vsm_fapc\textures\vsm_fapc_OCP.paa","vsm_vests\spectergear_rav\data\vsm_buttpouch_OCP.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
            containerClass = "Supply300";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };





            class VSM_UTOC_Operator_OGA : ItemCore
    {

        scope = 2;
        displayName = "[VSM] OGA DT UTOC (Operator)";
        author="VanSchmoozin";
        picture = "\VSM_Vests\Icons\VSM_OGA.paa";
        model = "VSM_Vests\UTOC\Models\VSM_UTOC_Operator";
        descriptionShort = $STR_A3_SP_AL_IV;
        hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
        hiddenSelectionsTextures[] = {"vsm_vests\spectergear_lbt\data\vsm_OGA_chestrig.paa","vsm_vests\battlebelt\textures\vsm_battlebelt_OGA.paa","vsm_vests\lbt6094\textures\vsm_dropholster_oga.paa","vsm_vests\spectergear_rav\data\serpa_TAN.paa","vsm_vests\spectergear_rav\data\vsm_OGA_gear_co.paa","vsm_vests\spectergear_rav\data\radio_pouch.paa","vsm_vests\UTOC\textures\vsm_UTOC_OGA.paa","vsm_vests\spectergear_rav\data\vsm_pouches_OGA.paa"};

        class ItemInfo : VestItem
        {
            uniformModel = "VSM_Vests\UTOC\Models\VSM_UTOC_Operator";
            containerClass = "Supply200";
            mass = 50;
            passThrough = 1;
            hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 25;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 25;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
};