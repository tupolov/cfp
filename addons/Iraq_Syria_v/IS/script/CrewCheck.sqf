_crewArray = crew _this;

{
	if (( typeof _x == "rhs_vdv_grenadier" ) or
		( typeof _x == "rhs_vdv_machinegunnner" ) or
		( typeof _x == "rhs_vdv_sergeant" ) or
		( typeof _x == "rhs_msv_crew_commander" ) or
		( typeof _x == "rhs_msv_emr_crew_commander" ) or
		( typeof _x == "rhsgref_ins_rifleman_aksu" )) then
	{
		unassignVehicle _x;
		sleep 1;
		deleteVehicle _x;
		_crewMember = "isc_is_crewman_o" createVehicle position _this;
		_driver = assignedDriver _this;
		[_crewMember] join (group _driver);
		_crewMember assignAsGunner _this;
		_crewMember moveInAny _this;
	};

} foreach _crewArray;


// remove extra russian on the GAZZ66 ZU23 / Ural ZU23
_vehType = typeOf _this;

if ((_vehType == "isc_is_gaz66_zu23_o") or
	(_vehType == "isc_is_Ural_zu23_o")) then
{
	_goAway = assignedCommander _this;
	unassignVehicle _goAway;
	sleep 1;
	deleteVehicle _goAway;
	_crewMember = "isc_is_crewman_o" createVehicle position _this;
	_driver = assignedDriver _this;
	[_crewMember] join (group _driver);
	_crewMember assignAsCommander _this;
	_crewMember moveInAny _this;
};