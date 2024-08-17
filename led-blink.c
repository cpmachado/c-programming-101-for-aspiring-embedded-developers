/*
 * Led blinker using ATMEGA 328p
 * Using pin B0
 **/
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRB |= _BV(DDB0);

  for (;;) {
    PORTB ^= _BV(PB0);
    _delay_ms(500);
  }
  return 0;
}
