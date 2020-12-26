#ifndef ZTASKBOX_H
#define ZTASKBOX_H

#include "../Core/x/xBase.h"
#include "../Core/x/xDynAsset.h"

#include "zNPCTypeCommon.h"

enum answer_enum
{
    ANSWER_CONTINUE,
    ANSWER_YES,
    ANSWER_NO
};

enum state_enum
{
    STATE_INVALID = 0xffffffff,
    STATE_BEGIN,
    STATE_DESCRIPTION,
    STATE_REMINDER,
    STATE_SUCCESS,
    STATE_FAILURE,
    STATE_END,
    MAX_STATE
};

struct callback_0
{
};

struct callback_1
{
};

struct asset_type_1 : xDynAsset
{
    uint8 persistent : 8;
    uint8 loop : 8;
    uint8 enable : 8;
    uint8 retry : 8;
    uint32 talk_box;
    uint32 next_task;
    uint32 stages[6];
};

struct _class_0
{
    struct
    {
        uint8 enabled : 8;
        uint32 dummy : 24;
    };
};

struct ztaskbox : xBase
{
    _class_0 flag;
    asset_type_1* asset;
    state_enum state;
    callback_0* cb;
    ztaskbox* current;

    void on_talk_stop();
    void set_state(state_enum state);
    void set_callback(callback_0* cb);
    void stop_talk();
    void start_talk(zNPCCommon* npc);
    void write(xSerial& s);
    void read(xSerial& s);
    void load(asset_type_1& a);
};

struct talk_callback : callback_1
{
    ztaskbox* task;
    answer_enum answer;

    void on_start();
    void on_stop();
    void on_answer(answer_enum answer);
};

#endif