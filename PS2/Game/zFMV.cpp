typedef enum _GameOstrich;
typedef enum eFMVFile;
typedef struct zFMVFile;


typedef char type_0[64];
typedef zFMVFile type_1[9];
typedef char type_2[32];

enum _GameOstrich
{
	eGameOstrich_Loading,
	eGameOstrich_PlayingMovie,
	eGameOstrich_InScene,
	eGameOstrich_Total
};

enum eFMVFile
{
	eFMVFile_PromoFOP,
	eFMVFile_PromoTak,
	eFMVFile_PromoJN,
	eFMVFile_PromoSB,
	eFMVFile_LogoHeavyIron,
	eFMVFile_LogoNick,
	eFMVFile_LogoRW,
	eFMVFile_LogoTHQ,
	eFMVFile_Demo1,
	eFMVFile_Demo2,
	eFMVFile_Demo3,
	eFMVFile_LogoPixar,
	eFMVFileCount
};

struct zFMVFile
{
	eFMVFile type;
	type_2 fileName;
};

type_1 zFMVFileTable;

char* zFMVFileGetName(eFMVFile fileEnum);
unsigned int zFMVPlay(char* filename, unsigned int buttons, float time, unsigned char skippable, unsigned char lockController);

// zFMVFileGetName__F8eFMVFile
// Start address: 0x175720
char* zFMVFileGetName(eFMVFile fileEnum)
{
	int i;
}

// zFMVPlay__FPcUifbb
// Start address: 0x175780
unsigned int zFMVPlay(char* filename, unsigned int buttons, float time, unsigned char skippable, unsigned char lockController)
{
	type_0 fullname;
	_GameOstrich old;
	unsigned int ret;
}

