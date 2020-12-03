class CfgMarkers
{
	class flag_NATO;
	class hd_dot;
	class hd_ambush;
	class hd_arrow;
	class hd_destroy;
	class hd_end;
	class hd_flag;
	class hd_join;
	class hd_objective;
	class hd_pickup;
	class hd_start;
	class hd_unknown;
	class hd_warning;
	class CFP_MARKER_BASE : Flag
	{
		markerClass = "Flags";
		author = "Siege-A";
		color[] = {1,1,1,1};
	};
	class CFP_MARKER_ALGERIA : CFP_MARKER_BASE
	{
		scope = 1;
		shadow = 0;
		name = "Algeria";
		icon = "\x\cfp\addons\markers\data\africa\marker_algeria_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_algeria_ca.paa";
	};
	class CFP_MARKER_ANGOLA : CFP_MARKER_ALGERIA
	{
		name = "Angola";
		icon = "\x\cfp\addons\markers\data\africa\marker_angola_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_angola_ca.paa";
	};
	class CFP_MARKER_BENIN : CFP_MARKER_ALGERIA
	{
		name = "Benin";
		icon = "\x\cfp\addons\markers\data\africa\marker_benin_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_benin_ca.paa";
	};
	class CFP_MARKER_BOTSWANA : CFP_MARKER_ALGERIA
	{
		name = "Botswana";
		icon = "\x\cfp\addons\markers\data\africa\marker_botswana_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_botswana_ca.paa";
	};
	class CFP_MARKER_BURKINA_FASO : CFP_MARKER_ALGERIA
	{
		name = "Burkina Faso";
		icon = "\x\cfp\addons\markers\data\africa\marker_burkina_faso_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_burkina_faso_ca.paa";
	};
	class CFP_MARKER_BURUNDI : CFP_MARKER_ALGERIA
	{
		name = "Burundi";
		icon = "\x\cfp\addons\markers\data\africa\marker_burundi_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_burundi_ca.paa";
	};
	class CFP_MARKER_CAMEROON : CFP_MARKER_ALGERIA
	{
		name = "Cameroon";
		icon = "\x\cfp\addons\markers\data\africa\marker_cameroon_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_cameroon_ca.paa";
	};
	class CFP_MARKER_CAPE_VERDE : CFP_MARKER_ALGERIA
	{
		name = "Cape Verde";
		icon = "\x\cfp\addons\markers\data\africa\marker_cape_verde_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_cape_verde_ca.paa";
	};
	class CFP_MARKER_CENTRAL_AFRICA : CFP_MARKER_ALGERIA
	{
		name = "Central African Republic";
		icon = "\x\cfp\addons\markers\data\africa\marker_central_african_republic_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_central_african_republic_ca.paa";
	};
	class CFP_MARKER_CHAD : CFP_MARKER_ALGERIA
	{
		name = "Chad";
		icon = "\x\cfp\addons\markers\data\africa\marker_chad_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_chad_ca.paa";
	};
	class CFP_MARKER_COMOROS : CFP_MARKER_ALGERIA
	{
		name = "Comoros";
		icon = "\x\cfp\addons\markers\data\africa\marker_comoros_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_comoros_ca.paa";
	};
	class CFP_MARKER_COTE_DIVOIRE : CFP_MARKER_ALGERIA
	{
		name = "Cote d'Ivoire";
		icon = "\x\cfp\addons\markers\data\africa\marker_cote_divoire_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_cote_divoire_ca.paa";
	};
	class CFP_MARKER_DEMOCRATIC_CONGO : CFP_MARKER_ALGERIA
	{
		name = "Democratic Republic of the Congo";
		icon = "\x\cfp\addons\markers\data\africa\marker_democratic_republic_congo_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_democratic_republic_congo_ca.paa";
	};
	class CFP_MARKER_DJIBOUTI : CFP_MARKER_ALGERIA
	{
		name = "Djibouti";
		icon = "\x\cfp\addons\markers\data\africa\marker_djibouti_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_djibouti_ca.paa";
	};
	class CFP_MARKER_EQUATORIAL_GUINEA : CFP_MARKER_ALGERIA
	{
		name = "Equatorial Guinea";
		icon = "\x\cfp\addons\markers\data\africa\marker_equatorial_guinea_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_equatorial_guinea_ca.paa";
	};
	class CFP_MARKER_ERITREA : CFP_MARKER_ALGERIA
	{
		name = "Eritrea";
		icon = "\x\cfp\addons\markers\data\africa\marker_eritrea_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_eritrea_ca.paa";
	};
	class CFP_MARKER_ETHIOPIA : CFP_MARKER_ALGERIA
	{
		name = "Ethiopia";
		icon = "\x\cfp\addons\markers\data\africa\marker_ethiopia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_ethiopia_ca.paa";
	};
	class CFP_MARKER_GABON : CFP_MARKER_ALGERIA
	{
		name = "Gabon";
		icon = "\x\cfp\addons\markers\data\africa\marker_gabon_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_gabon_ca.paa";
	};
	class CFP_MARKER_GHANA : CFP_MARKER_ALGERIA
	{
		name = "Ghana";
		icon = "\x\cfp\addons\markers\data\africa\marker_ghana_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_ghana_ca.paa";
	};
	class CFP_MARKER_GUINEA : CFP_MARKER_ALGERIA
	{
		name = "Guinea";
		icon = "\x\cfp\addons\markers\data\africa\marker_guinea_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_guinea_ca.paa";
	};
	class CFP_MARKER_GUINEA_BISSAU : CFP_MARKER_ALGERIA
	{
		name = "Guinea-Bissau";
		icon = "\x\cfp\addons\markers\data\africa\marker_guinea_bissau_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_guinea_bissau_ca.paa";
	};
	class CFP_MARKER_KENYA : CFP_MARKER_ALGERIA
	{
		name = "Kenya";
		icon = "\x\cfp\addons\markers\data\africa\marker_kenya_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_kenya_ca.paa";
	};
	class CFP_MARKER_LESOTHO : CFP_MARKER_ALGERIA
	{
		name = "Lesotho";
		icon = "\x\cfp\addons\markers\data\africa\marker_lesotho_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_lesotho_ca.paa";
	};
	class CFP_MARKER_LIBERIA : CFP_MARKER_ALGERIA
	{
		name = "Liberia";
		icon = "\x\cfp\addons\markers\data\africa\marker_liberia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_liberia_ca.paa";
	};
	class CFP_MARKER_LIBYA : CFP_MARKER_ALGERIA
	{
		name = "Libya";
		icon = "\x\cfp\addons\markers\data\africa\marker_libya_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_libya_ca.paa";
	};
	class CFP_MARKER_MADAGASCAR : CFP_MARKER_ALGERIA
	{
		name = "Madagascar";
		icon = "\x\cfp\addons\markers\data\africa\marker_madagascar_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_madagascar_ca.paa";
	};
	class CFP_MARKER_MALAWI : CFP_MARKER_ALGERIA
	{
		name = "Malawi";
		icon = "\x\cfp\addons\markers\data\africa\marker_malawi_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_malawi_ca.paa";
	};
	class CFP_MARKER_MALI : CFP_MARKER_ALGERIA
	{
		name = "Mali";
		icon = "\x\cfp\addons\markers\data\africa\marker_mali_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_mali_ca.paa";
	};
	class CFP_MARKER_MAURITANIA : CFP_MARKER_ALGERIA
	{
		name = "Mauritania";
		icon = "\x\cfp\addons\markers\data\africa\marker_mauritania_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_mauritania_ca.paa";
	};
	class CFP_MARKER_MAURITIUS : CFP_MARKER_ALGERIA
	{
		name = "Mauritius";
		icon = "\x\cfp\addons\markers\data\africa\marker_mauritius_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_mauritius_ca.paa";
	};
	class CFP_MARKER_MOROCCO : CFP_MARKER_ALGERIA
	{
		name = "Morocco";
		icon = "\x\cfp\addons\markers\data\africa\marker_morocco_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_morocco_ca.paa";
	};
	class CFP_MARKER_MOZAMBIQUE : CFP_MARKER_ALGERIA
	{
		name = "Mozambique";
		icon = "\x\cfp\addons\markers\data\africa\marker_mozambique_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_mozambique_ca.paa";
	};
	class CFP_MARKER_NAMIBIA : CFP_MARKER_ALGERIA
	{
		name = "Namibia";
		icon = "\x\cfp\addons\markers\data\africa\marker_namibia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_namibia_ca.paa";
	};
	class CFP_MARKER_NIGER : CFP_MARKER_ALGERIA
	{
		name = "Niger";
		icon = "\x\cfp\addons\markers\data\africa\marker_niger_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_niger_ca.paa";
	};
	class CFP_MARKER_NIGERIA : CFP_MARKER_ALGERIA
	{
		name = "Nigeria";
		icon = "\x\cfp\addons\markers\data\africa\marker_nigeria_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_nigeria_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_CONGO : CFP_MARKER_ALGERIA
	{
		name = "Republic of the Congo";
		icon = "\x\cfp\addons\markers\data\africa\marker_republic_congo_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_republic_congo_ca.paa";
	};
	class CFP_MARKER_RWANDA : CFP_MARKER_ALGERIA
	{
		name = "Rwanda";
		icon = "\x\cfp\addons\markers\data\africa\marker_rwanda_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_rwanda_ca.paa";
	};
	class CFP_MARKER_SAO_TOME : CFP_MARKER_ALGERIA
	{
		name = "Sao Tome and Principe";
		icon = "\x\cfp\addons\markers\data\africa\marker_sao_tome_principe_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_sao_tome_principe_ca.paa";
	};
	class CFP_MARKER_SENEGAL : CFP_MARKER_ALGERIA
	{
		name = "Senegal";
		icon = "\x\cfp\addons\markers\data\africa\marker_senegal_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_senegal_ca.paa";
	};
	class CFP_MARKER_SEYCHELLES : CFP_MARKER_ALGERIA
	{
		name = "Seychelles";
		icon = "\x\cfp\addons\markers\data\africa\marker_seychelles_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_seychelles_ca.paa";
	};
	class CFP_MARKER_SIERRA_LEONE : CFP_MARKER_ALGERIA
	{
		name = "Sierra Leone";
		icon = "\x\cfp\addons\markers\data\africa\marker_sierra_leone_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_sierra_leone_ca.paa";
	};
	class CFP_MARKER_SOMALIA : CFP_MARKER_ALGERIA
	{
		name = "Somalia";
		icon = "\x\cfp\addons\markers\data\africa\marker_somalia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_somalia_ca.paa";
	};
	class CFP_MARKER_SOMALI_PIRATES : CFP_MARKER_ALGERIA
	{
		name = "Somali Pirates";
		icon = "\x\cfp\addons\markers\data\africa\marker_somali_pirates_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_somali_pirates_ca.paa";
	};
	class CFP_MARKER_SOUTH_AFRICA : CFP_MARKER_ALGERIA
	{
		name = "South Africa";
		icon = "\x\cfp\addons\markers\data\africa\marker_south_africa_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_south_africa_ca.paa";
	};
	class CFP_MARKER_SOUTH_SUDAN : CFP_MARKER_ALGERIA
	{
		name = "South Sudan";
		icon = "\x\cfp\addons\markers\data\africa\marker_south_sudan_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_south_sudan_ca.paa";
	};
	class CFP_MARKER_SUDAN : CFP_MARKER_ALGERIA
	{
		name = "Sudan";
		icon = "\x\cfp\addons\markers\data\africa\marker_sudan_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_sudan_ca.paa";
	};
	class CFP_MARKER_SWAZILAND : CFP_MARKER_ALGERIA
	{
		name = "Swaziland";
		icon = "\x\cfp\addons\markers\data\africa\marker_swaziland_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_swaziland_ca.paa";
	};
	class CFP_MARKER_TANZANIA : CFP_MARKER_ALGERIA
	{
		name = "Tanzania";
		icon = "\x\cfp\addons\markers\data\africa\marker_tanzania_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_tanzania_ca.paa";
	};
	class CFP_MARKER_THE_GAMBIA : CFP_MARKER_ALGERIA
	{
		name = "The Gambia";
		icon = "\x\cfp\addons\markers\data\africa\marker_the_gambia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_the_gambia_ca.paa";
	};
	class CFP_MARKER_TOGO : CFP_MARKER_ALGERIA
	{
		name = "Togo";
		icon = "\x\cfp\addons\markers\data\africa\marker_togo_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_togo_ca.paa";
	};
	class CFP_MARKER_TUNISIA : CFP_MARKER_ALGERIA
	{
		name = "Tunisia";
		icon = "\x\cfp\addons\markers\data\africa\marker_tunisia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_tunisia_ca.paa";
	};
	class CFP_MARKER_UGANDA : CFP_MARKER_ALGERIA
	{
		name = "Uganda";
		icon = "\x\cfp\addons\markers\data\africa\marker_uganda_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_uganda_ca.paa";
	};
	class CFP_MARKER_ZAMBIA : CFP_MARKER_ALGERIA
	{
		name = "Zambia";
		icon = "\x\cfp\addons\markers\data\africa\marker_zambia_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_zambia_ca.paa";
	};
	class CFP_MARKER_ZIMBABWE : CFP_MARKER_ALGERIA
	{
		name = "Zimbabwe";
		icon = "\x\cfp\addons\markers\data\africa\marker_zimbabwe_ca.paa";
		texture = "\x\cfp\addons\markers\data\africa\marker_zimbabwe_ca.paa";
	};
		class CFP_MARKER_AFGHANISTAN : CFP_MARKER_ALGERIA
	{
		name = "Afghanistan";
		icon = "\x\cfp\addons\markers\data\mideast\marker_afghanistan_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_afghanistan_ca.paa";
	};
		class CFP_MARKER_AFGHANISTAN_POLICE : CFP_MARKER_ALGERIA
	{
		name = "Afghan National Police";
		icon = "\x\cfp\addons\markers\data\mideast\marker_afghanistan_police_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_afghanistan_police_ca.paa";
	};
		class CFP_MARKER_AL_NUSRA : CFP_MARKER_ALGERIA
	{
		name = "Al Nusra Front";
		icon = "\x\cfp\addons\markers\data\mideast\marker_al_nusra_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_al_nusra_ca.paa";
	};
	class CFP_MARKER_EGYPT : CFP_MARKER_ALGERIA
	{
		name = "Egypt";
		icon = "\x\cfp\addons\markers\data\mideast\marker_egypt_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_egypt_ca.paa";
	};
	class CFP_MARKER_HEZBOLLAH : CFP_MARKER_ALGERIA
	{
		name = "Hezbollah";
		icon = "\x\cfp\addons\markers\data\mideast\marker_hezbollah_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_hezbollah_ca.paa";
	};
	class CFP_MARKER_IRAN : CFP_MARKER_ALGERIA
	{
		name = "Iran";
		icon = "\x\cfp\addons\markers\data\mideast\marker_iran_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_iran_ca.paa";
	};
	class CFP_MARKER_IRAQ : CFP_MARKER_ALGERIA
	{
		name = "Iraq";
		icon = "\x\cfp\addons\markers\data\mideast\marker_iraq_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_iraq_ca.paa";
	};
	class CFP_MARKER_ISRAEL : CFP_MARKER_ALGERIA
	{
		name = "Israel";
		icon = "\x\cfp\addons\markers\data\mideast\marker_israel_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_israel_ca.paa";
	};
	class CFP_MARKER_ISLAMIC_STATE : CFP_MARKER_ALGERIA
	{
		name = "Islamic State";
		icon = "\x\cfp\addons\markers\data\mideast\marker_is_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_is_ca.paa";
	};
	class CFP_MARKER_JORDAN : CFP_MARKER_ALGERIA
	{
		name = "Jordan";
		icon = "\x\cfp\addons\markers\data\mideast\marker_jordan_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_jordan_ca.paa";
	};
	class CFP_MARKER_KINGDOM_BAHRAIN : CFP_MARKER_ALGERIA
	{
		name = "Kingdom of Bahrain";
		icon = "\x\cfp\addons\markers\data\mideast\marker_kingdom_bahrain_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_kingdom_bahrain_ca.paa";
	};
	class CFP_MARKER_KURDISTAN : CFP_MARKER_ALGERIA
	{
		name = "Kurdistan";
		icon = "\x\cfp\addons\markers\data\mideast\marker_kurdistan_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_kurdistan_ca.paa";
	};
	class CFP_MARKER_KUWAIT : CFP_MARKER_ALGERIA
	{
		name = "Kuwait";
		icon = "\x\cfp\addons\markers\data\mideast\marker_kuwait_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_kuwait_ca.paa";
	};
	class CFP_MARKER_LEBANON : CFP_MARKER_ALGERIA
	{
		name = "Lebanon";
		icon = "\x\cfp\addons\markers\data\mideast\marker_lebanon_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_lebanon_ca.paa";
	};
	class CFP_MARKER_OMAN : CFP_MARKER_ALGERIA
	{
		name = "Oman";
		icon = "\x\cfp\addons\markers\data\mideast\marker_oman_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_oman_ca.paa";
	};
	class CFP_MARKER_QATAR : CFP_MARKER_ALGERIA
	{
		name = "Qatar";
		icon = "\x\cfp\addons\markers\data\mideast\marker_qatar_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_qatar_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_CYPRUS : CFP_MARKER_ALGERIA
	{
		name = "Republic of Cyprus";
		icon = "\x\cfp\addons\markers\data\mideast\marker_republic_cyprus_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_republic_cyprus_ca.paa";
	};
	class CFP_MARKER_SAUDI_ARABIA : CFP_MARKER_ALGERIA
	{
		name = "Saudi Arabia";
		icon = "\x\cfp\addons\markers\data\mideast\marker_saudi_arabia_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_saudi_arabia_ca.paa";
	};
	class CFP_MARKER_STATE_PALESTINE : CFP_MARKER_ALGERIA
	{
		name = "State of Palestine";
		icon = "\x\cfp\addons\markers\data\mideast\marker_state_palestine_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_state_palestine_ca.paa";
	};
	class CFP_MARKER_SYRIA : CFP_MARKER_ALGERIA
	{
		name = "Syria";
		icon = "\x\cfp\addons\markers\data\mideast\marker_syria_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_syria_ca.paa";
	};
	class CFP_MARKER_TALIBAN : CFP_MARKER_ALGERIA
	{
		name = "Taliban";
		icon = "\x\cfp\addons\markers\data\mideast\marker_taliban_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_taliban_ca.paa";
	};
	class CFP_MARKER_TURKEY : CFP_MARKER_ALGERIA
	{
		name = "Turkey";
		icon = "\x\cfp\addons\markers\data\mideast\marker_turkey_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_turkey_ca.paa";
	};
	class CFP_MARKER_TURKISH_NORTH_CYPRUS : CFP_MARKER_ALGERIA
	{
		name = "Turkish Republic of Northern Cyprus";
		icon = "\x\cfp\addons\markers\data\mideast\marker_turkish_republic_north_cyprus_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_turkish_republic_north_cyprus_ca.paa";
	};
	class CFP_MARKER_UNITED_ARAB_EMIRATES : CFP_MARKER_ALGERIA
	{
		name = "United Arab Emirates";
		icon = "\x\cfp\addons\markers\data\mideast\marker_united_arab_emirates_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_united_arab_emirates_ca.paa";
	};
	class CFP_MARKER_YEMEN : CFP_MARKER_ALGERIA
	{
		name = "Yemen";
		icon = "\x\cfp\addons\markers\data\mideast\marker_yemen_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_yemen_ca.paa";
	};
	class CFP_MARKER_YPG : CFP_MARKER_ALGERIA
	{
		name = "YPG";
		icon = "\x\cfp\addons\markers\data\mideast\marker_ypg_ca.paa";
		texture = "\x\cfp\addons\markers\data\mideast\marker_ypg_ca.paa";
	};
		class CFP_MARKER_ALBANIA : CFP_MARKER_ALGERIA
	{
		name = "Albania";
		icon = "\x\cfp\addons\markers\data\europe\marker_albania_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_albania_ca.paa";
	};
	class CFP_MARKER_ANDORRA : CFP_MARKER_ALGERIA
	{
		name = "Andorra";
		icon = "\x\cfp\addons\markers\data\europe\marker_andorra_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_andorra_ca.paa";
	};
	class CFP_MARKER_AUSTRIA : CFP_MARKER_ALGERIA
	{
		name = "Austria";
		icon = "\x\cfp\addons\markers\data\europe\marker_austria_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_austria_ca.paa";
	};
	class CFP_MARKER_BELARUS : CFP_MARKER_ALGERIA
	{
		name = "Belarus";
		icon = "\x\cfp\addons\markers\data\europe\marker_belarus_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_belarus_ca.paa";
	};
	class CFP_MARKER_BELGIUM : CFP_MARKER_ALGERIA
	{
		name = "Belgium";
		icon = "\x\cfp\addons\markers\data\europe\marker_belgium_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_belgium_ca.paa";
	};
	class CFP_MARKER_BOSNIA_HERZEGOVINA : CFP_MARKER_ALGERIA
	{
		name = "Bosnia and Herzegovina";
		icon = "\x\cfp\addons\markers\data\europe\marker_bosnia_herzegovina_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_bosnia_herzegovina_ca.paa";
	};
	class CFP_MARKER_BULGARIA : CFP_MARKER_ALGERIA
	{
		name = "Bulgaria";
		icon = "\x\cfp\addons\markers\data\europe\marker_bulgaria_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_bulgaria_ca.paa";
	};
	class CFP_MARKER_CROATIA : CFP_MARKER_ALGERIA
	{
		name = "Croatia";
		icon = "\x\cfp\addons\markers\data\europe\marker_croatia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_croatia_ca.paa";
	};
	class CFP_MARKER_CZECH_REPUBLIC : CFP_MARKER_ALGERIA
	{
		name = "Czech Republic";
		icon = "\x\cfp\addons\markers\data\europe\marker_czech_republic_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_czech_republic_ca.paa";
	};
	class CFP_MARKER_DENMARK : CFP_MARKER_ALGERIA
	{
		name = "Denmark";
		icon = "\x\cfp\addons\markers\data\europe\marker_denmark_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_denmark_ca.paa";
	};
	class CFP_MARKER_ESTONIA : CFP_MARKER_ALGERIA
	{
		name = "Estonia";
		icon = "\x\cfp\addons\markers\data\europe\marker_estonia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_estonia_ca.paa";
	};
	class CFP_MARKER_FINLAND : CFP_MARKER_ALGERIA
	{
		name = "Finland";
		icon = "\x\cfp\addons\markers\data\europe\marker_finland_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_finland_ca.paa";
	};
	class CFP_MARKER_FRANCE : CFP_MARKER_ALGERIA
	{
		name = "France";
		icon = "\x\cfp\addons\markers\data\europe\marker_france_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_france_ca.paa";
	};
	class CFP_MARKER_GERMANY : CFP_MARKER_ALGERIA
	{
		name = "Germany";
		icon = "\x\cfp\addons\markers\data\europe\marker_germany_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_germany_ca.paa";
	};
	class CFP_MARKER_GREECE : CFP_MARKER_ALGERIA
	{
		name = "Greece";
		icon = "\x\cfp\addons\markers\data\europe\marker_greece_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_greece_ca.paa";
	};
	class CFP_MARKER_HUNGARY : CFP_MARKER_ALGERIA
	{
		name = "Hungary";
		icon = "\x\cfp\addons\markers\data\europe\marker_hungary_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_hungary_ca.paa";
	};
	class CFP_MARKER_ICELAND : CFP_MARKER_ALGERIA
	{
		name = "Iceland";
		icon = "\x\cfp\addons\markers\data\europe\marker_iceland_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_iceland_ca.paa";
	};
	class CFP_MARKER_IRELAND : CFP_MARKER_ALGERIA
	{
		name = "Ireland";
		icon = "\x\cfp\addons\markers\data\europe\marker_ireland_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_ireland_ca.paa";
	};
	class CFP_MARKER_ITALY : CFP_MARKER_ALGERIA
	{
		name = "Italy";
		icon = "\x\cfp\addons\markers\data\europe\marker_italy_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_italy_ca.paa";
	};
	class CFP_MARKER_LATVIA : CFP_MARKER_ALGERIA
	{
		name = "Latvia";
		icon = "\x\cfp\addons\markers\data\europe\marker_latvia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_latvia_ca.paa";
	};
	class CFP_MARKER_LIECHTENSTEIN : CFP_MARKER_ALGERIA
	{
		name = "Liechtenstein";
		icon = "\x\cfp\addons\markers\data\europe\marker_liechtenstein_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_liechtenstein_ca.paa";
	};
	class CFP_MARKER_LITHUANIA : CFP_MARKER_ALGERIA
	{
		name = "Lithuania";
		icon = "\x\cfp\addons\markers\data\europe\marker_lithuania_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_lithuania_ca.paa";
	};
	class CFP_MARKER_LUXEMBOURG : CFP_MARKER_ALGERIA
	{
		name = "Luxembourg";
		icon = "\x\cfp\addons\markers\data\europe\marker_luxembourg_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_luxembourg_ca.paa";
	};
	class CFP_MARKER_MACEDONIA : CFP_MARKER_ALGERIA
	{
		name = "Macedonia";
		icon = "\x\cfp\addons\markers\data\europe\marker_macedonia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_macedonia_ca.paa";
	};
	class CFP_MARKER_MOLDOVA : CFP_MARKER_ALGERIA
	{
		name = "Moldova";
		icon = "\x\cfp\addons\markers\data\europe\marker_moldova_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_moldova_ca.paa";
	};
	class CFP_MARKER_MONACO : CFP_MARKER_ALGERIA
	{
		name = "Monaco";
		icon = "\x\cfp\addons\markers\data\europe\marker_monaco_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_monaco_ca.paa";
	};
	class CFP_MARKER_MONTENEGRO : CFP_MARKER_ALGERIA
	{
		name = "Montenegro";
		icon = "\x\cfp\addons\markers\data\europe\marker_montenegro_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_montenegro_ca.paa";
	};
	class CFP_MARKER_NAGORNO_KARABAKH_REPUBLIC : CFP_MARKER_ALGERIA
	{
		name = "Nagorno-Karabakh Republic";
		icon = "\x\cfp\addons\markers\data\europe\marker_nagorno_karabakh_republic_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_nagorno_karabakh_republic_ca.paa";
	};
	class CFP_MARKER_NETHERLANDS : CFP_MARKER_ALGERIA
	{
		name = "Netherlands";
		icon = "\x\cfp\addons\markers\data\europe\marker_netherlands_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_netherlands_ca.paa";
	};
	class CFP_MARKER_NORWAY : CFP_MARKER_ALGERIA
	{
		name = "Norway";
		icon = "\x\cfp\addons\markers\data\europe\marker_norway_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_norway_ca.paa";
	};
	class CFP_MARKER_POLAND : CFP_MARKER_ALGERIA
	{
		name = "Poland";
		icon = "\x\cfp\addons\markers\data\europe\marker_poland_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_poland_ca.paa";
	};
	class CFP_MARKER_PORTUGAL : CFP_MARKER_ALGERIA
	{
		name = "Portugal";
		icon = "\x\cfp\addons\markers\data\europe\marker_portugal_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_portugal_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_ABKHAZIA : CFP_MARKER_ALGERIA
	{
		name = "Republic of Abkhazia";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_abkhazia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_abkhazia_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_KOSOVO : CFP_MARKER_ALGERIA
	{
		name = "Republic of Kosovo";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_kosovo_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_kosovo_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_MALTA : CFP_MARKER_ALGERIA
	{
		name = "Republic of Malta";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_malta_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_malta_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_SAN_MARINO : CFP_MARKER_ALGERIA
	{
		name = "Republic of San Marino";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_san_marino_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_san_marino_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_SERBIA : CFP_MARKER_ALGERIA
	{
		name = "Republic of Serbia";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_serbia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_serbia_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_SOUTH_OSSETIA : CFP_MARKER_ALGERIA
	{
		name = "Republic of South Ossetia";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_south_ossetia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_south_ossetia_ca.paa";
	};
	class CFP_MARKER_REPUBLIC_TRANSNISTRIA : CFP_MARKER_ALGERIA
	{
		name = "Republic of Transnistria";
		icon = "\x\cfp\addons\markers\data\europe\marker_republic_transnistria_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_republic_transnistria_ca.paa";
	};
	class CFP_MARKER_ROMANIA : CFP_MARKER_ALGERIA
	{
		name = "Romania";
		icon = "\x\cfp\addons\markers\data\europe\marker_romania_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_romania_ca.paa";
	};
	class CFP_MARKER_SLOVAKIA : CFP_MARKER_ALGERIA
	{
		name = "Slovakia";
		icon = "\x\cfp\addons\markers\data\europe\marker_slovakia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_slovakia_ca.paa";
	};
	class CFP_MARKER_SLOVENIA : CFP_MARKER_ALGERIA
	{
		name = "Slovenia";
		icon = "\x\cfp\addons\markers\data\europe\marker_slovenia_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_slovenia_ca.paa";
	};
	class CFP_MARKER_SPAIN : CFP_MARKER_ALGERIA
	{
		name = "Spain";
		icon = "\x\cfp\addons\markers\data\europe\marker_spain_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_spain_ca.paa";
	};
	class CFP_MARKER_SWEDEN : CFP_MARKER_ALGERIA
	{
		name = "Sweden";
		icon = "\x\cfp\addons\markers\data\europe\marker_sweden_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_sweden_ca.paa";
	};
	class CFP_MARKER_SWITZERLAND : CFP_MARKER_ALGERIA
	{
		name = "Switzerland";
		icon = "\x\cfp\addons\markers\data\europe\marker_switzerland_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_switzerland_ca.paa";
	};
	class CFP_MARKER_UKRAINE : CFP_MARKER_ALGERIA
	{
		name = "Ukraine";
		icon = "\x\cfp\addons\markers\data\europe\marker_ukraine_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_ukraine_ca.paa";
	};
	class CFP_MARKER_UNITED_KINGDOM : CFP_MARKER_ALGERIA
	{
		name = "United Kingdom";
		icon = "\x\cfp\addons\markers\data\europe\marker_united_kingdom_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_united_kingdom_ca.paa";
	};
	class CFP_MARKER_VATICAN_CITY : CFP_MARKER_ALGERIA
	{
		name = "Vatican City State";
		icon = "\x\cfp\addons\markers\data\europe\marker_vatican_city_ca.paa";
		texture = "\x\cfp\addons\markers\data\europe\marker_vatican_city_ca.paa";
	};
};
