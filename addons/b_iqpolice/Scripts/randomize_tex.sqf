_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// Offroads *****

	if ((_class == "cfp_b_iqpolice_offroad") or
		(_class == "cfp_b_iqpolice_offroad_M2")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqpolice\data\offroad_ip_03.paa",
			"\x\cfp\addons\b_iqpolice\data\offroad_ip_05.paa"

		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_iqpolice\data\offroad_ip_03.paa",
			"\x\cfp\addons\b_iqpolice\data\offroad_ip_05.paa"
		] select _randomSeed1];
	};

	// HMMWV

	if (_class == "cfp_b_iqpolice_HMMWV_M2") then
	{
		_rnd1 = floor random 11;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_1.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_1f.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_2.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_2f.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_3.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_3f.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_4.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_4f.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_5.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_6.paa",
			"\x\cfp\addons\b_iqpolice\data\hmmwv_body_co_ip_6f.paa"
		] select _randomSeed1];
	};

	// Ural

	if (_class == "cfp_b_iqpolice_Ural")  then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqpolice\data\ural_ia_1.paa",
			"\x\cfp\addons\b_iqpolice\data\ural_ia_2.paa"
		] select _randomSeed1];
	};
};
