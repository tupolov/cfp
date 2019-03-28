class CfgGroups
{
	class East
	{
		class CFP_O_SYARMY
		{
			name = "Syrian Arab Army";
			class Infantry
			{
				name = "Infantry";
				class cfp_o_grp_saa_sentry
				{
					name = "Sentry";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_inf_squad
				{
					name = "Infantry Squad";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_syarmy_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_syarmy_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_syarmy_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
				};
				class grp_saa_wpn_squad_o
				{
					name = "Weapons Squad";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_syarmy_medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_syarmy_sniper";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_syarmy_at";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_syarmy_sapper";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class grp_saa_inf_fire_team_o
				{
					name = "Fire Team";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_machinegunner";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_syarmy_sniper";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class grp_saa_at_team_o
				{
					name = "Anti-Armor Team";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_at";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_at";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_syarmy_machinegunner";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class grp_saa_hq_squad_o
				{
					name = "HQ Squad";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_officer";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_grenadier";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_machinegunner";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "cfp_o_syarmy_medic";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "cfp_o_syarmy_sniper";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "cfp_o_syarmy_at";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "cfp_o_syarmy_rifleman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized";
			};
			class Mechanized
			{
				name = "Mechanized";
				class cfp_o_syarmy_btr60
				{
					name = "SAA BTR60";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_btr60_section
				{
					name = "SAA BTR60 Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_btr60_platoon
				{
					name = "SAA BTR60 Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp1
				{
					name = "SAA BMP-1";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_bmp1_section
				{
					name = "SAA BMP-1 Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp1_platoon
				{
					name = "SAA BMP-1 Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp1p
				{
					name = "SAA BMP-1P";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_bmp1p_section
				{
					name = "SAA BMP-1P Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp1p_platoon
				{
					name = "SAA BMP-1P Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp2
				{
					name = "SAA BMP-2";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_bmp2_section
				{
					name = "SAA BMP-2 Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmp2_platoon
				{
					name = "SAA BMP-2 Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmps_mixed_1
				{
					name = "SAA BMPs Mixed 1";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmps_mixed_2
				{
					name = "SAA BMPs Mixed 2";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_bmps_mixed_3
				{
					name = "SAA BMPs Mixed 3";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1P";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
			class Armored
			{
				name = "Armored";
				class cfp_o_grp_saa_t55
				{
					name = "SAA T-55";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_t55_section
				{
					name = "SAA T-55 Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_t55_platoon
				{
					name = "SAA T-55 Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_t72
				{
					name = "SAA T-72";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_t72_section
				{
					name = "SAA T-72 Section";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_t72_platoon
				{
					name = "SAA T-72 Platoon";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_ZSU
				{
					name = "SAA ZSU";
					side = 2;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "cfp_o_syarmy_ZSU";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_o_grp_saa_mixed_armor_1
				{
					name = "SAA Mixed Armor 1";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_mixed_armor_2
				{
					name = "SAA Mixed Armor 2";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_ZSU";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_mixed_armor_3
				{
					name = "SAA Mixed Armor 3";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_ZSU";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_o_grp_saa_mixed_armor_4
				{
					name = "SAA Mixed Armor 4";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T72";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_o_grp_saa_mixed_armor_5
				{
					name = "SAA Mixed Armor 5";
					side = 0;
					faction = "cfp_o_syarmy";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "cfp_o_syarmy_T55";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BMP1";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "cfp_o_syarmy_BTR60";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
		};
	};
};