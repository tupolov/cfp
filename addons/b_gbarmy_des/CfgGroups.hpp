
class CfgGroups {
    class WEST {

        class CUP_B_GB {
            name = "British Army (Arid/Desert)";

            class Infantry {
                name = "Infantry (MTP)";

                class CUP_B_GB_Section_MTP {
                    name = "Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAR_MTP";
                    };
                };

                class CUP_B_GB_Fireteam_MTP {
                    name = "Fireteam";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.8;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                };

                class CUP_B_GB_Support_MTP {
                    name = "Fireteam (support)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_JTAC_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Medic_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Engineer_MTP";
                    };
                };

                class CUP_B_GB_MG_MTP {
                    name = "Fireteam (MG)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_MG_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AMG_MTP";
                    };
                };

                class CUP_B_GB_AT_MTP {
                    name = "Fireteam (AT)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_MTP";
                    };
                };

                class CUP_B_GB_HAT_MTP {
                    name = "Tankbusters";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_HAT_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AHAT_MTP";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_MTP";
                    };
                };

                class CUP_B_GB_Snipers_MTP {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Spotter_MTP";
                    };
                };

                class CUP_B_GB_SnipersN_MTP {
                    name = "Sniper Team (night)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_TWS_MTP";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Sniper_AS50_TWS_MTP";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Spotter_L85TWS_MTP";
                    };
                };

            };

            delete Infantry_W;

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

                class CUP_B_GB_MPatrol_MTP {
                    name = "Motorized Patrol";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_LR_Transport_GB_D";
                    };
                    class Unit1 {
                        position[] = { 5 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit2 {
                        position[] = { -0 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit3 {
                        position[] = { 0 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit4 {
                        position[] = { 5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit5 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit6 {
                        position[] = { 10 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit7 {
                        position[] = { -10 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                };

                class CUP_B_GB_MTeam_MTP {
                    name = "Jackal Team";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_BAF_Jackal2_L2A1_D";
                    };
                    class Unit1 {
                        position[] = { 10 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit2 {
                        position[] = { -10 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                };

                class CUP_B_GB_MSection_MTP {
                    name = "Jackal Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_BAF_Jackal2_L2A1_D";
                    };
                    class Unit1 {
                        position[] = { 5 , -10 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit2 {
                        position[] = { -0 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit3 {
                        position[] = { 0 , -15 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit4 {
                        position[] = { 5 , -20 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit5 {
                        position[] = { -5 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit6 {
                        position[] = { 10 , -25 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit7 {
                        position[] = { -4 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Jackal2_L2A1_GB_D";
                    };
                };

                class CUP_B_GB_MSection_MTP_Ridgback {
                    name = "Ridgback Section ";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Ridgback_HMG_GB_D";
                    };
                    class Unit1 {
                        position[] = { 10 , -15 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit2 {
                        position[] = { -10 , -15 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit3 {
                        position[] = { 15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit4 {
                        position[] = { -15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                };

                class CUP_B_GB_MSection_MTP_Mastiff {
                    name = "Mastiff Section ";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { -5 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Mastiff_HMG_GB_D";
                    };
                    class Unit1 {
                        position[] = { 10 , -15 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit2 {
                        position[] = { -10 , -15 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit3 {
                        position[] = { 15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit4 {
                        position[] = { -15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit5 {
                        position[] = { 20 , -25 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit6 {
                        position[] = { -20 , -25 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Medic_MTP";
                    };
                    class Unit7 {
                        position[] = { 25 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                    class Unit8 {
                        position[] = { -25 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAR_MTP";
                    };
                };

                class cfp_b_cupbgb_motorized_mtp_coyote_section_des {
                    name = "Coyote Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 10 , -15 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit1 {
                        position[] = { -10 , -15 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit2 {
                        position[] = { 15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit3 {
                        position[] = { -15 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit4 {
                        position[] = { 20 , -25 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit5 {
                        position[] = { -20 , -25 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Medic_MTP";
                    };
                    class Unit6 {
                        position[] = { 25 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                    class Unit7 {
                        position[] = { -25 , -30 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAR_MTP";
                    };
                    class Unit8 {
                        position[] = { 31 , -37 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Coyote_L2A1_D";
                    };
                };

                delete CUP_B_GB_MPatrol_W;
                delete CUP_B_GB_MTeam_W;
                delete CUP_B_GB_MSection_W;
                delete CUP_B_GB_MSection_W_Ridgback;
                delete CUP_B_GB_MSection_W_Mastiff ;

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

                class CUP_B_GB_MechSec_MTP {
                    name = "Mech. Inf. Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D";
                    };
                    class Unit1 {
                        position[] = { 10 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_MTP";
                    };
                    class Unit2 {
                        position[] = { -10 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_MTP";
                    };
                    class Unit3 {
                        position[] = { 15 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit4 {
                        position[] = { -15 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_MTP";
                    };
                    class Unit5 {
                        position[] = { 20 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_MTP";
                    };
                    class Unit6 {
                        position[] = { -20 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_MTP";
                    };
                };

                class CUP_B_GB_MechAT_MTP {
                    name = "Mech. AT Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { -5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D_SLAT";
                    };
                    class Unit1 {
                        position[] = { 10 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_MTP";
                    };
                    class Unit2 {
                        position[] = { -10 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_MTP";
                    };
                    class Unit3 {
                        position[] = { 15 , -10 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_HAT_MTP";
                    };
                    class Unit4 {
                        position[] = { -15 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_MTP";
                    };
                    class Unit5 {
                        position[] = { 20 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AHAT_MTP";
                    };
                    class Unit6 {
                        position[] = { -20 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_MTP";
                    };
                };

                delete CUP_B_GB_MechSec_W;
                delete CUP_B_GB_MechAT_W;
            };

            class Armored {
                name = "Armour";

                class CUP_B_GB_WPlatoon_MTP {
                    name = "Warrior Platoon";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 8 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D";
                    };
                    class Unit1 {
                        position[] = { 8 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D";
                    };
                    class Unit2 {
                        position[] = { -8 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D_SLAT";
                    };
                    class Unit3 {
                        position[] = { 0 , -8 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_FV510_GB_D_SLAT";
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
                        vehicle = "CUP_B_FV432_Bulldog_GB_D";
                    };
                    class Unit1 {
                        position[] = { 8 , -13 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_D_RWS";
                    };
                    class Unit2 {
                        position[] = { -8 , -13 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_D";
                    };
                    class Unit3 {
                        position[] = { 16 , -21 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_FV432_Bulldog_GB_D_RWS";
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
                        vehicle = "CUP_B_Challenger2_Desert_BAF";
                    };
                    class Unit1 {
                        position[] = { 9 , -17 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Challenger2_Desert_BAF";
                    };
                    class Unit2 {
                        position[] = { -9 , -17 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_Challenger2_2CD_BAF";
                    };
                };

                delete CUP_B_GB_WPlatoon_W;

            };

            class Artillery {
                name = "Artillery";

            };

            class Air {
                name = "Air";

                class CUP_B_GB_CH47FSquadron {
                    name = "Chinook HC4 Squadron";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_CH47F_GB";
                    };
                };

                class CUP_B_GB_AH11Squadron {
                    name = "Wildcat AH11 Squadron";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_B_AW159_Armed_BAF";
                    };
                };

                class CUP_B_GB_AH1Squadron {
                    name = "Apache AH1 Squadron";
                    side = 1;
                    faction = "CUP_B_GB";
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
                        vehicle = "CUP_B_AH1_BAF";
                    };
                };

                class CUP_B_GB_HC3Squadron {
                    name = "Merlin HC3 Squadron";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = { 0 , 15 , 0 };
                        rank = "CAPTAIN";
                        side = 1;
                        vehicle = "CUP_Merlin_HC3";
                    };
                };

            };

            class Infantry_DDPM {
                name = "Infantry (DDPM)";

                class CUP_B_GB_Section_DDPM {
                    name = "Section";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_SL_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_DDPM";
                    };
                    class Unit4 {
                        position[] = { 9 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_DDPM";
                    };
                    class Unit5 {
                        position[] = { 11 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_DDPM";
                    };
                    class Unit6 {
                        position[] = { 13 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_DDPM";
                    };
                    class Unit7 {
                        position[] = { 15 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAR_DDPM";
                    };
                };

                class CUP_B_GB_Fireteam_DDPM {
                    name = "Fireteam";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.8;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AR_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_Marksman_DDPM";
                    };
                };

                class CUP_B_GB_Support_DDPM {
                    name = "Fireteam (support)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_JTAC_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Medic_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Engineer_DDPM";
                    };
                };

                class CUP_B_GB_MG_DDPM {
                    name = "Fireteam (MG)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_MG_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AMG_DDPM";
                    };
                };

                class CUP_B_GB_AT_DDPM {
                    name = "Fireteam (AT)";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.1;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_TL_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_GL_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_DDPM";
                    };
                };

                class CUP_B_GB_HAT_DDPM {
                    name = "Tankbusters";
                    side = 1;
                    faction = "CUP_B_GB";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.05;

                    class Unit0 {
                        position[] = { 0 , 5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AT_DDPM";
                    };
                    class Unit1 {
                        position[] = { 3 , 0 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_HAT_DDPM";
                    };
                    class Unit2 {
                        position[] = { 5 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AHAT_DDPM";
                    };
                    class Unit3 {
                        position[] = { 7 , 0 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_BAF_Soldier_AAT_DDPM";
                    };
                };

            };

        };

    };
};