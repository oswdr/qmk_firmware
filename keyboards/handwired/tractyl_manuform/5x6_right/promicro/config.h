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

#define PRODUCT Tractyl Manuform(5x6) pro micro

// wiring of each half
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION ROW2COL

// WS2812 RGB LED strip input and number of LEDs
//#define RGB_DI_PIN      D3
#define RGBLED_NUM      20
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT \
    { 10, 10 }
#define RGBLIGHT_LIMIT_VAL 80

#define AUDIO_PIN       C6

/* serial.c configuration for split keyboard */
#define USE_I2C
#define EE_HANDS

#define ENCODERS_PAD_A \
    { D5 }
#define ENCODERS_PAD_B \
    { C7 }

/* PMW3360 Settings */
#define PMW3360_CS_PIN F7
