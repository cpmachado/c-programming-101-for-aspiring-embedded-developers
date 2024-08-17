/*
 * Led blinker using ATMEGA 328p
 * Using pin B0
 **/

#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL

int main(void) {

  /* Turn pin to ouput */
  DDRB |= _BV(DDB0);

  /* On/Off every 0.5 s*/
  for (;;) {
    PORTB ^= _BV(PB0);
    _delay_ms(500);
  }
  return 0;
}
