_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	//// Ural

	if ((_class == "cfp_o_syarmy_Ural") or
		(_class == "cfp_o_syarmy_Ural_ZU23")) then
	{
		_rnd1 = floor random 3;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\o_syarmy\data\ural_saa_1.paa",
			"\x\cfp\addons\o_syarmy\data\ural_saa_2.paa",
			"\x\cfp\addons\o_syarmy\data\ural_saa_3.paa"
		] select _randomSeed1];
	};

	// BTR40

	if (_class == "cfp_o_syarmy_BTR40_MG") then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\btr40\btr40ext_des.paa"];
	};

	// BTR 60

	if (_class == "cfp_o_syarmy_BTR60") then

	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\o_syarmy\data\btr60_saa_camo_1.paa",
			"\x\cfp\addons\o_syarmy\data\btr60_saa_camo_2.paa",
			"\x\cfp\addons\o_syarmy\data\btr60_saa_camo_3.paa",
			"\x\cfp\addons\o_syarmy\data\btr60_saa_camo_4.paa"
		] select _randomSeed1];
	};

	// BMPs *****

	if ((_class == "cfp_o_syarmy_BMP1") or
		(_class == "cfp_o_syarmy_BMP1P")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\o_syarmy\data\bmp_saa_1.paa",
			"\x\cfp\addons\o_syarmy\data\bmp_saa_camo_1.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\o_syarmy\data\bmp_trt_saa_1.paa",
			"\x\cfp\addons\o_syarmy\data\bmp_trt_saa_camo_1.paa"
		] select _randomSeed1];
	};

	if (_class == "cfp_o_syarmy_BMP2") then
	{
		_rnd1 = floor random 9;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_rnd2 = floor random 3;
		_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_3.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_3.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_3.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_1.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_2.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_3.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_4.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_5.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_saa_camo_6.paa"
		] select _randomSeed1];

		if (_randomSeed1 < 3) then
		{
			_this setObjectTextureGlobal [1, "\x\cfp\addons\o_syarmy\data\bmp2_trt_saa.paa"];
		}
		else
		{
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_1.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_2.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_3.paa"
		] select _randomSeed2];
		};

		if ((_randomSeed1 > 5 ) and
			(_randomSeed1 < 7 )) then
		{
		_rnd3 = floor random 2;
		_this setVariable ["BIS_randomSeed3", _rnd3, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed3"})};
		_randomSeed3 = _this getVariable "BIS_randomSeed3";

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_4_1.paa",
			"\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_4_2.paa"
		] select _randomSeed3];
		};

		if ((_randomSeed1 > 7 ) and
			(_randomSeed1 < 9 )) then
		{
			_this setObjectTextureGlobal [1, "\x\cfp\addons\o_syarmy\data\bmp2_trt_saa_camo_6.paa"];
		};

	};

	// Armor *****

	if (_class == "cfp_o_syarmy_T55") then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\t55\t55_body_desert.paa"];
		_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t55\t55_tower_desert.paa"];
	};

	if (_class == "cfp_o_syarmy_T72") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\t72\t72_tan_1.paa"];

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\vehicles\t72\t72_tan_2.paa",
			"\x\cfp\addons\o_syarmy\data\t72_tan_2_saa.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\t72\t72_tan_3.paa"];
	};


	// Aircraft *****

	if ((_class == "cfp_o_syarmy_L39_AA") or
		(_class == "cfp_o_syarmy_L39_CAS")) then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\o_syarmy\data\saa_buzzard_1.paa"];
		_this setObjectTextureGlobal [1, "\x\cfp\addons\o_syarmy\data\saa_buzzard_2.paa"];
	};

};