
    class CFP_IDF_M76 : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76.paa;
        scope = 2;
        weaponPoolAvailable = 1;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet";

        model = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_co.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_co.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_IDF_M76_BD : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        };
    };

    class CFP_IDF_M76_BD_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        };
    };

    class CFP_IDF_M76_BD_Camo : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_Camo.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD (Camo)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_camo.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_camo.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_camo.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front","_Goggle_ESS","_Goggle_Strap"};
        };
    };

    class CFP_IDF_M76_BD_CB_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_CB_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-CB-GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Front"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_BD_CB_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_CB_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-CB-GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Front"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_BD_CF_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_CF_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-CF-GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Goggle_ESS"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Goggle_ESS"};
        };
    };

    class CFP_IDF_M76_BD_CF_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_CF_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-CF-GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Goggle_ESS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Goggle_ESS"};
        };
    };

    class CFP_IDF_M76_BD_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_BD_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_BD_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet BD-GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Cover_Back","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_CB_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_CB_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet CB-GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Front"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_CB_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_CB_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet CB-GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Front"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_CF_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_CF_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet CF-GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Goggle_ESS"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Goggle_ESS"};
        };
    };

    class CFP_IDF_M76_CF_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_CF_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet CF-GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Goggle_ESS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Goggle_ESS"};
        };
    };

    class CFP_IDF_M76_GG : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_GG.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet GG";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front"};
        };
    };

    class CFP_IDF_M76_GG_Black : CFP_IDF_M76
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_IDF_M76_GG_Black.paa;
        author = "CFP";
        displayName = "IDF M76 Combat Helmet GG (Black)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa","\x\cfp\addons\headgear\GolaniHelmet\tex\idf_helmet_black.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\headgear\GolaniHelmet\idf_m76_helmet.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","Camo1","Camo2","_Band","_Cover_Back","_Cover_Front"};
        };
    };

