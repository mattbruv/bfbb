typedef struct NPCSndTrax;
typedef enum en_NPC_SOUND;
typedef struct NPCSndProp;


typedef float type_0[26];
typedef unsigned int type_1[26];
typedef int type_2[32];
typedef float type_3[32];
typedef char* type_4[26];
typedef NPCSndProp type_5[0];
typedef NPCSndTrax type_6[0];
typedef NPCSndTrax type_7[0];

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
};

enum en_NPC_SOUND
{
	NPC_STYP_BOGUS = 0xfffffffe,
	NPC_STYP_LISTEND = 0,
	NPC_STYP_ENCOUNTER,
	NPC_STYP_CLANKING,
	NPC_STYP_EXCLAIM,
	NPC_STYP_OUCH,
	NPC_STYP_CHEERING,
	NPC_STYP_RESPAWN,
	NPC_STYP_ALERT,
	NPC_STYP_DIZZY,
	NPC_STYP_DANCE,
	NPC_STYP_LAUGH,
	NPC_STYP_ATTACK,
	NPC_STYP_PUNCH,
	NPC_STYP_WEPLAUNCH,
	NPC_STYP_LIGHTNING,
	NPC_STYP_WARNBANG,
	NPC_STYP_DEATH,
	NPC_STYP_DEATHJELLY,
	NPC_STYP_BONKED,
	NPC_STYP_UNBONKED,
	NPC_STYP_TIKISTACK,
	NPC_STYP_TIKIEXPLODE,
	NPC_STYP_TIKITHUNDER,
	NPC_STYP_XSFXTALK,
	NPC_STYP_ONELINER,
	NPC_STYP_ONELINERTOO,
	NPC_STYP_NOMORE,
	NPC_STYP_FORCE = 0x7fffffff
};

struct NPCSndProp
{
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tym_delayNext;
};

type_0 g_tmrz_sndplay;
type_1 g_hash_sndgroup;
type_4 g_strz_sndgroup;
type_6 g_sndTrax_Universal;
type_7 g_sndTrax_General;
type_5 g_sndProps;

unsigned int NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share);
en_NPC_SOUND NPCS_SndTypeFromHash(unsigned int aid_snd, NPCSndTrax* cust, NPCSndTrax* share);
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype);
void NPCS_SndTablePrepare(NPCSndTrax* trax);
int NPCS_SndOkToPlay(en_NPC_SOUND sndtype);
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, float delayNext);
void NPCS_SndTimersReset();
void NPCS_SndTimersUpdate(float dt);
void NPCS_Shutdown();
void NPCS_Startup();

// NPCS_SndPickSimilar__F12en_NPC_SOUNDP10NPCSndTraxP10NPCSndTrax
// Start address: 0x310330
unsigned int NPCS_SndPickSimilar(en_NPC_SOUND sndtype, NPCSndTrax* cust, NPCSndTrax* share)
{
	unsigned int aid_choice;
	NPCSndTrax* trax;
	int i;
	int ingroup;
	type_2 list;
	type_3 wts;
	int cnt;
	float use_wt;
}

// NPCS_SndTypeFromHash__FUiP10NPCSndTraxP10NPCSndTrax
// Start address: 0x3105a0
en_NPC_SOUND NPCS_SndTypeFromHash(unsigned int aid_snd, NPCSndTrax* cust, NPCSndTrax* share)
{
	en_NPC_SOUND da_type;
	NPCSndTrax* trax;
	int i;
}

// NPCS_SndFindProps__F12en_NPC_SOUND
// Start address: 0x310640
NPCSndProp* NPCS_SndFindProps(en_NPC_SOUND sndtype)
{
	NPCSndProp* sprop;
}

// NPCS_SndTablePrepare__FP10NPCSndTrax
// Start address: 0x310680
void NPCS_SndTablePrepare(NPCSndTrax* trax)
{
	unsigned int hash;
}

// NPCS_SndOkToPlay__F12en_NPC_SOUND
// Start address: 0x310700
int NPCS_SndOkToPlay(en_NPC_SOUND sndtype)
{
}

// NPCS_SndTypePlayed__F12en_NPC_SOUNDf
// Start address: 0x310760
void NPCS_SndTypePlayed(en_NPC_SOUND sndtype, float delayNext)
{
	float tym;
}

// NPCS_SndTimersReset__Fv
// Start address: 0x3107e0
void NPCS_SndTimersReset()
{
	int i;
}

// NPCS_SndTimersUpdate__Ff
// Start address: 0x310850
void NPCS_SndTimersUpdate(float dt)
{
	int i;
}

// NPCS_Shutdown__Fv
// Start address: 0x3108a0
void NPCS_Shutdown()
{
}

// NPCS_Startup__Fv
// Start address: 0x3108b0
void NPCS_Startup()
{
	int i;
}

