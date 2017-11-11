_crewArray = crew _this;

{
	if ( typeof _x == "rhsusf_army_ucp_grenadier" ) then
	{
		deleteVehicle _x;
	};
 
} foreach _crewArray;