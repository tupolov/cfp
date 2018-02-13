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

	if ((_class == "cfp_o_is_BMP1_flag") or
		(_class == "cfp_o_is_BMP1_flag") or
		(_class == "cfp_o_is_BMP1P_flag") or
		(_class == "cfp_o_is_BMP1P_flag")) then
	{
		_flag = ["IS_Flag_1","IS_Flag_2","IS_Flag_3"] select floor random 3 createVehicle (position _this);
		_flag attachto [_this, [1,-3.55,1.1]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};

	if ((_class == "cfp_o_is_BMP2_PKM_flag") or
		(_class == "cfp_o_is_BMP2_PKM_flag")) then
	{
		_flag = ["IS_Flag_1","IS_Flag_2","IS_Flag_3"] select floor random 3 createVehicle (position _this);
		_flag attachto [_this, [0,-2.4,-2.5]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};


	if ((_class == "cfp_o_is_T34_flag") or
		(_class == "cfp_o_is_T34_flag")) then
	{
		_flag = ["IS_Flag_1","IS_Flag_2","IS_Flag_3"] select floor random 3 createVehicle (position _this);
		_flag attachto [_this, [0.1,-2.95,0.7]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};

	if ((_class == "cfp_o_is_T55_flag") or
		(_class == "cfp_o_is_T55_flag")) then
	{
		_flag = ["IS_Flag_1","IS_Flag_2","IS_Flag_3"] select floor random 3 createVehicle (position _this);
		_flag attachto [_this, [0.07,-4.8,0.5]];
		_flag setVectorDirAndUp [[0,25,15],[0,0,300]];
	};

	if ((_class == "cfp_o_is_T72_flag") or
		(_class == "cfp_o_is_T72_flag")) then
	{
		_flag = ["IS_Flag_1","IS_Flag_2","IS_Flag_3"] select floor random 3 createVehicle (position _this);
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

