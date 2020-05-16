#include "library.h"

#include <avr/io.h>

void hello()
{
    PORTB ^= (1 << PORTB5);
}
