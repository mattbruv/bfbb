#ifndef ZENTPLAYER_H
#define ZENTPLAYER_H

struct zPlayerGlobals {
    // int unk0[0x6c0];
    char unk00[5806];
    unsigned int Health;
	int Speed;
	float SpeedMult;
    char unk0[90 - 8];
    float ControlOffTimer; // AutoMoveDist?
    // 40 bytes from here = max health
    char unk01[34];
    unsigned int MaxHealth;
    char unk1[958 + 4];
    unsigned int Inv_Shiny;
    unsigned int Inv_Spatula;
};

struct zGlobals {
    zPlayerGlobals player;
};

void zEntPlayer_GiveHealth(int quantity);
void zEntPlayer_GiveSpatula(int quantity);
void zEntPlayer_GiveShinyObject(int quantity);

#endif