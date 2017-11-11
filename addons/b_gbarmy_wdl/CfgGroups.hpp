class CfgGroups {
    class WEST {

        class CFP_B_GBARMY_WDL {
            name = "British Army (Jungle/Woodland)";

            class Infantry {
                name = "Infantry (MTP)";

                class CFP_B_GBARMY_infantry_section_wdl {
                    name = "Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Marksman_LSW_WDL_01";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_Automatic_Rifleman_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_fireteam_wdl {
                    name = "Fireteam";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.8;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Marksman_LSW_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_fireteam_support_wdl {
                    name = "Fireteam (support)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Joint_Terminal_Attack_Controller_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Medic_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Engineer_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_fireteam_mg_wdl {
                    name = "Fireteam (MG)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Machinegunner_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_Machineguner_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_fireteam_at_wdl {
                    name = "Fireteam (AT)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_tankbusters_wdl {
                    name = "Tankbusters";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_Javelin_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_Javelin_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_sniper_team_wdl {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Sniper_LRR_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Sniper_AS50_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Spotter_WDL_01";
                    };
                };

                class CFP_B_GBARMY_infantry_sniper_team_night_wdl {
                    name = "Sniper Team (night)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Sniper_AS50_TWS_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Sniper_AS50_TWS_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Spotter_night_WDL_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

                class CFP_B_GBARMY_motorized_mtp_motorized_patrol_wdl {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Marksman_LSW_WDL_01";
                    };
                    class Unit7 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_LR_Transport_GB_W";
                    };
                };

                class CFP_B_GBARMY_motorized_mtp_jackal_team_wdl {
                    name = "Jackal Team";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_BAF_Jackal2_L2A1_W";
                    };
                };

                class CFP_B_GBARMY_motorized_mtp_jackal_section_wdl {
                    name = "Jackal Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit2 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_BAF_Jackal2_L2A1_W";
                    };
                    class Unit3 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit5 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_BAF_Jackal2_L2A1_W";
                    };
                };

                class CFP_B_GBARMY_motorized_mtp_ridgback_section_wdl {
                    name = "Ridgback Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit4 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Ridgback_HMG_GB_W";
                    };
                };

                class CFP_B_GBARMY_motorized_mtp_mastiff_section_wdl {
                    name = "Mastiff Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Medic_WDL_01";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Marksman_LSW_WDL_01";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_Automatic_Rifleman_WDL_01";
                    };
                    class Unit8 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Mastiff_HMG_GB_W";
                    };
                };

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

                class CFP_B_GBARMY_mechanized_mech_inf_section_wdl {
                    name = "Mech. Inf. Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Section_Leader_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Team_Leader_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Grenadier_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Automatic_Rifleman_WDL_01";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Marksman_LSW_WDL_01";
                    };
                    class Unit6 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W";
                    };
                };

                class CFP_B_GBARMY_mechanized_mech_at_section_wdl {
                    name = "Mech. AT Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_WDL_01";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_WDL_01";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AT_Specialist_Javelin_WDL_01";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_WDL_01";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_WDL_01";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Asst_AT_Specialist_Javelin_WDL_01";
                    };
                    class Unit6 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W_SLAT";
                    };
                };

            };

            class Armored {
                name = "Armour";

                class CFP_B_GBARMY_armored_warrior_platoon_wdl {
                    name = "Warrior Platoon";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 8 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W";
                    };
                    class Unit1 {
                        position[] = { 8 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W";
                    };
                    class Unit2 {
                        position[] = { -8 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W_SLAT";
                    };
                    class Unit3 {
                        position[] = { 0 , -8 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_W_SLAT";
                    };
                };

                class cfp_b_cupbgb_armored_bulldog_platoon_des {
                    name = "Bulldog Platoon";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_W";
                    };
                    class Unit1 {
                        position[] = { 8 , -13 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_W_RWS";
                    };
                    class Unit2 {
                        position[] = { -8 , -13 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_W";
                    };
                    class Unit3 {
                        position[] = { 16 , -21 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_W_RWS";
                    };
                };

                class cfp_b_cupbgb_armored_challenger_des {
                    name = "Challenger 2 Troop";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_Challenger2_Woodland_BAF";
                    };
                    class Unit1 {
                        position[] = { 9 , -17 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Challenger2_Woodland_BAF";
                    };
                    class Unit2 {
                        position[] = { -9 , -17 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Challenger2_2CW_BAF";
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

                class CFP_B_GBARMY_air_chinook_hc4_squadron_wdl {
                    name = "Chinook HC4 Squadron";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Chinook_HC_4_WDL_01";
                    };
                };

                class CFP_B_GBARMY_air_wildcat_ah11_squadron_wdl {
                    name = "Wildcat AH11 Squadron";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AW159_Wildcat_Green_WDL_01";
                    };
                };

                class CFP_B_GBARMY_air_apache_ah1_squadron_wdl {
                    name = "Apache AH1 Squadron";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_AH1_BAF";
                    };
                    class Unit1 {
                        position[] = { 15 , 0 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_AH_1_WDL_01";
                    };
                };

                class CFP_B_GBARMY_air_merlin_hc3_squadron_wdl {
                    name = "Merlin HC3 Squadron";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CFP_B_GBARMY_Merlin_HC3_Armed_WDL_01";
                    };
                };

            };

            class Infantry_W {
                name = "Infantry (DPM)";

                class CUP_B_GB_Section_W {
                    name = "Section";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_WDL";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_WDL";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_WDL";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_WDL";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAR_WDL";
                    };
                };

                class CUP_B_GB_Fireteam_W {
                    name = "Fireteam";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.8;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_WDL";
                    };
                };

                class CUP_B_GB_Support_W {
                    name = "Fireteam (support)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_JTAC_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Medic_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Engineer_WDL";
                    };
                };

                class CUP_B_GB_MG_W {
                    name = "Fireteam (MG)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_MG_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AMG_WDL";
                    };
                };

                class CUP_B_GB_AT_W {
                    name = "Fireteam (AT)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_WDL";
                    };
                };

                class CUP_B_GB_HAT_W {
                    name = "Tankbusters";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_HAT_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AHAT_WDL";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_WDL";
                    };
                };

                class CUP_B_GB_Snipers_W {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Spotter_WDL";
                    };
                };

                class CUP_B_GB_SnipersN_W {
                    name = "Sniper Team (night)";
                    side = 1;
                    faction = "CFP_B_GBARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_TWS_WDL";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_TWS_WDL";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Spotter_L85TWS_WDL";
                    };
                };

            };

        };

    };
};

