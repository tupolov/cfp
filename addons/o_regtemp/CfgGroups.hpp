
class CfgGroups {
    class SIDETEXT {

        class FACTION {
            name = FACTIONDISPLAY;

            class Infantry {
                name = "Infantry";

                CLASS(DFACTION(infantry_recon)) {
                    name = "Recon";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Scout_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Scout_01));
                    };
                };

                CLASS(DFACTION(infantry_sentry)) {
                    name = "Sentry";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                };

                CLASS(DFACTION(infantry_sniper_pair)) {
                    name = "Sniper Pair";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Sniper_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Spotter_01));
                    };
                };

                CLASS(DFACTION(infantry_sniper_team)) {
                    name = "Sniper Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Sniper_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Sniper_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Spotter_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Spotter_01));
                    };
                };

                CLASS(DFACTION(infantry_fireteam)) {
                    name = "Fireteam";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                };

                CLASS(DFACTION(infantry_platoon_hq)) {
                    name = "Platoon HQ";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Engineer_01));
                    };
                };

                CLASS(DFACTION(infantry_company_hq)) {
                    name = "Company HQ";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "MAJOR";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Engineer_01));
                    };
                };

                CLASS(DFACTION(infantry_support_section)) {
                    name = "Support Section";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Marksman_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Sniper_01));
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                };

                CLASS(DFACTION(infantry_rifle_section)) {
                    name = "Rifle Section";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit7 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AAR_01));
                    };
                };

                CLASS(DFACTION(infantry_weapons_section)) {
                    name = "Weapons Section";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AAR_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                };

                CLASS(DFACTION(infantry_at_team)) {
                    name = "AT Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                };

                CLASS(DFACTION(infantry_demo_team)) {
                    name = "Demolition Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Bomb_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Bomb_01));
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                CLASS(DFACTION(specops_fireteam)) {
                    name = "Fireteam";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                };

                CLASS(DFACTION(specops_recon)) {
                    name = "Recon";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                };

                CLASS(DFACTION(specops_squad)) {
                    name = "Squad";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                };

                CLASS(DFACTION(specops_assault_team)) {
                    name = "Assault Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                };

                CLASS(DFACTION(specops_motorized_recon)) {
                    name = "Motorized Recon";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(sf_armed_mg_01));
                    };
                };

                CLASS(DFACTION(specops_motorized_patrol)) {
                    name = "Motorized Patrol";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(sf_armed_mg_01));
                    };
                };

                CLASS(DFACTION(specops_motorized_squad)) {
                    name = "Motorized Squad";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(sf_armed_mg_01));
                    };
                    class Unit5 {
                        position[] = {15,-19,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(sf_armed_mg_01));
                    };
                };

                CLASS(DFACTION(specops_mechanized_assault_team)) {
                    name = "Mechanized Assault Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(SpecOps_01));
                    };
                    class Unit7 {
                        position[] = {24,-27,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_at_01));
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";

                CLASS(DFACTION(motorized_recon)) {
                    name = "Motorized Recon";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Scout_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Scout_01));
                    };
                    class Unit2 {
                        position[] = {5,5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(recon_01));
                    };
                };

                CLASS(DFACTION(motorized_patrol)) {
                    name = "Patrol";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit4 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                };

                CLASS(DFACTION(motorized_armed_patrol)) {
                    name = "Armed Patrol";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit3 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(armed_mg_01));
                    };
                };

                CLASS(DFACTION(motorized_support)) {
                    name = "Motorized Support";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Marksman_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Sniper_01));
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit6 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(armed_mg_01));
                    };
                    class Unit7 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                };

                CLASS(DFACTION(motorized_infantry)) {
                    name = "Motorized Infantry";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit7 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AAR_01));
                    };
                    class Unit8 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                    class Unit9 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                };

                CLASS(DFACTION(motorized_weapons_section)) {
                    name = "Motorized Weapons Section";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AAR_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit8 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                    class Unit9 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                };

                CLASS(DFACTION(motorized_at_section)) {
                    name = "Motorized AT Section";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit4 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                    class Unit5 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(armed_at_01));
                    };
                };

                CLASS(DFACTION(motorized_platoon_hq)) {
                    name = "Motorized Platoon HQ";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Engineer_01));
                    };
                    class Unit4 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(patrol_01));
                    };
                };

            };

            class Mechanized {
                name = "Mechanized Infantry";

                CLASS(DFACTION(mechanized_platoon_hq)) {
                    name = "Mech. Platoon HQ";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Engineer_01));
                    };
                    class Unit4 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_01));
                    };
                    class Unit5 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_mg_01));
                    };
                };

                CLASS(DFACTION(mechanized_company_hq)) {
                    name = "Mech. Company HQ";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "MAJOR";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CAPTAIN";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Officer_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Engineer_01));
                    };
                    class Unit5 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_01));
                    };
                    class Unit6 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_mg_01));
                    };
                };

                CLASS(DFACTION(mechanized_infantry)) {
                    name = "Mech. Infantry";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "LIEUTENANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_SL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_GL_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AR_01));
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Medic_01));
                    };
                    class Unit7 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AAR_01));
                    };
                    class Unit8 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_01));
                    };
                    class Unit9 {
                        position[] = {0,-15,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_mg_01));
                    };
                };

                CLASS(DFACTION(mechanized_at)) {
                    name = "Mech. Infantry AT";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_AT_01));
                    };
                    class Unit3 {
                        position[] = {0,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(apc_at_01));
                    };
                };

            };

            class Armored {
                name = "Armor";

                CLASS(DFACTION(armored_tank_platoon)) {
                    name = "Tank Platoon";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(tank_01));
                    };
                    class Unit1 {
                        position[] = {9,-14,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(tank_01));
                    };
                    class Unit2 {
                        position[] = {-9,-14,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(tank_01));
                    };
                };

            };

            class Artillery {
                name = "Artillery";

                CLASS(DFACTION(artillery_mortar_battery)) {
                    name = "Mortar Battery";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Mortar_01));
                    };
                    class Unit1 {
                        position[] = {9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Mortar_01));
                    };
                    class Unit2 {
                        position[] = {-9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Mortar_01));
                    };
                };

                CLASS(DFACTION(artillery_field_gun_battery)) {
                    name = "Field Gun Battery";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(gun_01));
                    };
                    class Unit1 {
                        position[] = {9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(gun_01));
                    };
                    class Unit2 {
                        position[] = {-9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(gun_01));
                    };
                };

                class cfp_o_rregtemp_artillery_battery {
                    name = "Artillery Battery";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(spgun_01));
                    };
                    class Unit1 {
                        position[] = {9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(spgun_01));
                    };
                    class Unit2 {
                        position[] = {-9,-16,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(spgun_01));
                    };
                };

                CLASS(DFACTION(artillery_rocket_battery)) {
                    name = "Rocket Battery";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(rocket_01));
                    };

                    class Unit1 {
                        position[] = {0,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(rocket_01));
                    };
                };

            };

            class Naval {
                name = "Naval";

                CLASS(DFACTION(naval_diver_pair)) {
                    name = "Diver Pair";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                };

                CLASS(DFACTION(naval_diver_team)) {
                    name = "Diver Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                };

                CLASS(DFACTION(naval_boat_team)) {
                    name = "Boat Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
                    rarityGroup = 0.5;

                   class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(boat_01));
                    };
                };

                CLASS(DFACTION(naval_patrol)) {
                    name = "Boat Patrol";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
                    rarityGroup = 0.5;
                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Soldier_TL_01));
                    };
                    class Unit4 {
                        position[] = {0,-10,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(assault_boat_01));
                    };
                };

                CLASS(DFACTION(naval_sdv_team)) {
                    name = "SDV Team";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(sdv_01));
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(Diver_01));
                    };
                };

            };

            class Air {
                name = "Air";

                CLASS(DFACTION(air_support_heli)) {
                    name = "Support Heli";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(spt_heli_01));
                    };
                };

                CLASS(DFACTION(air_transport_heli)) {
                    name = "Transport Heli";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(trans_heli_01));
                    };
                };

                CLASS(DFACTION(air_attack_aircraft)) {
                    name = "Attack Aircraft";
                    Side = SIDE;
                    faction = QUOTE(FACTION);
                    icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        Side = SIDE;
                        vehicle = QUOTE(DFACTION(plane_01));
                    };
                };

            };


        };

    };
};