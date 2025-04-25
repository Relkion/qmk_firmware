/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

#define EE_HANDS
// #define USB_VBUS_PIN        B10 // doesn't seem to work for me on one of my controllers... */
// #define SPLIT_HAND_PIN      C14  // high = left, low = right

// WS2812 RGB LED strip input and number of LEDs
#define WS2812_PWM_DRIVER   PWMD2  // default: PWMD2
#define WS2812_PWM_CHANNEL  2      // default: 2
#define WS2812_PWM_PAL_MODE 1      // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_EXTERNAL_PULLUP
//#define WS2812_PWM_COMPLEMENTARY_OUTPUT // Define for a complementary timer output (TIMx_CHyN); omit for a normal timer output (TIMx_CHy).
#define WS2812_PWM_DMA_STREAM   STM32_DMA1_STREAM7  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_PWM_DMA_CHANNEL  3                   // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_PWM_TARGET_PERIOD 800000

#define DEBUG_LED_PIN      C13

/* Audio config */
#define AUDIO_PIN          B1
#define AUDIO_PWM_DRIVER   PWMD3
#define AUDIO_PWM_CHANNEL  4
#define AUDIO_PWM_PAL_MODE 2

/* serial.c configuration for split keyboard */
#define SERIAL_USART_FULL_DUPLEX  // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN      A2
#define SERIAL_USART_RX_PIN      A3
#define SERIAL_USART_DRIVER      SD2
#define SERIAL_USART_TX_PAL_MODE 7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7    // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED       921600

#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

/* i2c config for oleds */
#define I2C_DRIVER        I2CD1
#define I2C1_SCL_PIN      B8
#define I2C1_SDA_PIN      B9
#define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_PAL_MODE 4
#define I2C1_CLOCK_SPEED  400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_16_9
