#include "config.inc"

.equ    PRESET    ,1
        
        .section  .text

        .global    timer_delay
        .global    timer_init

timer_init:
    ldi    r16, (1 << CS01) / (1 << CS00)   ;devide by 64
    out    _(TCCR0B), r16                   ;set timer clock
    ldi    r16, 1 << T0V0                   ;clear interrupt flag
    out    _(TIFR0), r16
    ldi    r16, PRESET                      ;initial value for timer
    out    _(TCNT0), r16
    ret

timer_delay:
    in     r16, _(TIFR0)                   ;check the flag
    sbrs   r16, 1 << T0V0                  ;skip if overflow is set
    rjmp   timer_delay                     ;wait for it 
    ldi    r16, 1 << T0V0                  ;clear interrupt flag
    out    _(TIFR0), r16                   ;clear the interrupt flag
    ldi    r16, PRESET                     ;reload the counter
    out    _(TCNT0), r16                   ;set preset in 
    ret

