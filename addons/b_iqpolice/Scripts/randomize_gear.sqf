_this setVariable ["BIS_enableRandomization", false];
sleep 0.5;

[_this,"insignia_cfp_IP"] call BIS_fnc_setUnitInsignia;

if ( !isNil { _this getVariable "NoRandom" }  ) exitWith {};

_headgearProbability = getnumber (configFile >> "cfgvehicles" >> typeof _this >> "headgearProbability");
_beardProbability = getnumber (configFile >> "cfgvehicles" >> typeof _this >> "beardProbability");

_headgearRandomize = floor random 100; // Gets a random number.
_beardChance = floor random 100;


_headgear = {};

if (_headgearRandomize <= _headgearProbability) then
{
	_headgear = getarray (configFile >> "cfgvehicles" >> typeof _this >> "allowedheadgear"); // If the random number doesn't exceed headgearProbability, a character gets one of his dominant headgear.
}
else
{
	_headgear = getarray (configFile >> "cfgvehicles" >> typeof _this >> "allowedheadgearB"); // If the random number exceeds headgearProbability, one of the rest of the headgear is used.
}; // Both from above load an array of headgear classes into headgear variable.

_headCount = count _headgear; // Gets the number of headgear in the array.

if (isServer) then
{
	_headSelected = "";

	_rnd1 = random _headCount; // Gets a random number up to the number of headgear in the array. No floor here because it messes up the case with an array containing only one item.
	if (_rnd1 > 0) then
	{
		_headSelected = _headgear select floor _rnd1; // Selects a random headgear from the array.
		_this addHeadgear (_headSelected); // Adds selected headgear to a character.
	}
	else
	{
		_headSelected = "H_FakeHeadgear"; // Occasionally, no headgear is used.
		removeHeadgear _this; //Removes any headgear a character might have had defined in his class.
	};

	_facewear = getarray (configFile >> "cfgvehicles" >> typeof _this >> "allowedfacewear"); // Loads an array of matching facewear defined in allowedFacewear parameter of previously selected headgear.
	_faceCount = count _facewear; // Gets the number of facewear in the array.

	_rnd2 = floor random _faceCount; // Gets a random number up to the number of facewear in the array.

	if (_rnd2 > 0) then
	{
		_this addGoggles (_facewear select _rnd2); // assign a random facewear .
	}
	else
	{
		removeGoggles _this; // Sometimes no facewear
		_beards = [];
		_beard = "";
		if (_headgearRandomize > _headgearProbability) then
		{
			if (_beardChance > _beardProbability) then
			{
				if (isClass (configFile >> "CfgGlasses" >> "SFG_Tac_BeardD")) then
				{
					_beards = ["SFG_Tac_smallBeardD","SFG_Tac_moustacheD"];
					_count = count _beards;
					_beard = (_beards select floor random _count);
					_this addGoggles _beard;
				};
			};
		};
	};
	_magazines = magazines _this;
	removeVest _this;
	_class = typeOf _this;

	_rnd1 = floor random 5;
	_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

	waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
	_randomSeed1 = _this getVariable "BIS_randomSeed1";

	_this setObjectTextureGlobal [0, [
		"\X\CfP\addOns\b_iqpolice\data\IP_digital_flag.paa",
		"\X\CfP\addOns\b_iqpolice\data\IP_digital_flag.paa",
		"\X\CfP\addOns\b_iqpolice\data\IP_digital_flag.paa",
		"\X\CfP\addOns\b_iqpolice\data\IP_digital_flag.paa",
		"\X\CfP\addOns\b_iqpolice\data\IP_dpm_flag.paa"
	] select _randomSeed1];

	switch _class do
	{
		case "cfp_b_iqpolice_officer":
		{
			_vests = ["V_TacVest_oli","V_TacVest_blk","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Black","V_TacVest_camo","SP_OpforRig1_Grey"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};

		case "cfp_b_iqpolice_policeman":
		{
			_vests = ["V_TacVest_oli","V_TacVest_blk","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Black","V_TacVest_camo","SP_OpforRig1_Grey"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
	};
	{_this addMagazine _x} forEach _magazines;
};