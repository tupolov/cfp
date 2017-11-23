class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class CFP_U_O_RUMVD_Gorka_Grey: Uniform_Base
	{
		scope=2;
		model = "\x\cfp\addons\models\Suitpack";
		displayName = "Russian Gorka";
		picture = "\x\cfp\addons\o_rumvd\data\UI\icon_u_o_gorka_olive_ca.paa";
		author = "Tupolov";

		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CFP_O_RUMVD_Gorka_Grey";
			containerClass="Supply60";
			mass=80;
		};
	};
};
