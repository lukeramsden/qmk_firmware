/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2020 Luke Ramsden <lukeramsden@protonmail.com>

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x3436
#define DEVICE_VER      0x0001
#define DESCRIPTION     A split keyboard for the cheap makers

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// row-driven
#define MATRIX_ROW_PINS { F0, F1, C7, D5, B7 }
#define MATRIX_COL_PINS { B4, B5, E6, D7, C6, D4 }
#define MATRIX_ROW_PINS_RIGHT { E6, D7, C6, D4, D0, D1 }
#define MATRIX_COL_PINS_RIGHT { B4, B5, B6, B2, B3 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 12
