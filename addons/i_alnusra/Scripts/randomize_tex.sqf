_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// Offroads *****

	if ((_class == "cfp_i_alNusra_offroad") or
		(_class == "cfp_i_alNusra_offroad_M2")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\offroad_an_01.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_02.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_03.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_04.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\i_alnusra\data\offroad_an_01.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_02.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_03.paa",
			"\x\cfp\addons\i_alnusra\data\offroad_an_04.paa"
		] select _randomSeed1];
	};

	// Land Rovers *****

	if ((_class == "cfp_i_alNusra_LR_M2") or
		(_class == "cfp_i_alNusra_LR_SPG9") or
		(_class == "cfp_i_alNusra_LR_Unarmed")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\lr_an_1.paa",
			"\x\cfp\addons\i_alnusra\data\lr_an_2.paa"
		] select _randomSeed1];
	};

	// UAZs *****

	if ((_class == "cfp_i_alNusra_UAZ_MG") or
		(_class == "cfp_i_alNusra_UAZ_AGS30") or
		(_class == "cfp_i_alNusra_UAZ_SPG9") or
		(_class == "cfp_i_alNusra_UAZ_METIS") or
		(_class == "cfp_i_alNusra_UAZ_Open") or
		(_class == "cfp_i_alNusra_UAZ_Unarmed")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\uaz_an_1.paa",
			"\x\cfp\addons\i_alnusra\data\uaz_an_2.paa",
			"\x\cfp\addons\i_alnusra\data\uaz_an_3.paa",
			"\x\cfp\addons\i_alnusra\data\uaz_an_4.paa"
		] select _randomSeed1];
	};

	// Ural

	if ((_class == "cfp_i_alNusra_Ural") or
		(_class == "cfp_i_alNusra_Ural_ZU23")) then
	{
		_rnd1 = floor random 3;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\ural_an_1.paa",
			"\x\cfp\addons\i_alnusra\data\ural_an_2.paa",
			"\x\cfp\addons\i_alnusra\data\ural_an_3.paa"
		] select _randomSeed1];
	};

	// BMPs *****

	if ((_class == "cfp_i_alNusra_BMP1") or
		(_class == "cfp_i_alNusra_BMP1P")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\bmp_an_1.paa",
			"\x\cfp\addons\i_alnusra\data\bmp_an_2.paa"
		] select _randomSeed1];

		if (_randomSeed1 == 0) then
		{
			_this setObjectTextureGlobal [1, "\x\cfp\addons\i_alnusra\data\bmp_an_1_turret_1.paa"];
		};

		if (_randomSeed1 == 1) then
		{
		_rnd2 = floor random 2;
		_this setVariable ["BIS_randomSeed2", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\i_alnusra\data\bmp_an_2_turret_1.paa",
			"\x\cfp\addons\i_alnusra\data\bmp_an_2_turret_2.paa"
		] select _randomSeed2];

		};

	};


	// Armor *****

	if (_class == "cfp_i_alNusra_T34")  then
	{
		_randomCamo = floor random 100;

		if (_randomCamo <= 50 ) then // Desert Variant
		{
			_this setObjectTextureGlobal [0, "\x\cfp\addons\vehicles\t34\t34_body01_desert.paa"];
			_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t34\t34_body02_desert.paa"];
			_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\t34\t34_turret_desert.paa"];
			_this setObjectTextureGlobal [3, "\x\cfp\addons\vehicles\t34\t34_wheels_desert.paa"];
		};

		if (_randomCamo > 50 ) then // Dirty  "sanded" Variants
		{
			_this setObjectTextureGlobal [2, "\x\cfp\addons\i_alnusra\data\CUP_AN_T34_turret.paa"];
		};
	};

	if (_class == "cfp_i_alNusra_T55") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\t55\t55_body_desert.paa",
			"\x\cfp\addons\i_alnusra\data\t55_body_desert_alnusra.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\vehicles\t55\t55_tower_desert.paa"];
	};

	if (_class == "cfp_i_alNusra_ZSU")  then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\i_alnusra\data\zsu_an_hull_1.paa",
			"\x\cfp\addons\i_alnusra\data\zsu_an_hull_2.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\i_alnusra\data\zsu_an_turret_1.paa",
			"\x\cfp\addons\i_alnusra\data\zsu_an_turret_2.paa"
		] select _randomSeed1];
	};

};