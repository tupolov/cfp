class CfgGroups
{
	class West
	{
		class CFP_B_IQARMY
		{
			name = "Iraqi Army";
			class Infantry
			{
				name = "Infantry";
				class cfp_b_grp_ia_sentry
				{
					name = "Sentry";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_inf_squad
				{
					name = "Infantry Squad";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class cfp_b_grp_ia_wpn_squad
				{
					name = "Weapons Squad";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sapper";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class cfp_b_grp_ia_inf_fire_team
				{
					name = "Fire Team";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_machinegunner";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sniper";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class cfp_b_grp_ia_at_team
				{
					name = "Anti-Armor Team";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_at";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class cfp_b_grp_ia_hq_squad
				{
					name = "HQ Squad";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_officer";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_grenadier";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_machinegunner";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sniper";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_at";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
			class SpecOps
			{
				name = "Spec Ops";
				class cfp_b_grp_ia_sf_team
				{
					name = "SF Combat Team";
					side = 1;
					faction = "CFP_B_IQARMY";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sf_team_leader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sf";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sf";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sf";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CFP_B_IQARMY_sf";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
			};

			class Motorized
			{
				name = "Motorized";
				class cfp_b_grp_ia_hmmvw
				{
					name = "IA HMMWV";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_hmmvw_section
				{
					name = "IA HMMWV";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_hmmwv_dshkm";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_hmmvw_platoon
				{
					name = "IA HMMWV";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_hmmwv_m2_gpk";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_hmmwv_dshkm";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_HMMWV_M2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_ia_ural_ZU23
				{
					name = "IA Ural ZU23";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_mixed_motorized_1
				{
					name = "IA Mixed Motorized 1";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_mixed_motorized_2
				{
					name = "IA Mixed Motorized 2";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_hmmwv_m2_gpk";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};

			class Mechanized
			{
				name = "Mechanized";
				class cfp_b_grp_ia_btr60
				{
					name = "IA BTR60";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_btr60_section
				{
					name = "IA BTR60 Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_b_grp_ia_btr60_platoon
				{
					name = "IA BTR60 Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class cfp_b_grp_ia_bmp1
				{
					name = "IA BMP-1";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_bmp1_section
				{
					name = "IA BMP-1 Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_b_grp_ia_bmp1_platoon
				{
					name = "IA BMP-1 Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};
				class cfp_b_grp_ia_bmp1p
				{
					name = "IA BMP-1P";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_bmp1p_section
				{
					name = "IA BMP-1P Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_b_grp_ia_bmp1p_platoon
				{
					name = "IA BMP-1P Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};

				class cfp_b_grp_ia_bmps_mixed_1
				{
					name = "IA BMPs Mixed 1";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class cfp_b_grp_ia_bmps_mixed_2
				{
					name = "IA BMPs Mixed 2";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};

				};

			};
			class Armored
			{
				name = "Armored";
				class cfp_b_grp_ia_t55
				{
					name = "IA T-55";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_t55_section
				{
					name = "IA T-55 Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_t55_platoon
				{
					name = "IA T-55 Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_ia_t72
				{
					name = "IA T-72";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_t72_section
				{
					name = "IA T-72 Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_t72_platoon
				{
					name = "IA T-72 Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

				class cfp_b_grp_ia_m1a1
				{
					name = "IA T-72";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ia_m1a1_section
				{
					name = "IA T-72 Section";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_m1a1_platoon
				{
					name = "IA T-72 Platoon";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_M1A1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};



				class cfp_b_grp_ia_ZSU
				{
					name = "IA ZSU";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};

				class cfp_b_grp_ia_mixed_armor_1
				{
					name = "IA Mixed Armor 1";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};

				class cfp_b_grp_ia_mixed_armor_2
				{
					name = "IA Mixed Armor 2";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ia_mixed_armor_3
				{
					name = "IA Mixed Armor 3";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_ZSU";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};

				};
				class cfp_b_grp_ia_mixed_armor_4
				{
					name = "IA Mixed Armor 4";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_ia_mixed_armor_5
				{
					name = "IA Mixed Armor 5";
					side = 1;
					faction = "cfp_b_iqarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqarmy_BTR60";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};

			};
		};
	};
};