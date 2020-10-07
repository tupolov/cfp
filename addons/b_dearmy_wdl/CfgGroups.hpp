//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
    class WEST {

        class CFP_B_DEARMY_WDL {
            name = "Bundeswehr (Jungle / Woodland)";

            class SpecOps
            {
                name = "Special Forces (KSK)";
                class CUP_B_GER_Fleck_KSK_Team {
                    name = "KSK Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Medic";
                    };
                };

                class CUP_B_GER_Fleck_KSK_AssaultTeam {
                    name = "KSK Assault Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_GL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_EXP";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator";
                    };
                };

                class CUP_B_GER_Fleck_KSK_SniperTeam {
                    name = "KSK Sniper Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                };

                class CUP_B_GER_Fleck_KSK_ATTeam {
                    name = "KSK Anti-Tank Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_AAT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                };

                class CUP_B_GER_Fleck_KSK_AATeam {
                    name = "KSK Anti-Air Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_AA";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_AAA";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                };

                class CUP_B_GER_Fleck_KSK_EngineerTeam {
                    name = "KSK Pioneer Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Engineer";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Engineer";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                };

                class CUP_B_GER_Fleck_KSK_ReconPatrol {
                    name = "KSK Recon Patrol";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                    };
                };

                class CUP_B_GER_Fleck_KSK_AssaultSquad {
                    name = "KSK Assault Squad";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_GL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_EXP";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_GL";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator_EXP";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Operator";
                    };
                };

                class CUP_B_GER_SF_MotInf_KSK_WDL
                {
                    name = "$STR_CUP_dn_Grp_GER_SF_MotInf_KSK_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    faction = "CFP_B_DEARMY_WDL";
                    side = 1;
                    rarityGroup = 0.6;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_TL";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_MG";
                        rank = "CORPORAL";
                        position[] = { 5, -5, 0 };
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier";
                        rank = "CORPORAL";
                        position[] = { -5, -5, 0 };
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                        rank = "CORPORAL";
                        position[] = { 10, -10, 0 };
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier";
                        rank = "CORPORAL";
                        position[] = { -10, -10, 0 };
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Medic";
                        rank = "PRIVATE";
                        position[] = { 15, -15, 0 };
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_AT";
                        rank = "PRIVATE";
                        position[] = { -15, -15, 0 };
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Ammo";
                        rank = "PRIVATE";
                        position[] = { 20, -20, 0 };
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "CUP_B_Dingo_GER_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,0,0};
                    };
                    class Unit9
                    {
                        side = 1;
                        vehicle = "CUP_B_Dingo_GL_GER_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,0,0};
                    };
                };
                class CUP_B_GER_SF_MotInf_ReconPatrol_KSK_WDL
                {
                    name = "$STR_CUP_dn_Grp_GER_SF_MotInf_ReconPatrol_KSK_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    faction = "CFP_B_DEARMY_WDL"; side = 1;
                    rarityGroup = 0;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                        rank = "SERGEANT";
                        position[] = { 0, 0, 0 };
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                        rank = "CORPORAL";
                        position[] = { 5, -5, 0 };
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_Fleck_Soldier_Scout";
                        rank = "PRIVATE";
                        position[] = { -5, -5, 0 };
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "CUP_B_Dingo_GER_Wdl";
                        rank = "SERGEANT";
                        position[] = {15,0,0};
                    };
                };
                class CUP_B_GER_BW_Fleck_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Scout";
                    };
                };
            };
            class Infantry
            {
                name = "Infantry (Woodland)";
                class CUP_B_GER_BW_Fleck_rifle_squad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_GL";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Medic";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG3";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAT";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Marksman";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Marksman";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Ammo";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Engineer";
                    };
                };

                class CUP_B_GER_BW_Fleck_fire_team {
                    name = "Fire Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG3";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_GL";
                    };
                };

                class CUP_B_GER_BW_Fleck_weapon_squad {
                    name = "Weapon Squad";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG3";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_GL";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAT";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Ammo";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG3";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Ammo";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_GL";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Medic";
                    };
                };

                class CUP_B_GER_BW_Fleck_anti_tank_team {
                    name = "Anti Tank Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAT";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAT";
                    };
                };

                class CUP_B_GER_BW_Fleck_anti_air_team {
                    name = "Anti Air Team";
                    side = 1;
                    faction = "CFP_B_DEARMY_WDL";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AA";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAA";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AA";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AAA";
                    };
                };

            };

            class Motorized
            {
                name = "Motorized Infantry";

            };

            class Armored
            {
                name = "Armor";
                class CUP_B_GER_Leopard_Section_Woodland
                {
                    name = "Leopard 2 Section (Woodland)";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
                    faction = "CFP_B_DEARMY_WDL"; side = 1;
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_Leopard2A6_GER";
                        rank = "CAPTAIN";
                        position[] = {0,10,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_Leopard2A6_GER";
                        rank = "LIEUTENANT";
                        position[] = {5,0,0};
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
                class CUP_B_GER_MechInf_HMG_WDL
                {
                    name = "Mech. Inf Section (Boxer HMG Woodland)";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "CUP_B_GER";
                    side = 1;
                    rarityGroup = 0.3;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_TL";
                        rank = "SERGANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG";
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Ammo";
                        rank = "PRIVATE";
                        position[] = { -5, -5, 0 };
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Marksman";
                        rank = "CORPORAL";
                        position[] = { 10, -10, 0 };
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Medic";
                        rank = "CORPORAL";
                        position[] = { -10, -10, 0 };
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier";
                        rank = "PRIVATE";
                        position[] = { 15, -15, 0 };
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                        rank = "PRIVATE";
                        position[] = { -15, -15, 0 };
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "CUP_B_Boxer_HMG_GER_WDL";
                        rank = "SERGEANT";
                        position[] = {15,0,0};
                    };
                };
                class CUP_B_GER_MechInf_GMG_WDL
                {
                    name = "Mech. Inf Section (Boxer GMG Woodland)";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    faction = "CUP_B_GER";
                    side = 1;
                    rarityGroup = 0.3;

                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_TL";
                        rank = "SERGANT";
                        position[] = {0, 0, 0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_MG";
                        rank = "CORPORAL";
                        position[] = {5, -5, 0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Ammo";
                        rank = "PRIVATE";
                        position[] = { -5, -5, 0 };
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_Marksman";
                        rank = "CORPORAL";
                        position[] = { 10, -10, 0 };
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Medic";
                        rank = "CORPORAL";
                        position[] = { -10, -10, 0 };
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier";
                        rank = "PRIVATE";
                        position[] = { 15, -15, 0 };
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Fleck_Soldier_AT";
                        rank = "PRIVATE";
                        position[] = { -15, -15, 0 };
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "CUP_B_Boxer_GMG_GER_WDL";
                        rank = "SERGEANT";
                        position[] = {15,0,0};
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

            };


        };

    };
};