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

    // TODO: timer setup
}


void mled_transmission_start(mled_Channel* channels, uint8_t channel_num, mled_Color* colors)
{
    // TODO: invoke interrupt series
    // TODO: remove placeholder code
    for (register uint8_t i = 0u; i < channel_num; ++i)
    {
        *channels[i].port &= ~(1u << channels[i].bit);
    }

    uint8_t filler = colors[0].green;
    colors[0].green = filler;
}
