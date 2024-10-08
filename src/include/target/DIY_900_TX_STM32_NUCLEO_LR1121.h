#ifndef DEVICE_NAME
#define DEVICE_NAME "ELRS 900TX"
#endif

#define TARGET_DIY_900_TX_STM32_PCB

#define BACKPACK_LOGGING_BAUD 420000

#define GPIO_PIN_MOSI        PA7
#define GPIO_PIN_MISO        PA6
#define GPIO_PIN_SCK         PA5

#define GPIO_PIN_BUSY        PB3
#define GPIO_PIN_DIO1        PB4
#define GPIO_PIN_NSS         PA8
#define GPIO_PIN_RST         PA0

#define GPIO_PIN_RCSIGNAL_RX PB7  // UART 1
#define GPIO_PIN_RCSIGNAL_TX PB6  // UART 1

#define GPIO_PIN_DEBUG_RX    PA3  // UART 2
#define GPIO_PIN_DEBUG_TX    PA2  // UART 2

#define GPIO_PIN_LED_GREEN   PC0
#define GPIO_LED_GREEN_INVERTED 0

#define GPIO_PIN_LED_RED   PC1
#define GPIO_LED_RED_INVERTED 0

#define LR1121_RFSW_CTRL_COUNT 8
#define LR1121_RFSW_CTRL      {3,0,1,3,2,0,0,0}
//                                      EN    Stby  RX    TX    TXHP  TXHF  U     Wifi
// const uint16_t LR1121_RFSW_CTRL[] = {0b11, 0b00, 0b01, 0b11, 0b10, 0b00, 0b00, 0b00};

#define GPIO_PIN_BUTTON PC13

// #define RADIO_LR1121

// Output Power
#define MinPower                 PWR_10mW
#define MaxPower                 PWR_100mW
#define DefaultPower             PWR_100mW
#define POWER_OUTPUT_VALUES      {12,16,19,22}
