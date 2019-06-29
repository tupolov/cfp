
#define OPSCORE(cls, dn, pic, model_p3d, tex1,tex2,tex3, flag_tex) \
class cls : ItemCore { \
	scope = 2; \
	author = "$STR_CUP_AUTHOR_STRING"; \
	dlc = "CUP_Units"; \
	displayName  = dn; \
	descriptionShort = ""; \
	picture = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\ui\##pic; \
	model = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_##model_p3d##.p3d; \
	hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"}; \
	hiddenSelectionsTextures[] = { \
		\x\cfp\addons\headgear\75Headgear\tex\##tex1, \
		\x\cfp\addons\headgear\75Headgear\tex\##tex2, \
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\##tex3, \
		flag_tex \
	}; \
	class ItemInfo: HeadgearItem \
	{ \
		mass = 10; \
		uniformModel = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_##model_p3d##.p3d; \
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT}; \
		modelSides[] = {6}; \
		armor = 0; \
		passThrough = 0.5; \
		hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"}; \
		hiddenSelectionsTextures[] = { \
		\x\cfp\addons\headgear\75Headgear\tex\##tex1, \
		\x\cfp\addons\headgear\75Headgear\tex\##tex2, \
		\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\data\##tex3,	\
		flag_tex \
		}; \
		class HitpointsProtectionInfo \
		{ \
			class Head \
			{ \
				hitpointName = "HitHead"; \
				armor = 10; \
				passThrough = 0.5; \
			}; \
		}; \
	}; \
}


#define OPSCORE_G(cls, dn, pic, model_p3d, tex1,tex2,tex3, flag_tex) \
class cls : ItemCore { \
	scope = 2; \
	author = "$STR_CUP_AUTHOR_STRING"; \
	dlc = "CUP_Units"; \
	displayName  = dn; \
	descriptionShort = ""; \
	picture = pic; \
	model = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_##model_p3d##.p3d; \
	hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"}; \
	hiddenSelectionsTextures[] = { \
		tex1, \
		tex2, \
		tex3, \
		flag_tex \
	}; \
	class ItemInfo: HeadgearItem \
	{ \
		mass = 10; \
		uniformModel = \CUP\Creatures\People\Military\CUP_Creatures_People_Military_Extra\opscore\CUP_ops_core_##model_p3d##.p3d; \
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT}; \
		modelSides[] = {6}; \
		armor = 0; \
		passThrough = 0.5; \
		hiddenSelections[] = {"camo1", "camo2", "camo3", "flag"}; \
		hiddenSelectionsTextures[] = { \
		tex1, \
		tex2, \
		tex3,	\
		flag_tex \
		}; \
		class HitpointsProtectionInfo \
		{ \
			class Head \
			{ \
				hitpointName = "HitHead"; \
				armor = 10; \
				passThrough = 0.5; \
			}; \
		}; \
	}; \
}

