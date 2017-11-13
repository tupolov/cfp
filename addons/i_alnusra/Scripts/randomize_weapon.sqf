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
		
			case "cfp_i_alNusra_team_leader": 
			{
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
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addMagazines ["CUP_1Rnd_HE_GP25_M",8];
					_this addWeapon "CUP_arifle_AK74M_GL";
				};
				if ((_randomWeapon > 70) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",6];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if (_randomWeapon > 90) then
				{ 
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M16A4_GL";
				};
			};
			case "cfp_i_alNusra_squad_leader": 
			{	
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
					_this addWeapon "CUP_arifle_G36A";
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
			case "cfp_i_alNusra_grenadier": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";				
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M16A4_GL";
				};
				if (_randomWeapon > 80) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addMagazines ["CUP_1Rnd_HE_M203",8];
					_this addWeapon "CUP_arifle_M4A1_BUIS_GL";
				};
			};
			case "cfp_i_alNusra_rifleman": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_dshkm": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_kord": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_podnos": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_ags30": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_metis": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_rifleman_spg": 
			{
				// add back removed grenades
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";	

				if (_randomWeapon <= 40) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 40) and (_randomWeapon <= 65)) then
				{ 	
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",6];
					_this addWeapon "CUP_arifle_AKS";
				};
				if ((_randomWeapon > 65) and (_randomWeapon <= 75)) then
				{ 
					_this addMagazines ["CUP_30Rnd_Sa58_M",6];
					_this addWeapon "CUP_arifle_Sa58P";
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
					_this addMagazines ["CUP_30Rnd_556x45_Stanag",6];
					_this addWeapon "CUP_arifle_M4A1";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_556x45_G36",6];
					_this addWeapon "CUP_arifle_G36A";
				};
			};
			case "cfp_i_alNusra_machinegunner": 
			{		
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1];
					_this addWeapon "CUP_arifle_RPK74";
					_this addMagazines ["CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",2];
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then 
				{ 
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",1];
					_this addWeapon "CUP_lmg_M240";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M",2];
				};
				if (_randomWeapon > 90) then
				{ 
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1];
					_this addWeapon "CUP_lmg_Pecheneg";
					_this addMagazines ["CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2];
				};
			};
			case "cfp_i_alNusra_sniper": 
			{	
				_this addMagazine "CUP_HandGrenade_RGD5";
				if (_randomWeapon <= 60) then
				{
					_this addMagazines ["CUP_10Rnd_762x54_SVD_M",6];
					_this addWeapon "CUP_srifle_SVD_Des_pso";
				};
				if ((_randomWeapon > 60) and (_randomWeapon <= 90)) then 
				{ 	
					_this addMagazines ["CUP_10x_303_M",10];
					_this addWeapon "CUP_srifle_LeeEnfield_rail";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addBackpack "B_Kitbag_rgr";
					_this addMagazines ["CUP_10Rnd_127x99_M107",7];
					_this addWeapon "CUP_10Rnd_127x99_M107";
					_this addPrimaryWeaponItem "CUP_optic_SB_3_12x50_PMII";
				};
			};
			case "cfp_i_alNusra_at": 
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
			case "cfp_i_alNusra_medic": 
			{	
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",4];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",4];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_9x19_MP5",6];
					_this addWeapon "CUP_30Rnd_9x19_MP5";
				};
			};
			case "cfp_i_alNusra_sapper": 
			{
				_this addMagazine "CUP_HandGrenade_RGD5";
				_this addMagazine "CUP_HandGrenade_RGD5";
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
			case "cfp_i_alNusra_crewman": 
			{	
				if (_randomWeapon <= 80) then
				{
					_this addMagazines ["CUP_30Rnd_762x39_AK47_M",4];
					_this addWeapon "CUP_arifle_AK47";
				};
				if ((_randomWeapon > 80) and (_randomWeapon <= 90)) then
				{
					_this addMagazines ["CUP_30Rnd_545x39_AK_M",4];
					_this addWeapon "CUP_arifle_AK74M";
				};
				if (_randomWeapon > 90) then
				{ 	
					_this addMagazines ["CUP_30Rnd_9x19_MP5",6];
					_this addWeapon "CUP_30Rnd_9x19_MP5";
				};
			};
		};
	};
};