_this setVariable ["BIS_enableRandomization", false];

if (isServer) then
{
	_class = typeOf _this;
	
	// Offroads *****
	
	if ((_class == "cfp_b_ip_offroad") or
		(_class == "cfp_b_ip_offroad_M2")) then
	{
		_rnd1 = floor random 2;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
			
		_this setObjectTextureGlobal [0, [	
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_03.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_05.paa"

		] select _randomSeed1];
		_this setObjectTextureGlobal [1, [
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_03.paa",
			"\CFP_Iraq_Syria_v\textures\offroad\offroad_ip_05.paa"
		] select _randomSeed1];
	};

	// HMMWV

	if (_class == "cfp_b_ip_HMMWV_M2") then
	{
		_rnd1 = floor random 11;
		_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];

		waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
		_randomSeed1 = _this getVariable "BIS_randomSeed1";
		
		_this setObjectTextureGlobal [0, [
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_1.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_1f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_2.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_2f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_3.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_3f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_4.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_4f.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_5.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_6.paa",
			"\CFP_Iraq_Syria_v\textures\HMMWV\hmmwv_body_co_ip_6f.paa"
		] select _randomSeed1];
	};
	
	// Ural

	if (_class == "cfp_b_ip_Ural")  then
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
};
