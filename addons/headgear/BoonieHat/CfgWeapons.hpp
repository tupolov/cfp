

/*BoonieHat

class CfgVehicleClasses
{
	class CFP_BoonieHat
	{
		displayName = "Boonie Hat";
	};
};
*/
	class SP_BoonieHat_Black: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_Black.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Black)";
		// picture = "\x\cfp\addons\headgear\BoonieHat\ui\Black.jpg";
		model = "\x\cfp\addons\models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Black.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Black.paa"};
			hiddenSelections[] = {"Camo"};
		};
	};

	class SP_BoonieHat_Green: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_Green.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Green)";
		// picture = "\x\cfp\addons\headgear\BoonieHat\ui\Green.jpg";
		model = "\x\cfp\addons\models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Green.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Green.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BoonieHat_Tan: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (Tan)";
		// picture = "\x\cfp\addons\headgear\BoonieHat\ui\Tan.jpg";
		model = "\x\cfp\addons\models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Tan.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Tan.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class CFP_BoonieHat_DCU: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_Tan.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (DCU)";
		// picture = "\x\cfp\addons\headgear\BoonieHat\ui\Tan.jpg";
		model = "\x\cfp\addons\models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\DCU.paa"};
		hiddenSelections[] = {"Camo"};
		author = "CFP";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\DCU.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BoonieHat_UN: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_UN.paa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (U.N)";
		// picture = "\x\cfp\addons\headgear\BoonieHat\ui\UN.jpg";
		model = "\x\cfp\addons\models\BoonieHat";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\UN.paa"};
		hiddenSelections[] = {"Camo"};
		author = "SP Craig";



		class ItemInfo: HeadgearItem
		{
			mass = 15;
			uniformmodel = "\x\cfp\addons\models\BoonieHat";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0.30;
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\UN.paa"};
			hiddenSelections[] = {"Camo"};

		};
	};

	class SP_BoonieHat_ATacsFG: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_ATacsFG.paa";
	   	scope = 2;
	   	weaponPoolAvailable = 1;
	   	displayName = "Boonie Hat (A-Tacs FG)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\ATacsFG.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\ATacsFG.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "SP Craig";



	    class ItemInfo: HeadgearItem
	    {
	       	mass = 15;
	      	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	      	modelSides[] = {3,1};
	      	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\ATacsFG.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class SP_BoonieHat_NodUrban: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_SP_BoonieHat_NodUrban.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Nod Urban";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\NodUrban.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "SP Craig";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\NodUrban.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_AfricanWoodland: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_AfricanWoodland.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (African Woodland)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\AfricanWoodland.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\AfricanWoodland.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_PolygonDesert: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_PolygonDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Polygon Desert)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\PolygonDesert.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\PolygonDesert.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_PolygonWoodland: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_PolygonWoodland.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Polygon Woodland)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\PolygonWoodland.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\PolygonWoodland.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_M81: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_M81.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (M81)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M81.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M81.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_ACRDesert: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (ACR Desert)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\ACRDesert.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\ACRDesert.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_Marpat: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Marpat)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Marpat.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Marpat.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_MarpatDesert: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (AOR1)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\MarpatDesert.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\MarpatDesert.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_AOR2: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (AOR2)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\AOR2.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\AOR2.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_Tropentarn: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Tropentarn)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Tropentarn.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Tropentarn.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_Flecktarn: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Flecktarn)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Flecktarn.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Flecktarn.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat_Multicam: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat (Multicam)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\BoonieHat";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Multicam.paa"};
	    hiddenSelections[] = {"Camo"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\BoonieHat";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\Multicam.paa"};
	       	hiddenSelections[] = {"Camo"};

	    };
	};

	class CFP_BoonieHat2_DCU: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat Folded (DCU)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\Booniefolded";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\DCU2.paa"};
	    hiddenSelections[] = {"camo3"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\Booniefolded";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\DCU2.paa"};
	       	hiddenSelections[] = {"camo3"};

	    };
	};

	class CFP_BoonieHat2_M81: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat Folded (M81)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\Booniefolded";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M812.paa"};
	    hiddenSelections[] = {"camo3"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\Booniefolded";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M812.paa"};
	       	hiddenSelections[] = {"camo3"};

	    };
	};

	class CFP_BoonieHat2_M81Mali: ItemCore
    {
        picture = "\x\cfp\addons\headgear\data\ui\icon_CFP_BoonieHat_ACRDesert.paa";
	 	scope = 2;
	   	weaponPoolAvailable = 1;
	  	displayName = "Boonie Hat Folded (M81 Mali)";
	    // picture = "\x\cfp\addons\headgear\BoonieHat\ui\NodUrban.jpg";
	    model = "\x\cfp\addons\models\Booniefolded";
	    hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M81Mali2.paa"};
	    hiddenSelections[] = {"camo3"};
	    author = "AuburnAlumni";



	    class ItemInfo: HeadgearItem
	    {
	      	mass = 15;
	     	uniformmodel = "\x\cfp\addons\models\Booniefolded";
	       	modelSides[] = {3,1};
	       	armor = 0;
	       	passThrough = 0.30;
	       	hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\BoonieHat\M81Mali2.paa"};
	       	hiddenSelections[] = {"camo3"};

	    };
	};


