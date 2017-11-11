_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;
	
	// HMMWV
	
	if (_class == "cfp_b_ia_HMMWV_M2") then
	{
		_rnd1 = floor random 4;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_1.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_1f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_2.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_2f.paa"
		] select _randomSeed1];
	};
	
	if ((_class == "cfp_b_ia_hmmwv_dshkm") or
		(_class == "cfp_b_ia_hmmwv_m2_gpk")) then
	{
		//_this setObjectTextureGlobal [5, "\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_details_IA.paa"];	
	};
	
	
	// Ural
	
	if ((_class == "cfp_b_ia_Ural") or
		(_class == "cfp_b_ia_Ural_ZU23")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\Ural\ural_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\Ural\ural_ia_2.paa"
		] select _randomSeed1];
	};
	
	// BTR 60
	
	if (_class == "cfp_b_ia_BTR60") then
	
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\BTR60\btr60_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\BTR60\btr60_ia_2.paa"
		] select _randomSeed1];
	};
	
	// BMPs *****
	
	if ((_class == "cfp_b_ia_BMP1") or
		(_class == "cfp_b_ia_BMP1P")) then
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
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_body_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_body_ia_2.paa",
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_body_ia_3.paa",
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_body_ia_4.paa"
		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_turret_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\BMP\bmp_turret_ia_2.paa"
		] select _randomSeed2];
	};
		
	if (_class == "cfp_b_ia_BMP2") then
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
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_body_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_body_ia_2.paa",
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_body_ia_3.paa",
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_body_ia_4.paa"
		] select _randomSeed1];
		
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_turret_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\BMP2\bmp2_turret_ia_2.paa"
		] select _randomSeed2];

	};

	// Armor *****
	
	if (_class == "cfp_b_ia_T55") then
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
			"\CFP_Iraq_Syria_v\textures\T55\t55_body_ia_1.paa",
			"\CFP_Iraq_Syria_v\textures\T55\t55_body_ia_2.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\T55\t55_tower_ia.paa"
		] select _randomSeed2];
	};
	
	if (_class == "cfp_b_ia_T72") then
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
				"\CFP_Iraq_Syria_v\textures\T72\t72_tan_1.paa",
				"\CFP_Iraq_Syria_v\textures\T72\t72_1_ia.paa"
			] select _randomSeed1];
			
			_this setObjectTextureGlobal [1, [
				"\CFP_Iraq_Syria_v\textures\T72\t72_tan_2.paa",
				"\CFP_Iraq_Syria_v\textures\T72\t72_2_ia.paa"
			] select _randomSeed2];
		
			_this setObjectTextureGlobal [2, "\CFP_Iraq_Syria_v\textures\T72\t72_tan_3.paa"];	
		};

		if (_randomCamo > 50 ) then // Camo variants
		{
			_rnd1 = floor random 2;
			_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

			waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
			_randomSeed1 = _this getVariable "BIS_randomSeed1";
			
			_this setObjectTextureGlobal [0, [
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_1_c.paa",
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_1_d.paa"
			] select _randomSeed1];

			_this setObjectTextureGlobal [1, [
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_2_c.paa",
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_2_d.paa"
			] select _randomSeed1];
			
			_this setObjectTextureGlobal [2, [
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_3_c.paa",
				"\CFP_Iraq_Syria_v\textures\T72\cup_ia_t72_3_d.paa"
			] select _randomSeed1];
		
		};
	};
	
	if (_class == "cfp_b_ia_M1A1") then
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
			"\CFP_Iraq_Syria_v\textures\M1A1\m1abrams_body_ia_01.paa",
			"\CFP_Iraq_Syria_v\textures\M1A1\m1abrams_body_ia_02.paa"
		] select _randomSeed1];

		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\M1A1\m1abrams_turret_ia_01.paa",
			"\CFP_Iraq_Syria_v\textures\M1A1\m1abrams_turret_ia_02.paa",
			"\CFP_Iraq_Syria_v\textures\M1A1\m1abrams_turret_ia_03.paa"
		] select _randomSeed2];
	};
	
	
	// Aircraft
	
	if ((_class == "cfp_b_ia_MI24V") or
		(_class == "cfp_b_ia_MI24P")) then
	{
		_this setObjectTextureGlobal [0, "\CFP_Iraq_Syria_v\textures\MI24\mi24p_ia_01.paa"];
		
		_this setObjectTextureGlobal [1, "\CFP_Iraq_Syria_v\textures\MI24\mi24p_ia_02.paa"];
	};
	

};