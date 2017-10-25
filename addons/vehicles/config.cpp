
class CfgPatches
{
   class CFP_Vehicles
   {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {};
  };
};

class CfgVehicles
{

    class Offroad_01_base_F;

    class SP_Offroad_Base: Offroad_01_base_F
    {
        model = "\A3\soft_f\Offroad_01\Offroad_01_unarmed_F";
        transportSoldier = 5;
        transportMaxBackpacks = 0;
        armor = 32;
        cost = 50000;
        hiddenSelections[] = {"camo","camo2"};
    };

    class SP_Offroad_SPRed: SP_Offroad_Base
    {
      scope = 2;
      scopeCurator = 2;
      displayName = " S.P Offroad (SP Red)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\SPRed.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
    };

    class SP_Offroad_UNWhite1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (U.N White)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\UNWhite1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_UNBlue1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (U.N Blue)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlue1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_UNBlack1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (U.N Black)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_FBIBlack1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (FBI Black)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\FBIBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_SwatBlack1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (SWAT Black)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\SwatBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_Hunter1: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (Hunter)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
      scopeCurator = 2;
    };

    class SP_Offroad_Hunter2: SP_Offroad_Base
    {
      scope = 2;
      displayName = " S.P Offroad (Hunter 2)";
      hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"}; 
      scopeCurator = 2;      
    };

    class SP_Offroad_ATacsFG1: SP_Offroad_Base
    {
        scope = 2;
        displayName = " S.P Offroad (A-Tacs FG1)";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\ATacsFG1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
        scopeCurator = 2;
    };

    class SP_Offroad_NodUrban1: SP_Offroad_Base
    {
        scope = 2;
        displayName = " S.P Offroad (Urban)";
        hiddenSelectionsTextures[] = {"\x\cfp\addons\vehicles\Offroad\NodUrban1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
        scopeCurator = 2;
    };
};