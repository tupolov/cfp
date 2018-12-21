class CfgGroups
{
	class West
	{
		class CFP_B_IQPOLICE
		{
			name = "Iraqi Police";
			class Infantry
			{
				name = "Infantry";
				class cfp_b_grp_ip_sentry
				{
					name = "Sentry";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ip_police_squad
				{
					name = "Police Squad";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class grp_ip_patrol_squad_b
				{
					name = "Patrol Squad";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_policeman";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			};
			class Motorized
			{
				name = "Motorized";
				class cfp_b_grp_ip_offroad
				{
					name = "IP Offroad";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ip_offroad_patrol
				{
					name = "IP Offroad Patrol";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ip_offroad_group
				{
					name = "IP Offroad Group";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_ip_hmmvw
				{
					name = "IP HMMWV";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
				};
				class cfp_b_grp_ip_hmmvw_section
				{
					name = "IP HMMWV section";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_hmmwv_dshkm";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ip_hmmvw_platoon
				{
					name = "IP HMMWV platoon";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_hmmwv_dshkm";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
				class cfp_b_grp_ip_mixed_motorized_1
				{
					name = "IP Mixed Motorized 1";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class cfp_b_grp_ip_mixed_motorized_2
				{
					name = "IP Mixed Motorized 2";
					side = 1;
					faction = "CFP_B_IQPOLICE";
					rarityGroup = 0.3;
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_HMMWV_M2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_offroad_M2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "cfp_b_iqpolice_Ural";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
				};
			};
		};
	};
};