private ["_class","_flag","_veh"];

if (local _this) then
{
	_class = typeOf _this;
	_veh = _this;
	_flag = objNull;

	if ((_class == "CFP_O_HEZBOLLAH_Offroad_flag_01") or
		(_class == "CFP_O_HEZBOLLAH_Offroad_Armed_flag_01")) then
	{
		_flag = "Hezbollah_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [-0.8,-1,0.6]];
		_flag setVectorDirAndUp [[0,16,10],[0,0,300]];
	};

	if (_class == "CFP_O_HEZBOLLAH_T55_flag_01") then
	{
		_flag = "Hezbollah_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [0.07,-4.8,0.5]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};

	if (_class == "CFP_O_HEZBOLLAH_T72_flag_01") then
	{
		_flag = "Hezbollah_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [0.04,-4.77,1]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};

	waitUntil
	{
	sleep 3;
	((isNull _veh) or ((damage _veh) == 1))

	};

	if (isNull _veh) then
	{
		deleteVehicle _flag;
	};

	if ((damage _veh) == 1) then
	{
		sleep 120;
		{
		  detach _x;
		  sleep 1;
		  deleteVehicle _x;
		} forEach attachedObjects _this;
	};

};

