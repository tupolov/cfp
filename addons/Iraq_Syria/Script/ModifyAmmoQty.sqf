_class = typeOf _this;
if (isServer) then
{
	sleep 1;
	switch _class do 
	{
		// BMPs
		case "rhs_bmp1_vdv": 
		{
			_this removeMagazines "rhs_mag_9m14m";
		};
	};

};