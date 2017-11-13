_this setVariable ["BIS_enableRandomization", false];
sleep 0.5;


// Set Custom language
[_this, "Male01_ackbar"] remoteExecCall ["setSpeaker", 0];

if ( !isNil { _this getVariable "NoRandom" }  ) exitWith {};

_headgearProbability = getnumber (configFile >> "cfgvehicles" >> typeof _this >> "headgearProbability"); // Gets the number from headgearProbability parameter in a character class.

_headgearRandomize = floor random 100; // Gets a random number.

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
		_headSelected = _headgear call BIS_fnc_selectRandom; // Selects a random headgear from the array.
		_this addHeadgear (_headSelected); // Adds selected headgear to a character.
	}
	else
	{
		_headSelected = "H_FakeHeadgear"; // Occasionally, no headgear is used.
		removeHeadgear _this; //Removes any headgear a character might have had defined in his class.

	};

	_facewear = getarray (configFile >> "cfgvehicles" >> typeof _this >> "allowedfacewear");

	//_facewear = getarray (configFile >> "cfgweapons" >> _headSelected >> "allowedfacewear"); // Loads an array of matching facewear defined in allowedFacewear parameter of previously selected headgear.
	_faceCount = 0;
	_faceCount = count _facewear; // Gets the number of facewear in the array.
	_rnd2 = floor random _faceCount; // Gets a random number up to the number of facewear in the array.

	if ((_rnd2 > 0) and (_faceCount > 0))then
	{
		_gogglesToAdd = _facewear call BIS_fnc_selectRandom;
		_this addGoggles (_gogglesToAdd ); // assign a random facewear .
	}
	else
	{
		removeGoggles _this; // Sometimes no facewear
		_beards = [];
		_beard = "";
		if (_headgearRandomize > _headgearProbability) then
		{
			if (isClass (configFile >> "CfgGlasses" >> "SFG_Tac_BeardD")) then
			{
				_beards = ["SFG_Tac_BeardD","SFG_Tac_smallBeardD"];
				_count = count _beards;
				_beard = (_beards select floor random _count);
				_this addGoggles _beard;
			};
		}
		else
		{
			// small chance for balacava
			_balacavaChance = floor random 100;
			if (_balacavaChance > 50) then
			{
				removeHeadgear _this;
				_balacavaType = floor random 100;
				if (_balacavaType <= 33) then
				{
					_this addGoggles "IS_Balaclava";
				};
				if ((_balacavaType > 33) and (_balacavaType <= 66)) then
				{
					_this addGoggles "IS_Balaclava_logo1";
				};
				if (_balacavaType > 66) then
				{
					_this addGoggles "IS_Balaclava_logo2";
				};
			};
		};
	};

	_magazines = magazines _this;
	removeVest _this;
	_class = typeOf _this;

	if ((_class == "cfp_i_is_team_leader") or
		(_class == "cfp_i_is_squad_leader") or
		(_class == "cfp_i_is_rifleman") or
		(_class == "cfp_i_is_rifleman_dshkm") or
		(_class == "cfp_i_is_rifleman_kord") or
		(_class == "cfp_i_is_rifleman_podnos") or
		(_class == "cfp_i_is_rifleman_ags30") or
		(_class == "cfp_i_is_rifleman_metis") or
		(_class == "cfp_i_is_rifleman_spg9") or
		(_class == "cfp_i_is_grenadier") or
		(_class == "cfp_i_is_autorifleman") or
		(_class == "cfp_i_is_machinegunner") or
		(_class == "cfp_i_is_sniper") or
		(_class == "cfp_i_is_at") or
		(_class == "cfp_i_is_medic") or
		(_class == "cfp_i_is_sapper") or
		(_class == "cfp_i_is_crewman") or
		(_class == "cfp_o_is_team_leader") or
		(_class == "cfp_o_is_squad_leader") or
		(_class == "cfp_o_is_rifleman") or
		(_class == "cfp_o_is_rifleman_dshkm") or
		(_class == "cfp_o_is_rifleman_kord") or
		(_class == "cfp_o_is_rifleman_podnos") or
		(_class == "cfp_o_is_rifleman_ags30") or
		(_class == "cfp_o_is_rifleman_metis") or
		(_class == "cfp_o_is_rifleman_spg9") or
		(_class == "cfp_o_is_grenadier") or
		(_class == "cfp_o_is_autorifleman") or
		(_class == "cfp_o_is_machinegunner") or
		(_class == "cfp_o_is_sniper") or
		(_class == "cfp_o_is_at") or
		(_class == "cfp_o_is_medic") or
		(_class == "cfp_o_is_sapper") or
		(_class == "cfp_o_is_crewman")
		) then
	{
		_this forceAddUniform "IS_uniform_o";
		_insigniaChance = floor random 100;
		if (_insigniaChance <= 50) then
		{
			[_this,"insignia_cfp_IS"] call BIS_fnc_setUnitInsignia;
		};
		_rnd1 = floor random 196;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\o_is\data\IS_3_color_des.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_3_color_des_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_acu.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_acu_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_black.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_black_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_choc_chip.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_choc_chip_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_digital_multicam.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_digital_multicam_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_dpm.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_dpm_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_desert_flectarn.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_desert_flectarn_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_marpat_d.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_d_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_marpat_w.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_marpat_w_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_multicam.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_multicam_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_pixelated_desert.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_pixelated_desert_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_woodland.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_woodland2_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_woodland2.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_woodland2_s_tan_p.paa",

			"\x\cfp\addons\o_is\data\IS_tan.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_3_color_des_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_acu_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_black_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_choc_chip_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_digital_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_dpm_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_desert_flectarn_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_marpat_d_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_marpat_w_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_multicam_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_pixelated_desert_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_woodland_p.paa",
			"\x\cfp\addons\o_is\data\IS_tan_s_woodland2_p.paa"

			] select _randomSeed1];


	};

	if ((_class == "cfp_i_is_militaman") or
		(_class == "cfp_i_is_irregular") or
	    (_class == "cfp_o_is_militaman") or
		(_class == "cfp_o_is_irregular")
		) then
	{
		_uniformChance = floor random 100;
		if (_uniformChance <= 33) then
		{
			removeUniform _this;
			_this forceAddUniform "U_I_C_Soldier_Para_5_F";
		};
		if ((_uniformChance > 33) and (_uniformChance <= 66)) then
		{
			removeUniform _this;
			_this forceAddUniform "U_I_C_Soldier_Bandit_3_F";
		};

		if (_uniformChance > 66) then
		{
			removeUniform _this;
			_this forceAddUniform "U_BG_Guerilla2_1";
		};

	};


	switch _class do
	{
		// Independent units

		case "cfp_i_is_team_leader":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_squad_leader":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_grenadier":
		{
			_vests = ["V_HarnessOGL_gry","V_HarnessOGL_brn"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_dshkm":
		{
			__vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_kord":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_podnos":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_ags30":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_metis":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_rifleman_spg9":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_militaman":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_irregular":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_autorifleman":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_dgtl","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_i_is_machinegunner":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_i_is_sniper":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_at":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_medic":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_i_is_sapper":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_i_is_crewman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};

		// Opfor units

		case "cfp_o_is_team_leader":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_squad_leader":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_grenadier":
		{
			_vests = ["V_HarnessOGL_gry","V_HarnessOGL_brn"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_dshkm":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_kord":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_podnos":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_ags30":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_metis":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_rifleman_spg9":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_militaman":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_irregular":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_autorifleman":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_dgtl","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_o_is_machinegunner":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_o_is_sniper":
		{
			_vests = ["V_BandollierB_khk","V_BandollierB_cbr","V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_at":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_medic":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_o_is_sapper":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_o_is_crewman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_khk","V_TacVest_brn","V_TacVest_oli","V_TacVest_camo","SP_OpforRig1_Black","SP_OpforRig1_Green","SP_OpforRig1_Tan","SP_OpforRig1_Grey","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","CUP_V_B_GER_Carrier_Rig_2_Brown","CUP_V_I_RACS_Carrier_Rig_2","CUP_V_I_RACS_Carrier_Rig_wdl_2","CUP_V_RUS_Smersh_1","CUP_V_O_Ins_Carrier_Rig_Light","CUP_V_I_Carrier_Belt","CUP_V_O_Ins_Carrier_Rig"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
	};
	{_this addMagazine _x} forEach _magazines;
};