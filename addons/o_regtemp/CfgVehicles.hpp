#define DFACTION(x) DOUBLES(FACTION,x)
#define IMPORT(a,b) a##_OCImport_0##b
#define CLASS(x) class x
#define CLASSNUM(a,b) DOUBLES(DFACTION(a),b)

#define SUBCATTEXT(x) QUOTE(Men (x))
#define ESUBCAT(x) CFP_EdSubcat_Personnel_##x
#define CSUBCAT(x) class ESUBCAT(x) { displayName = SUBCATTEXT(x); };

#define EPREVIEW(a,b) \x\cfp\addons\##a##\data\UI\preview_##b##.jpg
#define PREVIEW(x) editorPreview = EPREVIEW(ADDON,x);

#define CLASSDEF(a,b,c) class CLASSNUM(a,b) : c
#define CLASSDEFIMP(a,b,c) CLASSDEF(a,b,IMPORT(c,2))

#define BASICS(a,b) \
        author = AUTHOR; \
        scope = 2; \
        scopeArsenal = 2; \
        side = 0; \
        faction = QUOTE(FACTION); \
        test = a##_##b;

#define IMPORTMAN(NAME) \
        CLASS(NAME); \
        class IMPORT(NAME,1) : ##NAME## { scope = 0; class EventHandlers;}; \
        class IMPORT(NAME,2) : IMPORT(NAME,1) { \
            class EventHandlers; \
        };

#define IMPORTVEHICLE(NAME) \
        class ##NAME##; \
        class IMPORT(NAME,1) : ##NAME## { scope = 0; class EventHandlers;}; \
        class IMPORT(NAME,2) : IMPORT(NAME,1) { \
            class EventHandlers; \
        };

class CBA_Extended_EventHandlers_base;

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgEditorSubCategories
{
    CSUBCAT(MANTYPE)
    CSUBCAT(SFTYPE)
};


class CfgVehicles
{
    // People
        IMPORTMAN(MAN)

        CLASSDEFIMP(Soldier,Base,MAN) {
            author = AUTHOR;
            side = SIDE;
            faction = QUOTE(FACTION);
            editorSubcategory = QUOTE(ESUBCAT(MANTYPE));
            identityTypes[] = IDENTITY;
            genericNames = NAMES;
            uniformClass = UNIFORM;

            BASE_LOADOUT

            #ifdef RANDOMGEAR
                RANDOMGEAR
            #endif

            #ifdef RANDOMWEAP
                RANDOMWEAP
            #endif

            class EventHandlers : EventHandlers {
                class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

                class ALiVE_orbatCreator {
                    init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then { _loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; [_this] call CFP_main_fnc_randomizeUnit; reload _this}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
                };
            };
        };

        CLASSDEF(Soldier,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier,01)
            displayName = "Rifleman";
        };

        CLASSDEF(Officer,01,CLASSNUM(Soldier,Base)) {
            BASICS(Officer,01)
            displayName = "Officer";
            #ifdef OFFICER_LOADOUT
                OFFICER_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_SL,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_SL,01)
            displayName = "Section Leader";
            #ifdef SL_LOADOUT
                SL_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_TL,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_TL,01)
            displayName = "Team Leader";
            #ifdef TL_LOADOUT
                TL_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_GL,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_GL,01)
            displayName = "Grenadier";
            #ifdef GL_LOADOUT
                GL_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_AR,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_AR,01)
            displayName = "Automatic Rifleman";
            #ifdef AR_LOADOUT
                AR_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_AAR,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_AAR,01)
            displayName = "Asst. Automatic Rifleman";
            #ifdef AAR_LOADOUT
                AAR_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_AT,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_AT,01)
            displayName = "Rifleman (AT)";
            #ifdef AT_LOADOUT
                AT_LOADOUT
            #endif
        };

        CLASSDEF(Soldier_AA,01,CLASSNUM(Soldier,Base)) {
            BASICS(Soldier_AA,01)
            displayName = "Rifleman (AA)";
            #ifdef AA_LOADOUT
                AA_LOADOUT
            #endif
        };

        CLASSDEF(Medic,01,CLASSNUM(Soldier,Base)) {
            BASICS(Medic,01)
            displayName = "Medic";
            #ifdef MEDIC_LOADOUT
                MEDIC_LOADOUT
            #endif
        };

        CLASSDEF(Marksman,01,CLASSNUM(Soldier,Base)) {
            BASICS(Marksman,01)
            displayName = "Marksman";
            #ifdef MARKS_LOADOUT
                MARKS_LOADOUT
            #endif
        };

        CLASSDEF(Scout,01,CLASSNUM(Soldier,Base)) {
            BASICS(Scout,01)
            displayName = "Scout";
            #ifdef SCOUT_LOADOUT
                SCOUT_LOADOUT
            #endif
        };

        CLASSDEF(Sniper,01,CLASSNUM(Soldier,Base)) {
            BASICS(Sniper,01)
            displayName = "Sniper";
            #ifdef SNIPER_LOADOUT
                SNIPER_LOADOUT
            #endif
        };

        CLASSDEF(Spotter,01,CLASSNUM(Soldier,Base)) {
            BASICS(Spotter,01)
            displayName = "Spotter";
            #ifdef SPOT_LOADOUT
                SPOT_LOADOUT
            #endif
        };

        CLASSDEF(Crewman,01,CLASSNUM(Soldier,Base)) {
            BASICS(Crewman,01)
            displayName = "Crewman";
            #ifdef CREW_LOADOUT
                CREW_LOADOUT
            #endif
        };

        CLASSDEF(Engineer,01,CLASSNUM(Soldier,Base)) {
            BASICS(Engineer,01)
            displayName = "Engineer";
            #ifdef ENG_LOADOUT
                ENG_LOADOUT
            #endif
        };

       CLASSDEF(Pilot,01,CLASSNUM(Soldier,Base)) {
            BASICS(Pilot,01)
            displayName = "Pilot";
            #ifdef PILOT_LOADOUT
                PILOT_LOADOUT
            #endif
        };

       CLASSDEF(Heli_Pilot,01,CLASSNUM(Soldier,Base)) {
            BASICS(Heli_Pilot,01)
            displayName = "Helicopter Pilot";
            #ifdef HPILOT_LOADOUT
                HPILOT_LOADOUT
            #endif
        };

        CLASSDEF(Bomb,01,CLASSNUM(Soldier,Base)) {
            BASICS(Bomb,01)
            displayName = "Demolition";
            #ifdef BOMB_LOADOUT
                BOMB_LOADOUT
            #endif
        };

        CLASSDEF(Gunner,01,CLASSNUM(Soldier,Base)) {
            BASICS(Gunner,01)
            displayName = "Gunner";
            #ifdef MGunner_LOADOUT
                MGunner_LOADOUT
            #endif
        };

        IMPORTMAN(B_diver_F)
        CLASSDEF(Diver,01,B_diver_F) {
            BASICS(Diver,01)
            editorSubcategory = QUOTE(ESUBCAT(MANTYPE));
            IDENTITY_DIVER
            genericNames = NAMES;
            displayName = "Diver";
            #ifdef DIVER_LOADOUT
                DIVER_LOADOUT
            #endif
        };

        CLASSDEF(SpecOps,01,CLASSNUM(Soldier,Base)) {
            BASICS(SpecOps,01)
            accuracy = 3.9;
            canHideBodies = 1;
            camouflage = 0.8;
            uniformClass = UNIFORM_SF;
            editorSubcategory = QUOTE(ESUBCAT(SFTYPE));
            displayName = "Operator";
            #ifdef SPECOPS_LOADOUT
                SPECOPS_LOADOUT
            #endif
        };

    // Vehicles
        #ifdef RECON
            IMPORTVEHICLE(RECON)
            CLASSDEFIMP(recon,01,RECON) {
                BASICS(recon,01)
                crew = QUOTE(DFACTION(Soldier_01));
            };

        #endif

        #ifdef PATROL
            IMPORTVEHICLE(PATROL)
            CLASSDEFIMP(patrol,01,PATROL) {
                BASICS(patrol,01)
                crew = QUOTE(DFACTION(Soldier_01));
            };
        #endif

        #ifdef ARMED_MG
            IMPORTVEHICLE(ARMED_MG)
            CLASSDEFIMP(armed_mg,01,ARMED_MG) {
                BASICS(armed_mg,01)
                crew = QUOTE(DFACTION(Soldier_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01))
                };
            };
        #endif

        #ifdef SF_ARMED_MG
            IMPORTVEHICLE(SF_ARMED_MG)
            CLASSDEFIMP(sf_armed_mg,01,SF_ARMED_MG) {
                BASICS(sf_armed_mg,01)
                crew = QUOTE(DFACTION(Soldier_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(SpecOps_01)),
                    QUOTE(DFACTION(SpecOps_01)),
                    QUOTE(DFACTION(SpecOps_01)),
                    QUOTE(DFACTION(SpecOps_01))
                };
            };
        #endif
        #ifdef ARMED_AT
            IMPORTVEHICLE(ARMED_AT)
            CLASSDEFIMP(armed_at,01,ARMED_AT) {
                BASICS(armed_at,01)
                crew = QUOTE(DFACTION(Soldier_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01))
                };
            };
        #endif

        #ifdef APC
            IMPORTVEHICLE(APC)
            CLASSDEFIMP(apc,01,APC) {
                BASICS(apc,01)
                crew = QUOTE(DFACTION(Crewman_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01))
                };
            };
        #endif

        #ifdef APC_AT
            IMPORTVEHICLE(APC_AT)
            CLASSDEFIMP(apc_at,01,APC_AT) {
                BASICS(apc_at,01)
                crew = QUOTE(DFACTION(Crewman_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01))
                };
            };
        #endif

        #ifdef APC_MG
            IMPORTVEHICLE(APC_MG)
            CLASSDEFIMP(apc_mg,01,APC_MG) {
                BASICS(apc_mg,01)

                crew = QUOTE(DFACTION(Crewman_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01)),
                    QUOTE(DFACTION(Soldier_01))
                };
            };
        #endif

        #ifdef TANK
            IMPORTVEHICLE(TANK)
            CLASSDEFIMP(tank,01,TANK) {
                BASICS(tank,01)
                crew = QUOTE(DFACTION(Crewman_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Crewman_01)),
                    QUOTE(DFACTION(Crewman_01)),
                    QUOTE(DFACTION(Crewman_01)),
                    QUOTE(DFACTION(Crewman_01))
                };
            };
        #endif

        #ifdef PLANE
            IMPORTVEHICLE(PLANE)
            CLASSDEFIMP(plane,01,PLANE) {
                BASICS(plane,01)
                crew = QUOTE(DFACTION(Pilot_01));
            };
        #endif

        #ifdef SPT_HELI
            IMPORTVEHICLE(SPT_HELI)
            CLASSDEFIMP(spt_heli,01,SPT_HELI) {
                BASICS(spt_heli,01)
                crew = QUOTE(DFACTION(Heli_Pilot_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Heli_Pilot_01)),
                    QUOTE(DFACTION(Heli_Pilot_01))
                };
            };
        #endif

        #ifdef TRANS_HELI
            IMPORTVEHICLE(TRANS_HELI)
            CLASSDEFIMP(trans_heli,01,TRANS_HELI) {
                BASICS(trans_heli,01)
                crew = QUOTE(DFACTION(Heli_Pilot_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Heli_Pilot_01)),
                    QUOTE(DFACTION(Heli_Pilot_01))
                };
            };
        #endif

        #ifdef MORTAR
            IMPORTVEHICLE(MORTAR)
            CLASSDEFIMP(mortar,01,MORTAR) {
                BASICS(mortar,01)
                crew = QUOTE(DFACTION(Gunner_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Gunner_01))
                };
            };
        #endif

        #ifdef ST_MG
            IMPORTVEHICLE(ST_MG)
            CLASSDEFIMP(st_mg,01,ST_MG) {
                BASICS(st_mg,01)
                crew = QUOTE(DFACTION(Gunner_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Gunner_01))
                };
            };
        #endif

        #ifdef ST_AT
            IMPORTVEHICLE(ST_AT)
            CLASSDEFIMP(st_at,01,ST_AT) {
                BASICS(st_at,01)
                crew = QUOTE(DFACTION(Gunner_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Gunner_01))
                };
            };
        #endif

        #ifdef GUN
            IMPORTVEHICLE(GUN)
            CLASSDEFIMP(gun,01,GUN) {
                BASICS(gun,01)
                crew = QUOTE(DFACTION(Gunner_01));
                typicalCargo[] = {
                    QUOTE(DFACTION(Gunner_01))
                };
            };
        #endif

        #ifdef SPGUN
            IMPORTVEHICLE(SPGUN)
            CLASSDEFIMP(spgun,01,SPGUN) {
                BASICS(spgun,01)
                crew = QUOTE(DFACTION(Crewman_01));
            };
        #endif

        #ifdef ROCKET
            IMPORTVEHICLE(ROCKET)
            CLASSDEFIMP(rocket,01,ROCKET) {
                BASICS(rocket,01)
                crew = QUOTE(DFACTION(Crewman_01));
            };
        #endif

        #ifdef TRUCK
            IMPORTVEHICLE(TRUCK)
            CLASSDEFIMP(truck,01,TRUCK) {
                BASICS(truck,01)
                crew = QUOTE(DFACTION(Soldier_01));
            };
        #endif

        #ifdef BOAT
            IMPORTVEHICLE(BOAT)
            CLASSDEFIMP(boat,01,BOAT) {
                BASICS(boat,01)
                crew = QUOTE(DFACTION(Soldier_01));
            };
        #endif

        #ifdef ASSAULT_BOAT
            IMPORTVEHICLE(ASSAULT_BOAT)
            CLASSDEFIMP(assault_boat,01,ASSAULT_BOAT) {
                BASICS(assault_boat,01)
                crew = QUOTE(DFACTION(Soldier_01));
            };
        #endif

        #ifdef SDV
            IMPORTVEHICLE(SDV)
            CLASSDEFIMP(sdv,01,SDV) {
                BASICS(sdv,01)
                crew = QUOTE(DFACTION(Diver_01));
            };
        #endif

};


