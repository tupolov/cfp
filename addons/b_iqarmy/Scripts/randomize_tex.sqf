_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// HMMWV

	if (_class == "cfp_b_iqarmy_HMMWV_M2") then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\vehicles\HMMWV\hmmwv_body_co_1.paa",
			"\x\cfp\addons\vehicles\HMMWV\hmmwv_body_co_1f.paa",
			"\x\cfp\addons\vehicles\HMMWV\hmmwv_body_co_2.paa",
			"\x\cfp\addons\vehicles\HMMWV\hmmwv_body_co_2f.paa"
		] select _randomSeed1];
	};

	if ((_class == "cfp_b_iqarmy_hmmwv_dshkm") or
		(_class == "cfp_b_iqarmy_hmmwv_m2_gpk")) then
	{
		//_this setObjectTextureGlobal [5, "\x\cfp\addons\b_iqarmy\data\hmmwv_details_IA.paa"];
	};


	// Ural

	if ((_class == "cfp_b_iqarmy_Ural") or
		(_class == "cfp_b_iqarmy_Ural_ZU23")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\ural_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\ural_ia_2.paa"
		] select _randomSeed1];
	};

	// BTR 60

	if (_class == "cfp_b_iqarmy_BTR60") then

	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\btr60_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\btr60_ia_2.paa"
		] select _randomSeed1];
	};

	// BMPs *****

	if ((_class == "cfp_b_iqarmy_BMP1") or
		(_class == "cfp_b_iqarmy_BMP1P")) then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_rnd2 = floor random 2;
		_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\bmp_body_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp_body_ia_2.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp_body_ia_3.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp_body_ia_4.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_iqarmy\data\bmp_turret_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp_turret_ia_2.paa"
		] select _randomSeed2];
	};

	if (_class == "cfp_b_iqarmy_BMP2") then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_rnd2 = floor random 2;
		_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\bmp2_body_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp2_body_ia_2.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp2_body_ia_3.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp2_body_ia_4.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_iqarmy\data\bmp2_turret_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\bmp2_turret_ia_2.paa"
		] select _randomSeed2];

	};

	// Armor *****

	if (_class == "cfp_b_iqarmy_T55") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_rnd2 = floor random 1;
		_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\t55_body_ia_1.paa",
			"\x\cfp\addons\b_iqarmy\data\t55_body_ia_2.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_iqarmy\data\t55_tower_ia.paa"
		] select _randomSeed2];
	};

	if (_class == "cfp_b_iqarmy_T72") then
	{
		_randomCamo = floor random 100;

		if (_randomCamo <= 50 ) then // Tan no logo variants
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
				"\x\cfp\addons\vehicles\T72\t72_tan_1.paa",
				"\x\cfp\addons\b_iqarmy\data\t72_1_ia.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [1, [
				"\x\cfp\addons\vehicles\T72\t72_tan_2.paa",
				"\x\cfp\addons\b_iqarmy\data\t72_2_ia.paa"
			] select _randomSeed2];

			_this setObjectTextureGlobal [2, "\x\cfp\addons\vehicles\T72\t72_tan_3.paa"];
		};

		if (_randomCamo > 50 ) then // Camo variants
		{
			_rnd1 = floor random 2;
			_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
			_randomSeed1 = _this getVariable "BIS_randomSeed1";

			_this setObjectTextureGlobal [0, [
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_1_c.paa",
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_1_d.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [1, [
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_2_c.paa",
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_2_d.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [2, [
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_3_c.paa",
				"\x\cfp\addons\b_iqarmy\data\cup_ia_t72_3_d.paa"
			] select _randomSeed1];

		};
	};

	if (_class == "cfp_b_iqarmy_M1A1") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_rnd2 = floor random 3;
		_this setVariable ["BIS_randomSeed2", _rnd2, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed2"})};
		_randomSeed2 = _this getVariable "BIS_randomSeed2";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\m1abrams_body_ia_01.paa",
			"\x\cfp\addons\b_iqarmy\data\m1abrams_body_ia_02.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_iqarmy\data\m1abrams_turret_ia_01.paa",
			"\x\cfp\addons\b_iqarmy\data\m1abrams_turret_ia_02.paa",
			"\x\cfp\addons\b_iqarmy\data\m1abrams_turret_ia_03.paa"
		] select _randomSeed2];
	};


	// Aircraft

	if ((_class == "cfp_b_iqarmy_MI24V") or
		(_class == "cfp_b_iqarmy_MI24P")) then
	{
		_this setObjectTextureGlobal [0, "\x\cfp\addons\b_iqarmy\data\mi24p_ia_01.paa"];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\b_iqarmy\data\mi24p_ia_02.paa"];
	};


};