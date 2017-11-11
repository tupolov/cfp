class CFP_O_IS
{
	name = "Islamic State";
	class Motorized 
	{
		name = "Motorized";
		
		// Offroads
		
		class cfp_o_grp_is_offroad_mgs
		{
			name = "IS Offroad MGs";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_offroad_patrol
		{
			name = "IS Offroad Patrol";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_offroad";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		// Land Rover Groups
		
		class cfp_o_grp_is_lr_mgs
		{
			name = "IS L.R. MGs";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_LR_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_lr_light_support
		{
			name = "IS L.R. Support";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_lr_heavy_support
		{
			name = "IS L.R. Heavy Support";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_LR_SPG9";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		// UAZ Groups
		
		class cfp_o_grp_is_uaz_mgs  
		{
			name = "IS UAZ MGs";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_uaz_light_support
		{
			name = "IS UAZ Support";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_AGS30";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_uaz_heavy_support
		{
			name = "IS UAZ Heavy Support";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_AGS30";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_SPG9";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		// mixed Technicals
		
		class cfp_o_grp_is_mixed_technicals_1
		{
			name = "IS Mixed Technicals 1";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_pickup_PK";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_technicals_2
		{
			name = "IS Mixed Technicals 2";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_SPG9";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_AGS30";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_pickup_PK";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_technicals_3
		{
			name = "IS Mixed Technicals 3";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_pickup_PK";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_technicals_4
		{
			name = "IS Mixed Technicals 4";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_LR_SPG9";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_pickup_PK";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_technicals_5
		{
			name = "IS Mixed Technicals 5";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_pickup_PK";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
	};
	class Mechanized
	{
		name = "Mechanized";
		
		class cfp_o_grp_is_bmp1
		{
			name = "IS BMP-1";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_o_grp_is_bmp1_section
		{
			name = "IS BMP-1 Section";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmp1_platoon
		{
			name = "IS BMP-1 Platoon";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmp1p
		{
			name = "IS BMP-1P";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_o_grp_is_bmp1p_section
		{
			name = "IS BMP-1P Section";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmp1p_platoon
		{
			name = "IS BMP-1P Platoon";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmp2
		{
			name = "IS BMP-2";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_o_grp_is_bmp2_section
		{
			name = "IS BMP-2 Section";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmp2_platoon
		{
			name = "IS BMP-2 Platoon";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		class cfp_o_grp_is_bmps_mixed_1
		{
			name = "IS BMPs Mixed 1";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};				
		};
		class cfp_o_grp_is_bmps_mixed_2
		{
			name = "IS BMPs Mixed 2";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_bmps_mixed_3
		{
			name = "IS BMPs Mixed 3";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_BMP1";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		
	};
	class Armored
	{
		name = "Armored";
		class cfp_o_grp_is_t55
		{
			name = "IS T-55";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_o_grp_is_t55_section
		{
			name = "IS T-55 Section";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_t55_platoon
		{
			name = "IS T-55 Platoon";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_t72
		{
			name = "IS T-72";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_o_grp_is_t72_section
		{
			name = "IS T-72 Section";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_o_grp_is_t72_platoon
		{
			name = "IS T-72 Platoon";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_armor_1
		{
			name = "IS Mixed Armor 1";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_armor_2
		{
			name = "IS Mixed Armor 2";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		class cfp_o_grp_is_mixed_armor_3
		{
			name = "IS Mixed Armor 3";  
			side = 0;
			faction = "CFP_O_IS";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 0;
				vehicle = "cfp_o_is_T72";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 0;
				vehicle = "cfp_o_is_BMP2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 0;
				vehicle = "cfp_o_is_T55";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
	};
};