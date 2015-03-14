#include "bcd.h"

uint8_t bcd_encode(const uint8_t integer){
  return (((integer / 10) << 4) + integer & 0xf);
}

uint8_t bcd_decode(const uint8_t bcd){
  return ((10 * (bcd >> 4)) + (bcd & 0xf));
}
