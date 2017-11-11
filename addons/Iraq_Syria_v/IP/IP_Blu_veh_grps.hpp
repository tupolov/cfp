class CFP_B_IP
{
	name = "Iraqi Army";
	
	class Motorized
	{
		name = "Motorized";
		
		class cfp_b_grp_ip_offroad
		{
			name = "IP Offroad";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_b_grp_ip_offroad_patrol
		{
			name = "IP Offroad Patrol";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
		};
		class cfp_b_grp_ip_offroad_group
		{
			name = "IP Offroad Group";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
			class Unit2
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};	
		};
		
		class cfp_b_grp_ip_hmmvw
		{
			name = "IP HMMWV";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_b_grp_ip_hmmvw_section
		{
			name = "IP HMMWV section";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_hmmwv_dshkm";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
		};
		class cfp_b_grp_ip_hmmvw_platoon
		{
			name = "IP HMMWV platoon";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_hmmwv_dshkm";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
			class Unit2
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};	
		};

		class cfp_b_grp_ip_mixed_motorized_1
		{
			name = "IP Mixed Motorized 1";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
		};
		class cfp_b_grp_ip_mixed_motorized_2
		{
			name = "IP Mixed Motorized 2";  
			side = 1;
			faction = "CFP_B_IP";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ip_HMMWV_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ip_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
			class Unit2
			{
				side = 1;
				vehicle = "cfp_b_ip_Ural";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};	
		};
	};

};