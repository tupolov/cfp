class CfgGroups {
    class EAST {
        class CUP_O_RU {
            name = "Russian Ground Forces (Jungle / Woodland)";

            class Infantry {
            	delete CUP_O_MVD_AssaultTeam;
            	delete CUP_O_RU_ReconTeam;
            	delete CUP_O_RU_ReconTeam_AUT;
                class CUP_O_RU_infantry_KORD_team_high {
                    name = "KORD MG Team";
                    side = 0;
                    faction = "CUP_O_RU";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "CUP_O_RU_Asst_Gunner_KORD_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "CUP_O_RU_Gunner_KORD_01";
                    };
                };

                class CUP_O_RU_infantry_mortar_team {
                    name = "Mortar Team";
                    side = 0;
                    faction = "CUP_O_RU";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "CUP_O_RU_Asst_Gunner_Mortar_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "CUP_O_RU_Gunner_Mortar_01";
                    };
                };

                class CUP_O_RU_infantry_METIS_team {
                    name = "METIS Team";
                    side = 0;
                    faction = "CUP_O_RU";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "CUP_O_RU_Asst_Gunner_METIS_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "CUP_O_RU_Gunner_METIS_01";
                    };
                };
            };

            class SpecOps {

                name = "Special Forces";

				class CUP_O_RU_ReconTeam
				{
					name = "Spetsnaz Team";
					faction = "CUP_O_RU"; side = 0;
					rarityGroup = 0.07;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_TL";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_GL";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_Marksman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps_Scout";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps_SD";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
				};
				class CUP_O_RU_ReconTeam_AUT
				{
					name = "Spetsnaz Team (Autumn)";
					faction = "CUP_O_RU"; side = 0;
					rarityGroup = 0.07;
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_TL_Autumn";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_GL_Autumn";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "CUP_O_RUS_Soldier_Marksman_Autumn";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps_Scout_Autumn";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps_Autumn";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "CUP_O_RUS_SpecOps_SD_Autumn";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
				};
            };
        };
    };
};
