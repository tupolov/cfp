class CFP_I_alNusra
{
	name = "[CFP] al-Nusra Front";
	class Motorized 
	{
		name = "Motorized";
		
		// Offroads
		
		class cfp_i_grp_alNusra_offroad_mgs
		{
			name = "al-Nusra Offroad MGs";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_offroad_patrol
		{
			name = "al-Nusra Offroad Patrol";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		// Land Rover Groups
		
		class cfp_i_grp_alNusra_lr_mgs
		{
			name = "al-Nusra L.R. MGs";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_M2";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_lr_light_support
		{
			name = "al-Nusra L.R. Support";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_lr_heavy_support
		{
			name = "al-Nusra L.R. Heavy Support";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_SPG9";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		// UAZ Groups
		
		class cfp_i_grp_alNusra_uaz_mgs  
		{
			name = "al-Nusra UAZ MGs";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_uaz_light_support
		{
			name = "al-Nusra UAZ Support";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_uaz_heavy_support
		{
			name = "al-Nusra UAZ Heavy Support";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_AGS30";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_SPG9";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		// mixed Technicals
		
		class cfp_i_grp_alNusra_mixed_technicals_1
		{
			name = "al-Nusra Mixed Technicals 1";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_pickup_PK";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_technicals_2
		{
			name = "al-Nusra Mixed Technicals 2";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_AGS30";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_SPG9";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_technicals_3
		{
			name = "al-Nusra Mixed Technicals 3";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_MG";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_technicals_4
		{
			name = "al-Nusra Mixed Technicals 4";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_offroad_M2";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_LR_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_technicals_5
		{
			name = "al-Nusra Mixed Technicals 5";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_pickup_PK";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_SPG9";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_UAZ_METIS";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
	};
	class Mechanized
	{
		name = "Mechanized";
		class cfp_i_grp_alNusra_bmp1
		{
			name = "al-Nusra BMP-1";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_i_grp_alNusra_bmp1_section
		{
			name = "al-Nusra BMP-1 Section";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			
		};
		class cfp_i_grp_alNusra_bmp1_platoon
		{
			name = "al-Nusra BMP-1 Platoon";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		class cfp_i_grp_alNusra_bmp1p
		{
			name = "al-Nusra BMP-1P";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_i_grp_alNusra_bmp1p_section
		{
			name = "al-Nusra BMP-1P Section";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			
		};
		class cfp_i_grp_alNusra_bmp1p_platoon
		{
			name = "al-Nusra BMP-1P Platoon";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		
		class cfp_i_grp_alNusra_bmps_mixed_1
		{
			name = "al-Nusra BMPs Mixed 1";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};				
		};

		class cfp_i_grp_alNusra_bmps_mixed_2
		{
			name = "al-Nusra BMPs Mixed 3";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
			
		};
		
	};
	class Armored
	{
		name = "Armored";
		class cfp_i_grp_alNusra_t55
		{
			name = "al-Nusra T-55";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		class cfp_i_grp_alNusra_t55_section
		{
			name = "al-Nusra T-55 Section";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		class cfp_i_grp_alNusra_t55_platoon
		{
			name = "al-Nusra T-55 Platoon";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_ZSU
		{
			name = "al-Nusra ZSU";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_ZSU";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};	
		};
		
		class cfp_i_grp_alNusra_mixed_armor_1
		{
			name = "al-Nusra Mixed Armor 1";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_armor_2
		{
			name = "al-Nusra Mixed Armor 2";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_armor_3
		{
			name = "al-Nusra Mixed Armor 3";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
		class cfp_i_grp_alNusra_mixed_armor_4
		{
			name = "al-Nusra Mixed Armor 4";  
			side = 2;
			faction = "CFP_I_alNusra";
			rarityGroup = 0.3;
			class Unit0
			{
				side = 2;
				vehicle = "cfp_i_alNusra_T55";
				rank = "CORPORAL";
				position[] = {0,0,0};
			};
			class Unit1
			{
				side = 2;
				vehicle = "cfp_i_alNusra_BMP1P";
				rank = "PRIVATE";
				position[] = {5,-5,0};
			};
			class Unit2
			{
				side = 2;
				vehicle = "cfp_i_alNusra_ZSU";
				rank = "PRIVATE";
				position[] = {-5,-5,0};
			};
		};
		
	};
	
	
};