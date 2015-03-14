#pragma once
#include <stdint.h>

uint8_t bcd_encode(const uint8_t integer);
uint8_t bcd_decode(const uint8_t bcd);
