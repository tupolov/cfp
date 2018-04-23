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
			case "cfp_b_pesh_leader":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if(_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
			};

			case "cfp_b_pesh_grenadier":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if(_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M4A1_BUIS_GL";
				};
				if(_randomWeapon > 50) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M16A2_GL";
				};
			};
			case "cfp_b_pesh_rifleman":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_dshkm":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_kord":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_podnos":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_ags30":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_metis":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};
			case "cfp_b_pesh_rifleman_spg9":
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36K";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_FNFAL_M",6];
					_this addWeapon "CUP_arifle_FNFAL_OSW";
				};
			};

			case "cfp_b_pesh_machinegunner":
			{
				if (_randomWeapon <= 35) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1];
					_this addWeapon "CUP_lmg_Pecheneg";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2];
				};
				if ((_randomWeapon > 35) and (_randomWeapon <= 50)) then
				{
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",1];
					_this addWeapon "CUP_lmg_m249_pip1";
					_this addMagazines ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249",4];
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 65)) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_Mk48_des";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4];
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 80)) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_M60E4";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",4];
				};
				if (_randomWeapon > 80) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_M240";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",3];
				};
			};
			case "cfp_b_pesh_sniper":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_5Rnd_762x51_M24",15];
					_this addWeapon "CUP_srifle_M24_des";
					_this addPrimaryWeaponItem "CUP_optic_LeupoldMk4_10x40_LRT_Desert";
					_this addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 60)) then
				{
					_this addMagazines ["CUP_5Rnd_762x51_M24",15];
					_this addWeapon "CUP_srifle_M40A3";
					_this addPrimaryWeaponItem "CUP_optic_LeupoldMk4";
					_this addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_20Rnd_762x51_B_M110",6];
					_this addWeapon "CUP_srifle_M110";
					_this addPrimaryWeaponItem "CUP_optic_SB_11_4x20_PM";
					_this addPrimaryWeaponItem "CUP_bipod_VLTOR_Modpod";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
					_this addPrimaryWeaponItem "CUP_optic_LeupoldMk4";
				};
				if (_randomWeapon > 90) then
				{
					_this addBackpack "B_Kitbag_rgr";
					_this addMagazines ["CUP_10Rnd_127x99_M107",7];
					_this addWeapon "CUP_srifle_M107_Base";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
				};
			};
			case "cfp_b_pesh_at":
			{
				_this removeWeapon "CUP_arifle_AKS";	// delete default rifle / ammo
				_this removeMagazines "CUP_30Rnd_762x39_AK47_M";
				private _backPackStuff = backpackItems _this;
				if !(isNil "_backPackStuff") then {
					{_this removeItemfromBackpack _x} forEach _backPackStuff;
				};
				_randomOtherATChance = floor (random 100);
				_randomOtherATChance = floor (random 100);
				if (_randomOtherATChance <= 30) then
				{
					_this addWeapon "CUP_launch_M136";
					removeBackpack _this;
				};
				if ((_randomOtherATChance > 30) and (_randomOtherATChance <=70)) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
				};
				if (_randomOtherATChance > 70) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_OG7_M";
					_this addItemToBackpack "CUP_OG7_M";
				};

				sleep 1;
				if (_randomWeapon <= 65) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if (_randomWeapon > 65) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
			};

			case "cfp_b_pesh_medic":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 70) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M16A4_Base";
				};
			};
			case "cfp_b_pesh_crewman":
			{
				if (_randomWeapon <= 70) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKM";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if(_randomWeapon > 90) then
				{
					_this addMagazines ["30Rnd_9x21_Mag_SMG_02",6];
					_this addWeapon "SMG_05_F";
				};
			};


		};
	};
};