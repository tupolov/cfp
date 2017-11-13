if (local _this) then
{
	sleep 120;
	{
	  detach _x; 
	  sleep 1;
	  deleteVehicle _x;
	} forEach attachedObjects _this;
};