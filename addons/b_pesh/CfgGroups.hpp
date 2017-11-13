class CfgGroups
{
	class WEST
	{
		class CFP_B_PESH
		{
			name = "Peshmerga";

			class Infantry
			{
				name = "Infantry";
				class cfp_b_grp_pesh_sentry
				{
					name = "Sentry";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
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

			class Mechanized
			{
				name = "Mechanized";
				class cfp_b_grp_pesh_bmp1
				{
					name = "Peshmerga BMP1";
					side = 1;
					faction = "CFP_B_PESH";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_pesh_bmp2
				{
					name = "Peshmerga BMP2";
					side = 1;
					faction = "CFP_B_PESH";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
			};

			class Armored
			{
				name = "Armored";
				class cfp_b_grp_pesh_zsu
				{
					name = "Peshmerga ZSU";
					side = 1;
					faction = "CFP_B_PESH";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_ZSU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
			};

			class Motorized
			{
	            name = "Motorized Infantry";
				class cfp_b_grp_pesh_offroad_patrol
				{
					name = "Peshmerga Offroad Patrol";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_pesh_offroad";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_pesh_offroad_mgs
				{
					name = "Peshmerga Offroad Armed";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_pesh_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_pesh_hmmwv
				{
					name = "Peshmerga HMMWV";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_pesh_hmmwv_section
				{
					name = "Peshmerga HMMWV Section";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_pesh_hmmwv_platoon
				{
					name = "Peshmerga HMMWV Platoon";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					side = 1;
					faction = "CFP_B_PESH";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_pesh_HMMWV_M2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_pesh_ural_ZU23
				{
					name = "Peshmerga Ural ZU23";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_Ural_ZU23";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_pesh_brdm
				{
					name = "Peshmerga BRDM";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					side = 1;
					faction = "CFP_B_PESH";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_BRDM";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_pesh_btr60
				{
					name = "Peshmerga BTR60";
					side = 1;
					faction = "CFP_B_PESH";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_pesh_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};