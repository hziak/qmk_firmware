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
#include "config_common.h"


// #define PRODUCT         Dactyl-Manuform (6x6)
// #define MASTER_RIGHT
#define MANUFACTURER    Hermann Ziak
#define PRODUCT         Epic Split Left
#define DESCRIPTION     Epic Split Left
/* key matrix size */
// Rows are doubled-up
// #define MATRIX_ROWS 14
// #define MATRIX_COLS 6
#define MATRIX_ROWS 7
#define MATRIX_COLS 6
// wiring of each half

//#define MATRIX_COL_PINS { B6,B5,C6,D7,D0,D1}
#define MATRIX_COL_PINS { D7,C6,B6,B5,D1,D0}
//
//#define MATRIX_ROW_PINS { D3, D2, F0, F1, F4, F5, F6}
//#define MATRIX_ROW_PINS { F0, F4, D2, F1, F5, F6, D3}
#define MATRIX_ROW_PINS { F6, F5,   F4,F1,  F0,D2, D3}


#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
// #define RGB_DI_PIN D3
// #define RGBLED_NUM 12
