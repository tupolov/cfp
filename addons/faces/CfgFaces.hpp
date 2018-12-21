#define TATTOO_CLASS(a,b) \
        class a##_tattoo_##b## : ##a \
        { \
            displayName = ##a## (Tattoo ##b##); \
            textureHL = \x\cfp\addons\faces\data\Tattoo##b##.jpg; \
            textureHL2 = \x\cfp\addons\faces\data\Tattoo##b##.jpg; \
        };

#define ADD_TATTOO(c,n) class c##; \
        TATTOO_CLASS(c,n)


class CfgFaces
{
    class Default
    {
        class Custom;
    };
    class Man_A3: Default
    {
        class Default;
        // Selectable BIS legends
        class Dwarden : Default {
            disabled = 0;
        };
        class Jay : Default {
            disabled = 0;
        };
        class Ivan : Default {
            disabled = 0;
        };
        class Pettka : Default {
            disabled = 0;
        };
        class Hladas : Default {
            disabled = 0;
        };

        // Woodland Camo
        class SP_WoodlandFace: Default
        {
            displayname = "SP Woodland Face";
            texture = "\x\cfp\addons\faces\data\Woodland1.paa";
            material = "\x\cfp\addons\faces\data\custom.rvmat";
            disabled = 0;
        };
        class SP_WoodlandFace1: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 1";
            texture = "\x\cfp\addons\faces\data\Woodland1.paa";
        };
        class SP_WoodlandFace2: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 2";
            texture = "\x\cfp\addons\faces\data\Woodland2.paa";
        };
        class SP_WoodlandFace3: SP_WoodlandFace
        {
            displayname = "SP Woodland Face 3";
            texture = "\x\cfp\addons\faces\data\Woodland3.paa";
        };

        // Add Tattoos
        ADD_TATTOO(CamoHead_White_01_F,1)
        ADD_TATTOO(CamoHead_White_02_F,2)
        ADD_TATTOO(CamoHead_White_03_F,3)
        ADD_TATTOO(CamoHead_White_04_F,4)
        ADD_TATTOO(CamoHead_White_05_F,5)
        ADD_TATTOO(CamoHead_White_06_F,6)
        ADD_TATTOO(CamoHead_White_07_F,7)
        ADD_TATTOO(CamoHead_White_08_F,8)
        ADD_TATTOO(CamoHead_White_09_F,9)
        ADD_TATTOO(CamoHead_White_10_F,4)
        ADD_TATTOO(CamoHead_White_11_F,1)
        ADD_TATTOO(CamoHead_White_12_F,2)
        ADD_TATTOO(CamoHead_White_13_F,3)
        ADD_TATTOO(CamoHead_White_14_F,4)
        ADD_TATTOO(CamoHead_White_15_F,5)
        ADD_TATTOO(CamoHead_White_16_F,6)
        ADD_TATTOO(CamoHead_White_17_F,7)
        ADD_TATTOO(CamoHead_White_18_F,8)
        ADD_TATTOO(CamoHead_White_19_F,9)
        ADD_TATTOO(CamoHead_White_20_F,7)
        ADD_TATTOO(CamoHead_White_21_F,1)

        ADD_TATTOO(WhiteHead_01,1)
        ADD_TATTOO(WhiteHead_02,2)
        ADD_TATTOO(WhiteHead_03,3)
        ADD_TATTOO(WhiteHead_04,4)
        ADD_TATTOO(WhiteHead_05,5)
        ADD_TATTOO(WhiteHead_06,6)
        ADD_TATTOO(WhiteHead_07,7)
        ADD_TATTOO(WhiteHead_08,8)
        ADD_TATTOO(WhiteHead_09,9)
        ADD_TATTOO(WhiteHead_10,4)
        ADD_TATTOO(WhiteHead_11,1)
        ADD_TATTOO(WhiteHead_12,2)
        ADD_TATTOO(WhiteHead_13,3)
        ADD_TATTOO(WhiteHead_14,4)
        ADD_TATTOO(WhiteHead_15,5)
        ADD_TATTOO(WhiteHead_16,6)
        ADD_TATTOO(WhiteHead_17,7)
        ADD_TATTOO(WhiteHead_18,8)
        ADD_TATTOO(WhiteHead_19,9)
        ADD_TATTOO(WhiteHead_20,7)
        ADD_TATTOO(WhiteHead_21,1)
        ADD_TATTOO(WhiteHead_22_a,2)
        ADD_TATTOO(WhiteHead_22_l,3)
        ADD_TATTOO(WhiteHead_22_sa,4)
        ADD_TATTOO(WhiteHead_23,5)
    };
};