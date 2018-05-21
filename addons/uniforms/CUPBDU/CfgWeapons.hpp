	class CFP_U_ACU_OCP: Uniform_Base
    {
        picture = "\x\cfp\addons\uniforms\data\ui\icon_ru_digi_uniform.paa";
		scope=2;
		model = "\x\cfp\addons\models\Suitpack";
		displayName = "ACU (OCP)";
		author = "AuburnAlumni";

		class ItemInfo: UniformItem
		{
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_USarmy_base.p3d";
			uniformClass = "CFP_ACU_OCP";
			containerClass="Supply40";
			mass=20;
		};
	};

