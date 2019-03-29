; blink - blink an LED on PB0 on and off at a .5 second rate

#include "config.inc"

    .global    main
    .extern    setup
    .extern    blink

    .section    .text
main:
        rcall    setup
1:      rcall    blink
        rjmp     1b
