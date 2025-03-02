#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // P0 pins
  0,   // P0.00 (connected to 32.768kHz crystal)
  1,   // P0.01 (connected to 32.768kHz crystal)
  2,   // P0.02 (AIN0)
  3,   // P0.03
  4,   // P0.04 (AIN2, Battery)
  5,   // P0.05 (SPI CS/SS)
  6,   // P0.06 (UART RX)
  7,   // P0.07
  8,   // P0.08 (UART TX)
  9,   // P0.09 (NFC1)
  10,  // P0.10 (NFC2)
  11,  // P0.11
  12,  // P0.12
  13,  // P0.13 (VCC control)
  14,  // P0.14
  15,  // P0.15 (LED)
  16,  // P0.16
  17,  // P0.17 (SDA)
  18,  // P0.18 (RESET)
  19,  // P0.19
  20,  // P0.20 (SCL)
  21,  // P0.21
  22,  // P0.22 (SPI SCK)
  23,  // P0.23
  24,  // P0.24 (SPI SDO/MOSI)
  25,  // P0.25
  26,  // P0.26
  27,  // P0.27
  28,  // P0.28
  29,  // P0.29 (AIN5)
  30,  // P0.30
  31,  // P0.31 (AIN7)

  // P1 pins
  32,  // P1.00 (SPI SDI/MISO)
  33,  // P1.01
  34,  // P1.02 (Button)
  35,  // P1.03
  36,  // P1.04
  37,  // P1.05
  38,  // P1.06
  39,  // P1.07
  40,  // P1.08
  41,  // P1.09
  42,  // P1.10
  43,  // P1.11
  44,  // P1.12
  45,  // P1.13
  46,  // P1.14
  47,  // P1.15
};

void initVariant()
{
  // LED
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, !LED_STATE_ON);
  
  // VCC control pin - default to enabled
  pinMode(PIN_VCC_CONTROL, OUTPUT);
  digitalWrite(PIN_VCC_CONTROL, HIGH);
}