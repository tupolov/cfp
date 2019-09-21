class cfgVoice
{
	voices[]+=
	{
		"Male01_ackbar"
	};
	micOuts[]=
	{
		"micOut1",
		"micOut2",
		"micOut3",
		"micOut4",
		"micOut5",
		"micOut6"
	};
	class Base;
	class Base_ackbar: Base
	{
		protocol="RadioProtocol_Ackbar";
		variants[]={0.94999999,1,1.05};
		voiceType="";
		scope=0;
		directories[]=
		{
			"",
			""
		};
		identityTypes[]=
		{
			"default",
			"Head_Default",
			"Head_Special",
			"Language_Ackbar"
		};

	};
	/*
	class Ackbar_isc: Base_ackbar
	{
		protocol="RadioProtocol_Ackbar";
		identityTypes[]=
		{
			"Language_Ackbar"
		};
	};
	*/
	class Male01_ackbar: Base_ackbar
	{
		directories[]=
		{
			"\x\cfp\addons\protocols\Male01ACK\",
			"\x\cfp\addons\protocols\Male01ACK\"
		};
		scope=2;
		displayName="Ackbar";
		author="AccuracyThruVolume";
	};

};