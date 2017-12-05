class CfgGroups {
    class WEST {

        class CFP_B_USARMY_WDL {
            name = "US Army (Jungle / Woodland)";

            class Infantry {
                name = "Infantry";

                class CFP_B_USARMY_infantry_rifle_squad_wdl {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit8 {
                        position[] = { 17 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AAR";
                    };
                };

                class CFP_B_USARMY_infantry_weapons_squad_wdl {
                    name = "Weapons Squad";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_MG";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AMG";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_MG";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AMG";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_LAT";
                    };
                };

                class CFP_B_USARMY_infantry_team_wdl {
                    name = "Team";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AAR";
                    };
                };

                class CFP_B_USARMY_infantry_team_mg_wdl {
                    name = "Team (MG)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_MG";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AMG";
                    };
                };

                class CFP_B_USARMY_infantry_team_at_wdl {
                    name = "Team (AT)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AAT";
                    };
                };

                class CFP_B_USARMY_infantry_team_support_wdl {
                    name = "Team (Support)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_Marksman";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Medic";
                    };
                };

                class CFP_B_USARMY_infantry_heavy_at_team_wdl {
                    name = "Heavy AT Team";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_HAT";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_HAT";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AHAT";
                    };
                };

                class CFP_B_USARMY_infantry_sniper_team_wdl {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Sniper";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Sniper";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Spotter";
                    };
                };

                class CFP_B_USARMY_infantry_M2_team_high {
                    name = "M2 MG Team [High]";
                    side = 1;
                    faction = "CFP_B_USARMY";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Asst_Gunner_M2_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Gunner_M2_High_WDL_01";
                    };
                };

                class CFP_B_USARMY_infantry_M2_team_low {
                    name = "M2 MG Team [Low]";
                    side = 1;
                    faction = "CFP_B_USARMY";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Asst_Gunner_M2Low_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Gunner_M2_Low_WDL_01";
                    };
                };

                class CFP_B_USARMY_infantry_mortar_team {
                    name = "Mortar Team";
                    side = 1;
                    faction = "CFP_B_USARMY";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Asst_Gunner_Mortar_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Gunner_Mortar_WDL_01";
                    };
                };

                class CFP_B_USARMY_infantry_TOW_team {
                    name = "TOW Team";
                    side = 1;
                    faction = "CFP_B_USARMY";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Asst_Gunner_TOW_WDL_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_Gunner_TOW_WDL_01";
                    };
                };
            };

            class SpecOps {
                name = "Special Forces";
                class CFP_B_USARMY_infantry_delta_force_team_wdl {
                    name = "Delta Force Team";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_MG";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_Assault";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_M";
                    };
                };
                class CFP_B_USARMY_motorized_delta_patrol_hmmwv_wdl {
                    name = "Delta Patrol (HMMWV)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_TL";
                    };
                    class Unit1 {
                        position[] = { -5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_SOV_USA";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_Assault";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_SpecOps_M";
                    };
                };
            };

            class Motorized {
                name = "Motorized Infantry";

                class CFP_B_USARMY_motorized_motorized_section_wdl {
                    name = "Motorized Section";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { -5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_M2_GPK_USA";
                    };
                    class Unit2 {
                        position[] = { -5 , -7 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_MK19_USA";
                    };
                    class Unit3 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit4 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit5 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit6 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AAT";
                    };
                    class Unit7 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_Marksman";
                    };
                };

                class CFP_B_USARMY_motorized_motorized_section_at_wdl {
                    name = "Motorized Section (AT)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.15;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { -5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_TOW_USA";
                    };
                    class Unit2 {
                        position[] = { -5 , -7 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_TOW_USA";
                    };
                    class Unit3 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
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

                class CFP_B_USARMY_mechanized_mechanized_infantry_squad_icv_m2_wdl {
                    name = "Mechanized Infantry Squad (ICV M2)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.9;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { 5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit2 {
                        position[] = { 7 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit3 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit5 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit6 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit7 {
                        position[] = { 17 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_Marksman";
                    };
                    class Unit8 {
                        position[] = { -17 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1126_ICV_M2_Woodland";
                    };
                };

                class CFP_B_USARMY_mechanized_mechanized_infantry_squad_icv_mk19_wdl {
                    name = "Mechanized Infantry Squad (ICV MK19)";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.9;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_SL";
                    };
                    class Unit1 {
                        position[] = { 5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit2 {
                        position[] = { 7 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit4 {
                        position[] = { 11 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit5 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit6 {
                        position[] = { 17 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit7 {
                        position[] = { 19 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_Marksman";
                    };
                    class Unit8 {
                        position[] = { -19 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1126_ICV_MK19_Woodland";
                    };
                };

                class CFP_B_USARMY_mechanized_mechanized_recon_section_wdl {
                    name = "Mechanized Recon Section";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.6;

                    class Unit0 {
                        position[] = { 3 , 5 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AR";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_GL";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_AT";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_US_Soldier_LAT";
                    };
                    class Unit6 {
                        position[] = { -2 , -3 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M2A3Bradley_USA_W";
                    };
                };

            };

            class Armored {
                name = "Armor";

                class CFP_B_USARMY_armored_stryker_mgs_platoon_wdl {
                    name = "Stryker MGS Platoon";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { -1 , -2 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1128_MGS_Woodland";
                    };
                    class Unit1 {
                        position[] = { 1 , -2 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1128_MGS_Woodland";
                    };
                    class Unit2 {
                        position[] = { 8 , -11 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1128_MGS_Woodland_Slat";
                    };
                };

                class CFP_B_USARMY_armored_m1a2_platoon_wdl {
                    name = "M1A2 Platoon";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { -15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_US_Army";
                    };
                    class Unit1 {
                        position[] = { 24 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_US_Army";
                    };
                    class Unit2 {
                        position[] = { -24 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_US_Army";
                    };
                };

                class CFP_B_USARMY_armored_m1a1_platoon_wdl {
                    name = "M1A1 Platoon";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { -15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A1_Woodland_US_Army";
                    };
                    class Unit1 {
                        position[] = { 9 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A1_Woodland_US_Army";
                    };
                    class Unit2 {
                        position[] = { -9 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A1_Woodland_US_Army";
                    };
                    class Unit3 {
                        position[] = { 18 , -24 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A1_Woodland_US_Army";
                    };
                };

                class CFP_B_USARMY_armored_m1a2_section_wdl {
                    name = "M1A2 Section";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_US_Army";
                    };
                    class Unit1 {
                        position[] = { 14 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1A2_TUSK_MG_US_Army";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

                class CFP_B_USARMY_artillery_vads_squadron_wdl {
                    name = "VADS Squadron";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_M163_USA";
                    };
                    class Unit1 {
                        position[] = { 6 , -8 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M163_USA";
                    };
                };

                class CFP_B_USARMY_artillery_linebacker_squadron_wdl {
                    name = "Linebacker Squadron";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_M6LineBacker_USA_W";
                    };
                    class Unit1 {
                        position[] = { 9 , -14 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M6LineBacker_USA_W";
                    };
                };

                class CFP_B_USARMY_artillery_avenger_squadron_wdl {
                    name = "Avenger Squadron";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_Avenger_USA";
                    };
                    class Unit1 {
                        position[] = { 8 , -8 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_HMMWV_Avenger_USA";
                    };
                };

                class CFP_B_USARMY_artillery_mrls_squadron_wdl {
                    name = "MRLS Squadron";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_M270_HE_USA";
                    };
                    class Unit1 {
                        position[] = { 7 , -11 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_M270_DPICM_USA";
                    };
                    class Unit2 {
                        position[] = { -7 , -11 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_USARMY_M270_HE_USA";
                    };
                };

                class CFP_B_USARMY_artillery_stryker_squadron_wdl {
                    name = "Stryker Squadron";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_M1129_MC_MK19_Woodland_Slat";
                    };
                    class Unit1 {
                        position[] = { 9 , -12 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1129_MC_MK19_Woodland_Slat";
                    };
                    class Unit2 {
                        position[] = { -9 , -12 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_M1129_MC_MK19_Woodland";
                    };
                };

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

                class CFP_B_USARMY_air_a10_flight_wdl {
                    name = "A-10 Flight";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 20 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_USARMY_A10_DYN_USA";
                    };
                    class Unit1 {
                        position[] = { 20 , 0 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_USARMY_A10_DYN_USA";
                    };
                };

                class CFP_B_USARMY_air_ah_64d_flight_wdl {
                    name = "AH-64D Flight";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_USARMY_AH64D_DL_USA";
                    };
                };

                class CFP_B_USARMY_air_ch_47f_flight_wdl {
                    name = "CH-47F Flight";
                    side = 1;
                    faction = "CFP_B_USARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_USARMY_CH47F_USA";
                    };
                };

            };


        };

    };
};

