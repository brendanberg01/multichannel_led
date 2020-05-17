/*
 * file: multichannel_led.h
 * author: Brendan Berg
 * MIT License
 * Copyright (c) 2020 Brendan Berg
 */

#ifndef MULTICHANNEL_LED_MULTICHANNEL_LED_H
#define MULTICHANNEL_LED_MULTICHANNEL_LED_H

#include <avr/io.h>

void hello(void);

struct mled_Color
{
    uint8_t green;
    uint8_t red;
    uint8_t blue;
};

typedef struct mled_Color mled_Color;


#endif //MULTICHANNEL_LED_MULTICHANNEL_LED_H
