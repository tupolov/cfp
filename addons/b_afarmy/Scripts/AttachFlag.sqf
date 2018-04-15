private ["_class","_flag","_veh"];

if (local _this) then
{
	_class = typeOf _this;
	_veh = _this;
	_flag = objNull;

	if ((_class == "CFP_B_AFARMY_M113_01_flag") or
		(_class == "CFP_B_AFARMY_M113_Ambulance_01_flag")) then
	{
		_flag = "AFghan_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [-0.55,-2.35,0.6]];
		_flag setVectorDirAndUp [[0,16,10],[0,0,300]];
	};
	
	if  (_class == "CFP_B_AFARMY_HMMWV_flag_01") then
	{
		_flag = "AFghan_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [-0.76,-2,0.3]];
		_flag setVectorDirAndUp [[-0,1,0],[0,0,1]];
		[_flag, 0, 0] call BIS_fnc_setPitchBank;
	};
	
	if  (_class == "CFP_B_AFARMY_HMMWV_DShKM_flag_01") then
	{
		_flag = "AFghan_Flag_1" createVehicle (position _this);
		_flag attachto [_this, [-0.76,-1.9,0.3]];
		_flag setVectorDirAndUp [[-0,1,0],[0,0,1]];
		[_flag, 0, 0] call BIS_fnc_setPitchBank;
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

