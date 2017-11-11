class CFP_O_SAA
        {
            name = "[CFP] Syrian Arab Army";
            class Infantry
            {
                name = "Infantry";
                class cfp_o_grp_saa_sentry
                {
                    name = "Sentry";  
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                };
				
				class cfp_o_grp_saa_inf_squad
                {
                    name = "Infantry Squad"; 
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					class Unit8
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-20,-20,0};
                    };
					class Unit9
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {25,-25,0};
                    };
                };
				
				class grp_saa_wpn_squad_o
                {
                    name = "Weapons Squad"; 
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_grenadier";
                        rank = "CORPORAL";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_machinegunner";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_medic";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_sniper";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_at";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_sapper";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				
				class grp_saa_inf_fire_team_o
                {
                    name = "Fire Team"; 
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_machinegunner";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_sniper";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class grp_saa_at_team_o
                {
                    name = "Anti-Armor Team"; 
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_officer";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_at";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_at";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_machinegunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    
                };
				
				class grp_saa_hq_squad_o
                {
                    name = "HQ Squad"; 
                    side = 0;
                    faction = "CFP_O_SAA";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_officer";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_grenadier";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_machinegunner";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_medic";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_sniper";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_at";
                        rank = "CORPORAL";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "cfp_o_saa_rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
					
                };
				
				
				
			};
		};