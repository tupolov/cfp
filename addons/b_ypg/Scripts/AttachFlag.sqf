private ["_class","_flag","_veh"];

if (local _this) then 
{
	_class = typeOf _this;
	_veh = _this;
	_flag = objNull;
	
	if ((_class == "isc_ypg_offroad_flag_b") or
		(_class == "isc_ypg_offroad_M2_flag_b")) then
	{
		_flag = "YPG_Flag" createVehicle (position _this);
		_flag attachto [_this, [-0.8,-1,0.6]];
		_flag setVectorDirAndUp [[0,16,10],[0,0,300]];
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

