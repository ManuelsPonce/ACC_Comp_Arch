#include <avr/io.h>

#define BUZZ_PIN    3
#define BUZZ_PORT   _(PORTB)
#define BUZZ_DIR    _(DDRB)

//inlude this line to avoid SFR_REG issues
#define _(s)    _SFR_IO_ADDR(s)

