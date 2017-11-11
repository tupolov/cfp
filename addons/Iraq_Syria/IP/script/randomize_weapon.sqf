sleep 1;

if ( !isNil { _this getVariable "NoRandom" }  ) exitWith {};

_class = typeOf _this;
_randomWeaponChance = floor (random 100); // Random chance for a random weapon.
_randomWeapon = floor (random 100); // Random weapon variable.
_randomWeaponProbability = getnumber (configFile >> "cfgvehicles" >> typeof _this >> "randomWeaponProbability");

if (_randomWeaponChance <= _randomWeaponProbability) then  // replace default weapons
{
	if (isServer) then
	{
		removeAllWeapons _this;  // delete default weapons / ammo						
		sleep 1;
		switch _class do 
		{
			case "cfp_b_ip_officer": 
			{
				removeAllWeapons _this;  // delete default weapons / ammo	
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";				
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 90)) then
				{ 
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if (_randomWeapon > 90) then
				{ 
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};

			case "cfp_b_ip_policeman": 
			{
				removeAllWeapons _this;  // delete default weapons / ammo	
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 30) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 30) and (_randomWeapon <= 60)) then
				{ 
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_8Rnd_B_Beneli_74Pellets",4];
					_this addMagazines ["CUP_8Rnd_B_Beneli_74Slug",2];
					_this addWeapon "CUP_sgun_M1014";
				};
				if (_randomWeapon > 90) then
				{ 
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};

		};
	};
};