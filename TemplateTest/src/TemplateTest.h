#pragma once
#include "../CommonLib/include/Slot.h"
#include "../CommonLib/include/rnd_log.h"
#include "TemplateTest_config.h"
#include "TemplateTest_stats.h"

class TemplateTest :
    public Slot
{
public:
    void generate_json(Game_info info);
    TemplateTest_config config;
    TemplateTest_stats stats;

    void init(Game_info info);

    void play(unsigned long long plays);

    
#ifdef LOG_PLAYS
    //Random logs
    rnd_log randomLogs;
#endif


private:

    unsigned bet_for_cap;
    unsigned plays_to_print;

};

