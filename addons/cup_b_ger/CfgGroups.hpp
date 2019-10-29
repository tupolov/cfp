//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.3.7.0000000
//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
    class WEST {

        class CUP_B_GER {
            name = "Bundeswehr (Arid / Desert)";

            delete SpecOps_Fleck;
            delete Infantry_WDL;

            class Infantry {
                name = "Infantry (Tropentarn)";
                delete CUP_B_GER_BW_sniper_team;

            };

            class SpecOps {
                name = "Special Forces (KSK)";

                class CUP_B_GER_BW_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "CUP_B_GER";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Soldier_Sniper";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_BW_Soldier_Scout";
                    };
                };

                class CUP_B_GER_SF_MotInf_KSK {
                    name = "Special Forces Patrol (Desert)";
                    side = 1;
                    faction = "CUP_B_GER";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.6;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_TL";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_MG";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_Scout";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Medic";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_AT";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_Ammo";
                    };
                    class Unit8 {
                        position[] = {15,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_Dingo_GL_GER_Des";
                    };
                    class Unit9 {
                        position[] = {15,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_Dingo_GER_Des";
                    };
                };

                class CUP_B_GER_SF_MotInf_ReconPatrol_KSK {
                    name = "Special Forces Recon Patrol (Desert)";
                    side = 1;
                    faction = "CUP_B_GER";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.6;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_Scout";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_Scout";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "CUP_B_GER_Soldier_Scout";
                    };
                    class Unit3 {
                        position[] = {15,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "CUP_B_Dingo_GER_Des";
                    };
                };
            };
            class Motorized
            {
                name = "Motorized Infantry";
                delete CUP_B_GER_SF_MotInf_KSK_WDL;
                delete CUP_B_GER_SF_MotInf_ReconPatrol_KSK_WDL;
                delete CUP_B_GER_SF_MotInf_KSK;
                delete CUP_B_GER_SF_MotInf_ReconPatrol_KSK;
            };
            class Armored
            {
                name = "Armor";
                delete CUP_B_GER_Leopard_Section_Woodland;

                class CUP_B_GER_Leopard_Section_Desert
                {
                    name = "Leopard 2 Section (Desert)";
                    icon = "\A3\ui_f\data\map\markers\nato\n_armor.paa";
                    faction = "CFP_B_DEARMY_WDL"; side = 1;
                    rarityGroup = 0.2;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "CUP_B_Leopard2A6DST_GER";
                        rank = "CAPTAIN";
                        position[] = {0,10,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "CUP_B_Leopard2A6DST_GER";
                        rank = "LIEUTENANT";
                        position[] = {5,0,0};
                    };
                };
            };
            class Air {
                name = "Air";
                delete CUP_B_GER_UH1DFlight;
            };
        };
    };
};



