#define mag_xx(a,b) class _xx_##a {magazine = ##a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = ##a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles
{

    class Offroad_01_base_F;
    class Offroad_01_civil_base_F : Offroad_01_base_F
    {
        class textureSources
        {
            class SPRed
            {
                displayName = "Standard Red";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SPRed.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNWhite
            {
                displayName = "Standard UN White";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNWhite1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlack
            {
                displayName = "Standard UN Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlue
            {
                displayName = "Standard UN Blue";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlue1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class FBIBlack
            {
                displayName = "Standard FBI Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\FBIBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class SWATBlack
            {
                displayName = "Standard SWAT Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SwatBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter
            {
                displayName = "Standard Hunter";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter2
            {
                displayName = "Standard Hunter 2";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class ATACS
            {
                displayName = "Standard ATACS FG";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\ATacsFG1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
    	    class Urban
    	    {
    		        displayname = "Standard Urban";
    	            author = "SP Craig";
    	            textures[] = {"\x\cfp\addons\vehicles\Offroad\NodUrban1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                    factions[] = {};
    	    };
    	    class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
    	    class ISISDirty1
            {
                displayName = "Standard ISIS Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
    	    class ISISDirty2
            {
                displayName = "Standard ISIS Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
    	    class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS2Dirty1
            {
                displayName = "Standard ISIS2 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS2Dirty2
            {
                displayName = "Standard ISIS2 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS3
            {
                displayName = "Standard ISIS3";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS3Dirty1
            {
                displayName = "Standard ISIS3 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS3Dirty2
            {
                displayName = "Standard ISIS3 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS4
            {
                displayName = "Standard ISIS4";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS4Dirty1
            {
                displayName = "Standard ISIS4 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
    	    class ISIS4Dirty2
            {
                displayName = "Standard ISIS4 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
            class AfghanPolice
            {
                displayName = "Afghan Police";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_afghan_police.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
			class Muddy
            {
                displayName = "Muddy";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_muddy.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
        };
    };

    class Offroad_01_repair_military_base_F : Offroad_01_base_F
    {
        class textureSources
        {
            class SPRed
            {
                displayName = "Standard Red";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SPRed.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNWhite
            {
                displayName = "Standard UN White";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNWhite1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlack
            {
                displayName = "Standard UN Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlue
            {
                displayName = "Standard UN Blue";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlue1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class FBIBlack
            {
                displayName = "Standard FBI Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\FBIBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class SWATBlack
            {
                displayName = "Standard SWAT Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SwatBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter
            {
                displayName = "Standard Hunter";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter2
            {
                displayName = "Standard Hunter 2";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class ATACS
            {
                displayName = "Standard ATACS FG";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\ATacsFG1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Urban
            {
                displayName = "Standard Urban";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\NodUrban1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
			class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
			class ISISDirty1
            {
                displayName = "Standard ISIS Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
			class ISISDirty2
            {
                displayName = "Standard ISIS Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
			class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS2Dirty1
            {
                displayName = "Standard ISIS2 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS2Dirty2
            {
                displayName = "Standard ISIS2 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3
            {
                displayName = "Standard ISIS3";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3Dirty1
            {
                displayName = "Standard ISIS3 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3Dirty2
            {
                displayName = "Standard ISIS3 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4
            {
                displayName = "Standard ISIS4";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4Dirty1
            {
                displayName = "Standard ISIS4 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4Dirty2
            {
                displayName = "Standard ISIS4 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class AfghanPolice
            {
                displayName = "Afghan Police";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_afghan_police.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class Muddy
            {
                displayName = "Muddy";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_muddy.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
        };
    };

    class Offroad_01_military_base_F : Offroad_01_base_F
    {
        class textureSources
        {
            class SPRed
            {
                displayName = "Standard Red";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SPRed.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNWhite
            {
                displayName = "Standard UN White";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNWhite1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlack
            {
                displayName = "Standard UN Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class UNBlue
            {
                displayName = "Standard UN Blue";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\UNBlue1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class FBIBlack
            {
                displayName = "Standard FBI Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\FBIBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class SWATBlack
            {
                displayName = "Standard SWAT Black";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\SwatBlack1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter
            {
                displayName = "Standard Hunter";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Hunter2
            {
                displayName = "Standard Hunter 2";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\Hunter2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class ATACS
            {
                displayName = "Standard ATACS FG";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\ATacsFG1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
            class Urban
            {
                displayName = "Standard Urban";
                author = "SP Craig";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\NodUrban1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
	    class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
	    class ISISDirty1
            {
                displayName = "Standard ISIS Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
	    class ISISDirty2
            {
                displayName = "Standard ISIS Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_01_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
            };
	    class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS2Dirty1
            {
                displayName = "Standard ISIS2 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS2Dirty2
            {
                displayName = "Standard ISIS2 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_02_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3
            {
                displayName = "Standard ISIS3";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3Dirty1
            {
                displayName = "Standard ISIS3 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS3Dirty2
            {
                displayName = "Standard ISIS3 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_03_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4
            {
                displayName = "Standard ISIS4";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4Dirty1
            {
                displayName = "Standard ISIS4 Dirty 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_1.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class ISIS4Dirty2
            {
                displayName = "Standard ISIS4 Dirty 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_isis_04_dirty_2.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class AfghanPolice
            {
                displayName = "Afghan Police";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_afghan_police.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
			};
			class Muddy
            {
                displayName = "Muddy";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Offroad\offroad_muddy.paa","A3\soft_f\Offroad_01\Data\offroad_01_ext_co.paa"};
                factions[] = {};
    	    };
        };
    };

    class CUP_UAZ_Base : Offroad_01_base_F
    {
    	class textureSources
    	{
    	    class UAZMAIN1
    	    {
    		displayName = "Main UAZ1";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_1.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAIN2
    	    {
    		displayName = "Main UAZ2";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_2.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAIN3
    	    {
    		displayName = "Main UAZ3";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_3.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAIN4
    	    {
    		displayName = "Main UAZ4";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_4.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAINIS1
    	    {
    		displayName = "Main UAZIS1";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_is_1.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAINIS2
    	    {
    		displayName = "Main UAZIS2";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_is_2.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAINIS3
    	    {
    		displayName = "Main UAZIS3";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_is_3.paa"};
                    factions[] = {};
    	    };
    	    class UAZMAINIS4
    	    {
    		displayName = "Main UAZIS4";
    		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\UAZ\uaz_main_is_4.paa"};
                    factions[] = {};
    	    };
        };
    };

    class CUP_Datsun_Base;
    class CUP_Datsun_civil_Base : CUP_Datsun_Base
    {
        class textureSources
        {
            class ISDatsun1c1
            {
                displayName = "ISIS Datsun1c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1c2
            {
                displayName = "ISIS Datsun1c2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1d1
            {
                displayName = "ISIS Datsun1d1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1d2
            {
                displayName = "ISIS Datsun1d2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2c1
            {
                displayName = "ISIS Datsun2c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2c2
            {
                displayName = "ISIS Datsun2c2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2d1
            {
                displayName = "ISIS Datsun2d1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2d2
            {
                displayName = "ISIS Datsun2d2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun3c1
            {
                displayName = "ISIS Datsun3c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
    	    class ISDatsun3c2
    	    {
    		displayName = "ISIS Datsun3c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun3d1
                {
                    displayName = "ISIS Datsun3d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun3d2
                {
                    displayName = "ISIS Datsun3d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun4c1
                {
                    displayName = "ISIS Datsun4c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun4c2
                {
                    displayName = "ISIS Datsun4c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun4d1
                {
                    displayName = "ISIS Datsun4d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun4d2
                {
                    displayName = "ISIS Datsun4d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5c1
                {
                    displayName = "ISIS Datsun5c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5c2
                {
                    displayName = "ISIS Datsun5c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5d1
                {
                    displayName = "ISIS Datsun5d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5d2
                {
                    displayName = "ISIS Datsun5d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6c1
                {
                    displayName = "ISIS Datsun6c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6c2
                {
                    displayName = "ISIS Datsun6c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6d1
                {
                    displayName = "ISIS Datsun6d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6d2
                {
                    displayName = "ISIS Datsun6d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7c1
                {
                    displayName = "ISIS Datsun7c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7c2
                {
                    displayName = "ISIS Datsun7c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7d1
                {
                    displayName = "ISIS Datsun7d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7d2
                {
                    displayName = "ISIS Datsun7d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8c1
                {
                    displayName = "ISIS Datsun8c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8c2
                {
                    displayName = "ISIS Datsun8c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8d1
                {
                    displayName = "ISIS Datsun8d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8d2
                {
                    displayName = "ISIS Datsun8d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9c1
                {
                    displayName = "ISIS Datsun9c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9c2
                {
                    displayName = "ISIS Datsun9c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9d1
                {
                    displayName = "ISIS Datsun9d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9d2
                {
                    displayName = "ISIS Datsun9d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10c1
                {
                    displayName = "ISIS Datsun10c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10c2
                {
                    displayName = "ISIS Datsun10c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10d1
                {
                    displayName = "ISIS Datsun10d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10d2
                {
                    displayName = "ISIS Datsun10d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
        };
    };

    class CUP_Datsun_PK_Base : CUP_Datsun_Base
    {
        class textureSources
        {
            class ISDatsun1c1
            {
                displayName = "ISIS Datsun1c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1c2
            {
                displayName = "ISIS Datsun1c2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1d1
            {
                displayName = "ISIS Datsun1d1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun1d2
            {
                displayName = "ISIS Datsun1d2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_1_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2c1
            {
                displayName = "ISIS Datsun2c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2c2
            {
                displayName = "ISIS Datsun2c2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2d1
            {
                displayName = "ISIS Datsun2d1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun2d2
            {
                displayName = "ISIS Datsun2d2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_2_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
            class ISDatsun3c1
            {
                displayName = "ISIS Datsun3c1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                factions[] = {};
            };
    	    class ISDatsun3c2
    	    {
    		displayName = "ISIS Datsun3c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun3d1
                {
                    displayName = "ISIS Datsun3d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun3d2
                {
                    displayName = "ISIS Datsun3d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_3_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun4c1
                {
                    displayName = "ISIS Datsun4c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
                };
    	    class ISDatsun4c2
                {
                    displayName = "ISIS Datsun4c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun4d1
                {
                    displayName = "ISIS Datsun4d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun4d2
                {
                    displayName = "ISIS Datsun4d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_4_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5c1
                {
                    displayName = "ISIS Datsun5c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5c2
                {
                    displayName = "ISIS Datsun5c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5d1
                {
                    displayName = "ISIS Datsun5d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun5d2
                {
                    displayName = "ISIS Datsun5d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_5_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6c1
                {
                    displayName = "ISIS Datsun6c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6c2
                {
                    displayName = "ISIS Datsun6c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6d1
                {
                    displayName = "ISIS Datsun6d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun6d2
                {
                    displayName = "ISIS Datsun6d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_6_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7c1
                {
                    displayName = "ISIS Datsun7c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7c2
                {
                    displayName = "ISIS Datsun7c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7d1
                {
                    displayName = "ISIS Datsun7d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun7d2
                {
                    displayName = "ISIS Datsun7d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_7_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8c1
                {
                    displayName = "ISIS Datsun8c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8c2
                {
                    displayName = "ISIS Datsun8c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8d1
                {
                    displayName = "ISIS Datsun8d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun8d2
                {
                    displayName = "ISIS Datsun8d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_8_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9c1
                {
                    displayName = "ISIS Datsun9c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9c2
                {
                    displayName = "ISIS Datsun9c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9d1
                {
                    displayName = "ISIS Datsun9d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun9d2
                {
                    displayName = "ISIS Datsun9d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_9_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10c1
                {
                    displayName = "ISIS Datsun10c1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_c_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10c2
                {
                    displayName = "ISIS Datsun10c2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_c_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10d1
                {
                    displayName = "ISIS Datsun10d1";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_d_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
    	    class ISDatsun10d2
                {
                    displayName = "ISIS Datsun10d2";
                    author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Datsun\cup_is_datsun_10_d_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Datsun\Data\datsun_addons4_co.paa"};
                    factions[] = {};
    	    };
        };
    };

    class CUP_LR_Base;
    class CUP_LR_MG_Base : CUP_LR_Base
    {
        class textureSources
        {
            class OLIVE
            {
                displayName = "Olive";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa"};
                factions[] = {};
            };
            class GREEN
            {
                displayName = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_green.paa"};
                factions[] = {};
            };
            class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_1.paa"};
                factions[] = {};
            };
            class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_2.paa"};
                factions[] = {};
	       };
        };
    };
    class CUP_LR_Transport_Base : CUP_LR_Base
    {
        class textureSources
        {
            class OLIVE
            {
                displayName = "Olive";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
                factions[] = {};
            };
            class GREEN
            {
                displayName = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_green.paa","\x\cfp\addons\vehicles\LandRover\lr_acr_spec_co_green.paa"};
                factions[] = {};
            };
            class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_1.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
                factions[] = {};
            };
            class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_2.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\lr_acr_spec_co.paa"};
                factions[] = {};
	       };
        };
    };
    class CUP_LR_SPG9_Base : CUP_LR_Base
    {
        class textureSources
        {
            class OLIVE
            {
                displayName = "Olive";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_olive.paa"};
                factions[] = {};
            };
            class GREEN
            {
                displayName = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_green.paa"};
                factions[] = {};
            };
            class ISIS
            {
                displayName = "Standard ISIS";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_1.paa"};
                factions[] = {};
            };
            class ISIS2
            {
                displayName = "Standard ISIS2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\LandRover\lr_base_baf_2.paa"};
                factions[] = {};
	       };
        };
    };

    class CUP_Ural_BaseTurret;
    class CUP_Ural_Base : CUP_Ural_BaseTurret
    {
    	class textureSources
    	{
    	    class URALIS1
    	    {
        		displayName = "URAL IS1";
        		author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_1.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                factions[] = {};
    	    };
    	    class URALIS2
    	    {
        		displayName = "URAL IS2";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_2.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS3
    	    {
        		displayName = "URAL IS3";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_3.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS4
    	    {
        		displayName = "URAL IS4";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_4.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS5
    	    {
        		displayName = "URAL IS5";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_5.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS6
    	    {
        		displayName = "URAL IS6";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_6.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS7
    	    {
        		displayName = "URAL IS7";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_7.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
    	    class URALIS8
    	    {
        		displayName = "URAL IS8";
        		author = "AccuracyThruVolume";
                    textures[] = {"\x\cfp\addons\vehicles\Ural\ural_is_8.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_plachta_sla_co.paa"};
                    factions[] = {};
    	    };
        };
    };

    class Car_F;
    class CUP_RG31_BASE : Car_F
    {
        class textureSources
        {
            class africanunion_des
            {
                displayName = "African Union (Desert)";
                author = "AuburnAlumni";
                textures[] =
                {
                    "\x\cfp\addons\vehicles\RG31\id\afr_union.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa",
                    "",
                    "",
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body_nigeria_co.paa",
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body2_nigeria_ca.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_rg31\data\exa_rg31_interior2_co.paa"
                };
                factions[] = {};
            };
            class africanunion_wdl
            {
                displayName = "African Union (Woodland)";
                author = "AuburnAlumni";
                textures[] =
                {
                    "\x\cfp\addons\vehicles\RG31\id\afr_union.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_a_ca.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_RG31\data\id\id_1_ca.paa",
                    "",
                    "",
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body_od_olive_co.paa",
                    "\x\cfp\addons\vehicles\RG31\exa_rg31_body2_od_olive_ca.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_rg31\data\exa_rg31_interior2_od_co.paa"
                };
                factions[] = {};
            };
        };
    };

    class Wheeled_APC_F;
    class CUP_BTR60_Base : Wheeled_APC_F
    {
        class textureSources
        {
            class SAACamo1
            {
                displayName = "Syrian Arab Army Camo 1";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\BTR60\btr60_saa_camo_1"};
                factions[] = {};
            };
			class SAACamo2
            {
                displayName = "Syrian Arab Army Camo 2";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\BTR60\btr60_saa_camo_2"};
                factions[] = {};
            };
			class SAACamo3
            {
                displayName = "Syrian Arab Army Camo 3";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\BTR60\btr60_saa_camo_3"};
                factions[] = {};
            };
			class SAACamo4
            {
                displayName = "Syrian Arab Army Camo 4";
                author = "AccuracyThruVolume";
                textures[] = {"\x\cfp\addons\vehicles\BTR60\btr60_saa_camo_4"};
                factions[] = {};
            };
        };
    };

    class Helicopter_Base_H;
    class CUP_Mi24_Base: Helicopter_Base_H
    {
        class textureSources
        {
            class Nigeria
            {
                displayname = "Nigerian Camo";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\Mi24\mi24_nigeria.paa","\x\cfp\addons\vehicles\Mi24\mi24_nigeria2.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_Mi8_base: Helicopter_Base_H
    {
        class textureSources
        {
            class Nigeria
            {
                displayname = "Nigerian Camo";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\Mi8\mi17_body_nigeria.paa","\CUP\AirVehicles\CUP_AirVehicles_Mi8\data\mi17_det_IND_CO.paa"};
                factions[] = {};
            };
        };
    };

    class Heli_Light_02_base_F : Helicopter_Base_H
    {
        class textureSources
        {
            class Kenya
            {
                displayname = "KDF Camo";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\Orca\Orca_KDF.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_SA330_Base : Helicopter_Base_H
    {
        class textureSources
        {
            class Kenya
            {
                displayname = "KDF Camo";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\Puma\Puma_KDF.paa"};
                factions[] = {};
            };
        };
    };

    class Heli_Light_01_base_F : Helicopter_Base_H
    {
        class textureSources
        {
            class Kenya
            {
                displayname = "KDF Camo";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\Hummingbird\Hummingbird_KDF.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_T810_Base: Car_F
    {
        class textureSources
        {
            class Green
            {
                displayname = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\T810\cabin_co_green.paa","\x\cfp\addons\vehicles\T810\bed2_co_green.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_T810_Unarmed_Base;
    class CUP_T810_Refuel_Base: CUP_T810_Unarmed_Base
    {
        class textureSources
        {
            class Green
            {
                displayname = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\T810\cabin_co_green.paa","\x\cfp\addons\vehicles\T810\t810_fueltank_co_green.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa","\x\cfp\addons\vehicles\T810\t810_mlod_co_green.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_T810_Reammo_Base: CUP_T810_Unarmed_Base
    {
        class textureSources
        {
            class Green
            {
                displayname = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\T810\cabin_co_green.paa","\x\cfp\addons\vehicles\T810\bed2_co_green.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa","\x\cfp\addons\vehicles\T810\t810_mlod_co_green.paa"};
                factions[] = {};
            };
        };
    };

    class CUP_T810_Repair_Base: CUP_T810_Unarmed_Base
    {
        class textureSources
        {
            class Green
            {
                displayname = "Green";
                author = "AuburnAlumni";
                textures[] = {"\x\cfp\addons\vehicles\T810\cabin_co_green.paa","\x\cfp\addons\vehicles\T810\bed2_co_green.paa","CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa","\x\cfp\addons\vehicles\T810\t810_mlod_co_green.paa"};
                factions[] = {};
            };
        };
    };

    // Crates
    class CUP_RUBasicAmmunitionBox; // CUP_RUBasicAmmunitionBox
    class CUP_RUBasicWeaponsBox; // CUP_RUBasicWeaponsBox
    class CUP_RUSpecialWeaponsBox; // CUP_RUSpecialWeaponsBox
    class CUP_RULaunchersBox; // CUP_RULaunchersBox
    class CUP_RUVehicleBox; // CUP_RUVehicleBox

    class CFP_O_TBAN_AmmoBox : CUP_RUBasicAmmunitionBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Ammo Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
        };
        class TransportItems {
        };
    };
    class CFP_O_TBAN_WeaponsBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Weapons Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_LeeEnfield_rail,10);
            weap_xx(CUP_lmg_PKM,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(CUP_optic_LeupoldMk4,10);
        };
    };
    class CFP_O_TBAN_LaunchersBox : CUP_RULaunchersBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Launchers Box;
        class TransportMagazines {
            mag_xx(CUP_PG7VL_M,5);
        };
        class TransportWeapons {
            weap_xx(CUP_launch_RPG7V,5);
        };
        class TransportItems {
        };
    };
    class CFP_O_TBAN_UniformBox : CUP_RUBasicWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Uniform Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_O_TKI_Khet_Partug_08,15);
            item_xx(CUP_O_TKI_Khet_Partug_06,15);
            item_xx(CUP_O_TKI_Khet_Partug_04,15);
            item_xx(CUP_O_TKI_Khet_Partug_01,15);
            item_xx(CFP_U_KhetPartug_Long_olive,15);
            item_xx(CUP_O_TKI_Khet_Partug_02,15);
        };
    };
    class CFP_O_TBAN_SupportBox : CUP_RUSpecialWeaponsBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Support Box;
        class TransportWeapons {
        };
        class TransportMagazines {
        };
        class TransportItems {
            item_xx(CUP_V_OI_TKI_Jacket4_04,10);
            item_xx(CUP_H_TKI_SkullCap_06,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CUP_V_OI_TKI_Jacket2_03,10);
            item_xx(CUP_H_TKI_Lungee_Open_01,10);
            item_xx(CUP_V_OI_TKI_Jacket2_05,10);
            item_xx(CUP_H_TKI_Lungee_01,10);
            item_xx(CUP_V_OI_TKI_Jacket2_04,10);
            item_xx(CUP_B_TKI_AlicePack_Khaki_AmmoAK74,10);
            item_xx(CUP_V_OI_TKI_Jacket4_01,10);
            item_xx(CUP_H_TKI_Lungee_03,10);
            item_xx(Binocular,10);
            item_xx(CUP_V_OI_TKI_Jacket2_02,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(CUP_B_TKI_AlicePack_MG,10);
            item_xx(CUP_V_OI_TKI_Jacket3_06,10);
            item_xx(CUP_H_TKI_SkullCap_04,10);
            item_xx(CUP_B_TIK_CivPack_WDL_Ammo,10);
            item_xx(CUP_V_OI_TKI_Jacket3_05,10);
            item_xx(CUP_H_TKI_Lungee_Open_02,10);
            item_xx(CUP_V_OI_TKI_Jacket1_05,10);
            item_xx(CUP_H_TKI_SkullCap_03,10);
            item_xx(CUP_V_OI_TKI_Jacket3_04,10);
            item_xx(CUP_H_TKI_Lungee_Open_04,10);
            item_xx(CUP_V_OI_TKI_Jacket4_05,10);
            item_xx(CUP_H_TKI_SkullCap_02,10);
            item_xx(CUP_B_TKI_Backpack_Gunner_RPG,10);
            item_xx(CUP_H_TK_Lungee,10);
            item_xx(CUP_V_OI_TKI_Jacket4_02,10);
            item_xx(CUP_B_TK_AssaultPack_Medic,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CUP_B_TKI_AlicePack_Exp,10);
            item_xx(CUP_H_TKI_Lungee_02,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_H_TKI_Lungee_Open_05,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_TKI_Lungee_Open_03,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket2_01,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket5_04,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
        };
    };
    class CFP_O_TBAN_SupplyBox : CUP_RUVehicleBox {
        author = ALiVE ORBAT CREATOR;
        displayName = Taliban Insurgents Supply Box;
        class TransportMagazines {
            mag_xx(CUP_30Rnd_545x39_AK_M,50);
            mag_xx(SmokeShell,50);
            mag_xx(SmokeShellBlue,50);
            mag_xx(CUP_1Rnd_HE_GP25_M,50);
            mag_xx(CUP_30Rnd_762x39_AK47_M,50);
            mag_xx(CUP_HandGrenade_RGD5,50);
            mag_xx(SmokeShellRed,50);
            mag_xx(CUP_10x_303_M,50);
            mag_xx(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M,50);
            mag_xx(CUP_1Rnd_HEDP_M203,50);
            mag_xx(CUP_10Rnd_762x54_SVD_M,50);
            mag_xx(CUP_PG7VL_M,50);
            mag_xx(CUP_PipeBomb_M,50);
        };
        class TransportWeapons {
            weap_xx(CUP_arifle_AK74_GL,10);
            weap_xx(CUP_arifle_AK74,10);
            weap_xx(CUP_arifle_AK47,10);
            weap_xx(CUP_srifle_LeeEnfield,10);
            weap_xx(CUP_srifle_LeeEnfield_rail,10);
            weap_xx(CUP_lmg_PKM,10);
            weap_xx(CUP_launch_RPG7V,10);
        };
        class TransportItems {
            item_xx(CUP_optic_LeupoldM3LR,10);
            item_xx(CUP_optic_LeupoldMk4,10);
            item_xx(CUP_V_OI_TKI_Jacket4_04,10);
            item_xx(CUP_H_TKI_SkullCap_06,10);
            item_xx(ItemMap,10);
            item_xx(ItemCompass,10);
            item_xx(ItemWatch,10);
            item_xx(ItemRadio,10);
            item_xx(CUP_V_OI_TKI_Jacket2_03,10);
            item_xx(CUP_H_TKI_Lungee_Open_01,10);
            item_xx(CUP_V_OI_TKI_Jacket2_05,10);
            item_xx(CUP_H_TKI_Lungee_01,10);
            item_xx(CUP_V_OI_TKI_Jacket2_04,10);
            item_xx(CUP_B_TKI_AlicePack_Khaki_AmmoAK74,10);
            item_xx(CUP_V_OI_TKI_Jacket4_01,10);
            item_xx(CUP_H_TKI_Lungee_03,10);
            item_xx(Binocular,10);
            item_xx(CUP_V_OI_TKI_Jacket2_02,10);
            item_xx(CUP_H_TKI_Lungee_06,10);
            item_xx(CUP_B_TKI_AlicePack_MG,10);
            item_xx(CUP_V_OI_TKI_Jacket3_06,10);
            item_xx(CUP_H_TKI_SkullCap_04,10);
            item_xx(CUP_B_TIK_CivPack_WDL_Ammo,10);
            item_xx(CUP_V_OI_TKI_Jacket3_05,10);
            item_xx(CUP_H_TKI_Lungee_Open_02,10);
            item_xx(CUP_V_OI_TKI_Jacket1_05,10);
            item_xx(CUP_H_TKI_SkullCap_03,10);
            item_xx(CUP_V_OI_TKI_Jacket3_04,10);
            item_xx(CUP_H_TKI_Lungee_Open_04,10);
            item_xx(CUP_V_OI_TKI_Jacket4_05,10);
            item_xx(CUP_H_TKI_SkullCap_02,10);
            item_xx(CUP_B_TKI_Backpack_Gunner_RPG,10);
            item_xx(CUP_H_TK_Lungee,10);
            item_xx(CUP_V_OI_TKI_Jacket4_02,10);
            item_xx(CUP_B_TK_AssaultPack_Medic,10);
            item_xx(CUP_V_OI_TKI_Jacket3_03,10);
            item_xx(CUP_B_TKI_AlicePack_Exp,10);
            item_xx(CUP_H_TKI_Lungee_02,10);
            item_xx(CUP_B_DShkM_TripodHigh_Bag,10);
            item_xx(CUP_H_TKI_Lungee_Open_05,10);
            item_xx(CUP_B_DShkM_TripodLow_Bag,10);
            item_xx(CUP_B_Podnos_Bipod_Bag,10);
            item_xx(CUP_B_SPG9_Tripod_Bag,10);
            item_xx(CUP_H_TKI_Lungee_Open_03,10);
            item_xx(CUP_B_DShkM_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket2_01,10);
            item_xx(CUP_B_SPG9_Gun_Bag,10);
            item_xx(CUP_V_OI_TKI_Jacket5_04,10);
            item_xx(CUP_B_Podnos_Gun_Bag,10);
            item_xx(CUP_O_TKI_Khet_Partug_08,10);
            item_xx(CUP_O_TKI_Khet_Partug_06,10);
            item_xx(CUP_O_TKI_Khet_Partug_04,10);
            item_xx(CUP_O_TKI_Khet_Partug_01,10);
            item_xx(CFP_U_KhetPartug_Long_olive,10);
            item_xx(CUP_O_TKI_Khet_Partug_02,10);
        };
    };
};
