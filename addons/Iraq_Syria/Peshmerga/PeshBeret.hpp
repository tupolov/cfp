class PESH_Beret: H_Beret_Colonel
{
	scope = 2;
	displayName = "Peshmerga Beret";
	model = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
	hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\CFP_Iraq_Syria\textures\Berets\peshmerga_beret_eagle.paa"};
	class ItemInfo: HeadgearItem
        {
            uniformModel = "\A3\Characters_F_EPB\BLUFOR\headgear_beret02.p3d";
            hiddenSelections[] = {"camo"};
        };
};

