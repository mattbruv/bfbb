#ifndef ZNPCGOALBOSS_H
#define ZNPCGOALBOSS_H

#include "zNPCGoalCommon.h"

#define NPC_GOAL_ID_EXIST NPC_GOAL_ID('B', 0)
#define NPC_GOAL_ID_SANDYIDLE NPC_GOAL_ID('B', 1)
#define NPC_GOAL_ID_SANDYTAUNT NPC_GOAL_ID('B', 2)
#define NPC_GOAL_ID_SANDYCHASE NPC_GOAL_ID('B', 3)
#define NPC_GOAL_ID_SANDYMELEE NPC_GOAL_ID('B', 4)
#define NPC_GOAL_ID_SANDYNOHEAD NPC_GOAL_ID('B', 5)
#define NPC_GOAL_ID_SANDYELBOWDROP NPC_GOAL_ID('B', 6)
#define NPC_GOAL_ID_SANDYLEAP NPC_GOAL_ID('B', 7)
#define NPC_GOAL_ID_SANDYSIT NPC_GOAL_ID('B', 8)
#define NPC_GOAL_ID_SANDYGETUP NPC_GOAL_ID('B', 9)
#define NPC_GOAL_ID_SANDYRUNTOROPE NPC_GOAL_ID('B', 10)
#define NPC_GOAL_ID_SANDYCLOTHESLINE NPC_GOAL_ID('B', 11)
#define NPC_GOAL_ID_BOSSSB1IDLE NPC_GOAL_ID('B', 12)
#define NPC_GOAL_ID_BOSSSB1TAUNT NPC_GOAL_ID('B', 13)
#define NPC_GOAL_ID_BOSSSB1STOMP NPC_GOAL_ID('B', 14)
#define NPC_GOAL_ID_BOSSSB1SMASH NPC_GOAL_ID('B', 15)
#define NPC_GOAL_ID_BOSSSB1DEFLATE NPC_GOAL_ID('B', 16)
#define NPC_GOAL_ID_BOSSPATIDLE NPC_GOAL_ID('B', 42)
#define NPC_GOAL_ID_BOSSPATTAUNT NPC_GOAL_ID('B', 43)
#define NPC_GOAL_ID_BOSSPATHIT NPC_GOAL_ID('B', 44)
#define NPC_GOAL_ID_BOSSPATSPIT NPC_GOAL_ID('B', 45)
#define NPC_GOAL_ID_BOSSPATRUN NPC_GOAL_ID('B', 46)
#define NPC_GOAL_ID_BOSSPATSMACK NPC_GOAL_ID('B', 47)
#define NPC_GOAL_ID_BOSSPATFREEZE NPC_GOAL_ID('B', 48)
#define NPC_GOAL_ID_BOSSPATSPAWN NPC_GOAL_ID('B', 49)
#define NPC_GOAL_ID_BOSSPATSPIN NPC_GOAL_ID('B', 50)
#define NPC_GOAL_ID_BOSSPATFUDGE NPC_GOAL_ID('B', 51)

xFactoryInst* GOALCreate_Boss(int32 who, RyzMemGrow* grow, void*);

#endif