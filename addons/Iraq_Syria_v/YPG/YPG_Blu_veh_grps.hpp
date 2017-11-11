class CFP_B_YPG
{
	name = "YPG";
	
	class Motorized
	{
		name = "Motorized";
		class cfp_b_grp_ypg_offroad
		{
			name = "YPG Offroad Armed";  
			side = 1;
			faction = "CFP_B_YPG";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_b_grp_ypg_offroad_patrol
		{
			name = "YPG Offroad Armed Patrol";  
			side = 1;
			faction = "CFP_B_YPG";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
		};
		class cfp_b_grp_ypg_offroad_group
		{
			name = "YPG Offroad Group";  
			side = 1;
			faction = "CFP_B_YPG";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
			class Unit1
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};	
			class Unit2
			{
				side = 1;
				vehicle = "cfp_b_ypg_offroad_M2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};	
		};	
	};
};