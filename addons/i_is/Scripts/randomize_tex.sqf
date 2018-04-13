_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// Offroads *****

	if ((_class == "cfp_i_is_offroad") or
		(_class == "cfp_i_is_offroad_M2") or
		(_class == "cfp_i_is_offroad_AT") or
		(_class == "cfp_i_is_offroad_flag") or
		(_class == "cfp_i_is_offroad_M2_flag")) then
	{
		_rnd1 = floor random 13;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\offroad\offroad_muddy.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04_dirty_2.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\vehicles\offroad\offroad_muddy.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_01_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_02_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_03_dirty_2.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04_dirty_1.paa",
			"\x\cfp\addons\vehicles\offroad\offroad_isis_04_dirty_2.paa"
		] select _randomSeed1];
	};
	
	if ((_class == "cfp_i_is_jeep_lmg") or
		(_class == "cfp_i_is_jeep_at")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa",
			"\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa"
		] select _randomSeed1];
		
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa",
			"\x\cfp\addons\vehicles\Jeep\offroad_02_ext_muddy.paa"
		] select _randomSeed1];
		
		_this setObjectTextureGlobal [2, [
			"\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa",
			"\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa"
		] select _randomSeed1];
		
		_this setObjectTextureGlobal [3, [
			"\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa",
			"\x\cfp\addons\vehicles\Jeep\offroad_02_int_muddy.paa"
		] select _randomSeed1];
	};

	// Datsun pickup

	if ((_class == "cfp_i_is_pickup_PK") or
		(_class == "cfp_i_is_pickup_PK") or
		(_class == "cfp_i_is_pickup_PK_flag") or
		(_class == "cfp_i_is_pickup_PK_flag")) then
	{
		_rnd1 = floor random 40;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_1_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_1_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_1_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_1_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_2_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_2_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_2_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_2_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_3_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_3_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_3_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_3_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_4_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_4_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_4_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_4_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_5_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_5_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_5_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_5_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_6_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_6_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_6_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_6_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_7_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_7_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_7_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_7_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_8_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_8_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_8_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_8_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_9_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_9_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_9_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_9_d_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_10_c_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_10_c_2.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_10_d_1.paa",
			"\x\cfp\addons\vehicles\datsun\cup_is_datsun_10_d_2.paa"
		] select _randomSeed1];
	};

	// Land Rovers *****

	if ((_class == "cfp_i_is_LR_M2") or
		(_class == "cfp_i_is_LR_SPG9") or
		(_class == "cfp_i_is_LR_Unarmed") or
		(_class == "cfp_i_is_LR_M2") or
		(_class == "cfp_i_is_LR_SPG9") or
		(_class == "cfp_i_is_LR_Unarmed")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\landrover\lr_base_baf_1.paa",
			"\x\cfp\addons\vehicles\landrover\lr_base_baf_2.paa"
		] select _randomSeed1];
	};

	// UAZs *****

	if ((_class == "cfp_i_is_UAZ_MG") or
		(_class == "cfp_i_is_UAZ_AGS30") or
		(_class == "cfp_i_is_UAZ_SPG9") or
		(_class == "cfp_i_is_UAZ_METIS") or
		(_class == "cfp_i_is_UAZ_Unarmed") or
		(_class == "cfp_i_is_UAZ_Open") or
		(_class == "cfp_i_is_UAZ_MG") or
		(_class == "cfp_i_is_UAZ_AGS30") or
		(_class == "cfp_i_is_UAZ_SPG9") or
		(_class == "cfp_i_is_UAZ_METIS") or
		(_class == "cfp_i_is_UAZ_Unarmed") or
		(_class == "cfp_i_is_UAZ_Open")) then
	{
		_rnd1 = floor random 8;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\uaz\uaz_main_1.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_2.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_3.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_4.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_is_1.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_is_2.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_is_3.paa",
			"\x\cfp\addons\vehicles\uaz\uaz_main_is_4.paa"
		] select _randomSeed1];
	};

	// Ural

	if ((_class == "cfp_i_is_Ural") or
		(_class == "cfp_i_is_Ural_ZU23") or
		(_class == "cfp_i_is_Ural") or
		(_class == "cfp_i_is_Ural_ZU23")) then
	{
		_rnd1 = floor random 8;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\ural\ural_is_1.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_2.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_3.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_4.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_5.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_6.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_7.paa",
			"\x\cfp\addons\vehicles\ural\ural_is_8.paa"
		] select _randomSeed1];
	};

	// CUP M113

	if ((_class == "cfp_i_is_M113") or
		(_class == "cfp_i_is_M113_flag") or
		(_class == "cfp_i_is_M113") or
		(_class == "cfp_i_is_M113_flag")) then
	{
		_rnd1 = floor random 7;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_1.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_2.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_3.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_4.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_5.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_6.paa",
			"\x\cfp\addons\vehicles\m113a3\m113a3_01_is_7.paa"
		] select _randomSeed1];
	};

	// BTR40

	if ((_class == "cfp_i_is_BTR40_MG") or
		(_class == "cfp_i_is_BTR40_MG_flag") or
		(_class == "cfp_i_is_BTR40_MG") or
		(_class == "cfp_i_is_BTR40_MG_flag")) then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\btr40\btr40ext_des.paa"];
	};

	// BMPs *****

	if ((_class == "cfp_i_is_BMP1") or
		(_class == "cfp_i_is_BMP1_flag") or
		(_class == "cfp_i_is_BMP1P") or
		(_class == "cfp_i_is_BMP1P_flag") or
		(_class == "cfp_i_is_BMP1") or
		(_class == "cfp_i_is_BMP1_flag") or
		(_class == "cfp_i_is_BMP1P") or
		(_class == "cfp_i_is_BMP1P_flag")) then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\bmp\bmp_tan_hull.paa"];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\bmp\bmp_tan_trt.paa"];
	};

	if ((_class == "cfp_i_is_BMP2") or
		(_class == "cfp_i_is_BMP2")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\bmp2\bmp2_desert_hull_base.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_1.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_2.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_3.paa"
		] select _randomSeed1];
	};

	if ((_class == "cfp_i_is_BMP2_ZU") or
		(_class == "cfp_i_is_BMP2_ZU")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\bmp2\bmp2_desert_hull_base.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_1.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_2.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_3.paa"
		] select _randomSeed1];
	};

	if ((_class == "cfp_i_is_BMP2_PKM") or
		(_class == "cfp_i_is_BMP2_PKM_flag") or
		(_class == "cfp_i_is_BMP2_PKM") or
		(_class == "cfp_i_is_BMP2_PKM_flag")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\bmp2\bmp2_desert_hull_base.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_1.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_2.paa",
			"\x\cfp\addons\vehicles\bmp2\bmp2_is_desert_hull_3.paa"
		] select _randomSeed1];



	};


	// Armor *****

	if ((_class == "cfp_i_is_T34") or
		(_class == "cfp_i_is_T34_flag") or
		(_class == "cfp_i_is_T34") or
		(_class == "cfp_i_is_T34_flag"))	then
	{
		_randomCamo = floor random 100;

		if (_randomCamo <= 25 ) then // Clean Variants
		{
			_rnd1 = floor random 2;
			_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
			_randomSeed1 = _this getVariable "BIS_randomSeed1";

			_this setObjectTextureGlobal [0, [
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_C_1.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_C_2.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\T34\CUP_IS_T34_3_C.paa"];

		};

		if ((_randomCamo > 25 ) and (_randomCamo <= 50 )) then // Dirty "tan" Variants
		{
			_rnd1 = floor random 3;
			_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
			_randomSeed1 = _this getVariable "BIS_randomSeed1";

			_rnd2 = floor random 2;
			_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
			_randomSeed2 = _this getVariable "BIS_randomSeed2";

			_this setObjectTextureGlobal [0, [
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_D_1.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_D_2.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_D_3.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\T34\CUP_IS_T34_2_D.paa"];

			_this setObjectTextureGlobal [2, [
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_3_D.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_3_D_2.paa"
			] select _randomSeed2];

			_this setObjectTextureGlobal [3, "\x\cfp\addons\vehicles\t34\CUP_T34_wheels_tan2.paa"];

		};

		if ((_randomCamo > 50 ) and (_randomCamo <= 75 )) then // Desert Variant
		{
			_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\t34\t34_body01_desert.paa"];
			_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t34\t34_body02_desert.paa"];
			_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\t34\t34_turret_desert.paa"];
			_this setObjectTextureGlobal [3, "\x\cfp\addons\vehicles\t34\t34_wheels_desert.paa"];
		};

		if (_randomCamo > 75 ) then // Dirty  "sanded" Variants
		{
			_rnd1 = floor random 2;
			_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
			_randomSeed1 = _this getVariable "BIS_randomSeed1";

			_rnd2 = floor random 2;
			_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
			_randomSeed2 = _this getVariable "BIS_randomSeed2";

			_this setObjectTextureGlobal [0, [

				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_D_4.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_1_D_5.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\T34\CUP_IS_T34_2_D.paa"];

			_this setObjectTextureGlobal [2, [
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_3_D.paa",
				"\x\cfp\addons\vehicles\T34\CUP_IS_T34_3_D_2.paa"
			] select _randomSeed2];

			_this setObjectTextureGlobal [3, "\x\cfp\addons\vehicles\t34\CUP_T34_wheels_tan2.paa"];

		};

	};

	if ((_class == "cfp_i_is_T55") or
		(_class == "cfp_i_is_T55_flag") or
		(_class == "cfp_i_is_T55") or
		(_class == "cfp_i_is_T55_flag")) then
	{

		_rnd1 = floor random 3;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\t55\t55_body_desert.paa",
			"\x\cfp\addons\vehicles\t55\t55_body_desert_is_1.paa",
			"\x\cfp\addons\vehicles\t55\t55_body_desert_is_2.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t55\t55_tower_desert.paa"];

	};

	if ((_class == "cfp_i_is_T72") or
		(_class == "cfp_i_is_T72_flag") or
		(_class == "cfp_i_is_T72") or
		(_class == "cfp_i_is_T72_flag")) then
	{
		//_rnd1 = floor random 2;
		//_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		//waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		//_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\t72\t72_tan_1.paa"];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t72\t72_tan_2.paa"];

		_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\t72\t72_tan_3.paa"];
	};

	if ((_class == "cfp_i_is_ZSU") or
		(_class == "cfp_i_is_ZSU"))	then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\zsu\ZSU_Tan_1_1.paa",
			"\x\cfp\addons\vehicles\zsu\ZSU_Tan_3_1.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\vehicles\zsu\ZSU_Tan_1_2.paa",
			"\x\cfp\addons\vehicles\zsu\ZSU_Tan_3_2.paa"
		] select _randomSeed1];
	};



};