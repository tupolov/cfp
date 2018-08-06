class Vest_Camo_Base;

class CFP_AK_VEST: Vest_Camo_Base
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST.paa";
	scope = 2;
	displayName = "AK MAG Vest";
	// picture = "\x\cfp\addons\vests\AK_Vest\data\icon_chest_rig.paa";
	author = "Yugoslav";
	model = "x\cfp\addons\vests\AK_Vest\data\model\UO_AK_VEST.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_liz_co.paa"};


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

	displayName = "AK Chest Rig Light Olive";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_lightolive_co.paa"};
};

class CFP_AK_VEST_Olive: CFP_AK_VEST
{
    picture = "\x\cfp\addons\vests\data\ui\icon_CFP_AK_VEST_Olive.paa";

	displayName = "AK Chest Rig Olive";
	hiddenSelectionsTextures[] = {"x\cfp\addons\vests\AK_Vest\data\tak_soldier_equip_olive_co.paa"};

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
