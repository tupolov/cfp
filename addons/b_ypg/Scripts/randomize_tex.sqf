_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;

	// Offroads *****

	if ((_class == "isc_ypg_offroad_b") or
		(_class == "isc_ypg_offroad_M2_b") or
		(_class == "isc_ypg_offroad_e") or
		(_class == "isc_ypg_offroad_M2_e")) then
	{
		_rnd1 = floor random 14;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_1.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_2.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_3.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_4.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_5.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_6.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_7.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_8.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_9.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_10.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_11.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_12.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_tan.paa"

		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_1.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_2.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_3.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_4.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_5.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_6.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_7.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_8.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_9.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_10.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_11.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_camo_12.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_white.paa",
			"\x\cfp\addons\b_ypg\data\offroad_ypg_tan.paa"
		] select _randomSeed1];
	};


};