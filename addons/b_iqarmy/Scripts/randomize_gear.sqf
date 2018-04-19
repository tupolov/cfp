_this setVariable ["BIS_enableRandomization", false];
sleep 0.5;

//[_this,"insignia_cfp_Iraq"] call BIS_fnc_setUnitInsignia;

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

	if ((_class == "cfp_b_iqarmy_officer") or
		(_class == "cfp_b_iqarmy_grenadier") or
		(_class == "cfp_b_iqarmy_rifleman") or
		(_class == "cfp_b_iqarmy_rifleman_dshkm") or
		(_class == "cfp_b_iqarmy_rifleman_kord") or
		(_class == "cfp_b_iqarmy_rifleman_podnos") or
		(_class == "cfp_b_iqarmy_rifleman_ags30") or
		(_class == "cfp_b_iqarmy_rifleman_metis") or
		(_class == "cfp_b_iqarmy_rifleman_spg9") or
		(_class == "cfp_b_iqarmy_machinegunner") or
		(_class == "cfp_b_iqarmy_sniper") or
		(_class == "cfp_b_iqarmy_at") or
		(_class == "cfp_b_iqarmy_medic") or
		(_class == "cfp_b_iqarmy_sapper") or
		(_class == "cfp_b_iqarmy_crewman")) then
	{
		_rnd1 = floor random 3;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";

		_this setObjectTextureGlobal [0, [
			"\x\cfp\addons\b_iqarmy\data\3_color_desert.paa",
			"\x\cfp\addons\b_iqarmy\data\choc_chip.paa",
			"\x\cfp\addons\b_iqarmy\data\woodland.paa"
		] select _randomSeed1];
	};


	switch _class do
	{
		case "cfp_b_iqarmy_officer":
		{
			_vests = ["V_TacVest_oli","V_TacVest_camo","V_TacVest_camo","V_TacVest_camo","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};

		case "cfp_b_iqarmy_grenadier":
		{
			_vests = ["V_HarnessOGL_gry","V_HarnessOGL_gry","V_HarnessOGL_gry","V_HarnessOGL_brn"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_dshkm":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_kord":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_podnos":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_ags30":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_metis":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_rifleman_spg9":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_machinegunner":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_b_iqarmy_sniper":
		{
			_vests = ["V_BandollierB_rgr","V_BandollierB_blk","V_BandollierB_oli"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_at":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_medic":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_sapper":
		{
			removeBackpack _this;
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_packs = ["b_assaultpack_blk","b_assaultpack_cbr","b_assaultpack_khk","B_OutdoorPack_blk","B_OutdoorPack_tan","B_HuntingBackpack","B_Kitbag_cbr"];
			_count = count _packs;
			_this addBackpack (_packs select floor random _count);
		};
		case "cfp_b_iqarmy_crewman":
		{
			_vests = ["V_TacVest_blk","V_TacVest_oli","V_TacVest_camo","V_TacChestrig_grn_F","V_TacChestrig_cbr_F","V_TacChestrig_oli_F","SP_OpforRig1_Green"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
		};
		case "cfp_b_iqarmy_sf":
		{
			_vests = ["CFP_CarrierRig_Operator_OGA","CFP_CarrierRig_Operator_OGA_OD","CFP_FAPC_Operator_OGA","CFP_FAPC_Operator_OGA_OD"];
			_count = count _vests;
			_this addVest (_vests select floor random _count);
			_this addGoggles "G_Bandanna_blk";
			_this addItemToVest "CUP_NVG_PVS7";
		};
	};
	{_this addMagazine _x} forEach _magazines;
};