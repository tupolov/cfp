#define ADD_UNIFORM_W(CLASS,FOLDER,NAME,CAMO,AUTHOR) \
	class CFP_U_##CLASS##_##CAMO##: Uniform_Base \
	{ \
		scope=2; \
		model = "\x\cfp\addons\models\Suitpack"; \
		displayName = NAME; \
		author = AUTHOR; \
		picture = \x\cfp\addons\uniforms\data\ui\icon_cfp_u_##CLASS##_##CAMO##.paa; \
		class ItemInfo: UniformItem \
		{ \
			uniformModel = "-"; \
			uniformClass = CFP_##CLASS##_##CAMO##; \
			containerClass="Supply60"; \
			mass=80; \
		}; \
	};

class CfgWeapons {
	class Uniform_Base;
	class UniformItem;
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadGearItem;
	class V_PlateCarrier1_rgr;
	class VestItem;

	#include "BattleDressUniform\CfgWeapons.hpp"
	#include "Coverall\CfgWeapons.hpp"
	#include "FieldUniform\CfgWeapons.hpp"
	#include "KhetPartug\CfgWeapons.hpp"
	#include "PulloverUniform\CfgWeapons.hpp"
	#include "WorkUniform\CfgWeapons.hpp"
	#include "TacticalUniform\CfgWeapons.hpp"
	#include "Underwear\CfgWeapons.hpp"
	#include "75Uniform\CfgWeapons.hpp"
	#include "Guerrilla\CfgWeapons.hpp"
	#include "BDU\CfgWeapons.hpp"
	#include "ACU\CfgWeapons.hpp"
};