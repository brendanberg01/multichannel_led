/*
 * file: multichannel_led.c
 * author: Brendan Berg
 * MIT License
 * Copyright (c) 2020 Brendan Berg
 */

#include "multichannel_led.h"


void mled_init(mled_Channel* channels, uint8_t channel_num)
{
    for (register uint8_t i = 0u; i < channel_num; ++i)
    {
        *channels[i].ddr |= (1u << channels[i].bit);
    }
}
