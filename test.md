## Factions
### Naming
State Actors - Faction class name should be in the following standard format:
* Addon - CFP
* Side - O | B | I | C
* Country Code (based on Alpha-2 country codes) - I.e. US (http://www.nationsonline.org/oneworld/country_code_list.htm)
* Military Branch - I.e. Army, Navy, AirForce, Marines, Militia, Rebels
* Theatre - WDL for Jungle/Woodladn, DES for Arid/Desert, SNW for Artic/Winter

Examples - CFP_B_USARMY_DES, CFP_B_USCIA, CFP_B_GBARMY_DES, CFP_O_RUNAVY
 
Non-State Actors - Faction Naming
* Addon - CFP
* Side - O | B | I | C
* Group Name - I.e. ALQAEDA, ALSHABAAB, IS, IRA

Examples - CFP_O_IS, CFP_O_ALQAEDA, CFP_O_IRA

Faction Classnames should always be in UPPERCASE. When defining unit faction ensure that you also use uppercase i.e. `faction = "CFP_B_USARMY"`
 
### Folder Structure
All factions have their own folder under \x\cfp\addons\ this ensures that each faction has its own PBO. This allows groups to remove factions as needed.

Faction folders should be named the same as their faction classname but without `CFP_` i.e. `b_usarmy`. All folder names must be lowercase to ensure compatibility with Linux.

Within the faction folder structure there should be the following files:
* $PBOPREFIX$
* script_component.hpp
* config.cpp
* CfgPatches.hpp
* CfgFactionClasses.hpp
* CfgVehicles.hpp
* CfgWeapons.hpp
* CfgGroups.hpp

Optional:

* CfgUniforms.hpp (if adding custom uniforms)
* CfgHeadgear.hpp (if adding custom headgear)
* CfgGlasses.hpp (if adding custom face wear)\
* CfgVests.hpp (if adding custom vests)

There should also be a folder called data for all image/sound related assets. I.e. `b_usarmy\data`

### Classnames

In general Classnames should start with faction classname i.e. CFP_B_USARMY_Soldier_01, CFP_B_USARMY_Car_01.

For regular armed forces we recommend the following set of units and vehicles:

#### Units
* cfp_x_x_Officer_01
* cfp_x_x_Soldier_SL_01
* cfp_x_x_Soldier_TL_01
* cfp_x_xx_Soldier_01
* cfp_x_x_Soldier_GL_01
* cfp_x_x_Soldier_AT_01
* cfp_x_x_Soldier_AR_01
* cfp_x_x_Medic_01
* cfp_x_x_Marksman_01
* cfp_x_x_Soldier_AAR_01
* cfp_x_x_Scout_01
* cfp_x_x_Soldier_AA_01
* cfp_x_x_Sniper_01
* cfp_x_x_Spotter_01
* cfp_x_x_Bomb_01
* cfp_x_x_Engineer_01
* cfp_x_x_Crewman_01
* cfp_x_x_Pilot_01
* cfp_x_x_Heli_Pilot_01
* cfp_x_x_Diver_01

#### Vehicles
* cfp_x_x_recon_01 (Small Car)
* cfp_x_x_patrol_01 (Patrol Car)
* cfp_x_x_armed_mg_01 (Armed Wheeled Vehicle - MG)
* cfp_x_x_armed_at_01 (Armed Wheeled Vehicle - AT)
* cfp_x_x_apc_01 (Armoured Wheeled Vehicle)
* cfp_x_x_apc_at_01
* cfp_x_x_apc_mg_01
* cfp_x_x_tank_01 (Armoured Tracked Vehicle)
* cfp_x_x_plane_01
* cfp_x_x_spt_heli_01 (For CAS etc)
* cfp_x_x_transport_heli_01 
* cfp_x_x_mortar_01
* cfp_x_x_gun_01 (Field Gun)
* cfp_x_x_spgun_01 (Self Propelled Gun)
* cfp_x_x_rocket_01 (Self Propelled rocket artillery)
* cfp_x_x_transport_01 (Truck)
* cfp_x_x_boat_01
* cfp_x_x_assault_boat_01
* cfp_x_x_SDV_01

### Vehicle Crew and Gunners
Please ensure that vehicles have the correct `crew` and `typicalCargo[]` config items. This will ensure the right driver and gunner is allocated to the vehicle.

### Editor Sub-Categories
For mission makers its good to have a sensible grouping of infantry units, particularly if they are different types of troops within the same faction. For example in the 3D editor you would have normal infantry listed under `Men (MTP)` while special forces might be listed under `Men (SAS)` etc. 

In order to do this you should define custom editor sub-categories (above the CfgVehicles class in CfgVehicles.hpp):

    class CfgEditorSubCategories
    {
        class CFP_EdSubcat_Personnel_DeltaForce { displayName = "Men (Delta Force)";  };
        class CFP_EdSubcat_Personnel_Camo_UCP  { displayName = "Men (UCP)"; };
    };

and then for the unit (or its parent as shown):

    class CUP_B_USArmy_Soldier_01;
    class CUP_B_USArmy_Soldier_01_OCimport_01 : CUP_B_USArmy_Soldier_01 { 
        scope = 0; 
        class EventHandlers; 
    };
    class CUP_B_USArmy_Soldier_01_OCimport_02 : CUP_B_USArmy_Soldier_01_OCimport_01 { 
        class EventHandlers; 
        editorSubCategory = "CFP_EdSubcat_Personnel_Camo_UCP";
    };

### Custom Assets and Textures
* Faction custom models should be placed in the faction folder.
* Faction custom textures and material files (RVMAT) should be placed in the faction\data folder.
* Faction UI icon images should be placed in the faction\data\UI folder.
* Faction unit preview images should be placed in the faction\data\UI folder.
* Faction UI icon images should be name using the faction classname i.e. `icon_cfp_b_usarmy_car.paa`
* Faction textures should be named using faction classname i.e. `cfp_b_usarmy_car_exterior.paa`
* Faction preview images should be named using faction classname i.e. `preview_cfp_b_usarmy_car.paa`

### Event Handlers & CBA Compatibility
To ensure compatibility it's imperative that any new unit/vehicle define inherits event handlers from its base class. ORBATRON generated faction units have this configured by default. Custom created factions should ensure the following when creating a config for a new unit/vehicle:

    Class grandparentClass;
    Class parentClass : grandparentClass {
        Class Eventhandlers;
    };
    class myNewClass : parentClass {
        your config in here
        Class EventHandlers: Eventhandlers {
            Class ADDON {
                Init = "blah";
            };
        };
    };

### CfgPatches
Its very important that any unit, vehicle or weapon (weapons, uniforms etc) for you faction are defined in CfgPatches.hpp for your faction.

### RequiredAddons
Its extremely important that you list any addons that your faction relies upon in CfgPatches `requiredAddons[]` config item. ORBATRON should generate this automatically. If not using ORBATRON you can still use it to generate your CfgPatches, simply import your existing faction into ORBATRON and then export the CfgPatches.

### Unit Insignias
Every unit should have an insignia assigned. We have imported Siege-A's insignia mod, so almost every insignia should be available. If none fit, use the BLOOD or MORALE insignias (see the randomization example to see how).

### Load-outs & Randomization
Ideally, each faction has a unique uniform i.e. BDU M81 or Field Uniform Multicam etc. There's a selection of uniforms available as common assets within CFP. You can even setup randomization for uniforms if appropriate/

Load-outs should be configured using either standard config mechanism or ALiVE_orbatLoadout config array. 

If using ALiVE_orbatLoadout config array (created by ALiVE ORBATRON)) then ORBATRON will also insert an Init EventHandlers to spawn this load out.

To enable Randomisation do the following:

1. For gear Randomisation add the following to the unit config `randomGearProbability = N` where N is probability out of 100. Then add a config array for any of the equipment items, see example below.
2. For weapon Randomisation add the following to the unit config `randomWeaponProbability = N` where N is probability out of 100. Then add a config array for ALL of the weapon items, see example below.
3. In the Init eventhandler add the call to the randomization function. Here are two examples when using the ALiVE_orbatCreator[] and when not.

Using ORBATRON for loadout:

    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};
        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };
    };

Not using ORBATRON:

    class EventHandlers : EventHandlers {
        class ADDON {
            init = "if (local (_this select 0)) then { _onSpawn = { _this = _this select 0; sleep 0.2; [_this] call CFP_main_fnc_randomizeUnit; }; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };
    };

#### Randomisation Config Examples

    randomGearProbability = 100;
    randomWeaponProbability = 100;

    uniformList[] = {
	    "U_BG_Guerilla2_1", 0.25,
	    "U_BG_Guerilla2_2", 0.25,
	     "U_BG_Guerilla2_3", 0.25
    };

    vestList[] = {
	    "CUP_V_I_RACS_Carrier_Vest", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_2", 0.25,
            "CUP_V_I_RACS_Carrier_Vest_3", 0.25,
	    "V_Chestrig_khk", 0.25
    };
    
    backpackList[] = {
            "SP_Modular1_Tan", 0.25,
            "B_AssaultPack_mcamo", 0.25,
            "B_AssaultPack_cbr", 0.25,
	    "SP_Carryall_Tan", 0.2
    };

    insigniaList[] = {
            "MORALE", 0.5,
            "BLOOD", 0.5
    };

    grenadeList[] = {
        	{"HandGrenade",4}, 0.25,
		{"MiniGrenade",4}, 0.25
    };

    rifleList[] = {
        	{"CUP_arifle_M4A1_camo_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A3_desert_Aim_Flashlight",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_M4A1_Aim",{"CUP_30Rnd_556x45_Stanag",6}}, 0.4,
        	{"CUP_arifle_AK74M",{"CUP_30Rnd_545x39_AK_M",6}}, 0.3
    };

    handgunList[] = {
            {"CUP_hgun_Glock17",{"CUP_17Rnd_9x19_glock17",3}}, 0.8,
            {"CUP_hgun_M9",{"CUP_15Rnd_9x19_M9",3}}, 0.4, // M9
            {"CUP_hgun_Makarov",{"CUP_8Rnd_9x18_Makarov_M",3}}, 0.4
    };

    explosiveList[] = {
        	{"",0}, 0.9,
        	{"CUP_TimeBomb_M",2}, 0.2,
        	{"CUP_Mine_M",2}, 0.2
    };

### Faction Groups
For regular armed forces we recommend the following group categories and groups:

#### Group Categories Classes
* Infantry
* SpecOps
* Motorized
* Mechanized
* Armored
* Air
* Artillery
* Support
* Naval

**Do not create custom group categories!**

#### Recommended Groups

* Infantry
    * Recon (2)
    * Sentry (2)
    * Sniper Pair (2)
    * AT / Mortar / MG Static (2)
    * Sniper Team (4)
    * Fireteam (4)
    * PL HQ (4)
    * Coy HQ (5)
    * (Mnvr) Support Section (6)
    * (Rifle) Squad / Section (8) 
    * Weapons Squad (8) / Team (4)
    * MG Section (8) / Team (4)
    * AT Section (8) / Team (4)
    * AA Section (8) / Team (4)
* SpecOps
    * Recon (2)
    * Fireteam (4)
    * Squad (6)
    * Assault Team (8)
    * Motorized Recon (2)
    * Motorized Fireteam (4)
    * Motorized Squad (6)
    * Motorized Assault Team (8)
* Motorized
    * Recon (2)
    * Patrol (4)
    * PL HQ (4)
    * (Mnvr) Support Section (6)
    * (Rifle) Squad / Section (8) 
    * Weapons Squad (8) / Team (4)
    * MG Section (8) / Team (4)
    * AT Section (8) / Team (4)
    * AA Section (8) / Team (4)
* Mechanized
    * Mechanized Coy HQ (2 Vehicles 5 Inf)
    * Mechanized (Rifle) Squad / Section (2 vehicles 8 inf) 
    * Mechanized AT/AA Section (8) / Team (4)
* Armored
    * Tank Platoon (3 Tanks)
Air
    * Support Heli (1)
    * Attack Heli (1)
    * Transport Heli (1)
    * Attack Jet (1)
    * Fighter Jet (1)
    * SF Heli (1)
Naval
    * Diver Pair (2)
    * Diver Team (4)
    * Boat Team (4)
    * Assault Boat (4-8)
    * SDV Team (4 Divers, 1 SDV)
Artillery
   * Mortar (3)
   * Field Gun Battery (3)
   * Artillery Battery (3)
   * Rocket Battery (3)

### Crates & Supplies

### ALiVE Static Data

### ACE3 Compatibility

### Stringtables

### Icons and Preview Image Generation

### QA / User Acceptance Test

## Common Assets
Any assets that may be used by multiple factions should be placed in our common asset folders. In `\x\cfp\addons\` we have a number of folder for common assets:

* models - common p3d models go here
* uniforms - common uniform config and textures here
* vests - common vest config and textures here
* backpacks - common backpack config and textures here
* headgear - common headgear config and textures here
* glasses - common face wear
* faces - common skin textures
* nvg - common nvg config and textures here
* vehicles - common vehicle textures here
* insignia - common insignias
* main\functions - common functions
* flags - internation flag textures
