class CFP_I_alNusra
        {
            name = "[CFP] al-Nusra Front";
            class Infantry
            {
                name = "Infantry";
                class cfp_i_grp_alNusra_sentry
                {
                    name = "Sentry";  
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
				
				class cfp_i_grp_alNusra_inf_squad
                {
                    name = "Infantry Squad"; 
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_squad_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					class Unit8
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
					class Unit9
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {25,-25,0};
                    };
                };
				
				class cfp_i_grp_alNusra_wpn_squad
                {
                    name = "Weapons Squad"; 
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_squad_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_medic";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_sapper";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				
				class cfp_i_grp_alNusra_inf_fire_team
                {
                    name = "Fire Team"; 
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_squad_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_sniper";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class cfp_i_grp_alNusra_at_team
                {
                    name = "Anti-Armor Team"; 
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_squad_leader";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_at";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_at";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class cfp_i_grp_alNusra_hq_squad
                {
                    name = "HQ Squad"; 
                    side = 2;
                    faction = "CFP_I_alNusra";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_team_leader";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_squad_leader";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_grenadier";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_medic";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 2;
                        vehicle = "cfp_i_alNusra_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
			};
		};