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
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_01.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_02.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_03.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_04.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_05.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_06.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_07.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_08.paa"

		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_01.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_02.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_03.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_04.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_05.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_06.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_07.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_pesh_08.paa"
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
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_pesh_f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_pesh_f2.paa"
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
			"\CFP_Iraq_Syria_v\textures\Ural\ural_pesh_1.paa",
			"\CFP_Iraq_Syria_v\textures\Ural\ural_pesh_2.paa",
			"\CFP_Iraq_Syria_v\textures\Ural\ural_pesh_3.paa"
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
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_1.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_1d.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_2.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_2d.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_3.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_3d.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_4.paa",
			"\CFP_Iraq_Syria_v\textures\BRDM\brdm_pesh_4d.paa"
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
			"\CFP_Iraq_Syria_v\textures\BTR60\btr60_pesh_f.paa",
			"\CFP_Iraq_Syria_v\textures\BTR60\btr60_pesh_f2.paa"
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
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_pesh_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_trt_pesh_f.paa"
		] select _randomSeed1];
	};
	
	if (_class == "cfp_b_pesh_BMP2") then
	{
		_rnd1 = floor random 1;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_pesh_f.paa"
		] select _randomSeed1];
		
		_this setObjectTextureGlobal [1, "\CFP_Iraq_Syria_v\textures\BMP2\bmp2_pesh_trt.paa"];
	};
	
	// Armor *****
	
	if (_class == "cfp_b_pesh_ZSU") then
	{
		_rnd1 = floor random 1;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\ZSU\zsu_pesh_01_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\ZSU\zsu_Pesh_02_f.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [2, [
			"\CFP_Iraq_Syria_v\textures\ZSU\zsu_Pesh_03_f.paa"
		] select _randomSeed1];
	};

};