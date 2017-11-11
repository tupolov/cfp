TexBody
{
ulong Always1;
ulong Always0;
floats AverageColor[r,g,b,a];//AVGCTAGG floating-point equivalent. Note that order is different
bytes AverageColor[b,g,r,a];//AVGCTAGG in PAx file 
bytes MaxColor[b,g,r,a]; //MAXCTAGG in PAx file
ulong Always0;
ulong AlwaysDefault; // 0xFFFFFFFF
byteBool OnOff[4]; // 01 01 00 01 typical
// 4th bool always set. 3rd bool seems related to NoAlphaWrite
ulong SameCount; // always == nMipmaps
ulong TextureType; // see below
byte Always1;
byte Always1;

Asciiz PaaFile[]; //"data\icons\m4a3_cco_ca.paa"
//"fnfal\data\fnfal_smdi.paa"
ulong SomeCount; //Range 0..12. Might be bitflags
ulong nMipmaps;
MipMap MipMaps[nMipmaps];
ulong EndOfMipMaps; //offset in pax to last (dummy) mipmap
};