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
    // assume atmega328p

    // disconnect OC0A and OC0B pin
    TCCR0A &= ~((1 << COM0A0) & (1 << COM0A1) & (1 << COM0B0) & (1 << COM0B1));

    // enable CTC mode
    TCCR0A &= ~(1 << WGM00);
    TCCR0A |= (1 << WGM01);
    TCCR0B &= ~(1 << WGM02);

    // and the next thing you have to setup is the prescaler for the clocksource
    // this is also the point you realize that there are only a handful of clock cycles left between
    // each ISR call used to transmit the data
    // way to little to make anything useful like figuring out which color on each channel is next
    // and that is why this project comes to an end
}


void mled_transmission_start(mled_Channel* channels, uint8_t channel_num, mled_Color* colors)
{
    // TODO: invoke ISR series
    // TODO: remove placeholder code

    // placeholder
    for (register uint8_t i = 0u; i < channel_num; ++i)
    {
        *channels[i].port &= ~(1u << channels[i].bit);
    }

    // placeholder
    uint8_t filler = colors[0].green;
    colors[0].green = filler;
}
