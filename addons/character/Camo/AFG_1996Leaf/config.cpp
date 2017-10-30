#define ReadAndWrite        0
#define ReadAndCreate       1
#define ReadOnly        2
#define ReadOnlyVerified        3

#define true    1
#define false   0

#define VSoft       0
#define VArmor      1
#define VAir        2

#define TEast       0
#define TWest       1
#define TGuerrila       2
#define TCivilian       3
#define TSideUnknown        4
#define TEnemy      5
#define TFriendly       6
#define TLogic      7

#define private     0
#define protected       1
#define public      2 

class CfgPatches
{
    class CFP_AFG_1996Leaf
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
    };
};



class CfgVehicleClasses
{
    class AFG_1996Leaf
    {
        displayName = "AFG 1996 Leaf";

        
    };
};

class CfgVehicles
{
    
    class B_Soldier_base_F;
    class B_Carryall_oucamo;
    
    class AFG_1996Leaf_BattleDressUniform: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Battle Dress Uniform)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_BattleDressUniform";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\BattleDressUniform.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\BattleDressUniform.paa","\x\cfp\addons\character\Camo\AFG_1996Leaf\FieldUniform.paa"};   
        hiddenSelections[] = {"Camo1","Camo2","insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
        };
    };
    class AFG_1996Leaf_PulloverUniform: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Pullover Uniform)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_PulloverUniform";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\PulloverUniform.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\PulloverUniform.paa"};   
        hiddenSelections[] = {"Camo", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class AFG_1996Leaf_ReconUniform: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Recon Uniform)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_ReconUniform";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\ReconUniform.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\ReconUniform.paa","\x\cfp\addons\uniforms\ReconUniform\0000_Standard\Black2.paa"};   
        hiddenSelections[] = {"Camo1","Camo2","insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class AFG_1996Leaf_FieldUniform: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Field Uniform)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_FieldUniform";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\FieldUniform.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\FieldUniform.paa"};   
        hiddenSelections[] = {"Camo", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            
            

        };
    };

    class AFG_1996Leaf_FieldUniform_SS: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Field Uniform SS)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_FieldUniform_SS";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\FieldUniform2.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\FieldUniform.paa"};   
        hiddenSelections[] = {"Camo", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
    class AFG_1996Leaf_TacticalUniform: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Tactical Uniform)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_TacticalUniform";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\TacticalUniform.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\TacticalUniform.paa"};   
        hiddenSelections[] = {"Camo", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            
            

        };
    };

    class AFG_1996Leaf_TacticalUniform_SS: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Tactical Uniform SS)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_TacticalUniform_SS";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\TacticalUniform2.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\TacticalUniform.paa"};   
        hiddenSelections[] = {"Camo", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };

    class AFG_1996Leaf_TacticalUniform_TS: B_Soldier_base_F
    {
        
        scope = 1;
        displayName = "(Tactical Uniform TS)";
        faction = "BLU_F";
        modelSides[] = {6};
        vehicleClass = "AFG_1996Leaf";
        canCarryBackPack=1;
        canDeactivateMines=1;
        engineer=1; 
        attendant = "true";
        uniformAccessories[] = {};
        uniformClass = "AFG_1996Leaf_TacticalUniform_TS";
        nakedUniform = "U_BasicBody";
        model = "\x\cfp\addons\models\TacticalUniform3.p3d";
        Items[] = {};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\character\Camo\AFG_1996Leaf\TacticalUniform.paa","\x\cfp\addons\uniforms\Underwear\0000_Standard\Green.paa"};   
        hiddenSelections[] = {"Camo", "Camo2", "insignia"};
        class Wounds
        {
            tex[] = {};
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
        };
    };
};


class cfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class InventoryItem_Base_F;
    class ItemCore;
    class HeadGearItem;
    class V_PlateCarrier1_rgr;
    class VestItem;

    class AFG_1996Leaf_BattleDressUniform: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Battle Dress Uniform)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\BattleDressUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_BattleDressUniform";
            containerClass="Supply60";
            mass=80;
        };
    };
    class AFG_1996Leaf_PulloverUniform: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Pullover Uniform)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\PulloverUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_PulloverUniform";
            containerClass="Supply60";
            mass=80;
        };
    };
    class AFG_1996Leaf_ReconUniform: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Recon Uniform)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\ReconUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_ReconUniform";
            containerClass="Supply60";
            mass=80;

        };
    };

    class AFG_1996Leaf_FieldUniform: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Field Uniform)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\FieldUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_FieldUniform";
            containerClass="Supply60";
            mass=80;
        };
    };

    class AFG_1996Leaf_FieldUniform_SS: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Field Uniform SS)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\FieldUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_FieldUniform_SS";
            containerClass="Supply60";
            mass=80;
        };
    };

    class AFG_1996Leaf_TacticalUniform: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Tactical Uniform)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\TacticalUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_TacticalUniform";
            containerClass="Supply60";
            mass=80;
        };
    };

    class AFG_1996Leaf_TacticalUniform_SS: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Tactical Uniform SS)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\TacticalUniform.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_TacticalUniform_SS";
            containerClass="Supply60";
            mass=80;
        };
    };

    class AFG_1996Leaf_TacticalUniform_TS: Uniform_Base
    {
        scope=2;
        model = "\x\cfp\addons\models\Suitpack";
        displayName = "Afghanistan 1996 Leaf (Tactical Uniform TS)";
        picture = "\x\cfp\addons\character\Camo\AFG_1996Leaf\ui\TacticalUniformTS.jpg";
        author = "SP Craig";

        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = "AFG_1996Leaf_TacticalUniform_TS";
            containerClass="Supply60";
            mass=80;            
        };
    };
};