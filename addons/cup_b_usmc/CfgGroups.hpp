
class CfgGroups {
    class WEST {

        class CUP_B_USMC {
            name = "US Marine Corps (Jungle / Woodland)";

            class Infantry {
                name = "Infantry";

                class CUP_B_USMC_InfSquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit5 {
                        position[] = {12,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit6 {
                        position[] = {14,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit7 {
                        position[] = {16,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit8 {
                        position[] = {18,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit9 {
                        position[] = {3,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit10 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit11 {
                        position[] = {7,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit12 {
                        position[] = {9,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                };

                class CUP_B_USMC_FireTeam {
                    name = "Fire Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                };

                class CUP_B_USMC_FireTeam_MG {
                    name = "Fire Team (MG)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_MG";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                };

                class CUP_B_USMC_FireTeam_AT {
                    name = "Fire Team (AT)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AT";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                };

                class CUP_B_USMC_FireTeam_Support {
                    name = "Fire Team (Support)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Medic";
                    };
                };

                class CUP_B_USMC_HeavyATTeam {
                    name = "Heavy AT Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.15;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_HAT";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AT";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                };

                class CUP_B_USMC_SniperTeam {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Sniper_M40A3";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Spotter";
                    };
                };

                class CUP_B_USMC_InfSquad_FROG_WDL {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_SL_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                    };
                    class Unit5 {
                        position[] = {12,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit6 {
                        position[] = {14,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit7 {
                        position[] = {16,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                    class Unit8 {
                        position[] = {18,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                    };
                    class Unit9 {
                        position[] = {3,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit10 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit11 {
                        position[] = {7,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                    class Unit12 {
                        position[] = {9,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                    };
                };

                class CUP_B_USMC_FireTeam_FROG_WDL {
                    name = "Fire Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_FROG_WDL";
                    };
                };

                class CUP_B_USMC_FireTeam_MG_FROG_WDL {
                    name = "Fire Team (MG)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_MG_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                };

                class CUP_B_USMC_FireTeam_AT_FROG_WDL {
                    name = "Fire Team (AT)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AT_FROG_WDL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                };

                class CUP_B_USMC_FireTeam_Support_FROG_WDL {
                    name = "Fire Team (Support)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Medic_FROG_WDL";
                    };
                };

                class CUP_B_USMC_HeavyATTeam_FROG_WDL {
                    name = "Heavy AT Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.15;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_HAT_FROG_WDL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AT_FROG_WDL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT_FROG_WDL";
                    };
                };

                delete CUP_B_USMC_InfSquad_FROG_DES;
                delete CUP_B_USMC_FireTeam_FROG_DES;
                delete CUP_B_USMC_FireTeam_MG_FROG_DES;
                delete CUP_B_USMC_FireTeam_AT_FROG_DES;
                delete CUP_B_USMC_FireTeam_Support_FROG_DES;
                delete CUP_B_USMC_HeavyATTeam_FROG_DES;
                delete CUP_B_USMC_FRTeam_Desert;
                delete CUP_B_USMC_FRTeam_Razor_Desert;

            };

            class SpecOps {

                name = "Special Forces";

                class CUP_B_USMC_FRTeam {
                    name = "Force Recon Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.01;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Soldier_Marksman";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Saboteur";
                    };
                    class Unit5 {
                        position[] = {11,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Medic";
                    };
                };

                class CUP_B_USMC_FRTeam_Razor {
                    name = "Razor Team";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Story_Miles";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Story_Cooper";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Story_Sykes";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Story_Rodriguez";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FR_Story_OHara";
                    };
                };
            };

            class Motorized {
                name = "Motorized Infantry";

                class CUP_B_USMC_MotInfSquad {
                    name = "Motorized Squad (RG-31)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit2 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit3 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit4 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit5 {
                        position[] = {12,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit6 {
                        position[] = {14,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit7 {
                        position[] = {16,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit8 {
                        position[] = {18,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit9 {
                        position[] = {3,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit10 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit11 {
                        position[] = {7,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit12 {
                        position[] = {9,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit13 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_RG31E_M2";
                    };
                    class Unit14 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_RG31_Mk19";
                    };
                };

                class CUP_B_USMC_MotInfSection {
                    name = "Motorized Section (HMMWV)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_HMMWV_M2_USMC";
                    };
                    class Unit2 {
                        position[] = {-5,-7,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_HMMWV_MK19_USMC";
                    };
                    class Unit3 {
                        position[] = {3,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit4 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit5 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit6 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit7 {
                        position[] = {11,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                };

                class CUP_B_USMC_MotInfSection_AT {
                    name = "Motorized Section (AT) (HMMWV)";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.15;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_HMMWV_TOW_USMC";
                    };
                    class Unit2 {
                        position[] = {-5,-7,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_HMMWV_TOW_USMC";
                    };
                    class Unit3 {
                        position[] = {3,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

                class CUP_B_USMC_MechInfSquad {
                    name = "Mechanized Rifle Squad";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.9;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_AAV_USMC";
                    };
                    class Unit2 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit3 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit4 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit5 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit6 {
                        position[] = {12,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit7 {
                        position[] = {14,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit8 {
                        position[] = {16,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit9 {
                        position[] = {18,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                    class Unit10 {
                        position[] = {3,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit11 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit12 {
                        position[] = {7,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit13 {
                        position[] = {9,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                };

                class CUP_B_USMC_MechReconSection {
                    name = "Recon Section";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.6;

                    class Unit0 {
                        position[] = {0,5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {-5,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_LAV25_USMC";
                    };
                    class Unit2 {
                        position[] = {3,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_MG";
                    };
                    class Unit3 {
                        position[] = {5,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_AR";
                    };
                    class Unit4 {
                        position[] = {7,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit5 {
                        position[] = {9,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier_LAT";
                    };
                    class Unit6 {
                        position[] = {11,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_USMC_Soldier";
                    };
                };

            };

            class Armored {
                name = "Armor";

                class CUP_B_USMC_TankPlatoon {
                    name = "Armor Platoon";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,10,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_USMC";
                    };
                    class Unit1 {
                        position[] = {5,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_USMC";
                    };
                    class Unit2 {
                        position[] = {10,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_USMC";
                    };
                    class Unit3 {
                        position[] = {15,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_USMC";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

                class CUP_B_USMC_AH1ZSquadron {
                    name = "AH-1Z Squadron";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,15,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_AH1Z";
                    };
                    class Unit1 {
                        position[] = {15,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_AH1Z";
                    };
                };

                class CUP_B_USMC_UH1YSquadron {
                    name = "UH-1Y Squadron";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,15,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_UH1Y_GUNSHIP_F";
                    };
                    class Unit1 {
                        position[] = {15,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_UH1Y_GUNSHIP_F";
                    };
                };

                class CUP_B_USMC_MV22Squadron {
                    name = "MV-22 Squadron";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,20,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_MV22_USMC";
                    };
                    class Unit1 {
                        position[] = {20,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_MV22_USMC";
                    };
                };

                class CUP_B_USMC_AV8BFighterSquadron {
                    name = "AV-8B Fighter Squadron";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,20,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_AV8B";
                    };
                    class Unit1 {
                        position[] = {20,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_AV8B";
                    };
                };

                class CUP_B_USMC_AV8BBomberSquadron {
                    name = "AV-8B Bomber Squadron";
                    side = 1;
                    faction = "CUP_B_USMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,20,0};
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_AV8B_LGB";
                    };
                    class Unit1 {
                        position[] = {20,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CUP_B_AV8B_LGB";
                    };
                };

            };

        };

    };
};
