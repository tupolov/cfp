class CFP_B_IP
        {
            name = "[CFP] Iraqi Police";
            class Infantry
            {
                name = "Infantry";
                class cfp_b_grp_ip_sentry
                {
                    name = "Sentry";  
                    side = 1;
                    faction = "CFP_B_IP";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
				
				class cfp_b_grp_ip_police_squad
                {
                    name = "Police Squad"; 
                    side = 1;
                    faction = "CFP_B_IP";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    
                };
				
				class grp_ip_patrol_squad_b
                {
                    name = "Patrol Squad"; 
                    side = 1;
                    faction = "CFP_B_IP";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "cfp_b_ip_policeman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				
			};
		};