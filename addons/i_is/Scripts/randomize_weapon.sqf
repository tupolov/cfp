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

			// Independent Units

			case "cfp_i_is_team_leader":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AKS74U";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M16A4_GL";
				};
			};
			case "cfp_i_is_squad_leader":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};
			case "cfp_i_is_grenadier":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74M_GL";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M4A1_BUIS_GL";
				};
			};
			case "cfp_i_is_rifleman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_dshkm":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_kord":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_podnos":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_ags30":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_metis":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_spg9":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_militaman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
				};
				if (_randomWeapon > 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
			};
			case "cfp_i_is_irregular":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["30Rnd_9x21_Mag_SMG_02",6];
					_this addWeapon "SMG_05_F";
				};
				if (_randomWeapon > 50) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield";
				};
			};
			case "cfp_i_is_autorifleman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1];
					_this addWeapon "CUP_lmg_m249_para";
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2];
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1];
					_this addWeapon "CUP_lmg_m249_pip4";
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4];
				};
			};
			case "cfp_i_is_machinegunner":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1];
					_this addWeapon "CUP_lmg_Pecheneg";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2];
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_M240";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3];
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1];
					_this addWeapon "CUP_arifle_RPK74";
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2];
				};
			};
			case "cfp_i_is_sniper":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_10Rnd_762x54_SVD_M",6];
					_this addWeapon "CUP_srifle_SVD_des";
					_this addPrimaryWeaponItem "CUP_optic_PSO_1";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
					_this addPrimaryWeaponItem "CUP_optic_SB_11_4x20_PM";
				};
				if (_randomWeapon > 90) then
				{
					_this addBackpack "B_Kitbag_rgr";
					_this addMagazines ["CUP_10Rnd_127x99_M107",7];
					_this addWeapon "CUP_srifle_M107_Base";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
				};
			};
			case "cfp_i_is_at":
			{
				_this removeWeapon "CUP_arifle_AKS";	// delete default rifle / ammo
				_this removeMagazines "CUP_30Rnd_762x39_AK47_M";
				_backPackStuff = backpackItems _this;
				{_this removeItemfromBackpack _x} forEach _backPackStuff;
				_randomOtherATChance = floor (random 100);
				if (_randomOtherATChance <= 10) then
				{
					_this addWeapon "CUP_launch_RPG18";
					removeBackpack _this;
				};
				if ((_randomOtherATChance > 10) and (_randomOtherATChance <= 20)) then
				{
					_this addWeapon "CUP_launch_M136";
					removeBackpack _this;
				};
				if ((_randomOtherATChance > 20) and (_randomOtherATChance <= 80)) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
				};
				if (_randomOtherATChance > 80) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_OG7_M";
					_this addItemToBackpack "CUP_OG7_M";
				};

				sleep 1;
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",5];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
			};
			case "cfp_i_is_medic":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};
			case "cfp_i_is_sapper":
			{
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if (_randomWeapon > 60)  then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				_randomExplosivesChance = floor (random 100);
				if (_randomExplosivesChance <= 50) then
				{
					_this addItemToBackpack "APERSMine_Range_Mag";
					_this addItemToBackpack "IEDLandSmall_Remote_Mag";
				};
				if ((_randomExplosivesChance > 50) and (_randomExplosivesChance <= 80)) then
				{
					_this addItemToBackpack "DemoCharge_Remote_Mag";
					_this addItemToBackpack "IEDUrbanSmall_Remote_Mag";
				};
				if (_randomExplosivesChance > 80) then
				{
					_this addItemToBackpack "APERSTripMine_Wire_Mag";
					_this addItemToBackpack "IEDLandSmall_Remote_Mag";
				};
			};
			case "cfp_i_is_crewman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",4];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",4];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["30Rnd_9x21_Mag_SMG_02",6];
					_this addWeapon "SMG_05_F";
				};
			};

			// Opfor Units

			case "cfp_i_is_team_leader":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AKS74U";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M16A4_GL";
				};
			};
			case "cfp_i_is_squad_leader":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};
			case "cfp_i_is_grenadier":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74M_GL";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M4A1_BUIS_GL";
				};
			};
			case "cfp_i_is_rifleman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_dshkm":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_kord":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_podnos":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_ags30":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_metis":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_rifleman_spg9":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 75)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
				if ((_randomWeapon > 75) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1_desert";
				};
			};
			case "cfp_i_is_militaman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
				};
				if (_randomWeapon > 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
			};
			case "cfp_i_is_irregular":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["30Rnd_9x21_Mag_SMG_02",6];
					_this addWeapon "SMG_05_F";
				};
				if (_randomWeapon > 50) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield";
				};
			};
			case "cfp_i_is_autorifleman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1];
					_this addWeapon "CUP_lmg_m249_para";
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",2];
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1];
					_this addWeapon "CUP_lmg_m249_pip4";
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4];
				};
			};
			case "cfp_i_is_machinegunner":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1];
					_this addWeapon "CUP_lmg_Pecheneg";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2];
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_M240";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",3];
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1];
					_this addWeapon "CUP_arifle_RPK74";
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2];
				};
			};
			case "cfp_i_is_sniper":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_10Rnd_762x54_SVD_M",6];
					_this addWeapon "CUP_srifle_SVD_des";
					_this addPrimaryWeaponItem "CUP_optic_PSO_1";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
					_this addPrimaryWeaponItem "CUP_optic_SB_11_4x20_PM";
				};
				if (_randomWeapon > 90) then
				{
					_this addBackpack "B_Kitbag_rgr";
					_this addMagazines ["CUP_10Rnd_127x99_M107",7];
					_this addWeapon "CUP_10Rnd_127x99_M107";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
				};
			};
			case "cfp_i_is_at":
			{
				_this removeWeapon "CUP_arifle_AKS";	// delete default rifle / ammo
				_this removeMagazines "CUP_30Rnd_762x39_AK47_M";
				_backPackStuff = backpackItems _this;
				{_this removeItemfromBackpack _x} forEach _backPackStuff;
				_randomOtherATChance = floor (random 100);
				if (_randomOtherATChance <= 10) then
				{
					_this addWeapon "CUP_launch_RPG18";
					removeBackpack _this;
				};
				if ((_randomOtherATChance > 10) and (_randomOtherATChance <= 20)) then
				{
					_this addWeapon "CUP_launch_M136";
					removeBackpack _this;
				};
				if ((_randomOtherATChance > 20) and (_randomOtherATChance <= 80)) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
				};
				if (_randomOtherATChance > 80) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_OG7_M";
					_this addItemToBackpack "CUP_OG7_M";
				};

				sleep 1;
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",5];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
			};
			case "cfp_i_is_medic":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};
			case "cfp_i_is_sapper":
			{
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if (_randomWeapon > 60)  then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				_randomExplosivesChance = floor (random 100);
				if (_randomExplosivesChance <= 50) then
				{
					_this addItemToBackpack "APERSMine_Range_Mag";
					_this addItemToBackpack "IEDLandSmall_Remote_Mag";
				};
				if ((_randomExplosivesChance > 50) and (_randomExplosivesChance <= 80)) then
				{
					_this addItemToBackpack "DemoCharge_Remote_Mag";
					_this addItemToBackpack "IEDUrbanSmall_Remote_Mag";
				};
				if (_randomExplosivesChance > 80) then
				{
					_this addItemToBackpack "APERSTripMine_Wire_Mag";
					_this addItemToBackpack "IEDLandSmall_Remote_Mag";
				};
			};
			case "cfp_i_is_crewman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",4];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",4];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["30Rnd_9x21_Mag_SMG_02",6];
					_this addWeapon "SMG_05_F";
				};
			};


		};
	};
};