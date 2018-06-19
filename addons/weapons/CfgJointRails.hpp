// CBA JR Compat
	class SlotInfo;
	class asdg_OpticRail;
	class asdg_OpticRail1913: asdg_OpticRail
	{
		class compatibleItems
		{
			CFP_optic_ELCAN_SpecterDR_Black = 1;
		};
	};
	class asdg_OpticRail1913_short: asdg_OpticRail1913 {};
	class asdg_OpticRail1913_long: asdg_OpticRail1913 {};

	class asdg_SlotInfo;
	class asdg_FrontSideRail: asdg_SlotInfo
	{
		class compatibleItems
		{
			CFP_acc_ANPEQ15_Black = 1;
		};
	};

	// class asdg_UnderSlot : asdg_SlotInfo {};