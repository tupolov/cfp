////////////////////////////////////OPSCORE/HELMETS////////////////////////////////////


	class CFP_OpsC_Covered : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered.paa;
        scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ops-Core Covered [75th]";
		model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa"};
		};
	};

	class CFP_OpsC_Covered_IDF : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered_IDF.paa;
        scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ops-Core Covered [IDF]";
		model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa"};
		};
	};

	class CFP_OpsC_Covered_KSK : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered_IDF.paa;
        scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ops-Core Covered [KSK Trop]";
		model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_co.paa"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_co.paa"};
		};
	};

	class CFP_OpsC_Covered_KSK2 : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered_IDF.paa;
        scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Ops-Core Covered [KSK Fleck]";
		model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_fleck_co.paa"};
		author = "CFP";

		class ItemInfo: HeadgearItem
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformmodel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered.p3d";
			modelSides[] = {6};
			armor = 6;
			passThrough = 0.5;
			HITPOINTS_HEAD(6,0.5)
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_fleck_co.paa"};
		};
	};


	class CFP_OpsC_Covered2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered2.paa;
			scope = 2;
			author = "CFP";
			displayName = "Ops-Core Covered II [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Covered2_IDF : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered2_IDF.paa;


			scope = 2;
			author = "CFP";
			displayName = "Ops-Core Covered II [IDF]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Covered2_KSK : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered2_IDF.paa;


			scope = 2;
			author = "CFP";
			displayName = "Ops-Core Covered II [KSK Trop]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Covered2_KSK2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Covered2_IDF.paa;


			scope = 2;
			author = "CFP";
			displayName = "Ops-Core Covered II [KSK Fleck]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_fleck_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_covered2.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Uncov_Goggles : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncov_Goggles.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncov Goggles [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_goggles.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_goggles.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {""};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Uncov_Full : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncov_Full.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncov Full [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_full.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_full.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {""};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Uncov_Full_IDF : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncov_Full_IDF.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncov Full [IDF]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_full.p3d";
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_full.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Cov_Goggles_Off : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Cov_Goggles_Off.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Cov Goggles Off [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Cov_Goggles_Off_KSK : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Cov_Goggles_Off.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Cov Goggles Off [KSK Trop]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Cov_Goggles_Off_KSK2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Cov_Goggles_Off.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Cov Goggles Off [KSK Fleck]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_fleck_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_goggles_off.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Cov_Full : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Cov_Full.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Cov Goggles/Shemagh [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_full.p3d";
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\glasses\75Neckwear\tex\shemagh_wrap_wht_co.paa","\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\glasses\75Facewear\tex\ember_lense_ca.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_full.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Med : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Med.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Spec [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Med_IDF : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Med_IDF.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Spec [IDF]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Med_KSK : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Med_IDF.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Spec [KSK Trop]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Med_KSK2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Med_IDF.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Spec [KSK Fleck]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_ksk_fleck_co.paa","\x\cfp\addons\headgear\75Headgear\tex\wmx200_insight_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_cov_medic.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Uncovered : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncovered.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncovered [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncovered.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncovered.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Painted : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Painted.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Painted [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_painted.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\headgear\75Headgear\tex\opscore_painted_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_painted.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

		class CFP_OpsC_Painted_IDF : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Painted_IDF.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Painted [IDF]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_painted.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co_idf.paa","\x\cfp\addons\headgear\75Headgear\tex\opscore_painted_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_painted.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Uncov_Goggle_Off : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncov_Goggle_Off.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncov Goggles Off [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_goggles_off.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_goggles_off.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	class CFP_OpsC_Uncov_Shemagh : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_OpsC_Uncov_Shemagh.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "CFP";
			displayName = "Ops-Core Uncov Shemagh [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_shemagh.p3d";
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\opscore_co.paa","\x\cfp\addons\glasses\75Neckwear\tex\shemagh_wrap_blk_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 30;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ops_core_uncov_shemagh.p3d";
						modelSides[] = {3,1};
						hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo {

					class Head {
						hitpointName = "HitHead";
						armor = 6;
						passThrough = 0.500000;
					};
				};
			};
		};

	////////////////////////////////////RANGER/PATROL/CAPS////////////////////////////////////


	class CFP_75th_Patrol_Cap : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Patrol_Cap.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "WilliamHurt/modifiedbyHawaiian";
			displayName = "Patrol Cap [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\ranger_patrol_cap.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};

			class ItemInfo: HeadgearItem {

						mass = 4;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\ranger_patrol_cap.p3d";
						modelSides[] = {8};
						hiddenSelections[] = {""};
			};
	};

	class CFP_75th_Patrol_Cap_Oakleys : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Patrol_Cap_Oakleys.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "WilliamHurt/modifiedbyHawaiian";
			displayName = "Patrol Cap/Oakleys [75th]";
			model = "x\cfp\addons\headgear\75Headgear\ranger_patrol_cap_oakleys.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {""};

			class ItemInfo: HeadgearItem {

						mass = 10;
						uniformModel = "x\cfp\addons\headgear\75Headgear\ranger_patrol_cap_oakleys.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {""};
			};
	};



	////////////////////////////////////Itsthomas’s/BEANIES////////////////////////////////////


	class CFP_75th_Beanie_Blk : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Blk.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/modifiedbyHawaiian";
			displayName = "Beanie Tactical Blk [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\tac_beanie_blk_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 8;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Blk2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Blk2.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/retexbyHawaiian";
			displayName = "Beanie Blk [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\beanie_blk_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 4;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Khaki : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Khaki.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/modifiedbyHawaiian";
			displayName = "Beanie Tactical Khki [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\tac_beanie_khki_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 8;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Khaki2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Khaki2.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/retexbyHawaiian";
			displayName = "Beanie Khki [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\beanie_khaki_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 4;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Olv : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Olv.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/modifiedbyHawaiian";
			displayName = "Beanie Tactical Olv [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\tac_beanie_olv_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 8;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Olv2 : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Olv2.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/retexbyHawaiian";
			displayName = "Beanie Olv [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\beanie_olv_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 4;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};
	class CFP_75th_Beanie_Grn : ItemCore {

            picture = \x\cfp\addons\headgear\data\ui\icon_CFP_75th_Beanie_Grn.paa;


			scope = 2;
			weaponPoolAvailable = 1;
			author = "itsthomas/modifiedbyHawaiian";
			displayName = "Beanie Tactical Grn [75th]";
			model = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\75Headgear\tex\tac_beanie_grn_co.paa"};

			class ItemInfo: HeadgearItem {

						mass = 8;
						uniformModel = "\x\cfp\addons\headgear\75Headgear\thm_tactical_beanie.p3d";
						modelSides[] = {6};
						hiddenSelections[] = {"camo"};
			};
	};


