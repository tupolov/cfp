_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// Offroads *****

	if ((_class == "cfp_b_pesh_offroad") or
		(_class == "cfp_b_pesh_offroad_M2")) then
	{
		_rnd1 = floor random 8;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_03.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_04.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_05.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_06.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_07.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_08.paa"

		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_pesh\data\offroad_pesh_01.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_02.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_03.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_04.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_05.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_06.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_07.paa",
			"\x\cfp\addons\b_pesh\data\offroad_pesh_08.paa"
		] select _randomSeed1];
	};

	// HMMWV

	if (_class == "cfp_b_pesh_HMMWV_M2") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\hmmwv_body_pesh_f.paa",
			"\x\cfp\addons\b_pesh\data\hmmwv_body_pesh_f2.paa"
		] select _randomSeed1];
	};

	// Ural

	if ((_class == "cfp_b_pesh_Ural") or
		(_class == "cfp_b_pesh_Ural_ZU23")) then
	{
		_rnd1 = floor random 3;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\ural_pesh_1.paa",
			"\x\cfp\addons\b_pesh\data\ural_pesh_2.paa",
			"\x\cfp\addons\b_pesh\data\ural_pesh_3.paa"
		] select _randomSeed1];
	};

	// BRDM

	if (_class == "cfp_b_pesh_BRDM") then
	{
		_rnd1 = floor random 8;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\brdm_pesh_1.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_1d.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_2.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_2d.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_3.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_3d.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_4.paa",
			"\x\cfp\addons\b_pesh\data\brdm_pesh_4d.paa"
		] select _randomSeed1];
	};

	// BTR 60

	if (_class == "cfp_b_pesh_BTR60") then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\btr60_pesh_f.paa",
			"\x\cfp\addons\b_pesh\data\btr60_pesh_f2.paa"
		] select _randomSeed1];
	};

	// BMPs

	if (_class == "cfp_b_pesh_BMP1") then
	{
		_rnd1 = floor random 1;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\bmp_pesh_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_pesh\data\bmp_trt_pesh_f.paa"
		] select _randomSeed1];
	};

	if (_class == "cfp_b_pesh_BMP2") then
	{
		_rnd1 = floor random 1;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\bmp2_pesh_f.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, "\x\cfp\addons\b_pesh\data\bmp2_pesh_trt.paa"];
	};

	// Armor *****

	if (_class == "cfp_b_pesh_ZSU") then
	{
		_rnd1 = floor random 1;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_pesh\data\zsu_pesh_01_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_pesh\data\zsu_Pesh_02_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [2, [
			"\x\cfp\addons\b_pesh\data\zsu_Pesh_03_f.paa"
		] select _randomSeed1];
	};

};