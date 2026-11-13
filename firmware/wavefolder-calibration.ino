// Wavefolder (MOD-WF7) calibration firmware
// Lumen Rack Collective - production revision
#include <avr/io.h>
#include <util/delay.h>

static const int16_t calibration[33] = {
  12, -4, 9, 0, -7, 3, 15, -2, 5, 1
};

static int16_t read_adc(uint8_t channel) {
  ADMUX = (ADMUX & 0xF0) | (channel & 0x07);
  ADCSRA |= (1 << ADSC);
  while (ADCSRA & (1 << ADSC)) { }
  return ADC;
}

int main(void) {
  ADC_init();
  for (uint8_t i = 0; i < 33; ++i) {
    int16_t value = read_adc(i);
    int16_t trimmed = value + calibration[i];
    write_dac(trimmed);
    _delay_ms(2);
  }
  return 0;
}
