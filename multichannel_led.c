/*
 * file: multichannel_led.c
 * author: Brendan Berg
 * MIT License
 * Copyright (c) 2020 Brendan Berg
 */

#include "multichannel_led.h"

void hello()
{
    PORTB ^= (1 << PORTB5);
}
