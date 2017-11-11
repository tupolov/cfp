class CFP_B_PESH
        {
            name = "[ISC] Peshmerga";
            class Infantry
            {
                name = "Infantry";
                class cfp_b_grp_pesh_sentry
                {
                    name = "Sentry";  
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
				
				class cfp_b_grp_pesh_inf_squad
                {
                    name = "Infantry Squad"; 
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					class Unit8
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
					class Unit9
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {25,-25,0};
                    };
                };
				
				class cfp_b_grp_pesh_wpn_squad
                {
                    name = "Weapons Squad"; 
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_medic";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				
				class cfp_b_grp_pesh_inf_fire_team
                {
                    name = "Fire Team"; 
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_machinegunner";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_sniper";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class cfp_b_grp_pesh_at_team
                {
                    name = "Anti-Armor Team"; 
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_at";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_at";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class cfp_b_grp_pesh_hq_squad
                {
                    name = "HQ Squad"; 
                    side = 1;
                    faction = "CFP_B_PESH";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_leader";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_grenadier";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_machinegunner";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_medic";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_sniper";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_at";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "cfp_b_pesh_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				

			};
		};