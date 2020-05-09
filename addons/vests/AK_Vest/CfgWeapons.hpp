class Vest_Camo_Base;

class CFP_AK_VEST: Vest_Camo_Base
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST.paa";
	scope = 2;
	displayName = "AK MAG Vest";
	// picture = "\x\cfp\addons\vests\AK_Vest\data\icon_chest_rig.paa";
	author = "CFP";
	model = "x\cfp\addons\vests\AK_Vest\data\model\UO_AK_VEST.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_co.paa"};


	class ItemInfo: VestItem
	{

		uniformModel = "x\cfp\addons\vests\AK_Vest\data\model\UO_AK_VEST.p3d";
		containerClass = "Supply100";
		mass = 25;
		armor = "2";
		passThrough = true;
		hiddenSelections[] = {"camo"};
		HiddenSelectionsTextures[] = {};

	};
};

class CFP_AK_VEST_Black: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Black.paa";

	displayName = "AK Chest Rig Black";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_black_co.paa"};
};

class CFP_AK_VEST_EDRL: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_EDRL.paa";

	displayName = "AK Chest Rig EDRL";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_erdl_co.paa"};

};

class CFP_AK_VEST_LOlive: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_LOlive.paa";

	displayName = "AK Chest Rig OD";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_lightolive_co.paa"};
};

class CFP_AK_VEST_Olive: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "AK Chest Rig Olive";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_olive_co.paa"};

};

class CFP_AK_VEST_EMR: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "AK Chest Rig EMR";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_emr_co.paa"};
};

class CFP_AK_VEST_VSR98: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "AK Chest Rig VSR-98";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_vsr98_co.paa"};
};

class CFP_M23_VEST_VSR98: Vest_Camo_Base
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST.paa";
	scope = 2;
	displayName = "M23 Pioneer (VSR-98)";
	// picture = "\x\cfp\addons\vests\AK_Vest\data\icon_chest_rig.paa";
	author = "CFP";
	model = "x\cfp\addons\vests\AK_Vest\data\model\CFP_TK_Vest1.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_vsr98_co.paa"};


	class ItemInfo: VestItem
	{

		uniformModel = "x\cfp\addons\vests\AK_Vest\data\model\CFP_TK_Vest1.p3d";
		containerClass = "Supply100";
		mass = 30;
		armor = "2";
		passThrough = true;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_vsr98_co.paa"};

	};
};

class CFP_M23_VEST_EMR: CFP_M23_VEST_VSR98
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "M23 Pioneer (EMR)";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_emr_co.paa"};
};

class CFP_M23_VEST_MCam: CFP_M23_VEST_VSR98
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "M23 Pioneer (Multicam)";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_mcam_co.paa"};
};

class CFP_M23_VEST_Lizard: CFP_M23_VEST_VSR98
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "M23 Pioneer (Taki Lizard)";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_co.paa"};
};

class CFP_M23_VEST_Lime: CFP_M23_VEST_VSR98
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "M23 Pioneer (Lime Green)";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_limegreen.paa"};
};

class CFP_AK_VEST_Tan: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Tan.paa";

	displayName = "AK Chest Rig Tan";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_tan_co.paa"};
};

class CFP_AK_VEST_Flora_Arid: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Flora_Arid.paa";

	displayName = "AK Chest Rig Flora Arid";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_flora_arid.paa"};
};

class CFP_AK_VEST_Lime: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Lime.paa";

	displayName = "AK Chest Rig Lime";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_limegreen.paa"};
};

class CFP_AK_VEST_M81: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Lime.paa";

	displayName = "AK Chest Rig M81";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_m81.paa"};
};

class CFP_M23_VEST_M81: CFP_M23_VEST_VSR98
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "M23 Pioneer (Woodland)";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_m81.paa"};
};

class CFP_AK_VEST_Marpat: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Lime.paa";

	displayName = "AK Chest Rig Marpat";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_marpat.paa"};
};

class CFP_Field_Satchel: Vest_Camo_Base
	{
		author = "CFP";
		scope = 2;
		displayName = "Field Satchel";
		model = "x\cfp\addons\vests\AK_Vest\cfp_satchel2.p3d";
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\satchelbrown.paa"};
		picture = "\CUP\Weapons\CUP_Weapons_Backpacks\data\ui\icon_b_c_GER_Medic_Desert_ca.paa";

		class ItemInfo: VestItem
	{

		uniformModel = "x\cfp\addons\vests\AK_Vest\cfp_satchel2.p3d";
		containerClass = "Supply100";
		mass = 25;
		armor = "2";
		passThrough = true;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\satchelbrown.paa"};

	};
};
