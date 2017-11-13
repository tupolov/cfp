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
			case "cfp_o_syarmy_officer":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this additem "SmokeShell";
				if (_randomWeapon <= 50) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 50) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74_GL";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74M_GL";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AKS74U";
				};
			};

			case "cfp_o_syarmy_grenadier":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon > 0) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74M_GL";
				};
			};
			case "cfp_o_syarmy_rifleman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_dshkm":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_kord":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_podnos":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_ags30":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_spg9":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};
			case "cfp_o_syarmy_rifleman_metis":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";

				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 85)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if ((_randomWeapon > 85) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if ((_randomWeapon > 90) and (_randomWeapon <= 95)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
				if (_randomWeapon > 95) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M_kobra";
				};
			};

			case "cfp_o_syarmy_machinegunner":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 70) then
				{
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1];
					_this addWeapon "CUP_arifle_RPK74";
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2];
				};
				if (_randomWeapon > 70) then
				{
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1];
					_this addWeapon "CUP_lmg_Pecheneg";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2];
				};
			};
			case "cfp_o_syarmy_sniper":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_10Rnd_762x54_SVD_M",6];
					_this addWeapon "CUP_srifle_SVD_Des_pso";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_10Rnd_762x51_CZ750",1];
					_this addWeapon "CUP_srifle_CZ750";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
                    _this addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L";
					_this addMagazines ["CUP_10Rnd_762x51_CZ750",10];
				};
				if (_randomWeapon > 90) then
				{
					_this addBackpack "B_Kitbag_rgr";
					_this addMagazines ["CUP_5Rnd_127x108_KSVK_M",7];
					_this addWeapon "CUP_srifle_ksvk_PSO3";
				};
			};
			case "cfp_o_syarmy_at":
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
				if ((_randomOtherATChance > 10) and (_randomWeapon <= 70)) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
				};
				if ((_randomOtherATChance > 70) and (_randomOtherATChance <= 80)) then
				{
					_this addMagazine "CUP_PG7VL_M";
					_this addWeapon "CUP_launch_RPG7V";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_PG7VL_M";
					_this addItemToBackpack "CUP_TBG7V_M";
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
				if (_randomWeapon <= 65) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AKS";
				};
				if (_randomWeapon > 65) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",5];
					_this addWeapon "CUP_arifle_AK47";
				};
			};
			case "cfp_o_syarmy_medic":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
			};
			case "cfp_o_syarmy_sapper":
			{
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this additem "SmokeShell";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if (_randomWeapon > 60)  then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				_randomExplosivesChance = floor (random 100);
				if (_randomExplosivesChance <= 50) then
				{
					_this addItem "SatchelCharge_Remote_Mag";
					_this addItem "APERSMine_Range_Mag";
					_this addItem "APERSMine_Range_Mag";
				};
				if ((_randomExplosivesChance > 50) and (_randomExplosivesChance <= 80)) then
				{
					_this addItem "SatchelCharge_Remote_Mag";
					_this addItem "DemoCharge_Remote_Mag";
					_this addItem "APERSMine_Range_Mag";
				};
				if (_randomExplosivesChance > 80) then
				{
					_this addItem "ATMine_Range_Mag";
					_this addItem "SatchelCharge_Remote_Mag";
				};
			};
			case "cfp_o_syarmy_crewman":
			{
				removeAllWeapons _this;  // delete default weapons / ammo
				if (_randomWeapon <= 45) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 45) and (_randomWeapon <= 70)) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
				};
				if (_randomWeapon > 90) then
				{
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58V";
				};
			};


		};
	};
};