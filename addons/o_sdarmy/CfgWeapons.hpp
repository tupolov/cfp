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

    class CFP_PASGTHelmet_Sudan_01 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_01.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Arid Digital)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Digital.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Digital.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_PASGTHelmet_Sudan_02 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_02.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Brown Digital)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Brown.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Brown.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_PASGTHelmet_Sudan_03 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_03.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Pixel)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Pixel.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Pixel.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_PASGTHelmet_Sudan_04 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_04.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Leaf)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Leaf.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Leaf.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_PASGTHelmet_Sudan_05 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_05.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Desert)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Sword.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Sword.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_PASGTHelmet_Sudan_06 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_PASGTHelmet_Sudan_06.paa;

        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "PASGT Helmet (Sudanese Desert Variant)";
        //
        model = "\x\cfp\addons\models\PASGTHelmet1";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Sword2.paa"};
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
            hiddenSelectionsTextures[] = {"\x\cfp\addons\o_sdarmy\Data\PASGT_Sudan_Sword2.paa"};
            hiddenSelections[] = {"Camo"};
        };
    };
    class CFP_Cap_Sudan_01 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_01.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Arid Digital)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Sudan.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Sudan.paa"
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
    class CFP_Cap_Sudan_02 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_02.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Brown Digital)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Brown.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Brown.paa"
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
    class CFP_Cap_Sudan_03 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_03.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese RSF)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Green.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Green.paa"
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
    class CFP_Cap_Sudan_04 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_04.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Pixel)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Pixel.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Pixel.paa"
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
    class CFP_Cap_Sudan_05 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_05.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Leaf)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Leaf.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Leaf.paa"
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
    class CFP_Cap_Sudan_06 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_06.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Police)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Police.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Police.paa"
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
    class CFP_Cap_Sudan_07 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_07.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Desert)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Sword.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Sword.paa"
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
    class CFP_Cap_Sudan_08 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_08.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Desert Variant)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Sword2.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Sword2.paa"
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
    class CFP_Cap_Sudan_09 : ItemCore
    {
        picture = \x\cfp\addons\o_sdarmy\data\ui\icon_CFP_Cap_Sudan_09.paa;
        scope=2;
        scopeArsenal=2;
        dlc="CFP_Sudan";
        author="Archduke";
        displayName="Patrol Cap (Sudanese Police Desert)";

        model="\x\cfp\addons\models\PatrolCap";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\x\cfp\addons\o_sdarmy\Data\Cap_Police2.paa"
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
                "\x\cfp\addons\o_sdarmy\Data\Cap_Police2.paa"
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