/*
 * file: library.c
 * author: Brendan Berg
 * MIT License
 * Copyright (c) 2020 Brendan Berg
 */

#include "library.h"

#include <avr/io.h>

void hello()
{
    PORTB ^= (1 << PORTB5);
}
