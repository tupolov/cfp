class CfgGroups {
    class WEST {

        class CFP_B_ILIDF {
            name = "Israeli Defense Force";

            class Infantry {
                name = "Infantry";

                class cfp_b_ilidf_infantry_rifle_squad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_weapon_squad {
                    name = "Weapon Squad";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.4;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit7 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit8 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit9 {
                        position[] = {-20,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                };

                class cfp_b_ilidf_infantry_fire_team {
                    name = "Fire Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_anti_air_section {
                    name = "Anti Air Section";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_AA_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_AA_Specialist_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_AA_Specialist_01";
                    };
                };

                class cfp_b_ilidf_infantry_eod_team {
                    name = "EOD Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Engineer_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Engineer_01";
                    };
                };

                class cfp_b_ilidf_infantry_support_squad {
                    name = "Support Squad";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Engineer_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Engineer_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                };

                class cfp_b_ilidf_infantry_at_team_m136 {
                    name = "AT Team [M136]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

            };

            class SpecOps {
                name = "SpecOps";

                class cfp_b_ilidf_specops_recon_team {
                    name = "Recon Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Team_Leader_Recon_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_Recon_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_Recon_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Repair_Specialist_Recon_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_Recon_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Marksman_Recon_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_Recon_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_Recon_01";
                    };
                };

                class cfp_b_ilidf_specops_fire_team {
                    name = "Fire Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Team_Leader_Recon_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_Recon_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_Recon_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_Recon_01";
                    };
                };

                class cfp_b_ilidf_specops_commando_squad {
                    name = "Commando Squad";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Team_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Medic_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Automatic_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Explosive_Specialist_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Grenadier_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Automatic_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_specops_commando_fire_team {
                    name = "Commando Fire Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Team_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "cfp_b_ilidf_Commando_Automatic_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Sniper_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Sniper_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_uav_team {
                    name = "UAV Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_UAV_Specialist_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_UAV_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_mg_team {
                    name = "MG Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Gunner_M2_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Gunner_M2_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_mortar_team {
                    name = "Mortar Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Gunner_Mortar_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Gunner_Mortar_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_mk19_team {
                    name = "Mk19 Team";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Gunner_Mk19_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Gunner_Mk19_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_infantry_at_team_tow {
                    name = "AT Team [TOW]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
                    rarityGroup = 0.2;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Gunner_TOW_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Gunner_TOW_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

            };

            class Motorized {
                name = "Motorized";

                class cfp_b_ilidf_motorized_rifle_squad_mdt_david {
                    name = "Rifle Squad [MDT David]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_MDT_David_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_motorized_fire_team_hmmwv {
                    name = "Fire Team [HMMWV]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_HMMWV_Unarmed_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                };

                class cfp_b_ilidf_motorized_humvee_patrol_m2 {
                    name = "Humvee Patrol [M2]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_HMMWV_M2_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                };

                class cfp_b_ilidf_motorized_humvee_patrol_mk19 {
                    name = "Humvee Patrol [Mk19]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_HMMWV_Mk19_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                };

                class cfp_b_ilidf_motorized_hmmwv_patrol_tow {
                    name = "HMMWV Patrol [TOW]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_HMMWV_TOW_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support";

            };

            class Mechanized {
                name = "Mechanized";

                class cfp_b_ilidf_mechanized_rifle_squad_m113 {
                    name = "Rifle Squad [M113]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_M113_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

                class cfp_b_ilidf_mechanized_rifle_squad_namer {
                    name = "Rifle Squad [Namer]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Namer_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Explosive_Specialist_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_01";
                    };
                };

            };

            class Armored {
                name = "Armored";

                class cfp_b_ilidf_armored_tank_section_mk_iv {
                    name = "Tank Section [Mk IV]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Merkava_Mk_IV_01";
                    };
                    class Unit1 {
                        position[] = {10,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Merkava_Mk_IV_01";
                    };
                };

                class cfp_b_ilidf_armored_tank_section_mk_iv_up {
                    name = "Tank Section [Mk IV UP]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Merkava_Mk_IV_UP_01";
                    };
                    class Unit1 {
                        position[] = {10,-16,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Merkava_Mk_IV_UP_01";
                    };
                };

                class cfp_b_ilidf_armored_rifle_squad_mk_iv {
                    name = "Rifle Squad [Mk IV]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Merkava_Mk_IV_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Squad_Leader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Grenadier_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Machine_Gunner_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Asst_Machine_Gunner_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Rifleman_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_Medic_01";
                    };
                };

            };

            class Artillery {
                name = "Artillery";

                class cfp_b_ilidf_artillery_m270_menatetz_battery_he {
                    name = "M270 Menatetz Battery [HE]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_M270_HE_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_M270_HE_01";
                    };
                };

                class cfp_b_ilidf_artillery_m270_menatetz_battery_dpicm {
                    name = "M270 Menatetz Battery [DPICM]";
                    side = 1;
                    faction = "CFP_B_ILIDF";
                    icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_M270_DPICM_01";
                    };
                    class Unit1 {
                        position[] = {7,-11,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CFP_B_ILIDF_M270_DPICM_01";
                    };
                };

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};