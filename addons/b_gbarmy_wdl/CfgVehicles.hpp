class CBA_Extended_EventHandlers_base;

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
{

    // Override CUP faction allocations
        // People - Override base WDL units

            class CUP_Creatures_Military_BAF_Soldier_Base;
            class CUP_B_BAF_Soldier_01_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                author = "$STR_CUP_AUTHOR_STRING";
                scope = 1;
                scopeCurator = 0;
                displayName = "Soldier 1 - DPM";
                faction = "CFP_B_GBARMY_WDL";
                nameSound = "veh_infantry_officer_s";

                model           = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_BAF_Soldier_1.p3d";
                uniformClass    = "CUP_U_B_BAF_DPM_S1_RolledUp";

                hiddenSelections[] = {"Camo", "Camo2", "camo3", "insignia"};
                hiddenSelectionsTextures[] =
                {
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\camo_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\armour_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\dpm\top_dpm_co.paa"
                };
                icon = "iconManOfficer";
            };

            class CUP_B_BAF_Soldier_02_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                author = "$STR_CUP_AUTHOR_STRING";
                scope = 1;
                scopeCurator = 0;
                displayName = "Soldier 2 - DPM";
                faction = "CFP_B_GBARMY_WDL";
                nameSound = "veh_infantry_officer_s";

                model           = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_BAF_Soldier_2.p3d";
                uniformClass    = "CUP_U_B_BAF_DPM_S2_UnRolled";

                hiddenSelections[] = {"Camo", "Camo2", "camo3", "insignia"};
                hiddenSelectionsTextures[] =
                {
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\camo_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\armour_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\top2_dpm_co.paa"
                };
                icon = "iconManOfficer";
            };

            class CUP_B_BAF_Soldier_03_DPM: CUP_Creatures_Military_BAF_Soldier_Base // Officer Uniform
            {
                author = "$STR_CUP_AUTHOR_STRING";
                scope = 1;
                scopeCurator = 0;
                displayName = "Soldier Light - DPM";
                faction = "CFP_B_GBARMY_WDL";
                nameSound = "veh_infantry_officer_s";

                model           = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_BAF_Soldier_Light.p3d";
                uniformClass    = "CUP_U_B_BAF_DPM_Tshirt";

                hiddenSelections[] = {"Camo", "Camo2", "camo3", "insignia"};
                hiddenSelectionsTextures[] =
                {
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\camo_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\DPM\armour_DPM_co.paa",
                    "cup\creatures\people\military\cup_creatures_people_military_baf\data\dpm\top3_dpm_co.paa"
                };
                icon = "iconManOfficer";
            };


            class CUP_B_BAF_Soldier_04_DPM : CUP_Creatures_Military_BAF_Soldier_Base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                scope = 1;
                scopeCurator = 0;
                displayName = "Soldier";
                faction = "CFP_B_GBARMY_WDL";
                model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Sniper.p3d";
                uniformClass = "CUP_U_B_BAF_DPM_Ghillie";

                hiddenSelectionsTextures[] = {
                    "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\data\ghillie_overall1_co.paa"
                };
                icon = "iconMan";
            };

        // Vehicles

            #define PREVIEW(x)  editorPreview = CUP\Creatures\People\Military\CUP_Creatures_StaticWeapons\Data\preview\##x##.jpg
            class CUP_L111A1_base;
            class CUP_L111A1_MiniTripod_base;
            class CUP_L16A2_base;
            class CUP_B_L111A1_BAF_WDL :CUP_L111A1_base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                dlc="CUP_Units";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                PREVIEW(CUP_B_L111A1_BAF_WDL);
            };
            class CUP_B_L111A1_MiniTripod_BAF_WDL :CUP_L111A1_MiniTripod_base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                dlc="CUP_Units";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                PREVIEW(CUP_B_L111A1_MiniTripod_BAF_WDL);
            };
            class CUP_B_L16A2_BAF_WDL :CUP_L16A2_base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                dlc="CUP_Units";
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                PREVIEW(CUP_B_L16A2_BAF_WDL);
            };

            class LandVehicle;
            class Car: LandVehicle
            {
                class NewTurret;
            };
            class Car_F: Car
            {
                class AnimationSources;
                class Turrets
                {
                    class MainTurret: NewTurret
                    {
                        class ViewOptics;
                    };
                };
                class HitPoints
                {
                    class HitLFWheel;
                    class HitLF2Wheel;
                    class HitRFWheel;
                    class HitRF2Wheel;
                    class HitGlass1;
                    class HitGlass2;
                    class HitGlass3;
                    class HitGlass4;
                    class HitGlass5;
                    class HitGlass6;
                };
            };

            class CUP_LR_Base : Car_F
            {
                class Turrets;
            };
            class CUP_LR_Transport_Base;
            class CUP_B_LR_Transport_GB_W: CUP_LR_Transport_Base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                model = "\CUP\WheeledVehicles\CUP_WheeledVehicles_LR\model\RightHand\CUP_LR_Soft_Full_GB.p3d";
                displayname = "Land Rover (Transport) Woodland";
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Transport_GB_W.jpg";
            };
            class CUP_LR_MG_Base;
            class CUP_B_LR_MG_GB_W: CUP_LR_MG_Base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                displayName = "Land Rover (M2) Woodland";
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                hiddenselectionstextures[] = {"cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_MG_GB_W.jpg";
            };
            class CUP_LR_Ambulance_Base;
            class CUP_B_LR_Ambulance_GB_W: CUP_LR_Ambulance_Base
            {
                author = "$STR_CUP_AUTHOR_STRING";
                displayName = "Land Rover (Ambulance) Woodland";
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                hiddenSelectionsTextures[] =
                {
                    "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_base_co.paa",
                    "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_co.paa",
                    "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_special_co.paa"
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Ambulance_GB_W.jpg";
            };
            class CUP_LR_Special_Base : CUP_LR_Base
            {
                class Turrets : Turrets {
                    class Mainturret;
                    class CargoTurret;
                    class PK_Turret;
                };
                class AnimationSources;
            };
            class CUP_B_LR_Special_M2_GB_W: CUP_LR_Special_Base
            {
                author = STR_CUP_AUTHOR_STRING;
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[] = {"CUP_B_BAF_Soldier_WDL"};
                model = "\CUP\WheeledVehicles\CUP_WheeledVehicles_LR\model\RightHand\CUP_LR_Special_M2_GB.p3d";
                displayname = "Land Rover M2 (Special) Woodland";

                hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
                hiddenSelectionsTextures[] =
                {
                    "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_base_co.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_lr\data\textures\gb_w_lr_special_co.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_base_woodlnd_co.paa",
                    "cup\wheeledvehicles\cup_wheeledvehicles_jackal\data\jackal_mount_woodlnd_co.paa"
                };

                class Turrets: Turrets
                {
                    class CargoTurret_01: CargoTurret
                    {
                        gunnerAction = "passenger_inside_2";
                        memoryPointsGetInGunner = "pos cargo r";
                        memoryPointsGetInGunnerDir = "pos cargo r dir";
                        gunnerName = "Passenger (Left Seat)";
                        gunnerCompartments = "Compartment2";
                        memoryPointGunnerOptics = "eye";
                        LODTurnedIn = 1;
                        LODTurnedOut = 1;
                        proxyIndex = 6;
                        gunnerDoor = "Door_LB";
                        maxElev = 45;
                        minElev = -35;
                        maxTurn = 95;
                        minTurn = 18;
                        isPersonTurret = 1;
                        gunnerUsesPilotView = 1;
                        class dynamicViewLimits{};
                    };
                    class CargoTurret_02: CargoTurret_01
                    {
                        gunnerName = "Passenger (Right Seat)";
                        memoryPointsGetInGunner = "pos cargo";
                        memoryPointsGetInGunnerDir = "pos cargo dir";
                        proxyIndex = 5;
                        gunnerDoor = "Door_RB";
                        maxTurn = -11;
                        minTurn = -95;
                        class dynamicViewLimits{};
                    };
                    class CargoTurret_03: CargoTurret_02
                    {
                        gunnerName = "Passenger (Back Seat)";
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        proxyIndex = 7;
                        gunnerDoor = "Door_RB";
                        maxTurn = 95;
                        minTurn = -95;
                        class dynamicViewLimits{};
                    };
                    class PK_Turret: PK_Turret
                    {
                        gunnerName = "$STR_POSITION_COMMANDER";
                        primaryGunner = 0;
                        primaryObserver = 1;
                        commanding = 2;
                        body = "mainTurret_2";
                        gun = "mainGun_2";
                        animationSourceBody = "mainTurret_2";
                        animationSourceGun = "mainGun_2";
                        proxyIndex = 2;
                        gunEnd = "m240_veh_beg";
                        gunBeg = "m240_veh_end";
                        memoryPointGunnerOptics = "gunnerview_2";
                        minElev = -18;
                        maxElev = "+40";
                        minTurn = -45;
                        maxTurn = "+45";
                        initTurn = 0;
                        gunnerForceOptics = 0;
                        gunnerOutOpticsShowCursor = 0;
                        LODTurnedOut = 1100;
                        LODTurnedIn = 1100;
                        weapons[]=
                        {
                            "CUP_Vlmg_M240_veh"
                        };
                        magazines[]=
                        {
                            "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
                        };
                        soundServo[] = {};
                        gunnerAction = "passenger_generic01_foldhands";
                        gunnerInAction = "passenger_generic01_foldhands";
                        ejectDeadGunner = 1;
                        stabilizedInAxes = "StabilizedInAxesNone";
                        memoryPointsGetInGunner = "pos codriver";
                        memoryPointsGetInGunnerDir = "pos codriver dir";
                        memoryPointGun = "usti hlavne_2";
                        selectionFireAnim = "zasleh_2";
                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                        discreteDistanceInitIndex = 3;
                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.8;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics{};
                    };
                    class MainTurret: MainTurret
                    {
                        gunnerName = "$STR_POSITION_GUNNER";
                        gunnerCompartments = "Compartment2";
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";
                        body = "mainTurret";
                        gun = "mainGun";
                        gunnerForceOptics = 0;
                        gunnerOutOpticsShowCursor = 0;
                        weapons[] =
                        {
                            "CUP_Vhmg_M2_static"
                        };
                        magazines[] =
                        {
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M",
                            "CUP_100Rnd_TE4_Red_Tracer_127x99_M"
                        };
                        selectionFireAnim = "muzzleFlash";
                        soundServo[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Sounds\turret-1.wss","db-30",1.0,15};
                        minElev = -18;
                        maxElev = 60;
                        gunnerAction = "Jackal_gunner_L2A1_BAF";
                        gunnerInAction = "Jackal_gunner_L2A1_BAF";
                        ejectDeadGunner = 1;
                        gunnerOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        class ViewOptics
                        {
                            visionMode[] = {"Normal"};
                            minElev = -25; maxElev = +40;
                            initAngleX=0; minAngleX=-30; maxAngleX=+30;
                            initAngleY=0; minAngleY=-100; maxAngleY=+100;
                            initFov=0.0623; minFov=0.0623; maxFov=0.0623;
                        };
                        class ViewGunner: ViewOptics
                        {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class GunFire :WeaponCloudsMGun{interval = 0.01;};
                        stabilizedInAxes = "StabilizedInAxesNone";
                    };
                };
                class AnimationSources: AnimationSources
                {
                    class ReloadAnim
                    {
                        source = "reload";
                        weapon = "CUP_Vhmg_M2_static";
                    };
                    class ReloadMagazine
                    {
                        source = "reloadmagazine";
                        weapon = "CUP_Vhmg_M2_static";
                    };
                    class Revolving
                    {
                        source = "revolving";
                        weapon = "CUP_Vhmg_M2_static";
                    };
                    class ReloadAnim_2
                    {
                        source = "reload";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                    class ReloadMagazine_2
                    {
                        source = "reloadmagazine";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                    class Revolving_2
                    {
                        source = "revolving";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                };
                class textureSources
                {
                    class GBW
                    {
                        displayName = "BAF Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        textures[] =
                        {
                            "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_base_co.paa",
                            "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\textures\gb_w_lr_special_co.paa"
                        };
                        factions[] = {};
                    };
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Special_M2_GB_W.jpg";
            };
            class CUP_B_LR_Special_GMG_GB_W: CUP_B_LR_Special_M2_GB_W
            {
                displayname = "Land Rover GMG (Special) Woodland";
                model = "\CUP\WheeledVehicles\CUP_WheeledVehicles_LR\model\RightHand\CUP_LR_Special_GMG_GB.p3d";
                faction = "CFP_B_GBARMY_WDL";
                class Turrets: Turrets
                {
                    class MainTurret: MainTurret
                    {
                        gunnerName = "$STR_POSITION_GUNNER";
                        gunnerCompartments = "Compartment2";
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";
                        body = "mainTurret";
                        gun = "mainGun";
                        gunnerForceOptics = 0;
                        gunnerOutOpticsShowCursor = 0;
                        weapons[]=
                        {
                            "CUP_Vgmg_MK19_veh"
                        };
                        magazines[]=
                        {
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M"
                        };
                        selectionFireAnim = "zasleh_3";
                        soundServo[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Sounds\turret-1.wss","db-30",1.0,15};
                        minElev = -18;
                        maxElev = 60;
                        gunnerAction = "Jackal_gunner_L2A1_BAF";
                        gunnerInAction = "Jackal_gunner_L2A1_BAF";
                        ejectDeadGunner = 1;
                        gunnerOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        class ViewOptics
                        {
                            visionMode[] = {"Normal"};
                            minElev = -25; maxElev = +40;
                            initAngleX=0; minAngleX=-30; maxAngleX=+30;
                            initAngleY=0; minAngleY=-100; maxAngleY=+100;
                            initFov=0.0623; minFov=0.0623; maxFov=0.0623;
                        };
                        class ViewGunner: ViewOptics
                        {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class GunFire :WeaponCloudsMGun{interval = 0.01;};
                        stabilizedInAxes = "StabilizedInAxesNone";
                    };
                };
                class AnimationSources: AnimationSources
                {
                    class ReloadAnim
                    {
                        source = "reload";
                        weapon = "CUP_Vgmg_MK19_veh";
                    };
                    class ReloadMagazine
                    {
                        source = "reloadmagazine";
                        weapon = "CUP_Vgmg_MK19_veh";
                    };
                    class Revolving
                    {
                        source = "revolving";
                        weapon = "CUP_Vgmg_MK19_veh";
                    };

                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_LR\Data\preview\CUP_B_LR_Special_GMG_GB_W.jpg";
            };

            class CUP_B_BAF_Coyote_GMG_D;
            class CUP_B_BAF_Coyote_GMG_W : CUP_B_BAF_Coyote_GMG_D
            {
                scope = 2;
                scopeCurator = 2;
                faction = "CFP_B_GBARMY_WDL";
                model = "CUP\WheeledVehicles\CUP_WheeledVehicles_Coyote\Coyote_GMG_BAF_w";
                displayname = "Coyote GMG Woodland";
                author = "$STR_CUP_AUTHOR_STRING";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[]={"CUP_B_BAF_Soldier_WDL","CUP_B_BAF_Soldier_WDL"};
                //hiddenSelections[] = {"camo1","camo2","camo3"};
                hiddenSelectionsTextures[] =
                {
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Coyote\Data\preview\CUP_B_BAF_Coyote_GMG_W.jpg";
            };
            class CUP_B_BAF_Coyote_L2A1_D;
            class CUP_B_BAF_Coyote_L2A1_W : CUP_B_BAF_Coyote_L2A1_D
            {
                model = "CUP\WheeledVehicles\CUP_WheeledVehicles_Coyote\Coyote_L2A1_BAF_w";
                scope = 2;
                scopeCurator = 2;
                faction = "CFP_B_GBARMY_WDL";
                displayname = "Coyote L2A1 Woodland";
                author = "$STR_CUP_AUTHOR_STRING";
                crew = "CUP_B_BAF_Soldier_WDL";
                typicalCargo[]={"CUP_B_BAF_Soldier_WDL","CUP_B_BAF_Soldier_WDL"};
                //hiddenSelections[] = {"camo1","camo2","camo3"};
                hiddenSelectionsTextures[] =
                {
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_base_woodlnd_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_adds_woodlnd_co.paa"
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Coyote\Data\preview\CUP_B_BAF_Coyote_L2A1_W.jpg";
            };

            class CUP_BAF_Jackal2_GMG_W;
            class CUP_B_Jackal2_GMG_GB_W: CUP_BAF_Jackal2_GMG_W
            {
                scope = 2;
                faction = "CFP_B_GBARMY_WDL";
                scopeCurator = 2;
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\Data\preview\CUP_B_Jackal2_GMG_GB_W.jpg";
            };
            class CUP_BAF_Jackal2_L2A1_W;
            class CUP_B_Jackal2_L2A1_GB_W: CUP_BAF_Jackal2_L2A1_W
            {
                scope = 2;
                faction = "CFP_B_GBARMY_WDL";
                scopeCurator = 2;
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\Data\preview\CUP_B_Jackal2_L2A1_GB_W.jpg";
            };

            class Wheeled_APC_F;

            class CUP_Mastiff_Base : Wheeled_APC_F
            {
                class Turrets;
            };
            class CUP_B_Mastiff_HMG_GB_W: CUP_Mastiff_Base
            {
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                vehicleClass="Car";
                crew = "CUP_B_BAF_Soldier_Wdl";
                typicalCargo[] = {"CUP_B_BAF_Soldier_Wdl"};
                author = "Community Upgrade Project";
                dlc = "CUP_Vehicles";
                displayName = "Mastiff PPV HMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_Mastiff\CUP_Mastiff.p3d";
                hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Mastiff\Data\preview\CUP_B_Mastiff_HMG_GB_W.jpg";
                class Turrets : Turrets {
                    class Newturret;
                    class MainTurret;
                    class CommanderTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
                class AnimationSources;
            };
            class CUP_B_Mastiff_GMG_GB_W: CUP_B_Mastiff_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Mastiff PPV GMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_Mastiff\CUP_Mastiff_GMG.p3d";
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Mastiff\Data\preview\CUP_B_Mastiff_GMG_GB_W.jpg";
                class Turrets : Turrets
                {
                    class MainTurret: MainTurret
                    {
                        proxyType = "CPGunner";
                        proxyIndex= 1;
                        commanding = 2;
                        primaryGunner = 1;
                        primaryObserver = 0;
                        gunnerCompartments="Compartment1";
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        body = "mainTurret";
                        gun = "mainGun";
                        gunBeg="gmg_start";
                        gunEnd="gmg_end";
                        weapons[]=
                        {
                            "CUP_Vgmg_MK19_veh"
                        };
                        magazines[]=
                        {
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M"
                        };
                        selectionFireAnim = "zasleh";
                        soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
                        gunnerAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerUsesPilotView=0;
                        //viewGunnerInExternal = 1;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        canHideGunner=0;
                        castGunnerShadow = 1;
                        stabilizedInAxes = 0;
                        enableManualFire = 0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";
                        memoryPointGunnerOptics = "gunnerview2";
                        memoryPointGunnerOutOptics= "gunnerview2";
                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,800,1000};
                        discreteDistanceInitIndex = 2;
                        gunnerOutOpticsShowCursor = false;
                        usePip = 0;
                        LODTurnedIn=1200;
                        LODTurnedOut=1000;
                        startEngine=0;
                        minElev = -20;
                        maxElev = 20;
                        dontCreateAI=0;
                        hasGunner = 1;
                        optics = true;
                        gunnerOutOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        gunnerOutOpticsColor[] = {0, 0, 0, 1};
                        gunnerForceOptics = false;
                        gunnerOutForceOptics = false;
                        gunnerOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        class ViewOptics
                        {
                            visionMode[] = {"Normal"};
                            minElev = -25; maxElev = +40;
                            initAngleX=0; minAngleX=-30; maxAngleX=+30;
                            initAngleY=0; minAngleY=-100; maxAngleY=+100;
                            initFov=0.0623; minFov=0.0623; maxFov=0.0623;
                        };
                        class ViewGunner: ViewOptics
                        {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class GunFire :WeaponCloudsMGun{interval = 0.01;};
                        class HitPoints
                        {
                            class HitTurret
                            {
                                armor = 0.8;
                                material=-1; //51
                                name="vez";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                            class HitGun
                            {
                                armor = 0.6;
                                material=-1; //52
                                name="zbran";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                        };
                        gunnerDoor = "";
                    };
                    class CommanderTurret : CommanderTurret {};
                    class CargoTurret_01: CargoTurret_01 {};
                    class CargoTurret_02: CargoTurret_02 {};
                };
                class AnimationSources: AnimationSources
                {
                    class LHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class RHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class hide_bar_armourF
                    {
                    source = "user";
                    animPeriod = 0;
                    initPhase=0;
                    };
                    class HitLFWheel
                    {
                        source = "Hit";
                        hitpoint = "HitLFWheel";
                        raw = 1;
                    };
                    class HitRFWheel: HitLFWheel
                    {
                        hitpoint = "HitRFWheel";
                    };
                    class HitLBWheel: HitLFWheel
                    {
                        hitpoint = "HitLBWheel";
                    };
                    class HitRBWheel: HitLFWheel
                    {
                        hitpoint = "HitRBWheel";
                    };
                    class HitGlass1
                    {
                        source = "Hit";
                        hitpoint = "HitGlass1";
                    };
                    class HitBody
                    {
                        source = "Hit";
                        hitpoint = "HitBody";
                    };
                    class ReloadAnim{source="reload";weapon="CUP_Vgmg_MK19_veh";};
                    class ReloadMagazine{source="reloadmagazine";weapon="CUP_Vgmg_MK19_veh";};
                    class Revolving{source="revolving";weapon="CUP_Vgmg_MK19_veh";};
                    //class muzzle_rot
                    //{
                    //  source = "ammorandom";
                    //  weapon = "HMG_127";
                    //};
                    //class muzzle_hide
                    //{
                    //  source = "reload";
                    //  weapon = "HMG_127";
                    //};
                };
            };
            class CUP_B_Mastiff_LMG_GB_W: CUP_B_Mastiff_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Mastiff PPV LMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_mastiff\CUP_mastiff_LMG.p3d";
                hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};
                hiddenSelectionsMaterials[]={"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex1.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex2.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex3.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\turretbig.rvmat"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Mastiff\Data\preview\CUP_B_Mastiff_LMG_GB_W.jpg";
                class Turrets : Turrets
                {
                    // commander's gun, common for all Jackals
                    class Mainturret: NewTurret
                    {
                        canHideGunner=0;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        viewGunnerInExternal = 1;
                        forceHideGunner= 0;
                        startEngine=0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";

                        primaryGunner = 1;
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        commanding = 2;
                        body = "mainTurret";
                        gun = "mainGun";
                        animationSourceBody = "mainTurret";
                        animationSourceGun = "mainGun";
                        proxyIndex = 1;

                        gunBeg = "usti hlavne";
                        gunEnd = "konec hlavne";

                        //memoryPointGun = "gun_muzzle";
                        selectionFireAnim = "zasleh";

                        memoryPointGunnerOutOptics= "gunnerview2";

                        LODTurnedIn=1200;
                        LODTurnedOut=1000;

                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        //gunnerOpticsModel = \ca\Weapons\optika_empty;
                        gunnerForceOptics = 0;
                        weapons[]={"CUP_Vlmg_M240_veh"};
                        magazines[]=
                        {
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
                        };
                        soundServo[]={};
                        gunnerAction = "Ridgeback_gunner_LMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_LMG_BAF";
                        ejectDeadGunner = false;

                        stabilizedInAxes = StabilizedInAxesNone;
                        memoryPointsGetInGunner= "pos gunner";
                        memoryPointsGetInGunnerDir= "pos gunner dir";

                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                        discreteDistanceInitIndex = 2;
                        disableSoundAttenuation = 1;

                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics{};
                    };
                    class CommanderTurret : CommanderTurret {};
                    class CargoTurret_01: CargoTurret_01 {};
                    class CargoTurret_02: CargoTurret_02 {};
                };

                class AnimationSources: AnimationSources
                {
                    class ReloadAnim
                    {
                        source="reload";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class ReloadMagazine
                    {
                        source="reloadmagazine";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class Revolving
                    {
                        source="revolving";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class muzzle_rot_m240
                    {
                        source = "ammorandom";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                };
            };

            class CUP_Ridgback_Base : Wheeled_APC_F
            {
                class Turrets;
            };
            class CUP_B_Ridgback_HMG_GB_W: CUP_Ridgback_Base
            {
                scope = 2;
                scopeCurator = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                vehicleClass="Car";
                crew = "CUP_B_BAF_Soldier_Wdl";
                typicalCargo[] = {"CUP_B_BAF_Soldier_Wdl"};
                author = "Community Upgrade Project";
                dlc = "CUP_Vehicles";
                displayName = "Ridgback PPV HMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\CUP_ridgback.p3d";
                hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};
                hiddenSelectionsMaterials[]={"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex1.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex2.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex3.rvmat","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\turretbig.rvmat"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ridgeback\Data\preview\CUP_B_Ridgback_HMG_GB_W.jpg";
                class Turrets : Turrets {
                    class Newturret;
                    class MainTurret;
                    class CommanderTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
                class AnimationSources;

            };
            class CUP_B_Ridgback_GMG_GB_W: CUP_B_Ridgback_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Ridgback PPV GMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\CUP_ridgback_GMG.p3d";
                class Turrets : Turrets
                {
                    class MainTurret: MainTurret
                    {
                        canHideGunner=0;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        viewGunnerInExternal = 1;
                        forceHideGunner= 0;

                        proxyType = "CPGunner";
                        proxyIndex= 1;
                        commanding = 2;
                        primaryGunner = 1;
                        primaryObserver = 0;
                        gunnerCompartments="Compartment1";
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        body = "mainTurret";
                        gun = "mainGun";
                        gunBeg="gmg_start";
                        gunEnd="gmg_end";
                        weapons[]=
                        {
                            "CUP_Vgmg_MK19_veh"
                        };
                        magazines[]=
                        {
                            "CUP_96Rnd_40mm_MK19_M",
                            "CUP_96Rnd_40mm_MK19_M",
                            "CUP_96Rnd_40mm_MK19_M",
                            "CUP_96Rnd_40mm_MK19_M",
                            "CUP_96Rnd_40mm_MK19_M"
                        };
                        selectionFireAnim = "zasleh";
                        soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
                        gunnerAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerUsesPilotView=0;
                        //viewGunnerInExternal = 1;
                        castGunnerShadow = 1;
                        stabilizedInAxes = 0;
                        enableManualFire = 0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";
                        memoryPointGunnerOptics = "gunnerview2";
                        memoryPointGunnerOutOptics= "gunnerview2";
                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,800,1000};
                        discreteDistanceInitIndex = 2;
                        gunnerOutOpticsShowCursor = false;
                        usePip = 0;
                        LODTurnedIn=1200;
                        LODTurnedOut=1000;
                        startEngine=0;
                        minElev = -20;
                        maxElev = 20;
                        dontCreateAI=0;
                        hasGunner = 1;
                        optics = true;
                        gunnerOutOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        gunnerOutOpticsColor[] = {0, 0, 0, 1};
                        gunnerForceOptics = false;
                        gunnerOutForceOptics = false;
                        gunnerOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        class ViewOptics
                        {
                            visionMode[] = {"Normal"};
                            minElev = -25; maxElev = +40;
                            initAngleX=0; minAngleX=-30; maxAngleX=+30;
                            initAngleY=0; minAngleY=-100; maxAngleY=+100;
                            initFov=0.0623; minFov=0.0623; maxFov=0.0623;
                        };
                        class ViewGunner: ViewOptics
                        {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class GunFire :WeaponCloudsMGun{interval = 0.01;};
                        class HitPoints
                        {
                            class HitTurret
                            {
                                armor = 0.8;
                                material=-1; //51
                                name="vez";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                            class HitGun
                            {
                                armor = 0.6;
                                material=-1; //52
                                name="zbran";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                        };
                        gunnerDoor = "";
                    };
                    class CommanderTurret : CommanderTurret {};
                    class CargoTurret_01: CargoTurret_01 {};
                    class CargoTurret_02: CargoTurret_02 {};
                };
                class AnimationSources: AnimationSources
                {
                    class LHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class RHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class hide_bar_armourF
                    {
                    source = "user";
                    animPeriod = 0;
                    initPhase=0;
                    };
                    class HitLFWheel
                    {
                        source = "Hit";
                        hitpoint = "HitLFWheel";
                        raw = 1;
                    };
                    class HitRFWheel: HitLFWheel
                    {
                        hitpoint = "HitRFWheel";
                    };
                    class HitLBWheel: HitLFWheel
                    {
                        hitpoint = "HitLBWheel";
                    };
                    class HitRBWheel: HitLFWheel
                    {
                        hitpoint = "HitRBWheel";
                    };
                    class HitGlass1
                    {
                        source = "Hit";
                        hitpoint = "HitGlass1";
                    };
                    class HitBody
                    {
                        source = "Hit";
                        hitpoint = "HitBody";
                    };
                    class ReloadAnim{source="reload";weapon="CUP_Vgmg_MK19_veh";};
                    class ReloadMagazine{source="reloadmagazine";weapon="CUP_Vgmg_MK19_veh";};
                    class Revolving{source="revolving";weapon="CUP_Vgmg_MK19_veh";};
                    //class muzzle_rot
                    //{
                    //  source = "ammorandom";
                    //  weapon = "HMG_127";
                    //};
                    //class muzzle_hide
                    //{
                    //  source = "reload";
                    //  weapon = "HMG_127";
                    //};
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ridgeback\Data\preview\CUP_B_Ridgback_GMG_GB_W.jpg";
            };
            class CUP_B_Ridgback_LMG_GB_W: CUP_B_Ridgback_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Ridgback PPV LMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\CUP_ridgback_LMG.p3d";
                class Turrets : Turrets
                {
                    // commander's gun, common for all Jackals
                    class Mainturret: NewTurret
                    {
                        canHideGunner=0;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        viewGunnerInExternal = 1;
                        forceHideGunner= 0;
                        startEngine=0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";

                        primaryGunner = 1;
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        commanding = 2;
                        body = "mainTurret";
                        gun = "mainGun";
                        animationSourceBody = "mainTurret";
                        animationSourceGun = "mainGun";
                        proxyIndex = 1;

                        gunBeg = "usti hlavne";
                        gunEnd = "konec hlavne";

                        //memoryPointGun = "gun_muzzle";
                        selectionFireAnim = "zasleh";

                        memoryPointGunnerOutOptics= "gunnerview2";

                        LODTurnedIn=1200;
                        LODTurnedOut=1000;

                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        //gunnerOpticsModel = \ca\Weapons\optika_empty;
                        gunnerForceOptics = 0;
                        weapons[]={"CUP_Vlmg_M240_veh"};
                        magazines[]=
                        {
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
                        };
                        soundServo[]={};
                        gunnerAction = "Ridgeback_gunner_LMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_LMG_BAF";
                        ejectDeadGunner = false;

                        stabilizedInAxes = StabilizedInAxesNone;
                        memoryPointsGetInGunner= "pos gunner";
                        memoryPointsGetInGunnerDir= "pos gunner dir";

                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                        discreteDistanceInitIndex = 2;
                        disableSoundAttenuation = 1;

                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics{};
                    };
                    class CommanderTurret : CommanderTurret {};
                    class CargoTurret_01: CargoTurret_01 {};
                    class CargoTurret_02: CargoTurret_02 {};
                };

                class AnimationSources: AnimationSources
                {
                    class ReloadAnim
                    {
                        source="reload";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class ReloadMagazine
                    {
                        source="reloadmagazine";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class Revolving
                    {
                        source="revolving";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class muzzle_rot_m240
                    {
                        source = "ammorandom";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                };
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Ridgeback\Data\preview\CUP_B_Ridgback_LMG_GB_W.jpg";
            };

            class CUP_Wolfhound_Base : Wheeled_APC_F
            {
                class Turrets;
            };
            class CUP_B_Wolfhound_HMG_GB_W: CUP_Wolfhound_Base
            {
                scope = 2;
                side = 1;
                faction = "CFP_B_GBARMY_WDL";
                vehicleClass="Car";
                crew = "CUP_B_BAF_Soldier_Wdl";
                typicalCargo[] = {"CUP_B_BAF_Soldier_Wdl"};
                author = "Community Upgrade Project";
                dlc = "CUP_Vehicles";
                displayName = "Wolfhound TSV HMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_Wolfhound\CUP_Wolfhound.p3d";
                hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Wolfhound\Data\preview\CUP_B_Wolfhound_HMG_GB_W.jpg";
                class Turrets : Turrets {
                    class Newturret;
                    class MainTurret;
                };
                class AnimationSources;
            };
            class CUP_B_Wolfhound_GMG_GB_W: CUP_B_Wolfhound_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Wolfhound TSV GMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_wolfhound\CUP_wolfhound_GMG.p3d";
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Wolfhound\Data\preview\CUP_B_Wolfhound_GMG_GB_W.jpg";
                class Turrets : Turrets
                {
                    class MainTurret: MainTurret
                    {
                        proxyType = "CPGunner";
                        proxyIndex= 1;
                        commanding = 2;
                        primaryGunner = 1;
                        primaryObserver = 0;
                        gunnerCompartments="Compartment1";
                        memoryPointsGetInGunner = "pos gunner";
                        memoryPointsGetInGunnerDir = "pos gunner dir";
                        body = "mainTurret";
                        gun = "mainGun";
                        gunBeg="gmg_start";
                        gunEnd="gmg_end";
                        weapons[]=
                        {
                            "CUP_Vgmg_MK19_veh"
                        };
                        magazines[]=
                        {
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M",
                            "CUP_32Rnd_40mm_MK19_M"
                        };
                        selectionFireAnim = "zasleh";
                        soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
                        gunnerAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_GMG_BAF";
                        gunnerUsesPilotView=0;
                        //viewGunnerInExternal = 1;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        canHideGunner=0;
                        castGunnerShadow = 1;
                        stabilizedInAxes = 0;
                        enableManualFire = 0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";
                        memoryPointGunnerOptics = "gunnerview2";
                        memoryPointGunnerOutOptics= "gunnerview2";
                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,800,1000};
                        discreteDistanceInitIndex = 2;
                        gunnerOutOpticsShowCursor = false;
                        usePip = 0;
                        LODTurnedIn=1200;
                        LODTurnedOut=1000;
                        startEngine=0;
                        minElev = -20;
                        maxElev = 20;
                        dontCreateAI=0;
                        hasGunner = 1;
                        optics = true;
                        gunnerOutOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        gunnerOutOpticsColor[] = {0, 0, 0, 1};
                        gunnerForceOptics = false;
                        gunnerOutForceOptics = false;
                        gunnerOpticsModel = "CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\ACOG_optic";
                        class ViewOptics
                        {
                            visionMode[] = {"Normal"};
                            minElev = -25; maxElev = +40;
                            initAngleX=0; minAngleX=-30; maxAngleX=+30;
                            initAngleY=0; minAngleY=-100; maxAngleY=+100;
                            initFov=0.0623; minFov=0.0623; maxFov=0.0623;
                        };
                        class ViewGunner: ViewOptics
                        {
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class GunFire :WeaponCloudsMGun{interval = 0.01;};
                        class HitPoints
                        {
                            class HitTurret
                            {
                                armor = 0.8;
                                material=-1; //51
                                name="vez";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                            class HitGun
                            {
                                armor = 0.6;
                                material=-1; //52
                                name="zbran";
                                visual="";
                                passThrough=0;
                                explosionShielding = 0.3;
                            };
                        };
                        gunnerDoor = "";
                    };
                    class CommanderTurret : Newturret
                    {
                        body="obsTurret";
                        gun="";
                        animationSourceBody="obsTurret";
                        animationSourceGun="";
                        animationSourceHatch="";
                        animationSourceCamElev="";
                        proxyType="CPCommander";
                        proxyIndex=1;
                        gunnerName="Commander";
                        primaryGunner=0;
                        primaryObserver=1;
                        weapons[]={};
                        magazines[]={};
                        soundServo[]={"A3\sounds_f\dummysound",0.01,1.0,10};
                        particlesPos="";
                        particlesDir="";
                        minElev=-4;
                        maxElev=20;
                        initElev=0;
                        minTurn=-10;
                        maxTurn=10;
                        initTurn=0;
                        maxHorizontalRotSpeed=0.5;
                        maxVerticalRotSpeed=0.5;
                        stabilizedInAxes=0;
                        primary=0;
                        commanding=3;
                        gunnerGetInAction="GetInMRAP_01";
                        gunnerGetOutAction="GetOutLow";
                        turretCanSee=0;
                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner : ViewOptics //viewoptics
                        {
                            initAngleX=5;
                            minAngleX=-85;
                            maxAngleX=85;
                            initAngleY=0;
                            minAngleY=-120;
                            maxAngleY=120;
                            initFov=0.95; //0.7
                            minFov=0.95; //0.42
                            maxFov=0.95; //0.85
                            minMoveX=0;
                            maxMoveX=0;
                            minMoveY=0;
                            maxMoveY=0;
                            minMoveZ=0;
                            maxMoveZ=0;
                            continuous=0;
                        };
                        class TurretSpec
                        {
                            showHeadPhones=0;
                        };
                        gunnerOpticsModel="";
                        gunnerOpticsColor[]={0,0,0,1};
                        gunnerForceOptics=0;
                        gunnerOpticsShowCursor=0;
                        turrentInfoType="";
                        gunnerOutOpticsModel="";
                        gunnerOutOpticsColor[]={0,0,0,1};
                        gunnerOpticsEffect[]={};
                        gunnerOutOpticsEffect[]={};
                        memoryPointGunnerOutOptics="";
                        gunnerOutForceOptics=0;
                        gunnerOutOpticsShowCursor=0;
                        gunnerFireAlsoInInternalCamera=0;
                        gunnerOutFireAlsoInInternalCamera=0;
                        gunnerUsesPilotView=1;
                        castGunnerShadow=0;
                        viewGunnerShadow=0;
                        viewGunnerShadowDiff=0.1;
                        viewGunnerShadowAmb=0.1;
                        ejectDeadGunner=0;
                        hideWeaponsGunner=1;
                        canHideGunner=0;
                        forceHideGunner=0;
                        outGunnerMayFire=0;
                        inGunnerMayFire=0;
                        enableManualFire = 0;
                        showHMD=0;
                        viewGunnerInExternal=1;
                        lockWhenDriverOut=0;
                        gunnerCompartments="Compartment1";
                        LODTurnedIn=1100;
                        LODTurnedOut=1100;
                        startEngine=0;
                        memoryPointsGetInGunnerPrecise="";
                        armorLights=0.4;
                        class Reflectors {};
                        aggregateReflectors[]={};
                        class GunFire : WeaponFireGun {};
                        class GunClouds : WeaponCloudsGun {};
                        class MGunClouds : WeaponCloudsMGun {};
                        class HitPoints
                        {
                /*                 class HitTurret
                            {
                                armor = 0.8;
                                material=51;
                                name="turret";
                                visual="turret";
                                passThrough=1;
                                explosionShielding = 0.3;
                            };
                            class HitGun
                            {
                                armor = 0.6;
                                material=52;
                                name="gun";
                                visual="gun";
                                passThrough=1;
                                explosionShielding = 0.3;
                            }; */
                        };
                /*              class ViewOptics
                        {
                            initAngleX=0;
                            minAngleX=-30;
                            maxAngleX=30;
                            initAngleY=0;
                            minAngleY=-100;
                            maxAngleY=100;
                            initFov=0.4;
                            minFov=0.4; // 0.07
                            maxFov=0.4; //0.35
                            minMoveX=0;
                            maxMoveX=0;
                            minMoveY=0;
                            maxMoveY=0;
                            minMoveZ=0;
                            maxMoveZ=0;
                        }; */
                        forceNVG=0;
                        isCopilot=0;
                        canEject=1;
                        gunnerLeftHandAnimName="";
                        gunnerRightHandAnimName="";
                        gunnerLeftLegAnimName="";
                        gunnerRightLegAnimName="";
                        gunnerDoor="";
                        preciseGetInOut=0;
                        turretFollowFreeLook=0;
                        allowTabLock=0;
                        showAllTargets=0;
                        hasGunner = 1;
                        dontCreateAI=0;
                        disableSoundAttenuation=0;
                        gunnerInAction="passenger_apc_narrow_generic01";
                        gunnerAction="passenger_apc_narrow_generic01";
                        gunBeg="";
                        gunEnd="";
                        memoryPointGunnerOptics=""; //commanderview
                        memoryPointsGetInGunner="pos commander";
                        memoryPointsGetInGunnerDir="pos commander dir";
                        memoryPointGun="";
                        selectionFireAnim="";
                    };
                };
                class AnimationSources: AnimationSources
                {
                    class LHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class RHatch_anim
                    {
                        source = "door";
                        animperiod = 1;
                        initPhase = 0;
                    };
                    class hide_bar_armourF_wolfhound
                    {
                    source = "user";
                    animPeriod = 0;
                    initPhase=0;
                    };
                    class HitLFWheel
                    {
                        source = "Hit";
                        hitpoint = "HitLFWheel";
                        raw = 1;
                    };
                    class HitRFWheel: HitLFWheel
                    {
                        hitpoint = "HitRFWheel";
                    };
                    class HitLBWheel: HitLFWheel
                    {
                        hitpoint = "HitLBWheel";
                    };
                    class HitRBWheel: HitLFWheel
                    {
                        hitpoint = "HitRBWheel";
                    };
                    class HitGlass1
                    {
                        source = "Hit";
                        hitpoint = "HitGlass1";
                    };
                    class HitBody
                    {
                        source = "Hit";
                        hitpoint = "HitBody";
                    };
                    class ReloadAnim{source="reload";weapon="CUP_Vgmg_MK19_veh";};
                    class ReloadMagazine{source="reloadmagazine";weapon="CUP_Vgmg_MK19_veh";};
                    class Revolving{source="revolving";weapon="CUP_Vgmg_MK19_veh";};
                    //class muzzle_rot
                    //{
                    //  source = "ammorandom";
                    //  weapon = "HMG_127";
                    //};
                    //class muzzle_hide
                    //{
                    //  source = "reload";
                    //  weapon = "HMG_127";
                    //};
                };
            };
            class CUP_B_Wolfhound_LMG_GB_W: CUP_B_Wolfhound_HMG_GB_W
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName = "Wolfhound TSV LMG Woodland";
                model = "\cup\wheeledvehicles\cup_wheeledvehicles_wolfhound\CUP_wolfhound_LMG.p3d";
                editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_Wolfhound\Data\preview\CUP_B_Wolfhound_LMG_GB_W.jpg";
                class Turrets : Turrets
                {
                    // commander's gun, common for all Jackals
                    class Mainturret: NewTurret
                    {
                        canHideGunner=0;
                        OutGunnerMayFire = true;
                        InGunnerMayFire = false;
                        viewGunnerInExternal = 1;
                        forceHideGunner= 0;
                        startEngine=0;
                        gunnerRightHandAnimName = "OtocHlaven_shake";
                        gunnerLeftHandAnimName = "OtocHlaven_shake";

                        primaryGunner = 1;
                        proxyType = "CPGunner";
                        primaryObserver = 0;
                        commanding = 2;
                        body = "mainTurret";
                        gun = "mainGun";
                        animationSourceBody = "mainTurret";
                        animationSourceGun = "mainGun";
                        proxyIndex = 1;

                        gunBeg = "usti hlavne";
                        gunEnd = "konec hlavne";

                        //memoryPointGun = "gun_muzzle";
                        selectionFireAnim = "zasleh";

                        memoryPointGunnerOutOptics= "gunnerview2";

                        LODTurnedIn=1200;
                        LODTurnedOut=1000;

                        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
                        //gunnerOpticsModel = \ca\Weapons\optika_empty;
                        gunnerForceOptics = 0;
                        weapons[]={"CUP_Vlmg_M240_veh"};
                        magazines[]=
                        {
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"
                        };
                        soundServo[]={};
                        gunnerAction = "Ridgeback_gunner_LMG_BAF";
                        gunnerInAction = "Ridgeback_gunner_LMG_BAF";
                        ejectDeadGunner = false;

                        stabilizedInAxes = StabilizedInAxesNone;
                        memoryPointsGetInGunner= "pos gunner";
                        memoryPointsGetInGunnerDir= "pos gunner dir";

                        turretInfoType = "RscOptics_Offroad_01";
                        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                        discreteDistanceInitIndex = 2;
                        disableSoundAttenuation = 1;

                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner: ViewOptics{};
                    };
                    class CommanderTurret : Newturret
                    {
                        body="obsTurret";
                        gun="";
                        animationSourceBody="obsTurret";
                        animationSourceGun="";
                        animationSourceHatch="";
                        animationSourceCamElev="";
                        proxyType="CPCommander";
                        proxyIndex=1;
                        gunnerName="Commander";
                        primaryGunner=0;
                        primaryObserver=1;
                        weapons[]={};
                        magazines[]={};
                        soundServo[]={"A3\sounds_f\dummysound",0.01,1.0,10};
                        particlesPos="";
                        particlesDir="";
                        minElev=-4;
                        maxElev=20;
                        initElev=0;
                        minTurn=-10;
                        maxTurn=10;
                        initTurn=0;
                        maxHorizontalRotSpeed=0.5;
                        maxVerticalRotSpeed=0.5;
                        stabilizedInAxes=0;
                        primary=0;
                        commanding=3;
                        gunnerGetInAction="GetInMRAP_01";
                        gunnerGetOutAction="GetOutLow";
                        turretCanSee=0;
                        class ViewOptics
                        {
                            initAngleX = 0;
                            minAngleX = -30;
                            maxAngleX = 30;
                            initAngleY = 0;
                            minAngleY = -100;
                            maxAngleY = 100;
                            initFov = 0.7;
                            minFov = 0.25;
                            maxFov = 1.1;
                        };
                        class ViewGunner : ViewOptics //viewoptics
                        {
                            initAngleX=5;
                            minAngleX=-85;
                            maxAngleX=85;
                            initAngleY=0;
                            minAngleY=-120;
                            maxAngleY=120;
                            initFov=0.95; //0.7
                            minFov=0.95; //0.42
                            maxFov=0.95; //0.85
                            minMoveX=0;
                            maxMoveX=0;
                            minMoveY=0;
                            maxMoveY=0;
                            minMoveZ=0;
                            maxMoveZ=0;
                            continuous=0;
                        };
                        class TurretSpec
                        {
                            showHeadPhones=0;
                        };
                        gunnerOpticsModel="";
                        gunnerOpticsColor[]={0,0,0,1};
                        gunnerForceOptics=0;
                        gunnerOpticsShowCursor=0;
                        turrentInfoType="";
                        gunnerOutOpticsModel="";
                        gunnerOutOpticsColor[]={0,0,0,1};
                        gunnerOpticsEffect[]={};
                        gunnerOutOpticsEffect[]={};
                        memoryPointGunnerOutOptics="";
                        gunnerOutForceOptics=0;
                        gunnerOutOpticsShowCursor=0;
                        gunnerFireAlsoInInternalCamera=0;
                        gunnerOutFireAlsoInInternalCamera=0;
                        gunnerUsesPilotView=1;
                        castGunnerShadow=0;
                        viewGunnerShadow=0;
                        viewGunnerShadowDiff=0.1;
                        viewGunnerShadowAmb=0.1;
                        ejectDeadGunner=0;
                        hideWeaponsGunner=1;
                        canHideGunner=0;
                        forceHideGunner=0;
                        outGunnerMayFire=0;
                        inGunnerMayFire=0;
                        enableManualFire = 0;
                        showHMD=0;
                        viewGunnerInExternal=1;
                        lockWhenDriverOut=0;
                        gunnerCompartments="Compartment1";
                        LODTurnedIn=1100;
                        LODTurnedOut=1100;
                        startEngine=0;
                        memoryPointsGetInGunnerPrecise="";
                        armorLights=0.4;
                        class Reflectors {};
                        aggregateReflectors[]={};
                        class GunFire : WeaponFireGun {};
                        class GunClouds : WeaponCloudsGun {};
                        class MGunClouds : WeaponCloudsMGun {};
                        class HitPoints
                        {
                    /*                 class HitTurret
                            {
                                armor = 0.8;
                                material=51;
                                name="turret";
                                visual="turret";
                                passThrough=1;
                                explosionShielding = 0.3;
                            };
                            class HitGun
                            {
                                armor = 0.6;
                                material=52;
                                name="gun";
                                visual="gun";
                                passThrough=1;
                                explosionShielding = 0.3;
                            }; */
                        };
                    /*              class ViewOptics
                        {
                            initAngleX=0;
                            minAngleX=-30;
                            maxAngleX=30;
                            initAngleY=0;
                            minAngleY=-100;
                            maxAngleY=100;
                            initFov=0.4;
                            minFov=0.4; // 0.07
                            maxFov=0.4; //0.35
                            minMoveX=0;
                            maxMoveX=0;
                            minMoveY=0;
                            maxMoveY=0;
                            minMoveZ=0;
                            maxMoveZ=0;
                        }; */
                        forceNVG=0;
                        isCopilot=0;
                        canEject=1;
                        gunnerLeftHandAnimName="";
                        gunnerRightHandAnimName="";
                        gunnerLeftLegAnimName="";
                        gunnerRightLegAnimName="";
                        gunnerDoor="";
                        preciseGetInOut=0;
                        turretFollowFreeLook=0;
                        allowTabLock=0;
                        showAllTargets=0;
                        hasGunner = 1;
                        dontCreateAI=0;
                        disableSoundAttenuation=0;
                        gunnerInAction="passenger_apc_narrow_generic01";
                        gunnerAction="passenger_apc_narrow_generic01";
                        gunBeg="";
                        gunEnd="";
                        memoryPointGunnerOptics=""; //commanderview
                        memoryPointsGetInGunner="pos commander";
                        memoryPointsGetInGunnerDir="pos commander dir";
                        memoryPointGun="";
                        selectionFireAnim="";
                    };
                };

                class AnimationSources: AnimationSources
                {
                    class ReloadAnim
                    {
                        source="reload";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class ReloadMagazine
                    {
                        source="reloadmagazine";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class Revolving
                    {
                        source="revolving";
                        weapon="CUP_Vlmg_M240_veh";
                    };
                    class muzzle_rot_m240
                    {
                        source = "ammorandom";
                        weapon = "CUP_Vlmg_M240_veh";
                    };
                };
            };

            class CUP_MCV80_Base;
            class CUP_B_MCV80_GB_D_SLAT : CUP_MCV80_Base
            {
                class AnimationSources;
            };
            class CUP_B_MCV80_GB_W_SLAT: CUP_B_MCV80_GB_D_SLAT
            {
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\Data\preview\CUP_B_MCV80_GB_W_SLAT.jpg";
                displayName= "MCV-80 Warrior (SLAT - Woodland)";
                dlc = "CUP_Vehicles";
                crew = "CUP_B_BAF_Crew_WDL";
                author = "$STR_CUP_AUTHOR_STRING";
                model = "\CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\CUP_MCV80_BAF";
                HiddenSelections[] = {"camo1", "camo01", "camo02"};
                HiddenSelectionsTextures[] =
                {
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\Data\fv510_1_co.paa"
                };
                class AnimationSources: AnimationSources
                {
                    class HideSlat
                    {
                        displayName = "Hide SLAT armor";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                    class HideProxy_Desert
                    {
                        displayName = "Hide Proxy Desert";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Woodland
                    {
                        displayName = "Hide Proxy Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                };
            };
            class CUP_B_MCV80_GB_D : CUP_B_MCV80_GB_D_SLAT
            {
                class AnimationSources;
            };
            class CUP_B_MCV80_GB_W: CUP_B_MCV80_GB_D
            {
                scope=2;
                scopeCurator=2;
                faction = "CFP_B_GBARMY_WDL";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\Data\preview\CUP_B_MCV80_GB_W.jpg";
                displayName= "MCV-80 Warrior (Woodland)";
                crew = "CUP_B_BAF_Crew_WDL";
                author = "$STR_CUP_AUTHOR_STRING";
                dlc = "CUP_Vehicles";
                HiddenSelections[] = {"camo1", "camo01", "camo02"};
                HiddenSelectionsTextures[] =
                {
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa",
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_MCV80\Data\fv510_1_co.paa"
                };
                class AnimationSources: AnimationSources
                {
                    class HideSlat
                    {
                        displayName = "Hide SLAT armor";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Desert
                    {
                        displayName = "Hide Proxy Desert";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Woodland
                    {
                        displayName = "Hide Proxy Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                };
            };

            class CUP_FV510_Base;
            class CUP_B_FV510_GB_D_SLAT : CUP_FV510_Base
            {
                class AnimationSources;
            };
            class CUP_B_FV510_GB_W_SLAT: CUP_B_FV510_GB_D_SLAT
            {
                displayName= "FV510 Warrior (SLAT - Woodland)";
                faction = "CFP_B_GBARMY_WDL";
                crew = "CUP_B_BAF_Crew_WDL";
                HiddenSelections[] = {"camo1"};
                HiddenSelectionsTextures[] =
                {
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa"
                };
                class AnimationSources: AnimationSources
                {
                    class HideSlat
                    {
                        displayName = "Hide SLAT armor";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                    class HideProxy_Desert
                    {
                        displayName = "Hide Proxy Desert";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Woodland
                    {
                        displayName = "Hide Proxy Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                };
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\preview\CUP_B_FV510_GB_W_SLAT.jpg";
            };
            class CUP_B_FV510_GB_D: CUP_B_FV510_GB_W_SLAT
            {
                displayName= "FV510 Warrior (Desert)";
                crew = "CUP_B_BAF_Crew_DDPM";
                HiddenSelections[] = {"camo1"};
                faction = "CUP_B_GB";
                HiddenSelectionsTextures[] =
                {
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_co.paa"
                };
                class AnimationSources: AnimationSources
                {
                    class HideSlat
                    {
                        displayName = "Hide SLAT armor";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Desert
                    {
                        displayName = "Hide Proxy Desert";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                    class HideProxy_Woodland
                    {
                        displayName = "Hide Proxy Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                };
                armor = 240;
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\preview\CUP_B_FV510_GB_D.jpg";
            };
            class CUP_B_FV510_GB_W: CUP_B_FV510_GB_D
            {
                faction = "CFP_B_GBARMY_WDL";
                displayName= "FV510 Warrior (Woodland)";
                crew = "CUP_B_BAF_Crew_WDL";
                HiddenSelections[] = {"camo1"};
                HiddenSelectionsTextures[] =
                {
                    "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\warrior_ext_w_co.paa"
                };
                class AnimationSources: AnimationSources
                {
                    class HideSlat
                    {
                        displayName = "Hide SLAT armor";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Desert
                    {
                        displayName = "Hide Proxy Desert";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 0;
                    };
                    class HideProxy_Woodland
                    {
                        displayName = "Hide Proxy Woodland";
                        author = "$STR_CUP_AUTHOR_STRING";
                        source="user";
                        animPeriod = 0;
                        initPhase = 1;
                    };
                };
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_FV510\Data\preview\CUP_B_FV510_GB_W.jpg";
            };

            class Tank_F;

            class CUP_FV432_Bulldog_Base : Tank_F
            {
                class Turrets;
            };
            class CUP_B_FV432_Bulldog_GB_D : CUP_FV432_Bulldog_Base
            {
                class Turrets : Turrets
                {
                    class MainTurret;
                };
            };
            class CUP_B_FV432_Bulldog_GB_W: CUP_B_FV432_Bulldog_GB_D
            {
                displayName="FV432 Bulldog M240 [Woodland]";
                crew = "CUP_B_BAF_Crew_WDL";
                faction = "CFP_B_GBARMY_WDL";
                class Turrets: Turrets
                {
                    class MainTurret: MainTurret {};
                };

                hiddenSelectionsTextures[] =
                {
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_01w_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_02w_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_03w_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_04w_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_05w_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\turretbar_co.paa"
                };

                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\Data\preview\CUP_B_FV432_Bulldog_GB_W.jpg";
            };
            class CUP_B_FV432_Bulldog_GB_D_RWS : CUP_B_FV432_Bulldog_GB_D
            {
                class Turrets : Turrets
                {
                    class MainTurret;
                };
            };
            class CUP_B_FV432_Bulldog_GB_W_RWS: CUP_B_FV432_Bulldog_GB_D_RWS
            {

                faction = "CFP_B_GBARMY_WDL";
                displayName="FV432 Bulldog M2 RWS [Woodland]";
                crew = "CUP_B_BAF_Crew_WDL";

                class Turrets: Turrets
                {
                    class MainTurret: MainTurret {};
                };

                hiddenSelectionsTextures[] =
                {
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_01W_RWS_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_02W_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_03W_co.paa",
                        "\CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\data\bulldog_04W_RWS_co.paa"
                };

                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_Bulldog\Data\preview\CUP_B_FV432_Bulldog_GB_W_RWS.jpg";
            };

            class CUP_Challenger2_base : Tank_F
            {
                class EventHandlers;
            };
            class CUP_B_Challenger2_Woodland_BAF: CUP_Challenger2_base
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";

                // Faction defines: side ID, faction class, crew, typical cargo
                side = 1;
                crew = "CUP_B_BAF_Crew_WDL";
                faction = "CFP_B_GBARMY_WDL";
                typicalCargo[] = {"CUP_B_BAF_Crew_WDL", "CUP_B_BAF_Crew_WDL", "CUP_B_BAF_Crew_WDL", "CUP_B_BAF_Crew_WDL"};

                scope = 2;

                displayName = "FV4034 Challenger 2 (Woodland)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_Woodland_BAF.jpg";
                textureList[] =
                {
                    "woodlandGreen", 1,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_2CW_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                faction = "CFP_B_GBARMY_WDL";
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_2cw_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_2cw_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Two Color Woodland)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_2CW_BAF.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 1,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            /// HAVE TO REDEFINE CUP CHALLYS COS
            class CUP_B_Challenger2_Desert_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "CUP_B_GB";
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_desert_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_desert_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Desert)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_Desert_BAF.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 1,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_2CD_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "CUP_B_GB";
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_2cd_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_2cd_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Two-Color Desert)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_2CD_BAF.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 1,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_Snow_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "CUP_B_GB";
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_snow_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_snow_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Snow)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_Snow_BAF.jpg";

                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 1,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_2CS_BAF: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "CUP_B_GB";
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_2cs_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_2cs_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Two Color Snow)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_2CS_BAF.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 1
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_Green_CTRG: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "BLU_CTRG_F";
                crew = "B_T_Crew_F";
                typicalCargo[] = {"B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F"};
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_ctrgt_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_ctrgt_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Green)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_Green_CTRG.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 1,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_Sand_CTRG: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction = "BLU_CTRG_F";
                crew = "B_T_Crew_F";
                typicalCargo[] = {"B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F", "B_T_Crew_F"};
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_ctrgs_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_ctrgs_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa"
                };
                displayName = "FV4034 Challenger 2 (Sand)";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_Sand_CTRG.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 1,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 0,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

            class CUP_B_Challenger2_NATO: CUP_B_Challenger2_Woodland_BAF
            {
                // Basic defines:knowledge required to recognize this type of target
                accuracy = 0.5;
                author = "$STR_CUP_AUTHOR_STRING";
                expansion = 3;
                dlc = "CUP_Vehicles";
                scope = 2;
                faction="BLU_F";
                crew = "B_crew_F";
                typicalCargo[] = {"B_crew_F", "B_crew_F", "B_crew_F", "B_crew_F"};
                hiddenSelectionsTextures[] = {
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_hull_nato_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\cup_ch2_turret_nato_co.paa",
                    "\CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\data\CUP_ch2_wheels_green_co.paa",
                    "\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_woodlnd_co.paa"
                };
                displayName = "FV4034 Challenger 2";
                editorPreview = "CUP\TrackedVehicles\CUP_TrackedVehicles_ChallengerII\Data\preview\CUP_B_Challenger2_NATO.jpg";
                textureList[] =
                {
                    "woodlandGreen", 0,
                    "woodlandTwoColor", 0,
                    "ctrgTropical", 0,
                    "ctrgSand", 0,
                    "desertTan", 0,
                    "desertTwoColor", 0,
                    "NATOTan", 1,
                    "winterWhite", 0,
                    "winterTwoColor", 0
                };

                class EventHandlers: EventHandlers
                {
                    // (_this select 0): the vehicle
                    // """" Random texture source (pick one from the property textureList[])
                    // []: randomize the animation sources (accordingly to the property animationList[])
                    // false: Don't change the mass even if an animation source has a defined mass
                    init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
                };
            };

    // New MTP and Air units for woodland faction
        // Vehicles
            class CUP_AW159_Dynamic_Base;
            class CUP_AW159_Dynamic_Base_OCimport_01 : CUP_AW159_Dynamic_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_AW159_Dynamic_Base_OCimport_02 : CUP_AW159_Dynamic_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_L111A1_base_OCimport_01 : CUP_L111A1_base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_L111A1_base_OCimport_02 : CUP_L111A1_base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_L111A1_MiniTripod_base_OCimport_01 : CUP_L111A1_MiniTripod_base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_L111A1_MiniTripod_base_OCimport_02 : CUP_L111A1_MiniTripod_base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_L16A2_base_OCimport_01 : CUP_L16A2_base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_L16A2_base_OCimport_02 : CUP_L16A2_base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_B_F35B_USMC;
            class CUP_B_F35B_USMC_OCimport_01 : CUP_B_F35B_USMC { scope = 0; class EventHandlers; };
            class CUP_B_F35B_USMC_OCimport_02 : CUP_B_F35B_USMC_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_B_F35B_Stealth_USMC;
            class CUP_B_F35B_Stealth_USMC_OCimport_01 : CUP_B_F35B_Stealth_USMC { scope = 0; class EventHandlers; };
            class CUP_B_F35B_Stealth_USMC_OCimport_02 : CUP_B_F35B_Stealth_USMC_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_B_AH64D_DL_USA;
            class CUP_B_AH64D_DL_USA_OCimport_01 : CUP_B_AH64D_DL_USA { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_AH64D_DL_USA_OCimport_02 : CUP_B_AH64D_DL_USA_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_GR9_DYN_Base;
            class CUP_GR9_DYN_Base_OCimport_01 : CUP_GR9_DYN_Base { scope = 0; class EventHandlers; };
            class CUP_GR9_DYN_Base_OCimport_02 : CUP_GR9_DYN_Base_OCimport_01 { scope = 0; class EventHandlers; };

            class CUP_AW159_Unarmed_Base;
            class CUP_AW159_Unarmed_Base_OCimport_01 : CUP_AW159_Unarmed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_AW159_Unarmed_Base_OCimport_02 : CUP_AW159_Unarmed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_B_SA330_Puma_HC1_BAF;
            class CUP_B_SA330_Puma_HC1_BAF_OCimport_01 : CUP_B_SA330_Puma_HC1_BAF { scope = 0; class EventHandlers; class Turrets; };
            class CUP_B_SA330_Puma_HC1_BAF_OCimport_02 : CUP_B_SA330_Puma_HC1_BAF_OCimport_01 {
                class EventHandlers;
                class CargoTurret;
                class Turrets : Turrets {
                    class MainTurret;
                    class CopilotTurret;
                };
                class ViewPilot;
            };

            class CUP_SA330_Base;
            class CUP_SA330_Base_OCimport_01 : CUP_SA330_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_SA330_Base_OCimport_02 : CUP_SA330_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                };
            };

            class CUP_Merlin_HM2_Base;
            class CUP_Merlin_HM2_Base_OCimport_01 : CUP_Merlin_HM2_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HM2_Base_OCimport_02 : CUP_Merlin_HM2_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3A_Armed_Base;
            class CUP_Merlin_HC3A_Armed_Base_OCimport_01 : CUP_Merlin_HC3A_Armed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3A_Armed_Base_OCimport_02 : CUP_Merlin_HC3A_Armed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3_Armed_Base;
            class CUP_Merlin_HC3_Armed_Base_OCimport_01 : CUP_Merlin_HC3_Armed_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_Armed_Base_OCimport_02 : CUP_Merlin_HC3_Armed_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class MainTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3A_Base;
            class CUP_Merlin_HC3A_Base_OCimport_01 : CUP_Merlin_HC3A_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3A_Base_OCimport_02 : CUP_Merlin_HC3A_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_Merlin_HC3_VIV_Base;
            class CUP_Merlin_HC3_VIV_Base_OCimport_01 : CUP_Merlin_HC3_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_VIV_Base_OCimport_02 : CUP_Merlin_HC3_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                };
            };

            class CUP_Merlin_HC3_Base;
            class CUP_Merlin_HC3_Base_OCimport_01 : CUP_Merlin_HC3_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_Merlin_HC3_Base_OCimport_02 : CUP_Merlin_HC3_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class CopilotTurret;
                    class CargoTurret_01;
                    class CargoTurret_02;
                    class CargoTurret_03;
                    class CargoTurret_04;
                };
            };

            class CUP_CH47F_VIV_Base;
            class CUP_CH47F_VIV_Base_OCimport_01 : CUP_CH47F_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_CH47F_VIV_Base_OCimport_02 : CUP_CH47F_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class RightDoorGun;
                    class CopilotTurret;
                };
            };

            class CUP_CH47F_base;
            class CUP_CH47F_base_OCimport_01 : CUP_CH47F_base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_CH47F_base_OCimport_02 : CUP_CH47F_base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                    class RightDoorGun;
                    class BackDoorGun;
                    class CopilotTurret;
                };
            };

            class CUP_C130J_VIV_Base;
            class CUP_C130J_VIV_Base_OCimport_01 : CUP_C130J_VIV_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_C130J_VIV_Base_OCimport_02 : CUP_C130J_VIV_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CUP_C130J_Base;
            class CUP_C130J_Base_OCimport_01 : CUP_C130J_Base { scope = 0; class EventHandlers; class Turrets; };
            class CUP_C130J_Base_OCimport_02 : CUP_C130J_Base_OCimport_01 {
                class EventHandlers;
                class Turrets : Turrets {
                    class MainTurret;
                };
            };

            class CFP_B_GBArmy_L111A1_Machine_Gun_WDL_01 : CUP_L111A1_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "L111A1 Machine Gun";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_L111A1_Minitripod_WDL_01 : CUP_L111A1_MiniTripod_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "L111A1 Minitripod";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_L16A2_81mm_Mortar_WDL_01 : CUP_L16A2_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "L16A2 81mm Mortar";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Rifleman_WDL_01";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_F35B_Lightning_II_WDL_01 : CUP_B_F35B_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_F35\Data\preview\CUP_B_F35B_AA_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_F35B_Lightning_II_Stealth_WDL_01 : CUP_B_F35B_Stealth_USMC_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "F-35B Lightning II (Stealth)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                hiddenSelectionsTextures[] = {"CUP\AirVehicles\CUP_AirVehicles_F35\data\f35_baf_co.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_F35\Data\preview\CUP_B_F35B_AA_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AH_1_WDL_01 : CUP_B_AH64D_DL_USA_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AH-1";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};
                hiddenSelectionsTextures[] =
                {
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_body_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\ah1_baf_details_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AH64\data\clear_empty.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AH64\Data\preview\CUP_B_AH1_NO_BAF.jpg";
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };

                class TransportPylonsComponent
                {
                    UIPicture = "\CUP\AirVehicles\CUP_AirVehicles_AH64\Data\UI\CUP_AH64_3DEN_CA.paa";
                    class presets
                    {
                        class Empty
                        {
                            displayName = "Empty";
                            attachment[] = {};
                        };
                        class AntiTank
                        {
                            displayName = "Anti-Tank";
                            attachment[] = {
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M"
                            };
                        };
                        class MultiRole
                        {
                            displayName = "Multi-Role";
                            attachment[] = {
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_4Rnd_AGM114L_Hellfire_II_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M"
                            };
                        };
                        class Escort
                        {
                            displayName = "Escort";
                            attachment[] = {
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M",
                                "CUP_PylonPod_19Rnd_CRV7_HE_M"
                            };
                        };
                    };
                    class pylons
                    {
                        // Outer Left
                        class pylonLeft1
                        {
                            //maxweight = 560;
                            hardpoints[] = {"DAR","DAGR", "B_SHRIEKER", "CUP_NATO_HELO_SMALL", "CUP_NATO_HELO_LARGE", "CUP_NATO_HELO_AH64"};
                            attachment = "CUP_PylonPod_19Rnd_CRV7_HE_M";
                            priority = 5;
                            UIposition[] = {0.59, 0.35}; // x,y coordinates in 3DEN UI
                            turret[] = {};
                            bay = 1;
                        };
                        // Inner Left
                        class pylonLeft2 : pylonLeft1
                        {
                            UIposition[] = {0.57, 0.4}; // x,y coordinates in 3DEN UI
                            priority = 4;
                        };

                        // Inner Right
                        class pylonRight1 : pylonLeft1
                        {
                            UIposition[] = {0.08, 0.4};
                            mirroredMissilePos = 2;
                        };
                        // Outer Right
                        class pylonRight2: pylonRight1
                        {
                            UIposition[] = {0.06, 0.35};
                            mirroredMissilePos = 1;
                            priority = 4;
                        };

                        // Wing tip Left
                        class pylonWingL : pylonLeft1
                        {
                            hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
                            UIposition[] = {0.62, 0.3}; // x,y coordinates in 3DEN UI
                            attachment = "";
                        };
                        // Wing tip Left
                        class pylonWingR : pylonWingL
                        {
                            mirroredMissilePos = 5;
                            UIposition[] = {0.0.4, 0.3}; // x,y coordinates in 3DEN UI
                            attachment = "";
                        };
                    };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Harrier_GR_9_WDL_01 : CUP_GR9_DYN_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Harrier GR.9";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\cup\airvehicles\cup_airvehicles_av8b\cup_gr9";
                accuracy = 1000;
                threat[] = {1,0.7,1};
                weapons[] =
                {
                    //"CUP_Laserdesignator_mounted",
                    "CMFlareLauncher"
                };
                magazines[] =
                {
                    //"Laserbatteries",
                    "120Rnd_CMFlare_Chaff_Magazine"
                };
                class Library
                {
                    libTextDesc = "The British Aerospace Harrier II is a second-generation vertical/short takeoff and landing (V/STOL) jet aircraft used previously by the Royal Air Force (RAF) and, between 2006 and 2010, the Royal Navy (RN). The aircraft was derived from the McDonnell Douglas AV-8B Harrier II, which itself was a development of the Hawker Siddeley Harrier. Initial deliveries of the Harrier II were designated in service as Harrier GR5; subsequently upgraded airframes were redesignated accordingly as GR7 and GR9.";
                };
                hiddenSelections[] = {"Camo1","Camo2","pip0"};
                hiddenSelectionsTextures[] = {"cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa","cup\airvehicles\cup_airvehicles_av8b\data\grx_brit_ext_co.paa","#(argb,512,512,1)r2t(rendertarget0,1.0)"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_Av8B\Data\preview\CUP_B_GR9_CAP_GB.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Green_WDL_01 : CUP_AW159_Dynamic_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Green)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 1,
                    "hide_struts", 1
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";
                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Green_Unarmed_WDL_01 : CUP_AW159_Unarmed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Green, Unarmed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";

                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 0,
                    "hide_struts", 0
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\lynx_base_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };
                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Grey_Unarmed_WDL_01 : CUP_AW159_Unarmed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Grey, Unarmed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_AW159\Data\preview\CUP_B_AW159_Unarmed_GB.jpg";

                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 0,
                    "hide_struts", 0
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                };


                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AW159_Wildcat_Grey_WDL_01 : CUP_AW159_Dynamic_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AW159 Wildcat (Grey)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                model = "\CUP\AirVehicles\CUP_AirVehicles_AW159\CUP_AW159.p3d";
                picture = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\picture_lynx_unarmed_ca.paa";
                icon = "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\UI\icon_lynx_unarmed_ca.paa";
                typicalCargo[] = {"CFP_B_GBArmy_Pilot_WDL_01"};

                animationList[] =
                {
                    "hide_radar", 1,
                    "hide_struts", 1
                };

                hiddenSelectionsTextures[] = {
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\Skins\lynx_base_rn_grey_co.paa",
                    "\CUP\AirVehicles\CUP_AirVehicles_AW159\data\ah64d_details_co.paa"
                };

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_SA_330_Puma_HC2_WDL_01 : CUP_B_SA330_Puma_HC1_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "SA-330 Puma HC2";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";

                model="\cup\airvehicles\cup_airvehicles_sa330\OFrP_Puma_VE";
                class Turrets : Turrets
                {
                        class CopilotTurret: MainTurret
                        {
                            primaryGunner = 0;
                            gunnerForceOptics = 0;
                            body = "";
                            gun = "";
                            animationSourceBody = "";
                            animationSourceGun = "";
                            weapons[] = {};
                            magazines[] = {};

                            isCopilot = 1;
                            CanEject = 0;

                            gunnerAction = "pilot_Heli_Transport_01";
                            gunnerInAction = "pilot_Heli_Transport_01";
                            memoryPointsGetInGunner = "pos cargo";
                            memoryPointsGetInGunnerDir = "pos cargo dir";
                            gunnerGetInAction = "GetInHeli_Transport_01Cargo";
                            gunnerGetOutAction = "GetOutLow";
                            memoryPointGunnerOptics = "";

                            gunnerName = "Co-Pilot";
                            gunnerLeftHandAnimName = "lever_copilot";
                            gunnerRightHandAnimName = "stick_copilot";
                            gunnerLeftLegAnimName = "PedalL";
                            gunnerRightLegAnimName = "PedalR";
                            priority = 4;

                            proxyIndex = 1;
                            LODTurnedIn = 1100;
                            LODTurnedOut = 1100;
                            gunnerCompartments = "Compartment1";
                            commanding = -3;
                            slingLoadOperator = 1;
                            turretCanSee = "1 + 2 + 4 + 8 + 16";

                            class ViewGunner : ViewPilot {};
                        };
                        class CargoTurret_01: CargoTurret                       /// position for Firing from Vehicles
                        {
                            gunnerAction                = "passenger_inside_4"; /// generic animation for sitting inside with rifle ready
                            gunnerCompartments          = "Compartment1";       /// gunner is not able to switch seats
                            memoryPointsGetInGunner     = "pos cargo right";        /// specific memory points to allow choice of position
                            memoryPointsGetInGunnerDir  = "pos cargo dir right";    /// direction of get in action
                            gunnerName                  = "Passenger (Right Seat)"; /// name of the position in the Action menu
                            proxyIndex                  = 13;                   /// what cargo proxy is used according to index in the model
                            maxElev                     = 15;                   /// what is the highest possible elevation of the turret
                            minElev                     = -60;                  /// what is the lowest possible elevation of the turret
                            maxTurn                     = 70;                   /// what is the left-most possible turn of the turret
                            minTurn                     = -50;                  /// what is the right-most possible turn of the turret
                            isPersonTurret              = 1;                    /// enables firing from vehicle functionality
                            ejectDeadGunner             = 0;                    /// seatbelts included
                            enabledByAnimationSource    = "ofrp_puma_porte_droite";             /// doesn't work unless the said animation source is 1
                            usepip = 0;
                            gunnerOutOpticsModel = "";
                            gunnerOpticsModel = "";
                            startEngine = 0;
                            outGunnerMayFire = 1;
                            inGunnerMayFire = 0;
                            commanding=-2;
                            memoryPointGunnerOptics="";
                        };
                        class CargoTurret_02: CargoTurret                       /// position for Firing from Vehicles
                        {
                            gunnerAction                = "passenger_inside_4"; /// generic animation for sitting inside with rifle ready
                            gunnerCompartments          = "Compartment1";       /// gunner is not able to switch seats
                            memoryPointsGetInGunner     = "pos cargo left";     /// specific memory points to allow choice of position
                            memoryPointsGetInGunnerDir  = "pos cargo dir left"; /// direction of get in action
                            gunnerName                  = "Passenger (Left Seat)";  /// name of the position in the Action menu
                            proxyIndex                  = 14;                   /// what cargo proxy is used according to index in the model
                            maxElev                     = 15;                   /// what is the highest possible elevation of the turret
                            minElev                     = -60;                  /// what is the lowest possible elevation of the turret
                            maxTurn                     = 70;                   /// what is the left-most possible turn of the turret
                            minTurn                     = -50;                  /// what is the right-most possible turn of the turret
                            isPersonTurret              = 1;                    /// enables firing from vehicle functionality
                            ejectDeadGunner             = 0;                    /// seatbelts included
                            enabledByAnimationSource    = "ofrp_puma_porte_gauche";             /// doesn't work unless the said animation source is 1
                            usepip = 0;
                            gunnerOutOpticsModel = "";
                            gunnerOpticsModel = "";
                            startEngine = 0;
                            outGunnerMayFire = 1;
                            inGunnerMayFire = 0;
                            commanding=-2;
                            memoryPointGunnerOptics="";
                        };
                };

                hiddenSelections[] = {"_OFrP_330_skin01"};
                hiddenSelectionsTextures[] = {"\cup\airvehicles\cup_airvehicles_sa330\data\330_skin00x_1.paa"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_SA330\Data\preview\CUP_B_SA330_Puma_HC2_BAF.jpg";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_SA_330_Puma_HC1_WDL_01 : CUP_B_SA330_Puma_HC1_BAF_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "SA-330 Puma HC1";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_SA330\Data\preview\CUP_B_SA330_Puma_HC1_BAF.jpg";
                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HM2_WDL_01 : CUP_Merlin_HM2_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HM2";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC4_GB.jpg";
                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                    class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                    class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HC3A_Armed_WDL_01 : CUP_Merlin_HC3A_Armed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3A (Armed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3A_GB.jpg";
                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                    class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                    class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HC3_Armed_WDL_01 : CUP_Merlin_HC3_Armed_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3 (Armed)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";

                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                    class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                    class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HC3A_WDL_01 : CUP_Merlin_HC3A_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3A";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3A_GB.jpg";
                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                    class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                    class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HC3_VIV_WDL_01 : CUP_Merlin_HC3_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3 (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";
                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                };



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Merlin_HC3_WDL_01 : CUP_Merlin_HC3_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Merlin HC3";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};

                model = "\CUP\AirVehicles\CUP_AirVehicles_HC3\CUP_MerlinHC3_BAF";
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_HC3\Data\preview\CUP_B_Merlin_HC3_GB.jpg";

                CUP_Jumping_enabled = 1;
                CUP_JumpPoint[] = {"StaticLine_MemoryPoint"};

                class Turrets : Turrets {
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                    class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
                    class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
                    class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
                    class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Chinook_HC_4VIV_WDL_01 : CUP_CH47F_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Chinook HC-4 (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                hiddenSelectionsTextures[] =
                {
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
                    "",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_GB.jpg";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class RightDoorGun : RightDoorGun { gunnerType = ""; };
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Chinook_HC_4_WDL_01 : CUP_CH47F_base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Chinook HC-4";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CFP_B_GBArmy_Pilot_WDL_01";
                typicalCargo[]={"CUP_B_BAF_Pilot_DPM","CUP_B_BAF_Pilot_DPM"};
                hiddenSelectionsTextures[] =
                {
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_1_baf_co.paa",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_2_baf_co.paa",
                    "",
                    "cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_CH47\Data\preview\CUP_B_CH47F_GB.jpg";

                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                    class RightDoorGun : RightDoorGun { gunnerType = ""; };
                    class BackDoorGun : BackDoorGun { gunnerType = ""; };
                    class CopilotTurret : CopilotTurret { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_C130J_VIV_WDL_01 : CUP_C130J_VIV_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "C-130J (VIV)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};
                hiddenSelectionsTextures[] = {
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf2_co.paa",
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf2_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_Cargo_GB.jpg";
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_C130J_WDL_01 : CUP_C130J_Base_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "C-130J";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";
                crew = "CUP_B_BAF_Pilot_WDL";
                typicalCargo[] = {"CUP_B_BAF_Pilot_WDL", "CUP_B_BAF_Pilot_WDL"};
                hiddenSelectionsTextures[] = {
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_body_raf1_co.paa",
                        "CUP\AirVehicles\CUP_AirVehicles_C130J\data\textures\c130j_wings_raf1_co.paa"
                };
                editorPreview = "CUP\AirVehicles\CUP_AirVehicles_C130J\Data\preview\CUP_B_C130J_GB.jpg";
                class Turrets : Turrets {
                    class MainTurret : MainTurret { gunnerType = ""; };
                };

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };
        // People
            class CUP_B_BAF_Soldier_06_MTP;
            class CUP_B_BAF_Soldier_06_MTP_OCimport_01 : CUP_B_BAF_Soldier_06_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Soldier_06_MTP_OCimport_02 : CUP_B_BAF_Soldier_06_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_07_MTP;
            class CUP_B_BAF_Soldier_07_MTP_OCimport_01 : CUP_B_BAF_Soldier_07_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Soldier_07_MTP_OCimport_02 : CUP_B_BAF_Soldier_07_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_05_MTP;
            class CUP_B_BAF_Soldier_05_MTP_OCimport_01 : CUP_B_BAF_Soldier_05_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Soldier_05_MTP_OCimport_02 : CUP_B_BAF_Soldier_05_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_08_MTP;
            class CUP_B_BAF_Soldier_08_MTP_OCimport_01 : CUP_B_BAF_Soldier_08_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Soldier_08_MTP_OCimport_02 : CUP_B_BAF_Soldier_08_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Soldier_04_MTP;
            class CUP_B_BAF_Soldier_04_MTP_OCimport_01 : CUP_B_BAF_Soldier_04_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Soldier_04_MTP_OCimport_02 : CUP_B_BAF_Soldier_04_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Sniper_AS50_MTP;
            class CUP_B_BAF_Sniper_AS50_MTP_OCimport_01 : CUP_B_BAF_Sniper_AS50_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Sniper_AS50_MTP_OCimport_02 : CUP_B_BAF_Sniper_AS50_MTP_OCimport_01 { class EventHandlers; };

            class CUP_B_BAF_Spotter_MTP;
            class CUP_B_BAF_Spotter_MTP_OCimport_01 : CUP_B_BAF_Spotter_MTP { scope = 0; class EventHandlers; };
            class CUP_B_BAF_Spotter_MTP_OCimport_02 : CUP_B_BAF_Spotter_MTP_OCimport_01 { class EventHandlers; };

            class CFP_B_GBArmy_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Grenadier_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Grenadier";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_1Rnd_HEDP_M203',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_1Rnd_HEDP_M203',6,1],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShell',2,1]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Rifleman_night_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (night)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_CWS_Laser','','CUP_acc_ANPEQ_2','CUP_optic_CWS',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Rifleman_light_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (light)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[]],[],'','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Rifleman_backpack_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Rifleman (backpack)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";

                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_RifleAmmo',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_1Rnd_HEDP_M203',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Asst_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_ARAmmo',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',4,200],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_3_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Asst_Machineguner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. Machineguner";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_MGAmmo',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',4,100],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Asst_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_ATAmmo',[['CUP_NLAW_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Asst_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_HATAmmo',[['CUP_Javelin_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Asst_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Asst. AA Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_HAAAmmo',[['CUP_Stinger_M',2,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],'CUP_H_BAF_Helmet_3_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Officer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Officer";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30]]],['CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader',[['CUP_30Rnd_556x45_Stanag',2,30],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['SmokeShellGreen',1,1],['SmokeShell',1,1],['SmokeShellRed',1,1],['CUP_HandGrenade_L109A1_HE',2,1]]],[],'CUP_H_BAF_Officer_Beret_PRR_U','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Section_Leader_WDL_01 : CUP_B_BAF_Soldier_08_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Section Leader";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S6_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S6_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader',[['CUP_30Rnd_556x45_Stanag',4,30],['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['CUP_HandGrenade_L109A1_HE',2,1]]],[],'CUP_H_BAF_Helmet_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Team_Leader_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Team Leader";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_Holo_Laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',6,30],['CUP_HandGrenade_L109A1_HE',1,1],['CUP_1Rnd_HEDP_M203',3,1],['CUP_1Rnd_Smoke_M203',2,1],['CUP_1Rnd_SmokeRed_M203',1,1],['CUP_1Rnd_SmokeGreen_M203',1,1]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Automatic_Rifleman_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Automatic Rifleman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_L110A1_Aim_Laser','','CUP_acc_ANPEQ_15','CUP_optic_CompM4',['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',200],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShell',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',1,200]]],['CUP_B_AssaultPack_AR',[['CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1',2,200]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Machinegunner_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Machinegunner";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_L7A2','','','',['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',100],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_HandGrenade_L109A1_HE',2,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',1,100]]],['CUP_B_AssaultPack_MG',[['CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M',2,100]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AT_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_NLAW','','','',['CUP_NLAW_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],['CUP_B_AssaultPack_LAT',[['CUP_NLAW_M',1,1]]],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AT_Specialist_Javelin_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AT Specialist (Javelin)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_Javelin','','','',['CUP_Javelin_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_AA_Specialist_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "AA Specialist";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],['CUP_launch_FIM92Stinger','','','',['CUP_Stinger_M',1],[],''],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',3,30]]],[],'CUP_H_BAF_Helmet_1_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Marksman_LSW_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LSW)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L86A2_ACOG','','','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',5,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1],['SmokeShellRed',1,1]]],[],'CUP_H_BAF_Helmet_Net_2_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Marksman_LRR_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Marksman (LRR)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AWM_des_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_86x70_L115A1',5],[],'CUP_bipod_Harris_1A2_L'],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_5Rnd_86x70_L115A1',2,5],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_5Rnd_86x70_L115A1',5,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_B_AssaultPack_LRRAmmo',[['CUP_5Rnd_86x70_L115A1',4,5],['CUP_HandGrenade_L109A1_HE',2,1],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['B_IR_Grenade',2,1]]],'CUP_H_BAF_Helmet_4_MTP','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Sniper_LRR_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (LRR)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AWM_des_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_86x70_L115A1',5],[],'CUP_bipod_Harris_1A2_L'],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_86x70_L115A1',2,5],['SmokeShell',1,1]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_86x70_L115A1',5,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Sniper_AS50_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AS50_SBPMII','','','CUP_optic_SB_3_12x50_PMII',['CUP_5Rnd_127x99_as50_M',5],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_127x99_as50_M',1,5]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_127x99_as50_M',6,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShell',1,1],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Sniper_AS50_TWS_WDL_01 : CUP_B_BAF_Sniper_AS50_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Sniper (AS50 TWS)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_srifle_AS50_AMPAS13c2','','','CUP_optic_AN_PAS_13c2',['CUP_5Rnd_127x99_as50_M',5],[],''],[],['CUP_hgun_Colt1911','','','',['CUP_7Rnd_45ACP_1911',7],[],''],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_5Rnd_127x99_as50_M',1,5]]],['CUP_V_B_GER_Carrier_Vest',[['CUP_5Rnd_127x99_as50_M',6,5],['CUP_7Rnd_45ACP_1911',3,7],['SmokeShell',1,1],['SmokeShellRed',1,1],['SmokeShellGreen',1,1]]],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Spotter_WDL_01 : CUP_B_BAF_Soldier_04_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_ACOG_Laser','','CUP_acc_ANPEQ_2','CUP_optic_ACOG',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',2,30],['CUP_HandGrenade_L109A1_HE',1,1]]],[],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_PVS7']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Spotter_night_WDL_01 : CUP_B_BAF_Spotter_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Spotter (night)";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_Ghillie";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_CWS_Laser','','CUP_acc_ANPEQ_2','CUP_optic_CWS',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_Ghillie',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',2,30],['CUP_HandGrenade_L109A1_HE',1,1]]],[],[],'','',['CUP_Vector21Nite','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_PVS7']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Pilot_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Pilot";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_Holo_laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk2_DDPM_Pilot',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Helmet_Pilot','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Crewman_WDL_01 : CUP_B_BAF_Soldier_06_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Crewman";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S4_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S4_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],[],'CUP_H_BAF_Crew_Helmet_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Medic_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Medic";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_Medic',[['Medikit',1],['FirstAidKit',10]]],'CUP_H_BAF_Helmet_Net_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Joint_Terminal_Attack_Controller_WDL_01 : CUP_B_BAF_Soldier_07_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Joint Terminal Attack Controller";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S5_UnRolled";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_GL_Holo_Laser','','CUP_acc_ANPEQ_2','CUP_optic_Eotech533',['CUP_30Rnd_556x45_Stanag',30],['CUP_1Rnd_HEDP_M203',1],''],[],[],['CUP_U_B_BAF_MTP_S5_UnRolled',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['SmokeShell',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Grenadier',[['CUP_30Rnd_556x45_Stanag',6,30],['CUP_HandGrenade_L109A1_HE',1,1],['CUP_1Rnd_HEDP_M203',3,1],['CUP_1Rnd_Smoke_M203',2,1],['CUP_1Rnd_SmokeRed_M203',1,1],['CUP_1Rnd_SmokeGreen_M203',1,1],['Laserbatteries',1,1]]],['CUP_B_AssaultPack_FAC',[['SmokeShellRed',1,1],['SmokeShellGreen',1,1],['SmokeShellYellow',1,1],['SmokeShellPurple',1,1],['SmokeShell',2,1],['Laserbatteries',3,1],[['CUP_Vector21Nite','','','',[],[],''],1]]],'CUP_H_BAF_Helmet_4_MTP','',['CUP_SOFLAM','','','',['Laserbatteries',1],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

            class CFP_B_GBArmy_Engineer_WDL_01 : CUP_B_BAF_Soldier_05_MTP_OCimport_02 {
                author = "Tupolov";
                scope = 2;
                scopeCurator = 2;
                displayName = "Engineer";
                side = 1;
                faction = "CFP_B_GBArmy_WDL";

                identityTypes[] = { "Head_NATO" , "LanguageENGB_F" , "G_GUERIL_default" };
                uniformClass = "CUP_U_B_BAF_MTP_S3_RolledUp";



                class EventHandlers : EventHandlers {
                    class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                    class ALiVE_orbatCreator {
                        init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_L85A2_SUSAT_Laser','','CUP_acc_ANPEQ_2','CUP_optic_SUSAT',['CUP_30Rnd_556x45_Stanag',30],[],''],[],[],['CUP_U_B_BAF_MTP_S3_RolledUp',[['FirstAidKit',1],['CUP_30Rnd_556x45_Stanag',1,30],['CUP_HandGrenade_L109A1_HE',1,1]]],['CUP_V_BAF_Osprey_Mk4_MTP_Rifleman',[['CUP_30Rnd_556x45_Stanag',4,30],['CUP_HandGrenade_L109A1_HE',1,1],['SmokeShell',1,1]]],['CUP_B_AssaultPack_Engineer',[['ToolKit',1],['MineDetector',1],['CUP_PipeBomb_M',1,1]]],'CUP_H_BAF_Helmet_2_MTP','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','CUP_NVG_HMNVS']];reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                    };

                };

                // custom attributes (do not delete)
                ALiVE_orbatCreator_owned = 1;

            };

};